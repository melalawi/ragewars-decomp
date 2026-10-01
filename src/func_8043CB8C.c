#include "basetypes.h"

typedef struct {
    s32 value;
    f32 timer;
    s32 max;
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
    char pad0[0x30];
    f32 alpha;
    f32 fade;
} Style;

extern Spinner D_800E5CA0;
extern f32 D_800E2274;
extern f32 D_800E2278;
extern f32 D_800E227C;
extern const f32 D_800E2280;
extern s32 D_800E28D0;
extern s32 D_800E5E70;

extern Font *func_80442F4C(void *, s32);
extern void func_802AB9E4(void);
extern void func_802A8DD4(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_804421FC(void *, Item *, void *, Style *);

/* Draws the D_800E5CA0 spinner: during the first part of its blink period it fills a two-pixel white bar below the item under the digit its value selects, placed from the item's x by the character width func_80442F4C reports scaled to the screen, with the style's alpha, through func_802AB9E4 and func_802A8DD4; then draws the item through func_804421FC. */
void func_8043CB8C(void *menu, Item *item, void *arg2, Style *style) {
    f32 width;
    f32 alpha;
    s32 x;
    unsigned int bits;

    if (D_800E5CA0.timer <= D_800E2274) {
        width = func_80442F4C(menu, 0)->width * (f32)D_800E28D0 * D_800E2278;
        x = (f32)item->x + (f32)D_800E5CA0.value * width;
        D_800E5E70 = -1;
        alpha = style->alpha * (style->fade * D_800E227C);
        func_802AB9E4();
        func_802A8DD4(x, item->y, (f32)x + width, item->y + 2, 0, 0, 0xFF, 0xFF, 0xFF,
                      (u8)(bits = !(D_800E2280 <= alpha) ? (s32)alpha : (bits = (s32)(alpha - D_800E2280)) | 0x80000000));
    }
    func_804421FC(menu, item, arg2, style);
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
