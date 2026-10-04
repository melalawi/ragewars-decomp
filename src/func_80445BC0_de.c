#include "common/types.h"
#include "span_1000/code_802AB720.h"
#include "span_16E000/code_80445CE8.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Draws a menu spinner: during the first half of its blink period (the timer of its D_800E63C0 entry up to the float after D_800E2810) it fills a two-pixel white bar under the digit its value selects, placed from the item's x at 0x14 by the character width func_80442DDC_de reports scaled to the screen, with the style's alpha at 0x30 and 0x34, through func_802AA9F4_de and func_802A7DE4_de; then draws the item through func_8044208C_de. */








extern char D_80140F80[];
extern Spinner D_800E20A0[];


extern s32 D_800DE880_de;
extern s32 D_800E1E20;

extern s32 func_8022A5A0_de(char *, s32);
extern func_802077F4_S2 *func_80442DDC_de(void *, s32);

extern void func_802A7DE4_de(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8044208C_de(void *, Item_func_8043C9AC_de *, void *, Style_func_80445BC0_de *);

void func_80445BC0_de(void *menu, Item_func_8043C9AC_de *item, void *arg2, Style_func_80445BC0_de *style) {
    s32 i;
    f32 width;
    f32 alpha;
    s32 x;
    unsigned int bits;

    i = func_8022A5A0_de(D_80140F80, style->id);
    if (D_800E20A0[i].timer <= *(&D_800DE7C0 + 1)) {
        width = func_80442DDC_de(menu, 0)->unk4 * (f32)D_800DE880_de * D_800DE7C8_de;
        x = (f32)item->x + (f32)D_800E20A0[i].value * width;
        D_800E1E20 = -1;
        alpha = style->alpha * (style->fade * (64.0f));
        func_802AA9F4_de();
        func_802A7DE4_de(x, item->y - 2, (f32)x + width, item->y, 0, 0, 0xFF, 0xFF, 0xFF,
                      (u8)(bits = !((2147483648.0f) <= alpha) ? (s32)alpha : (bits = (s32)(alpha - (2147483648.0f))) | 0x80000000));
    }
    func_8044208C_de(menu, item, arg2, style);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD474_4 = 6.0f;
const float unbake_rodata_800DD478_4 = 0.00352112669f;
const float unbake_rodata_800DD47C_4 = 64.0f;
const float unbake_rodata_800DD480_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2814_4 = 6.0f;
const float unbake_rodata_800E2818_4 = 0.00352112669f;
const float unbake_rodata_800E281C_4 = 64.0f;
const float unbake_rodata_800E2820_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EEE34_4 = 6.0f;
const float unbake_rodata_800EEE38_4 = 0.00352112669f;
const float unbake_rodata_800EEE3C_4 = 64.0f;
const float unbake_rodata_800EEE40_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9FF4_4 = 6.0f;
const float unbake_rodata_800E9FF8_4 = 0.00352112669f;
const float unbake_rodata_800E9FFC_4 = 64.0f;
const float unbake_rodata_800EA000_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE7C4_4 = 6.0f;
const float unbake_rodata_800DE7C8_4 = 0.00352112669f;
const float unbake_rodata_800DE7CC_4 = 64.0f;
const float unbake_rodata_800DE7D0_4 = 2.14748365e+09f;
#endif
