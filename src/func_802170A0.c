#include "basetypes.h"

extern f32 D_800C72C8;
extern f32 D_800C72CC;
extern f32 D_800C72D0;
extern f32 D_800C72D4;
extern s32 D_800CE240[];
extern s32 D_800CE348[];
extern f32 func_80274B00(f32, f32);
extern void func_8024DBB0(void *, s32, s32, s32, s32, f32);

typedef struct func_802170A0_S1 func_802170A0_S1;
struct func_802170A0_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_802170A0(void *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *entry;

    if ((arg1[0] & arg2) != 0) {
        return;
    }

    arg1[0] |= arg2;
    entry = D_800CE240;
    if (entry[0] != 0) {
        do {
            if ((arg3 & entry[0]) != 0) {
                func_8024DBB0(arg0,
                              ((func_802170A0_S1 *)(arg0))->unk8,
                              ((func_802170A0_S1 *)(arg0))->unkC,
                              ((func_802170A0_S1 *)(arg0))->unk10,
                              entry[1],
                              func_80274B00(D_800C72C8, D_800C72CC));
            }
            entry += 2;
        } while (entry[0] != 0);
    }

    entry = D_800CE348;
    if (entry[0] != 0) {
        do {
            if ((arg4 & entry[0]) != 0) {
                func_8024DBB0(arg0,
                              ((func_802170A0_S1 *)(arg0))->unk8,
                              ((func_802170A0_S1 *)(arg0))->unkC,
                              ((func_802170A0_S1 *)(arg0))->unk10,
                              entry[1],
                              func_80274B00(D_800C72D0, D_800C72D4));
            }
            entry += 2;
        } while (entry[0] != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2108_4 = 450.0f;
const float unbake_rodata_800C210C_4 = 600.0f;
const float unbake_rodata_800C2110_4 = 450.0f;
const float unbake_rodata_800C2114_4 = 600.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72C8_4 = 450.0f;
const float unbake_rodata_800C72CC_4 = 600.0f;
const float unbake_rodata_800C72D0_4 = 450.0f;
const float unbake_rodata_800C72D4_4 = 600.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2478_4 = 450.0f;
const float unbake_rodata_800C247C_4 = 600.0f;
const float unbake_rodata_800C2480_4 = 450.0f;
const float unbake_rodata_800C2484_4 = 600.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24B8_4 = 450.0f;
const float unbake_rodata_800C24BC_4 = 600.0f;
const float unbake_rodata_800C24C0_4 = 450.0f;
const float unbake_rodata_800C24C4_4 = 600.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C21D8_4 = 450.0f;
const float unbake_rodata_800C21DC_4 = 600.0f;
const float unbake_rodata_800C21E0_4 = 450.0f;
const float unbake_rodata_800C21E4_4 = 600.0f;
#endif
