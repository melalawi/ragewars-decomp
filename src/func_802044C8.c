#include "basetypes.h"

extern s32 D_8011FE88;
extern s32 D_800CD4C0;
extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);

typedef struct func_802044C8_S1 func_802044C8_S1;
struct func_802044C8_S1 {
    char pad0[0xE4];
    u16 unkE4;
    char padE4[0x100 - 0xE4 - sizeof(u16)];
    s32 unk100;
};

/** Update actor state and clear flags for the relevant actor classes. */
void func_802044C8(void *actor, void *state) {
    s32 flags;

    if (func_80285F28(&D_8011FE88, actor) == 1) {
        func_80214178(actor, state, 1);
        switch (((func_802044C8_S1 *)(actor))->unkE4) {
        case 0x64C:
            flags = ((func_802044C8_S1 *)(actor))->unk100 & ~0x2000;
            ((func_802044C8_S1 *)(actor))->unk100 = flags & ~0x100;
            break;
        case 0x64B:
        case 0x64E:
            ((func_802044C8_S1 *)(actor))->unk100 &= 0xF7FFFFFF;
            break;
        }
    } else {
        D_800CD4C0 = 1;
        func_80214178(actor, state, 0);
        D_800CD4C0 = 0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1C84_4 = 307.199982f;
const float unbake_rodata_800C1C88_4 = 307.199982f;
const float unbake_rodata_800C1C8C_4 = 61.4399986f;
const float unbake_rodata_800C1C90_4 = (-1.0f);
const float unbake_rodata_800C1C94_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E3C_4 = (-1.0f);
const float unbake_rodata_800C6E40_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F14_4 = 0.899999976f;
const float unbake_rodata_800C1F18_4 = 0.699999988f;
const float unbake_rodata_800C1F1C_4 = (-90.0f);
const float unbake_rodata_800C1F20_4 = 90.0f;
const float unbake_rodata_800C1F24_4 = 57.2957764f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F54_4 = 0.899999976f;
const float unbake_rodata_800C1F58_4 = 0.699999988f;
const float unbake_rodata_800C1F5C_4 = (-90.0f);
const float unbake_rodata_800C1F60_4 = 90.0f;
const float unbake_rodata_800C1F64_4 = 57.2957764f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1C74_4 = 0.899999976f;
const float unbake_rodata_800C1C78_4 = 0.699999988f;
const float unbake_rodata_800C1C7C_4 = (-90.0f);
const float unbake_rodata_800C1C80_4 = 90.0f;
const float unbake_rodata_800C1C84_4 = 57.2957764f;
#endif
