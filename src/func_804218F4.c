#include "basetypes.h"

/* Polls the dialog of screen D_800E4400 through func_8041A4F0: state 3 opens the screen through
   func_80421844 while its word at 0x34 is zero, and otherwise, when D_8010F190 is 0x433, marks the
   screen confirmed at 0x38 and calls func_804212A4; state 4 calls func_8029A73C and waits 3
   through func_80299368. Returns zero. */
struct Screen {
    s32 dialog;
    char pad4[0x34 - 4];
    s32 open;
    s32 confirmed;
};

extern struct Screen *D_800E4400;
extern s32 D_8010F190;
extern s32 func_8041A4F0(s32);
extern void func_80421844(void);
extern void func_804212A4(void);
extern void func_8029A73C(void);
extern void func_80299368(s32);

s32 func_804218F4(void) {
    switch (func_8041A4F0(D_800E4400->dialog)) {
    case 3:
        if (D_800E4400->open == 0) {
            func_80421844();
            return 0;
        }
        if (D_8010F190 != 0x433) {
            return 0;
        }
        D_800E4400->confirmed = 1;
        func_804212A4();
        return 0;
    case 4:
        func_8029A73C();
        func_80299368(3);
        return 0;
    }
    return 0;
}
