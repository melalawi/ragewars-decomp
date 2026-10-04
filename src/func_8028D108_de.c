#include "span_1000/code_8028CCB8.h"
#include "span_C76B0/data.h"
#include "types.h"



extern f32 D_800C52F0[];

extern ColorEntry D_800CD6E4_de[];
extern s32 D_800DE880_de;
extern u8 D_8011BA00[];

extern void func_8029311C_de(void *arg0, s8 *arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);




void func_8028D108_de(void *arg0) {
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
        entry = &D_800CD6E4_de[((func_8028D0E4_S1 *)(arg0))->unk1B410];
        if (entry->value != 0.0f) {
            color[0] = entry->red;
            color[1] = entry->green;
            color[2] = entry->blue;
            alpha = (((func_8028D0E4_S1 *)(arg0))->unk1B418 * D_800C52F0[1]) /
                    entry->value;
            if (!(D_800C52F8_de <= alpha)) {
                converted = (s32)alpha;
            } else {
                converted = (s32)(alpha - D_800C52F8_de);
                converted |= 0x80000000;
            }
            color[3] = converted;
            func_8029311C_de(D_8011BA00, color, 0, 0, D_800DE880_de,
                          *((&D_800DE880_de) + 1));
        }
    }
}
