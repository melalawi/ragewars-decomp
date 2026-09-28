#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C: 0x3CB hides the window at
   0x8 of screen D_800E3518 and calls func_8041BF10; 0x3CA calls func_8041C1E4; 0x3C7 calls
   func_8041C2C4; 0x3C6 sets D_80146D60, D_800E28CC and D_800E3514 to 1 and clears D_8014AD94, then
   starts mode 6 through func_80435190 and waits 0x13 through func_80299368. Returns zero. */
struct Screen {
    char pad0[0x8];
    void *window;
};

extern struct Screen *D_800E3518;
extern s32 D_80146D60;
extern s32 D_800E28CC;
extern s32 D_8014AD94;
extern s32 D_800E3514;
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_8040E958(void *, s32);
extern void func_8041BF10(void);
extern void func_8041C1E4(void);
extern void func_8041C2C4(void);
extern void func_80435190(s32);
extern void func_80299368(s32);

s32 func_8041C514(void) {
    func_8029A73C();
    switch (func_8029AA08()) {
    case 0x3CB:
        func_8040E958(D_800E3518->window, 0);
        func_8041BF10();
        break;
    case 0x3CA:
        func_8041C1E4();
        break;
    case 0x3C7:
        func_8041C2C4();
        break;
    case 0x3C6:
        D_80146D60 = 1;
        D_800E28CC = 1;
        D_8014AD94 = 0;
        D_800E3514 = 1;
        func_80435190(6);
        func_80299368(0x13);
        break;
    }
    return 0;
}
