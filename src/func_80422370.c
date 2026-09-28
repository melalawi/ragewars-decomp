#include "basetypes.h"

/* Unless func_8043C4E8 reports one for the object D_800E44A0 holds, calls func_802A3358 and, when
   the object's word at 0x20 is one, calls func_802A338C, then func_80245B18 and func_8042B4C4 unless
   the option byte D_801462D5 is set, and finally resets the object through func_8043C458. Returns
   zero. */
struct Object {
    char pad[0x20];
    s32 state;
};

extern struct Object *D_800E44A0;
extern u8 D_801462D5;
extern s32 func_8043C4E8(struct Object *);
extern void func_802A3358();
extern void func_802A338C();
extern void func_80245B18();
extern void func_8042B4C4();
extern void func_8043C458(struct Object *);

s32 func_80422370(void) {
    s32 one = 1;

    if (func_8043C4E8(D_800E44A0) == one) {
        return 0;
    }
    func_802A3358();
    if (D_800E44A0->state != one) {
        return 0;
    }
    func_802A338C();
    if (D_801462D5 == 0) {
        func_80245B18();
        func_8042B4C4();
    }
    func_8043C458(D_800E44A0);
    return 0;
}
