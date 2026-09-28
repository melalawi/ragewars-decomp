#include "basetypes.h"

/* Steps a menu spinner for the entry func_8022A590 finds in D_80145040: advances its repeat timer by D_800D2988, wrapping at D_800E2810, and while the menu is active (state 1) decrements its value above zero when func_802643A8 reports the decrease input, or else increments it below its maximum when func_802643C0 reports the increase input, restarting the timer on a change. Returns zero. */
typedef struct {
    s32 value;
    f32 timer;
    s32 max;
    char padC[0xC];
} Spinner;

typedef struct {
    s16 state;
    char pad2[0x1A];
    s32 id;
    s32 input;
} Menu;

extern char D_80145040[];
extern Spinner D_800E63C0[];
extern f32 D_800D2988;
extern f32 D_800E2810;

extern s32 func_8022A590(char *, s32);
extern s32 func_802643A8(s32);
extern s32 func_802643C0(s32);

s32 func_804465B4(void *unused, Menu *menu) {
    s32 i;
    f32 t;

    i = func_8022A590(D_80145040, menu->id);
    t = D_800E63C0[i].timer + D_800D2988;
    D_800E63C0[i].timer = t;
    if (t >= D_800E2810) {
        D_800E63C0[i].timer = t - D_800E2810;
    }
    if (menu->state == 1) {
        if (func_802643A8(menu->input) != 0 && D_800E63C0[i].value > 0) {
            D_800E63C0[i].value--;
            D_800E63C0[i].timer = 0.0f;
        } else if (func_802643C0(menu->input) != 0) {
            if (D_800E63C0[i].value < D_800E63C0[i].max) {
                D_800E63C0[i].value++;
                D_800E63C0[i].timer = 0.0f;
            }
        }
    }
    return 0;
}
