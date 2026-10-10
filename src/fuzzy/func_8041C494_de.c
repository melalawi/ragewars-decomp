#include "types.h"

/* Handles the menu message func_80299A08_de reports after func_8029973C_de: 0x3CB hides the window at
   0x8 of screen D_800E3518 and calls func_8041BE90_de; 0x3CA calls func_8041C164_de; 0x3C7 calls
   func_8041C244_de; 0x3C6 sets D_80146D60, D_800E28CC and D_800DF4C4 to 1 and clears D_8014AD94, then
   starts mode 6 through func_80434FB4_de and waits 0x13 through func_80298368_de. Returns zero. */
struct Screen {
    char pad0[0x8];
    void *window;
};

extern struct Screen *D_800E3518;
extern s32 D_80146D60;
extern s32 D_800E28CC;
extern s32 D_8014AD94;
extern s32 D_800DF4C4;
extern void func_8029973C_de(void);
extern s32 func_80299A08_de(void);
extern void func_8040E8D8_de(void *, s32);
extern void func_8041BE90_de(void);
extern void func_8041C164_de(void);
extern void func_8041C244_de(void);
extern void func_80434FB4_de(s32);
extern void func_80298368_de(s32);

s32 func_8041C494_de(void) {
    func_8029973C_de();
    switch (func_80299A08_de()) {
    case 0x3CB:
        func_8040E8D8_de(D_800E3518->window, 0);
        func_8041BE90_de();
        break;
    case 0x3CA:
        func_8041C164_de();
        break;
    case 0x3C7:
        func_8041C244_de();
        break;
    case 0x3C6:
        D_80146D60 = 1;
        D_800E28CC = 1;
        D_8014AD94 = 0;
        D_800DF4C4 = 1;
        func_80434FB4_de(6);
        func_80298368_de(0x13);
        break;
    }
    return 0;
}
