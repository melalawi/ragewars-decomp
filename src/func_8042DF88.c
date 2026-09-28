#include "basetypes.h"

/* Slider-down handler: when the fourth argument is one, calls func_8029A73C, lowers the value at
   offset 0x20 of the object D_800E5430 points to by one while it is at least 2, formats it into the
   text at offset 0x14 with D_800E1B60 through func_802A1C08 and plays sound 0xE81. Returns zero. */
struct State {
    char pad[0x14];
    char text[0xC];
    s32 value;
};

extern struct State *D_800E5430;
extern char D_800E1B60[];
extern void func_8029A73C();
extern void func_802A1C08(char *, char *, s32);
extern void func_8025DF54(s32);

s32 func_8042DF88(void *first, void *second, void *third, s32 fourth) {
    s32 value;

    if (fourth != 1) {
        return 0;
    }
    func_8029A73C();
    value = D_800E5430->value;
    if (value >= 2) {
        D_800E5430->value = value - 1;
    }
    func_802A1C08(D_800E5430->text, D_800E1B60, D_800E5430->value);
    func_8025DF54(0xE81);
    return 0;
}
