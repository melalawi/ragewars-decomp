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

void func_8028D0E4(void *arg0) {
    s8 color[4];
    s32 state;
    ColorEntry *entry;
    f32 alpha;
    s32 converted;

    state = *(s32 *)((char *)arg0 + 0x1B414);
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
        entry = &D_800D2934[*(s32 *)((char *)arg0 + 0x1B410)];
        if (entry->value != 0.0f) {
            color[0] = entry->red;
            color[1] = entry->green;
            color[2] = entry->blue;
            alpha = (*(f32 *)((char *)arg0 + 0x1B418) * D_800CA3E0[1]) /
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
