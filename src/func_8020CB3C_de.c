#include "common/types.h"
#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
#include "types.h"



extern void func_80271F68_de(Vec3 *out, void *arg1, void *arg2);




s32 func_8020CB3C_de(void *arg0, void *arg1) {
    Vec3 sp10;
    f32 temp_f2;
    f32 var_f20;
    void *items;
    s32 stride;
    s32 var_s0;
    s32 var_s1;

    var_s1 = -1;
    var_f20 = 0.0f;
    var_s0 = 0;
    if (((func_8020CB3C_S1 *)(arg0))->unk4 > 0) {
        do {
            items = ((func_8020CB3C_S1 *)(arg0))->unk0;
            stride = *(s32 *)items;
            func_80271F68_de(&sp10, arg1, (char *)items + (var_s0 * stride + 8));
            temp_f2 = (sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z);
            if ((var_s1 < 0) || (temp_f2 < var_f20)) {
                var_s1 = var_s0;
                var_f20 = temp_f2;
            }
            var_s0 += 1;
        } while (var_s0 < ((func_8020CB3C_S1 *)(arg0))->unk4);
    }
    return var_s1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3550_4 = 0.0666666701f;
const float unbake_rodata_800C3554_4 = 15.0f;
const float unbake_rodata_800C3558_4 = 1.0f;
const float unbake_rodata_800C355C_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8694_4 = 1.0f;
const float unbake_rodata_800C8698_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C359C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C35B4_4 = 2.14748365e+09f;
const float unbake_rodata_800C35B8_4 = 2.14748365e+09f;
const float unbake_rodata_800C35BC_4 = 2.14748365e+09f;
const float unbake_rodata_800C35C0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C35A4_4 = 1.0f;
const float unbake_rodata_800C35A8_4 = 15.0f;
#endif
