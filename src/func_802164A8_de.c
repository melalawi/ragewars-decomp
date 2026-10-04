#include "span_1000/code_80214DD4.h"
#include "types.h"









extern f32 D_800CD738;
extern void func_80217388_de(void);
extern void func_80213CF8_de(Source_func_802164A8_de *, Dest_func_802164A8_de *);
extern void func_80213ED4_de(Source_func_802164A8_de *, Dest_func_802164A8_de *);

void func_802164A8_de(Source_func_802164A8_de *src, Dest_func_802164A8_de *dst) {
    if ((dst->aux != 0) && (dst->aux->unkC == -1)) {
        func_80217388_de();
    }
    if (dst->timer != 0) {
        dst->timer--;
        D_800CD738 = 0.0f;
        return;
    }
    if ((src->active != 0) && (src->kind != 0)) {
        if (*src->kind == 2) {
            dst->old_position = src->position;
            dst->height = src->height;
        }
        dst->position = src->position;
        dst->value += D_800CD738;
        if (src->flags & 0x10000) {
            func_80213CF8_de(src, dst);
        }
        if (dst->callback != 0) {
            dst->callback(src, dst);
        }
        func_80213ED4_de(src, dst);
        if (*src->kind != 2) {
            dst->old_position = src->position;
            dst->height = src->height;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C44F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C44F8_4 = 2.14748365e+09f;
const float unbake_rodata_800C44FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4500_4 = 2.14748365e+09f;
const float unbake_rodata_800C4504_4 = 2.14748365e+09f;
const float unbake_rodata_800C4508_4 = 2.14748365e+09f;
const float unbake_rodata_800C450C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4510_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C96B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C96B8_4 = 2.14748365e+09f;
const float unbake_rodata_800C96BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C96C0_4 = 2.14748365e+09f;
const float unbake_rodata_800C96C4_4 = 2.14748365e+09f;
const float unbake_rodata_800C96C8_4 = 2.14748365e+09f;
const float unbake_rodata_800C96CC_4 = 2.14748365e+09f;
const float unbake_rodata_800C96D0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C446C_4 = 9.58767268e-05f;
const float unbake_rodata_800C4470_4 = 0.0666666701f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4458_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4478_4 = 1.0f;
const float unbake_rodata_800C447C_4 = 2.5f;
const float unbake_rodata_800C4480_4 = 0.349999994f;
#endif
