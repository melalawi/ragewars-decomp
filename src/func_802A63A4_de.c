#include "common/types.h"
#include "span_1000/code_802A6488.h"
#include "span_C76B0/data.h"
#include "types.h"



extern void func_80270910_de(f32 *, s32);
extern void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272828_de(f32 *arg0);
extern void func_802A25D0_de(void *arg0, void *arg1, f32 *arg2);








void func_802A63A4_de(void *arg0, void *arg1, void *arg2, s32 arg3) {
    f32 local[16];
    void *entry;
    f32 scale;

    entry = ((func_802A7394_S1 *)(arg1))->unk1C;
    if (entry == arg2 && ((func_802A7394_S1 *)(arg1))->unk24 > 0.0f) {
        func_80270910_de(local, arg3);
        scale = D_800C5EC0_de;
        if (((func_80204468_S3 *)(((func_802A68A0_S3 *)(entry))->unk118))->unk14 != 0) {
            scale = D_800C5EC4_de;
        }
        func_8027347C_de(local, scale, scale, scale);
        func_80272828_de(local);
        func_802A25D0_de(arg0, arg1, local);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5DF0_4 = 0.00999999978f;
const float unbake_rodata_800C5DF4_4 = 0.292571425f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB050_4 = 0.00999999978f;
const float unbake_rodata_800CB054_4 = 0.292571425f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6160_4 = 0.00999999978f;
const float unbake_rodata_800C6164_4 = 0.292571425f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C61A0_4 = 0.00999999978f;
const float unbake_rodata_800C61A4_4 = 0.292571425f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5EC0_4 = 0.00999999978f;
const float unbake_rodata_800C5EC4_4 = 0.292571425f;
#endif
