#include "span_1000/code_80228934.h"
#include "span_1000/types.h"
/* FAKEMATCH: retains inherited volatile storage qualifiers to preserve compiler load/store order; semantic volatility has not been established. */
#include "types.h"
extern void func_8022B60C_de(void *arg0, f32 arg1, void *arg2);
extern void func_80216488_de(void *arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40_de(void *arg0, void *arg1, void *arg2);
extern f32 D_800C2C40_de[2];

extern func_8020CA10_G1 D_800C2C48_de;

extern func_8020CA10_G1 D_800C2C4C_de;

extern func_8020CA10_G1 D_800CD738;










void func_802292B8_de(void *arg0) {
    volatile Slot sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f20;
    f32 zero;
    s32 var_s2;
    s32 var_s3;
    void *temp_a0;
    void *temp_s0;

    zero = 0.0f;
    temp_f21 = D_800C2C40_de[1];
    var_s3 = 0;
    var_s2 = 0x1248;
    do {
        temp_s0 = (char *)arg0 + var_s2;
        temp_f2 = ((ObjectLinks18_3 *)(temp_s0))->unk_4;
        if (temp_f2 > zero) {
            temp_f1 = D_800CD738.unk0;
            var_f20 = *(f32 *)temp_s0 * temp_f1;
            temp_f1 = temp_f2 - temp_f1;
            var_f20 *= temp_f21;
            ((ObjectLinks18_3 *)(temp_s0))->unk_4 = temp_f1;
            temp_f1 = ((ObjectLinks18_3 *)(temp_s0))->unk_10 + (f32)(s32)var_f20;
            ((ObjectLinks18_3 *)(temp_s0))->unk_10 = temp_f1;
            if (((ObjectLinks18_3 *)(temp_s0))->unk_4 <= zero) {
                temp_f0 = ((ObjectLinks18_3 *)(temp_s0))->unk_C * temp_f21;
                if (temp_f1 < temp_f0) {
                    var_f20 += temp_f0 - temp_f1;
                }
            }
            temp_a0 = ((ObjectLinks18_3 *)(temp_s0))->unk_8;
            if (temp_a0 != 0 && *(u8 *)temp_a0 == 1 &&
                (((IntegerState1230 *)(temp_a0))->unk_100 & 0x300000) &&
                (((IntegerState1230 *)(temp_a0))->unk_122C & 0x200)) {
                var_f20 *= D_800C2C48_de.unk0;
            }
            if (((ObjectLinks18_3 *)(temp_s0))->unk_14 != 0) {
                func_8022B60C_de(arg0, 0.0933333337f, ((ObjectLinks18_3 *)(temp_s0))->unk_8);
                if ((f32)((ObjectState5E8 *)(arg0))->unk_5E4 <= var_f20) {
                    var_f20 = D_800C2C4C_de.unk0;
                }
            }
            func_80216488_de((void *)&sp18, (s32)((ObjectLinks18_3 *)(temp_s0))->unk_8,
                          (s32)var_f20, 25.599998f, 0x100080, 0);
            func_80219A40_de(arg0, &((ObjectState5E8 *)(arg0))->unk_170, (void *)&sp18);
        }
        var_s3++;
        var_s2 += 0x18;
    } while (var_s3 < 5);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2B74_4 = 256.0f;
const float unbake_rodata_800C2B78_4 = 11.0f;
const float unbake_rodata_800C2B7C_4 = 255744.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7D34_4 = 256.0f;
const float unbake_rodata_800C7D38_4 = 11.0f;
const float unbake_rodata_800C7D3C_4 = 255744.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2EE8_4 = 256.0f;
const float unbake_rodata_800C2EEC_4 = 11.0f;
const float unbake_rodata_800C2EF0_4 = 255744.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2F28_4 = 256.0f;
const float unbake_rodata_800C2F2C_4 = 11.0f;
const float unbake_rodata_800C2F30_4 = 255744.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2C44_4 = 256.0f;
const float unbake_rodata_800C2C48_4 = 11.0f;
const float unbake_rodata_800C2C4C_4 = 255744.0f;
#endif
