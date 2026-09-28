#include "basetypes.h"

typedef struct StatePair {
    f32 value;
    s32 state;
} StatePair;

extern s32 D_800D0E54;
extern f32 D_800D2988;
extern s32 D_800D2C90;
extern s32 D_800D2C98;
extern StatePair D_800D2CA0;
extern s8 D_8010FBB8;
extern s32 D_8014694C;

extern void func_802A27C4(void);
extern s32 func_8029A958(void);
extern s32 func_8029A5D4(s32, s32, s32, s32, s32);
extern void func_80299FE8(void);
extern void func_804104C8(void);
extern void func_802A2944(void);
extern void func_8042E7CC(void);
extern void func_8042E080(void);
extern void func_802A33F8(f32);
extern void func_802A342C(void);

void func_802A3090(void) {
    s32 mode;
    s32 value;
    s32 active;
    s32 state;

    if (D_800D2C98 == 1) {
        func_802A27C4();
        mode = func_8029A958();
        func_8029A5D4(mode, 0xE08, 0, 0, 0);
        func_80299FE8();
        func_804104C8();
        func_802A2944();
        mode = func_8029A958();
        active = 1;
        value = 0;
        if (mode == 3) {
            goto mode_three;
        }
        if (mode != 0x18) {
            goto mode_inactive;
        }
        value = 20;
        goto mode_done;
mode_three:
        value = 300;
        goto mode_done;
mode_inactive:
        active = 0;
mode_done:
        if ((D_8014694C == 0) && (active == 1) && ((f32)(value * 15) < D_800D2CA0.value)) {
            func_8042E7CC();
            func_8042E080();
            func_802A33F8(0.0f);
        }
        D_800D2CA0.value += D_800D2988;
        state = D_800D2CA0.state;
        if (state == 1) {
            D_800D0E54--;
            if (D_800D0E54 <= 0) {
                D_800D0E54 = 60;
                D_8010FBB8 = state;
            }
        }
        if (D_800D2C90 == 1) {
            func_802A342C();
        }
    }
}
