#include "span_16E000/code_80445CE8.h"
#include "types.h"

/* Steps a menu spinner for the entry func_8022A5A0_de finds in D_80145040: advances its repeat timer by D_800D2988, wrapping at D_800E2810, and while the menu is active (state 1) decrements its value above zero when func_80264388_de reports the decrease input, or else increments it below its maximum when func_802643A0_de reports the increase input, restarting the timer on a change. Returns zero. */




extern char D_80140F80[];
extern Spinner D_800E20A0[];
extern f32 D_800CD738;

extern s32 func_8022A5A0_de(char *, s32);
extern s32 func_80264388_de(s32);
extern s32 func_802643A0_de(s32);

s32 func_80445964_de(void *unused, Menu_func_80445964_de *menu) {
    s32 i;
    f32 t;

    i = func_8022A5A0_de(D_80140F80, menu->id);
    t = D_800E20A0[i].timer + D_800CD738;
    D_800E20A0[i].timer = t;
    if (t >= (15.0f)) {
        D_800E20A0[i].timer = t - (15.0f);
    }
    if (menu->state == 1) {
        if (func_80264388_de(menu->input) != 0 && D_800E20A0[i].value > 0) {
            D_800E20A0[i].value--;
            D_800E20A0[i].timer = 0.0f;
        } else if (func_802643A0_de(menu->input) != 0) {
            if (D_800E20A0[i].value < D_800E20A0[i].max) {
                D_800E20A0[i].value++;
                D_800E20A0[i].timer = 0.0f;
            }
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD470_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2810_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EEE30_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9FF0_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE7C0_4 = 15.0f;
#endif
