#include "basetypes.h"

/* Looks up the entry with the given identifier among the list func_80411E4C returns for what
   func_8029A958 returns, through func_8040ECB0, and stores two values at offsets 0x58 and 0x5C of
   it. */
struct Entry {
    char pad[0x58];
    s32 first;
    s32 second;
};

extern s32 func_8029A958();
extern void *func_80411E4C(s32);
extern struct Entry *func_8040ECB0(void *, u16);

void func_80412B40(s32 identifier, s32 first, s32 second) {
    struct Entry *entry = func_8040ECB0(func_80411E4C(func_8029A958()), identifier);

    entry->second = second;
    entry->first = first;
}
