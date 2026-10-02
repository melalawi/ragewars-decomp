/* NON_MATCHING: PAL asm rows are retained after match submit refused shared C/.rodata ownership; this draft is exact in all five explicit VERSION trials. */
#include "basetypes.h"
#include "shared/captionscreen.h"

/* Draws and advances the current caption through fade-in, hold and fade-out states; the volatile alpha restore and screen-state read are scheduler levers that preserve the reference store/load order. */

extern struct CaptionScreen *D_800E5830;
extern s32 D_800D15E0;
extern f32 D_800D15F0;
extern f32 D_800E1F6C;
extern void func_804399D0(void *);
extern void func_804397F0_auto(void *);
extern void func_804387F4();

void func_80438A08(void) {
    s32 row;
    s32 state;
    f32 *alpha;

    row = D_800E5830->row;
    if (D_800E5830->rows[row].id < 0) {
        return;
    }
    if (D_800E5830->visible == 0) {
        return;
    }
    alpha = &D_800D15F0;
    D_800D15E0 = 1;
    *alpha = D_800E5830->rows[row].level;
#if defined(VERSION_DE)
    func_804397F0_auto(D_800E5830->text);
#else
    func_804399D0(D_800E5830->text);
#endif
    /* FAKEMATCH: volatile alpha store preserves the reference store/load order. */
    *(volatile f32 *)alpha = D_800E1F6C;
    /* FAKEMATCH: volatile state read preserves the reference scheduling after the alpha store. */
    state = ((volatile struct CaptionScreen *)D_800E5830)->rows[row].state;
    D_800D15E0 = 0;
    switch (state) {
    case 0:
        D_800E5830->rows[row].level += 2;
        if (D_800E5830->rows[row].level >= 151) {
            D_800E5830->rows[row].level = 150;
            D_800E5830->rows[row].state = 2;
            if (row <= 0 && D_800E5830->rows[row + 1].id > 0) {
                D_800E5830->rows[row].timer = 150;
            } else {
                D_800E5830->rows[row].timer = 0x38F;
            }
        }
        break;
    case 2:
        if (D_800E5830->rows[row].timer != 0x38F) {
            if (--D_800E5830->rows[row].timer <= 0) {
                D_800E5830->rows[row].state = 1;
            }
        }
        break;
    case 1:
        D_800E5830->rows[row].level -= 2;
        if (D_800E5830->rows[row].level < 10) {
            D_800E5830->rows[row].level = 10;
            D_800E5830->row++;
            func_804387F4();
        }
        break;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCBEC_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1F6C_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE5BC_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E977C_4 = 255.0f;
#endif
