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

#endif 
