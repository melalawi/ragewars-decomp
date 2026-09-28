#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C: 0x40 clears D_80146894 and
   calls func_802A3304 and func_8025E3A4; 0x3C clears D_80146894 and calls func_8042325C; 0x41 and
   0x3E wait 0x1F and 0x20 through func_80299368. Returns zero. */
extern s32 D_80146894;
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_802A3304(void);
extern void func_8025E3A4(void);
extern void func_8042325C(void);
extern void func_80299368(s32);

s32 func_80435EB8(void) {
    s32 time;

    func_8029A73C();
    switch (func_8029AA08()) {
    case 0x40:
        D_80146894 = 0;
        func_802A3304();
        func_8025E3A4();
        return 0;
    case 0x3C:
        D_80146894 = 0;
        func_8042325C();
        return 0;
    case 0x41:
        time = 0x1F;
        goto wait;
    case 0x3E:
        time = 0x20;
    wait:
        func_80299368(time);
        return 0;
    }
    return 0;
}
