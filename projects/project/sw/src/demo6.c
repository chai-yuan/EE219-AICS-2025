#include "rvv.h"
#include "rv.h"
int main() {
     int16_t b[2][8] = {{1,1,1,1,1,1,1,1},
                       {2,2,2,2,2,2,2,2}};
     int16_t a[3][8] = {{1,2,3,4,5,6,7,8},
                       {2,4,6,8,10,12,14,16},
                       {3,6,9,12,15,18,21,24}};
   
    int16_t receive[32] = {0};
    int16_t c[3][2] = {0};

    setvi16(); // e16

    for(int j=0;j<3;j++){
        custom_vle32_v1(&a[j]);
        for(int i=0;i<2;i++){
            custom_vle32_v2(&b[i]);
            vmul_vv();
            vmv_v_x();
            vredsum_vs();
            asm volatile("mv x7, %0" :: "r"(&receive));
            vse32_v();
            c[j][i]=receive[0];
            printf("c[%d][%d] = %d\n", j, i, c[j][i]);

        }
    }
    
    return 0;
}