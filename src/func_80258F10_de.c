#include "span_1000/code_80258760.h"
extern int func_8025CED0_de(void *arg0, int arg1, float arg2, int arg3);




int func_80258F10_de(void *arg0, int arg1) {
    float var_f0 = (1.0f);
    float temp_f1 = ((func_80258F30_S1 *)(arg0))->unk2BA8;
    if (!(var_f0 < temp_f1)) {
        var_f0 = temp_f1;
    }
    return func_8025CED0_de(&((func_80258F30_S1 *)(arg0))->unk2BC0, arg1, var_f0, 0x40);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E28_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8FE8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C41A8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C41E8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3EF8_4 = 1.0f;
#endif
