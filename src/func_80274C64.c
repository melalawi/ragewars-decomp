#include "basetypes.h"

extern f32 func_802BC380(f32);
extern char D_800C9A90;

typedef struct func_80274C64_S1 func_80274C64_S1;
struct func_80274C64_S1 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
    char pad28[0x2C - 0x28 - sizeof(f32)];
    f32 unk2C;
};

void func_80274C64(void *arg0)
{
    char *o = (char *)arg0;
    f32 magSq;
    f32 mag;
    f32 zOut;

    magSq = (((func_80274C64_S1 *)(o))->unk18 * ((func_80274C64_S1 *)(o))->unk18) +
            (((func_80274C64_S1 *)(o))->unk20 * ((func_80274C64_S1 *)(o))->unk20);
    zOut = 0.0f;
    if (magSq != 0.0f) {
        mag = func_802BC380(magSq);
        magSq = *(f32 *)&D_800C9A90 / mag;
        ((func_80274C64_S1 *)(o))->unk24 = ((func_80274C64_S1 *)(o))->unk18 * magSq;
        ((func_80274C64_S1 *)(o))->unk28 = ((func_80274C64_S1 *)(o))->unk1C * magSq;
        zOut = ((func_80274C64_S1 *)(o))->unk20 * magSq;
    } else {
        ((func_80274C64_S1 *)(o))->unk24 = 0.0f;
        ((func_80274C64_S1 *)(o))->unk28 = 0.0f;
    }
    ((func_80274C64_S1 *)(o))->unk2C = zOut;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C48D0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9A90_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C50_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C90_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C49A0_4 = 1.0f;
#endif
