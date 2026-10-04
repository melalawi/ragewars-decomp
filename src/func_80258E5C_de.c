#include "span_1000/code_80258760.h"
#include "span_C76B0/data.h"
/* Clamps a level to between zero and D_800C8FE0, scales it by D_800C8FE4 and stores it as an integer
   at 0x2B9C of the object. */





void func_80258E5C_de(Obj_func_80258E5C_de *obj, float value) {
    float v;
    float max = D_800C3EF0_de;
    if (value > max || !(value < 0.0f)) {
        v = value;
        if (v > max) {
            v = max;
        }
    } else {
        v = 0.0f;
    }
    obj->level = v * D_800C3EF4_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E20_4 = 1.0f;
const float unbake_rodata_800C3E24_4 = 40.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8FE0_4 = 1.0f;
const float unbake_rodata_800C8FE4_4 = 40.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C41A0_4 = 1.0f;
const float unbake_rodata_800C41A4_4 = 40.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C41E0_4 = 1.0f;
const float unbake_rodata_800C41E4_4 = 40.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3EF0_4 = 1.0f;
const float unbake_rodata_800C3EF4_4 = 40.0f;
#endif
