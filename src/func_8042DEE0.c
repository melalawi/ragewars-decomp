#include "basetypes.h"

/* When the fourth argument is one, calls func_8029A73C, advances the word at 0x20 of the object D_800E5430 holds while func_80264634 reports one for it and it is below func_802646B0's limit, formats that word into the object's text at 0x14 through func_802A1C08 with D_800E1B60, and plays sound 0xE81 through func_8025DF54; returns zero.
   Adapted from func_80422370 with the object chain changed to a guarded counter increment, text format and sound call. */

struct Object {
    char pad[0x14];
    char text[0xC];
    s32 value;
};

extern struct Object *D_800E5430;
extern char D_800E1B60[];
extern void func_8029A73C();
extern s32 func_80264634(s32);
extern s32 func_802646B0();
extern void func_802A1C08(char *, char *, s32);
extern void func_8025DF54(s32);

s32 func_8042DEE0(void *a0, void *a1, void *a2, s32 press) {
    struct Object *object;

    if (press != 1) {
        return 0;
    }
    func_8029A73C();
    if (func_80264634(D_800E5430->value) == press) {
        object = D_800E5430;
        if (object->value < func_802646B0()) {
            D_800E5430->value++;
        }
    }
    func_802A1C08(D_800E5430->text, D_800E1B60, D_800E5430->value);
    func_8025DF54(0xE81);
    return 0;
}
