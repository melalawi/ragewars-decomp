#include "basetypes.h"

/* Draws a menu spinner: during the first half of its blink period (the timer of its D_800E63C0 entry up to the float after D_800E2810) it fills a two-pixel white bar under the digit its value selects, placed from the item's x at 0x14 by the character width func_80442F4C reports scaled to the screen, with the style's alpha at 0x30 and 0x34, through func_802AB9E4 and func_802A8DD4; then draws the item through func_804421FC. */
typedef struct {
    s32 value;
    f32 timer;
    s32 max;
    char padC[0xC];
} Spinner;

typedef struct {
    char pad0[4];
    f32 width;
} Font;

typedef struct {
    char pad0[0x14];
    s32 x;
    char pad18[8];
    s32 y;
} Item;

typedef struct {
    char pad0[0x1C];
    s32 id;
    char pad20[0x10];
    f32 alpha;
    f32 fade;
} Style;

extern char D_80145040[];
extern Spinner D_800E63C0[];
extern f32 D_800E2810;
extern f32 D_800E2818;
extern f32 D_800E281C;
extern const f32 D_800E2820;
extern s32 D_800E28D0;
extern s32 D_800E5E70;

extern s32 func_8022A590(char *, s32);
extern Font *func_80442F4C(void *, s32);
extern void func_802AB9E4(void);
extern void func_802A8DD4(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_804421FC(void *, Item *, void *, Style *);

void func_80446810(void *menu, Item *item, void *arg2, Style *style) {
    s32 i;
    f32 width;
    f32 alpha;
    s32 x;
    unsigned int bits;

    i = func_8022A590(D_80145040, style->id);
    if (D_800E63C0[i].timer <= *(&D_800E2810 + 1)) {
        width = func_80442F4C(menu, 0)->width * (f32)D_800E28D0 * D_800E2818;
        x = (f32)item->x + (f32)D_800E63C0[i].value * width;
        D_800E5E70 = -1;
        alpha = style->alpha * (style->fade * D_800E281C);
        func_802AB9E4();
        func_802A8DD4(x, item->y - 2, (f32)x + width, item->y, 0, 0, 0xFF, 0xFF, 0xFF,
                      (u8)(bits = !(D_800E2820 <= alpha) ? (s32)alpha : (bits = (s32)(alpha - D_800E2820)) | 0x80000000));
    }
    func_804421FC(menu, item, arg2, style);
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
