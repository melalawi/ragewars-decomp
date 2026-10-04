#include "span_1000/code_80210EFC.h"
#include "span_C76B0/data.h"
#include "types.h"









s32 func_80210EFC_de(f32 arg0) {
    f32 var_f0;

    arg0 += D_800C1FD8_de;
    if (D_800C1FDC_de <= arg0) {
        do {
            arg0 -= D_800C1FDC_de;
        } while (D_800C1FDC_de <= arg0);
    }
    var_f0 = 0.0f;
    if (arg0 < var_f0) {
        do {
            arg0 += D_800C1FE0_de;
        } while (arg0 < var_f0);
    }
    if (D_800C1FE4_de < arg0) {
        arg0 = D_800C1FE4_de;
    }
    if (arg0 < D_800C1FE8_de) {
        arg0 = D_800C1FE8_de;
    }
    arg0 *= D_800C1FEC_de;
    arg0 *= D_800C1FF0_de;
    var_f0 = 0.0f;
    if (arg0 < var_f0) {
        arg0 = var_f0;
    }
    if (D_800C1FF0_de <= arg0) {
        arg0 = *(&D_800C1FF0_de + 1);
    }
    return (s32)arg0;
}
