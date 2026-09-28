#include "basetypes.h"

/* Calls func_8029A73C and, when the fourth argument is one and the 0x4D0-byte entry of D_800E59E0 the third argument selects has a nonzero word at 0x4D4 (four bytes past the entry) with its word at 0x4B0 equal to one, plays sound 0xE7B through func_8025DF54 and calls func_8043AED0 with the entry index and 1, returning zero. */

struct Entry {
    char pad[0x4B0];
    s32 state;
    char pad4B4[0x4D4 - 0x4B4];
    s32 nextActive;
};

extern char *D_800E59E0;
extern void func_8029A73C();
extern void func_8025DF54(s32);
extern void func_8043AED0(s32, s32);

s32 func_8043BEA0(void *first, void *second, s32 slot, s32 active) {
    struct Entry *entry;
    u16 index;

    func_8029A73C();
    if (active == 1) {
        index = slot;
        entry = (struct Entry *) (D_800E59E0 + index * 0x4D0);
        if (entry->nextActive != 0 && entry->state == active) {
            func_8025DF54(0xE7B);
            func_8043AED0(index, 1);
            return 0;
        }
    }
    return 0;
}
