#include "basetypes.h"

/* Calls func_8029A73C, func_8042EB68 with -1, func_80423304 and func_8029A8A8, and returns zero. */
extern void func_8029A73C();
extern void func_8042EB68(s32);
extern void func_80423304();
extern void func_8029A8A8();

s32 func_804238F8(void) {
    func_8029A73C();
    func_8042EB68(-1);
    func_80423304();
    func_8029A8A8();
    return 0;
}
