#include "basetypes.h"

/* Calls func_8029A73C, then passes 0xB to func_8042EB68 when func_8029A9A0 reports 0xB for zero
   and -1 otherwise, then calls func_8029A8A8. Returns zero. */
extern void func_8029A73C();
extern s32 func_8029A9A0(s32);
extern void func_8042EB68(s32);
extern void func_8029A8A8();

s32 func_804292D4(void) {
    func_8029A73C();
    func_8042EB68(func_8029A9A0(0) == 0xB ? 0xB : -1);
    func_8029A8A8();
    return 0;
}
