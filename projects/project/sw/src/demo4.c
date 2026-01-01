#include "rvv.h"
/* ================== main ================== */

int main() {
    int16_t a[8] = {1,2,3,4,5,6,7,8};
    int16_t b[2][8] = {{1,1,1,1,1,1,1,1},
                       {2,2,2,2,2,2,2,2}};
    int16_t receive[32] = {0};
    int16_t c[2] = {0};

    setvi16(); // e16

    asm volatile("mv a1, %0" :: "r"(a));
    asm volatile("mv a2, %0" :: "r"(&receive));

    vle32_v2();
    for(int i=0;i<2;i++){
        asm volatile("mv a0, %0" :: "r"(b[i]));
        vle32_v1();
        vmul_vv();
        vmv_v_x();
        vredsum_vs();
        vse32_v();
        c[i]=receive[0];
    }
   
    printf("a addr = %p\n", a);
    printf("b addr = %p\n", b);
    printf("c addr = %p\n", &c);
    for(int i = 0; i < 2; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }

    
    return 0;
}
