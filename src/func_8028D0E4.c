#include "basetypes.h"

typedef struct ColorEntry {
    f32 value;
    u8 red;
    u8 green;
    u8 blue;
    u8 pad;
} ColorEntry;

extern f32 D_800CA3E0[];
extern f32 D_800CA3E8;
extern ColorEntry D_800D2934[];
extern s32 D_800E28D0;
extern u8 D_8011FAC0[];

extern void func_80293100(void *arg0, s8 *arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);

typedef struct func_8028D0E4_S1 func_8028D0E4_S1;
struct func_8028D0E4_S1 {
    char pad0[0x1B410];
    s32 unk1B410;
    char pad1B410[0x1B414 - 0x1B410 - sizeof(s32)];
    s32 unk1B414;
    char pad1B414[0x1B418 - 0x1B414 - sizeof(s32)];
    f32 unk1B418;
};

void func_8028D0E4(void *arg0) {
    s8 color[4];
    s32 state;
    ColorEntry *entry;
    f32 alpha;
    s32 converted;

    state = ((func_8028D0E4_S1 *)(arg0))->unk1B414;
    if (state == 0) {
        return;
    }
    if (state < 0) {
        return;
    }
    if (state >= 3) {
        return;
    }
    {
        entry = &D_800D2934[((func_8028D0E4_S1 *)(arg0))->unk1B410];
        if (entry->value != 0.0f) {
            color[0] = entry->red;
            color[1] = entry->green;
            color[2] = entry->blue;
            alpha = (((func_8028D0E4_S1 *)(arg0))->unk1B418 * D_800CA3E0[1]) /
                    entry->value;
            if (!(D_800CA3E8 <= alpha)) {
                converted = (s32)alpha;
            } else {
                converted = (s32)(alpha - D_800CA3E8);
                converted |= 0x80000000;
            }
            color[3] = converted;
            func_80293100(D_8011FAC0, color, 0, 0, D_800E28D0,
                          *((&D_800E28D0) + 1));
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5224_4 = 255.0f;
const float unbake_rodata_800C5228_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA3E4_4 = 255.0f;
const float unbake_rodata_800CA3E8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C55A4_4 = 255.0f;
const float unbake_rodata_800C55A8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C55E4_4 = 255.0f;
const float unbake_rodata_800C55E8_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C52F4_4 = 255.0f;
const float unbake_rodata_800C52F8_4 = 2.14748365e+09f;
#endif
