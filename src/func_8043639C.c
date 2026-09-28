#include "basetypes.h"

/* Builds screen state D_800E5558: allocates its 0x1C bytes, resets through func_802A3358 and opens
   it as page 0x67 through func_8043C3F0; then places the given window at 0x62, 0x45 in mode 1 of
   func_8040C4F4, or at x 0x69 in mode 2. Returns zero. */
struct Window {
    char pad0[0x14];
    s16 x;
    s16 y;
};

extern void *D_800E5558;
extern void *func_80252FFC(s32);
extern void func_802A3358(void);
extern void func_8043C3F0(void *, s32, s32, s32, s32);
extern s32 func_8040C4F4(void);

s32 func_8043639C(struct Window *window) {
    D_800E5558 = func_80252FFC(0x1C);
    func_802A3358();
    func_8043C3F0(D_800E5558, 0x67, 0, 0, 0);
    if (func_8040C4F4() == 1) {
        window->x = 0x62;
        window->y = 0x45;
    } else if (func_8040C4F4() == 2) {
        window->x = 0x69;
    }
    return 0;
}
