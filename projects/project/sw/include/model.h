// model.h
#ifndef __MODEL_H__
#define __MODEL_H__

#define ADDR_DATA           0x80800000
#define ADDR_SAVE           0x80f00000

#define INPUT_INT8_CONV1    6*14*14
#define WEIGHT_INT8_CONV1   4*6*3*3

#define SCALE_INT16_CONV1    2

#define WEIGHT_INT16_FC1    (2)*60*4*6*6
#define SCALE_INT32_FC1     4

#define WEIGHT_INT32_FC2    (4)*60*10
#define BIAS_INT32_FC2      (4)*10  

#define OUTPUT_INT16_CONV1  (2)*4*12*12
#define OUTPUT_INT16_POOL1  (2)*4*6*6
#define OUTPUT_INT32_FC1    (4)*60  
#define OUTPUT_INT32_FC2    (4)*10  
#define OUTPUT_INT32_SM     (4)*10  


#define ADDR_INPUT          ADDR_DATA

#define ADDR_WCONV1         0x80801000
#define ADDR_SCONV1         0x80802000

#define ADDR_WFC1           0x80803000
#define ADDR_SFC1           0x80808000

#define ADDR_WFC2           0x80809000
#define ADDR_BFC2           0x80810000

#define ADDR_SOFTMAX_LUT    0x80811000

#define ADDR_OUTCONV1       ADDR_SAVE
#define ADDR_OUTPOOL1       0x80f00500
#define ADDR_OUTFC1         0x80f01000
#define ADDR_OUTFC2         0x80f01500
#define ADDR_OUTSM2         0x80f02000

// ========== 网络结构参数 ==========
#define INPUT_C 6
#define INPUT_H 14
#define INPUT_W 14

#define KERNEL_NUM 4
#define KERNEL_SIZE 3
#define CONV_OUT_H (INPUT_H - KERNEL_SIZE + 1) // 12
#define CONV_OUT_W (INPUT_W - KERNEL_SIZE + 1) // 12

#define POOL_SIZE 2
#define POOL_OUT_H (CONV_OUT_H / POOL_SIZE) // 6
#define POOL_OUT_W (CONV_OUT_W / POOL_SIZE) // 6

#define FC1_IN_SIZE (KERNEL_NUM * POOL_OUT_H * POOL_OUT_W) // 144
#define FC1_OUT_SIZE 60

#define FC2_IN_SIZE FC1_OUT_SIZE
#define FC2_OUT_SIZE 10

// ========== 量化/硬件参数 ==========
#define CONV1_SC 16
#define FC1_SC 4
#define LUT_SIZE 256
#define SOFTMAX_Q 16

#endif 
