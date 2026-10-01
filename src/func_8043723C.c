#include "basetypes.h"

/* Calls func_8029A73C; when func_8029AA08 reports 0x1C8, passes the word at offset 0x14 of the
   object D_800E5694 points to to func_80436BC8, then passes -1 to func_8042EB68 if func_8029A9A0
   reports 0x16 for zero and 0xB otherwise, and calls func_8029A8A8. Returns zero. */
struct State {
    char pad[0x14];
    s32 item;
};

extern struct State *D_800E5694;
extern void func_8029A73C();
extern s32 func_8029AA08();
extern void func_80436BC8(s32);
extern s32 func_8029A9A0(s32);
extern void func_8042EB68(s32);
extern void func_8029A8A8();

#if defined(VERSION_DE)
#define VALUE_1C8 0x1C4
#elif defined(VERSION_EU_X)
#define VALUE_1C8 0x1CC
#else
#define VALUE_1C8 0x1C8
#endif

s32 func_8043723C(void) {
    func_8029A73C();
    if (func_8029AA08() == VALUE_1C8) {
        func_80436BC8(D_800E5694->item);
        func_8042EB68(func_8029A9A0(0) == 0x16 ? -1 : 0xB);
        func_8029A8A8();
    }
    return 0;
}
