#include "basetypes.h"

/* When the fourth argument is set, raises the byte at offset 0x4C of an entry by one while it is
   below one less than the count at 0x4A; then calls func_80412270 and func_8029A73C. Returns
   zero. */
extern void func_80412270();
extern void func_8029A73C();

s32 func_80412C40(u8 *entry, void *second, void *third, s32 active) {
    u8 value = entry[0x4C];

    if (active && value < entry[0x4A] - 1) {
        entry[0x4C] = value + 1;
    }
    func_80412270();
    func_8029A73C();
    return 0;
}
