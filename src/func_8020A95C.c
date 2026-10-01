#include "basetypes.h"

extern f32 D_800C6E20;

extern f32 func_802745D4(f32 arg0);

typedef struct func_8020A95C_S1 func_8020A95C_S1;
typedef struct func_8020A95C_S2 func_8020A95C_S2;
struct func_8020A95C_S1 {
    char pad0[0x240];
    s32 unk240;
    char pad240[0x2E4 - 0x240 - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
};
struct func_8020A95C_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x18 - 0xC - sizeof(s32)];
    s32 unk18;
};

void func_8020A95C(void *arg0, void *arg1) {
    f32 k = D_800C6E20;
    u8 *o = (u8 *) arg0;
    u8 *i = (u8 *) arg1;

    ((func_8020A95C_S1 *)(o))->unk2E4 = ((func_8020A95C_S2 *)(i))->unk0;
    ((func_8020A95C_S1 *)(o))->unk2E4 = (s32) ((f32) ((func_8020A95C_S1 *)(o))->unk2E4 + (func_802745D4(k) * (f32) ((func_8020A95C_S2 *)(i))->unk4));
    ((func_8020A95C_S1 *)(o))->unk2E8 = ((func_8020A95C_S2 *)(i))->unk8;
    ((func_8020A95C_S1 *)(o))->unk2E8 = (s32) ((f32) ((func_8020A95C_S1 *)(o))->unk2E8 + (func_802745D4(k) * (f32) ((func_8020A95C_S2 *)(i))->unkC));
    if (((func_8020A95C_S2 *)(i))->unk18 == 0x64) {
        ((func_8020A95C_S1 *)(o))->unk240 = 1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1C60_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E20_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1FD0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2010_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D30_4 = 1.0f;
#endif
