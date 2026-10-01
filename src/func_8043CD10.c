#include "basetypes.h"

/* Steps the menu spinner in D_800E5CA0: advances its repeat timer by D_800D2988, wrapping at the second entry of D_800E2280, and while the menu is active (state 2) decrements its value above zero when func_802643A8 reports the decrease input, or else increments it below its maximum when func_802643C0 reports the increase input, restarting the timer on a change. Returns zero. */
typedef struct {
    s32 value;
    f32 timer;
    s32 max;
} Spinner;

typedef struct {
    s16 state;
    char pad2[0x1E];
    s32 input;
} Menu;

extern Spinner D_800E5CA0;
extern f32 D_800D2988;
extern f32 D_800E2280[];

extern s32 func_802643A8(s32);
extern s32 func_802643C0(s32);

s32 func_8043CD10(void *unused, Menu *menu) {
    f32 t;

    t = D_800E5CA0.timer + D_800D2988;
    D_800E5CA0.timer = t;
    if (t >= D_800E2280[1]) {
        D_800E5CA0.timer = t - D_800E2280[1];
    }
    if (menu->state == 2) {
        if (func_802643A8(menu->input) != 0 && D_800E5CA0.value > 0) {
            D_800E5CA0.value--;
            D_800E5CA0.timer = 0.0f;
        } else if (func_802643C0(menu->input) != 0) {
            if (D_800E5CA0.value < D_800E5CA0.max) {
                D_800E5CA0.value++;
                D_800E5CA0.timer = 0.0f;
            }
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCF04_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2284_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE8D4_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9A94_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE254_4 = 15.0f;
#endif
