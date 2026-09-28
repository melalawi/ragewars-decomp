#include "basetypes.h"

/* On event 3 with value 0, calls func_8029A73C, passes offset 0x10C of the object D_800E3590 points
   to to func_8041DBA0, calls func_8041DACC with 0x6E, func_8041D718 and func_8041D9D0, and clears
   the object's word at 0xEC. Returns zero. */
struct State {
    char pad0[0xEC];
    s32 value;
};

extern char *D_800E3590;
extern void func_8029A73C();
extern void func_8041DBA0(void *);
extern void func_8041DACC(s32);
extern void func_8041D718();
extern void func_8041D9D0();

s32 func_8041DE64(void *first, void *second, u32 event, s32 value) {
    if ((event >> 16) == 3 && value == 0) {
        func_8029A73C();
        func_8041DBA0(D_800E3590 + 0x10C);
        func_8041DACC(0x6E);
        func_8041D718();
        func_8041D9D0();
        ((struct State *) D_800E3590)->value = 0;
    }
    return 0;
}
