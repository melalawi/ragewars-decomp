#include "span_1000/code_80214DD4.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 D_800C21EC_de;

extern f32 func_80274A90_de(f32, f32);
extern void func_8024DBC0_de(void *, s32, s32, s32, s32, f32);




void func_80217594_de(void *arg0, s32 unused1, s32 arg2, s32 *entry) {
    if (entry[0] != 0) {
        do {
            if ((arg2 & entry[0]) != 0) {
                func_8024DBC0_de(arg0,
                              ((func_8020A028_S4 *)(arg0))->unk8,
                              ((func_8020A028_S4 *)(arg0))->unkC,
                              ((func_8020A028_S4 *)(arg0))->unk10,
                              entry[1],
                              func_80274A90_de(D_800C21EC_de, D_800C21F0_de));
            }
            entry += 2;
        } while (entry[0] != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C211C_4 = 450.0f;
const float unbake_rodata_800C2120_4 = 600.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72DC_4 = 450.0f;
const float unbake_rodata_800C72E0_4 = 600.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C248C_4 = 450.0f;
const float unbake_rodata_800C2490_4 = 600.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24CC_4 = 450.0f;
const float unbake_rodata_800C24D0_4 = 600.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C21EC_4 = 450.0f;
const float unbake_rodata_800C21F0_4 = 600.0f;
#endif
