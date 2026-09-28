#include "basetypes.h"

/* Calls func_8029A73C and func_804275B4, then func_8042EB68 with 0xE, and returns zero. */
extern void func_8029A73C();
extern void func_804275B4();
extern void func_8042EB68(s32);

s32 func_80428FC0(void) {
    func_8029A73C();
    func_804275B4();
    func_8042EB68(0xE);
    return 0;
}
