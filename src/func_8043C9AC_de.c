#include "common/types.h"
#include "span_1000/code_802AB720.h"
#include "span_166000/code_80426234.h"
#include "types.h"









extern Triple_func_802683E0_de D_800E1C50;

extern s32 D_800DE880_de;
extern s32 D_800E1E20;

extern func_802077F4_S2 *func_80442DDC_de(void *, s32);

extern void func_802A7DE4_de(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8044208C_de(void *, Item_func_8043C9AC_de *, void *, Style_func_8043C9AC_de *);

/* Draws the D_800E5CA0 spinner: during the first part of its blink period it fills a two-pixel white bar below the item under the digit its value selects, placed from the item's x by the character width func_80442DDC_de reports scaled to the screen, with the style's alpha, through func_802AA9F4_de and func_802A7DE4_de; then draws the item through func_8044208C_de. */
void func_8043C9AC_de(void *menu, Item_func_8043C9AC_de *item, void *arg2, Style_func_8043C9AC_de *style) {
    f32 width;
    f32 alpha;
    s32 x;
    unsigned int bits;

    if (D_800E1C50.y <= (6.0f)) {
        width = func_80442DDC_de(menu, 0)->unk4 * (f32)D_800DE880_de * (0.0035211266949772835f);
        x = (f32)item->x + (f32)D_800E1C50.x * width;
        D_800E1E20 = -1;
        alpha = style->alpha * (style->fade * D_800DE24C_de);
        func_802AA9F4_de();
        func_802A7DE4_de(x, item->y, (f32)x + width, item->y + 2, 0, 0, 0xFF, 0xFF, 0xFF,
                      (u8)(bits = !((2147483648.0f) <= alpha) ? (s32)alpha : (bits = (s32)(alpha - (2147483648.0f))) | 0x80000000));
    }
    func_8044208C_de(menu, item, arg2, style);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCEF4_4 = 6.0f;
const float unbake_rodata_800DCEF8_4 = 0.00352112669f;
const float unbake_rodata_800DCEFC_4 = 128.0f;
const float unbake_rodata_800DCF00_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2274_4 = 6.0f;
const float unbake_rodata_800E2278_4 = 0.00352112669f;
const float unbake_rodata_800E227C_4 = 128.0f;
const float unbake_rodata_800E2280_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE8C4_4 = 6.0f;
const float unbake_rodata_800EE8C8_4 = 0.00352112669f;
const float unbake_rodata_800EE8CC_4 = 128.0f;
const float unbake_rodata_800EE8D0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9A84_4 = 6.0f;
const float unbake_rodata_800E9A88_4 = 0.00352112669f;
const float unbake_rodata_800E9A8C_4 = 128.0f;
const float unbake_rodata_800E9A90_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE244_4 = 6.0f;
const float unbake_rodata_800DE248_4 = 0.00352112669f;
const float unbake_rodata_800DE24C_4 = 128.0f;
const float unbake_rodata_800DE250_4 = 2.14748365e+09f;
#endif
