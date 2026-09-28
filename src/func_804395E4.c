#include "basetypes.h"

/* Calls func_8029A73C, then passes -1 to func_8042EB68 when func_8029A9A0 reports 0x16 for zero
   and 0xB otherwise, then calls func_8029A8A8. Returns zero. */
extern void func_8029A73C();
extern s32 func_8029A9A0(s32);
extern void func_8042EB68(s32);
extern void func_8029A8A8();

s32 func_804395E4(void) {
    func_8029A73C();
    func_8042EB68(func_8029A9A0(0) == 0x16 ? -1 : 0xB);
    func_8029A8A8();
    return 0;
}
