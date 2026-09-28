#include "basetypes.h"

/* Looks up the entry with the given identifier among the list func_80411E4C returns for what
   func_8029A958 returns, through func_8040ECB0, and stores three bytes at offsets 0x55, 0x57 and 0x53. */
extern s32 func_8029A958();
extern void *func_80411E4C(s32);
extern u8 *func_8040ECB0(void *, unsigned short);

void func_80412AD8(s32 identifier, s32 first, s32 second, s32 third) {
    u8 *entry = func_8040ECB0(func_80411E4C(func_8029A958()), identifier);

    entry[0x55] = second;
    entry[0x57] = third;
    entry[0x53] = first;
}
