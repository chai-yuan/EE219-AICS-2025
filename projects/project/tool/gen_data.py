# gen_data.py
import os
import math
import argparse
import torch 
import torchvision
import torchvision.transforms as transforms
from PIL import Image
import torch.nn as nn
import torch.nn.functional as F
import numpy as np

CIFAR10_PATH    = "/home/ubuntu/data"
MODEL_PATH      = "model_lab2.pth"
BIN_SAVE_PATH   = "../data/bin/"
# NPY_SAVE_PATH   = "../data/npy/"

ADDR_BASE           = 0x80800000
ADDR_INPUT          = 0x80800000
ADDR_WCONV1         = 0x80801000
ADDR_SCONV1         = 0x80802000
ADDR_WFC1           = 0x80803000
ADDR_SFC1           = 0x80808000
ADDR_WFC2           = 0x80809000
ADDR_BFC2           = 0x80810000
ADDR_SOFTMAX_LUT    = 0x80811000
# ------------------------------------------------

def str2bool(v):
    if isinstance(v, bool):
        return v
    if v.lower() in ('yes', 'true', 't', 'y', '1'):
        return True
    elif v.lower() in ('no', 'false', 'f', 'n', '0'):
        return False
    else:
        raise argparse.ArgumentTypeError('Boolean value expected.')

CONV_CHANNEL = 6
CONV_IMG_SIZE = 14

KERNEL_SIZE = 3
KERNEL_NUM = 4

CONV_IMG_OUT_SIZE = CONV_IMG_SIZE - KERNEL_SIZE + 1

POOL_OUTPUT_SIZE = int(CONV_IMG_OUT_SIZE / 2)

CONV1_SC = 16

FC1_IN = KERNEL_NUM * POOL_OUTPUT_SIZE * POOL_OUTPUT_SIZE
FC1_OUT = 60
FC1_SC = 4

FC2_IN = FC1_OUT
FC2_OUT = 10


def write_at(mem: bytearray, addr: int, data_bytes: bytes):
    """Write data_bytes into mem beginning at physical addr."""
    offset = addr - ADDR_BASE
    if offset < 0:
        raise ValueError("Address < ADDR_BASE!")

    if len(mem) < offset:
        mem.extend(b"\x00" * (offset - len(mem)))

    mem[offset:offset+len(data_bytes)] = data_bytes

def conv2d_valid(img, kernel):
    C_in, H, W = img.shape
    C_out, _, K, _ = kernel.shape
    HO = H - K + 1
    WO = W - K + 1
    out = np.zeros((C_out, HO, WO), dtype=np.int32)

    for oc in range(C_out):
        for ic in range(C_in):
            for i in range(HO):
                for j in range(WO):
                    region = img[ic, i:i+K, j:j+K]
                    out[oc, i, j] += np.sum(region * kernel[oc, ic])
    return out

def maxpool2x2(x):
    C, H, W = x.shape
    HO = H // 2
    WO = W // 2
    out = np.zeros((C, HO, WO), dtype=np.int32)
    for c in range(C):
        for i in range(HO):
            for j in range(WO):
                out[c, i, j] = np.max(x[c, i*2:i*2+2, j*2:j*2+2])
    return out

def fully_connected1(x_flat, w_fc, fc_b):
    out = np.dot(w_fc.astype(np.int32), x_flat.astype(np.int32))
    out = np.maximum(out, 0)
    return out

def fully_connected2(x_flat, w_fc, fc_b):
    return np.dot(w_fc, x_flat) + fc_b

def softmax_float(x):
    e = np.exp(x - np.max(x))
    return e / np.sum(e)

def softmax_hw_style(x, lut):
    x_max = x.max()
    diff = x - x_max

    diff_sc = diff // 512
    diff_sc = np.clip(diff_sc, -8, 0)

    neg = -diff_sc
    idx = (neg * 255) // 8

    exp_i = lut[idx]
    sum_e = exp_i.sum()
    if sum_e == 0:
        sum_e = 1

    out = (exp_i.astype(np.int64) * (1 << 16)) // sum_e
    return out.astype(np.int32)



def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--input_nhwc",       type=str2bool, default=False)
    parser.add_argument("--conv_weight_nhwc", type=str2bool, default=False)
    parser.add_argument("--fc_weight_trans",  type=str2bool, default=False)
    args = parser.parse_args()

    os.makedirs(BIN_SAVE_PATH, exist_ok=True)
    bin_path = os.path.join(BIN_SAVE_PATH, "data.bin")

    input_img = np.random.randint(
        low=-4, high=8,
        size=(CONV_CHANNEL, CONV_IMG_SIZE, CONV_IMG_SIZE),
        dtype=np.int8
    )

    kernel = np.random.randint(
        low=-2, high=4,
        size=(KERNEL_NUM, CONV_CHANNEL, KERNEL_SIZE, KERNEL_SIZE),
        dtype=np.int8
    )

    fc1_w = np.random.randint(
        low=-2, high=4,
        size=(FC1_OUT, FC1_IN),
        dtype=np.int16
    )

    fc2_w = np.random.randint(
        low=-2, high=4,
        size=(FC2_OUT, FC2_IN),
        dtype=np.int32
    )

    fc2_b = np.random.randint(
        low=-8, high=16,
        size=(FC2_OUT,),
        dtype=np.int32
    )

    # ========== gen exp lut ==========
    scale = (1 << 16)
    t = np.linspace(0.0, 8.0, 256)
    exp_f = np.exp(-t)
    exp_lut = np.round(exp_f * scale).astype(np.int32)
    # =================================

    mem = bytearray()

    img = input_img
    if args.input_nhwc:
        img = img.transpose(1, 2, 0)

    write_at(mem, ADDR_INPUT, img.tobytes())
    print(f"[WRITE] Input -> 0x{ADDR_INPUT:X}")

    ker = kernel
    if args.conv_weight_nhwc:
        ker = ker.transpose(0, 2, 3, 1)

    write_at(mem, ADDR_WCONV1, ker.tobytes())
    print(f"[WRITE] conv1 weight -> 0x{ADDR_WCONV1:X}")

    conv1_sc_byte = np.array([CONV1_SC], dtype=np.int16)
    write_at(mem, ADDR_SCONV1, conv1_sc_byte.tobytes())
    print(f"[WRITE] conv1 scale -> 0x{ADDR_SCONV1:X}")

    w_fc1 = fc1_w
    if args.fc_weight_trans:
        w_fc1 = w_fc1.transpose(1, 0)

    write_at(mem, ADDR_WFC1, w_fc1.tobytes())
    print(f"[WRITE] fc1 weight -> 0x{ADDR_WFC1:X}")

    fc1_sc_byte = np.array([FC1_SC], dtype=np.int32)
    write_at(mem, ADDR_SFC1, fc1_sc_byte.tobytes())
    print(f"[WRITE] fc1 scale -> 0x{ADDR_SFC1:X}")

    w_fc2 = fc2_w
    if args.fc_weight_trans:
        w_fc2 = w_fc2.transpose(1, 0)

    write_at(mem, ADDR_WFC2, w_fc2.tobytes())
    print(f"[WRITE] fc2 weight -> 0x{ADDR_WFC2:X}")

    write_at(mem, ADDR_BFC2, fc2_b.tobytes())
    print(f"[WRITE] fc2 bias -> 0x{ADDR_BFC2:X}")

    write_at(mem, ADDR_SOFTMAX_LUT, exp_lut.tobytes())
    print(f"[WRITE] exp_lut -> 0x{ADDR_SOFTMAX_LUT:X}")

    with open(bin_path, "wb") as f:
        f.write(mem)

    print("Random test data has been written to", bin_path)
    print("img feature shape:", input_img.shape)
    print("kernel shape :", kernel.shape)
    print("FC1 weight shape  :", fc1_w.shape)
    print("FC2 weight shape  :", fc2_w.shape)

    conv_raw = conv2d_valid(input_img, kernel)
    conv_q = (conv_raw // CONV1_SC).clip(0, 32768).astype(np.int16)

    pool_q = maxpool2x2(conv_q)
    flat = pool_q.reshape(-1).astype(np.int16)

    fc1_raw = (fc1_w.astype(np.int32) @ flat.astype(np.int32))
    fc1_raw = np.maximum(fc1_raw, 0)   # ReLU
    fc1_raw = (fc1_raw // FC1_SC).clip(0, 32768).astype(np.int32)

    fc2_raw = (fc2_w.astype(np.int32) @ fc1_raw.astype(np.int32)) + fc2_b.astype(np.int32)

    print("\n===== GOLDEN RESULT (INT32) =====")
    print("\n===== FC2 RESULT ================")
    print(fc2_raw)
    print("\n===== SOFTMAX RESULT ============")
    py_softmax = softmax_float(fc2_raw.astype(np.float64))
    print(py_softmax)
    print("\n===== SOFTMAX RESULT ============")
    sm_hw = softmax_hw_style(fc2_raw, exp_lut)
    print(sm_hw)

    print("=================================\n")

    # np.save(os.path.join(NPY_SAVE_PATH, "golden.npy"), fc2_raw)

if __name__=='__main__':
    main()
    print('Data has all been successfully saved.')