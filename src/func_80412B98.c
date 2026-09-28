#include "basetypes.h"

/* Looks up the entry with the given identifier among the list func_80411E4C returns for what
   func_8029A958 returns, through func_8040ECB0, and reports its bytes at offsets 0x4C and 0x4D. */
struct Entry {
    char pad[0x4C];
    u8 first;
    u8 second;
};

extern s32 func_8029A958();
extern void *func_80411E4C(s32);
extern struct Entry *func_8040ECB0(void *, unsigned short);

void func_80412B98(s32 identifier, s32 *first, s32 *second) {
    struct Entry *entry = func_8040ECB0(func_80411E4C(func_8029A958()), identifier);

    *first = entry->first;
    *second = entry->second;
}
