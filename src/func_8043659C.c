#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C: 0x3D8 clears D_80146894, calls func_802A338C, then calls func_8043C458 on D_800E5558 when func_8042AEB8 reports non-zero or else func_8040C4A8 with zero and func_80299368 with 0x14; 0x3D9 calls func_80299368 with one. Returns zero.
   Adapted from func_80435EB8 with the message numbers and the arms changed. */
extern s32 D_80146894;
extern s32 D_800E5558;
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_802A338C(void);
extern s32 func_8042AEB8(void);
extern void func_8040C4A8(s32);
extern void func_8043C458(s32);
extern void func_80299368(s32);

s32 func_8043659C(void) {
    func_8029A73C();
    switch (func_8029AA08()) {
    case 0x3D9:
        func_80299368(1);
        return 0;
    case 0x3D8:
        D_80146894 = 0;
        func_802A338C();
        if (func_8042AEB8() == 0) {
            func_8040C4A8(0);
            func_80299368(0x14);
        } else {
            func_8043C458(D_800E5558);
        }
        return 0;
    }
    return 0;
}
