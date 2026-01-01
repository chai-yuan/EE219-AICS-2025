#include "libnn/rv_vector_ext.h"
#include "trap.h"
/* ================== main ================== */

int main() {
    int8_t a[8] = {1,2,3,4,5,6,7,8};
    int8_t b[8] = {1,1,1,1,1,1,1,1};
    int8_t c[16] = {0};

    setvi8(); // e8
    asm volatile("mv a0, %0" :: "r"(a));
    asm volatile("mv a1, %0" :: "r"(b));
    asm volatile("mv a2, %0" :: "r"(&c));

    vle32_v1();
    vle32_v2();
    vmul_vv();
    vmv_v_x();
    vredsum_vs();
    vse32_v();
    printf("a addr = %p\n", a);
    printf("b addr = %p\n", b);
    printf("c addr = %p\n", &c);
    for(int i = 0; i < 16; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }

    
    return 0;
}
