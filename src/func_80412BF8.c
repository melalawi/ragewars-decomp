#include "basetypes.h"

/* When the fourth argument is set, lowers the byte at offset 0x4C of an entry by one while it is
   above the minimum at 0x50; then calls func_80412270 and func_8029A73C. Returns zero. */
extern void func_80412270();
extern void func_8029A73C();

s32 func_80412BF8(u8 *entry, void *second, void *third, s32 active) {
    s32 value = entry[0x4C];

    if (active && entry[0x50] < value) {
        entry[0x4C] = value - 1;
    }
    func_80412270();
    func_8029A73C();
    return 0;
}
