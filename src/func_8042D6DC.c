#include "basetypes.h"

/* Handles event 1 on the screen D_800E53C0: unless func_8043C4E8 reports its menu in state 1 it
   calls func_8042D46C; otherwise it advances the menu with func_8043C260 and func_8043C484 and,
   once func_8043C4E8 reports 2, acts on the choice at 0x1C: choice 0 hides the window argument,
   calls func_8029A73C, clears D_80146918 and D_801468F4 and leaves for screen 0xF when option
   D_801462D5 is set, otherwise through func_8042E080 when func_8042B108 and func_8042AEB8 both
   agree or for screen 0x14; choice 1 calls func_8040C4A8(0), shows the window, stops the objects
   at D_80145088 and 0x48 before it, releases D_8011FE88 through func_80286A78 and sets the word at
   0x17F0 of D_80145088 to 8. Returns zero. */

struct Screen {
    char pad0[0x1C];
    s32 choice;
};

extern struct Screen *D_800E53C0;
extern u8 D_801462D5;
extern s32 D_80146918;
extern s32 D_801468F4;
extern char D_80145088[];
extern char D_8011FE88[];
extern s32 func_8043C4E8(struct Screen *);
extern void func_8043C260(struct Screen *);
extern void func_8043C484(struct Screen *);
extern void func_8042D46C();
extern void func_8040C4A8(s32);
extern void func_8040E958(void *, s32);
extern void func_8044AFC0(void *, s32);
extern void func_8044A600(void *, s32, s32);
extern void func_80286A78(void *, s32, s32);
extern void func_8029A73C();
extern s32 func_8042B108();
extern s32 func_8042AEB8();
extern void func_8042E080();
extern void func_80299368(s32);

s32 func_8042D6DC(void *window, void *arg1, s32 event) {
    s32 state;
    char *object;
    s32 next;

    if (event != 1) {
        return 0;
    }
    state = func_8043C4E8(D_800E53C0);
    if (state == event) {
        func_8043C260(D_800E53C0);
        func_8043C484(D_800E53C0);
        if (func_8043C4E8(D_800E53C0) != 2) {
            return 0;
        }
        if (D_800E53C0->choice != 0) {
            if (D_800E53C0->choice != state) {
                return 0;
            }
            func_8040C4A8(0);
            func_8040E958(window, 1);
            object = D_80145088;
            func_8044AFC0(object, 0);
            func_8044A600(object - 0x48, 0, 0);
            func_80286A78(D_8011FE88, 0, 0);
            *(s32 *)(object + 0x17F0) = 8;
        } else {
            func_8040E958(window, 0);
            func_8029A73C();
            if (D_801462D5 == 0) {
                D_80146918 = 0;
                D_801468F4 = 0;
                if (func_8042B108() != 0 && func_8042AEB8() != 0) {
                    func_8042E080();
                    return 0;
                }
                next = 0x14;
            } else {
                D_80146918 = 0;
                D_801468F4 = 0;
                next = 0xF;
            }
            func_80299368(next);
            return 0;
        }
    } else {
        func_8042D46C();
    }
    return 0;
}
