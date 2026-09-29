#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

typedef struct func_8028DC18_S1 func_8028DC18_S1;
struct func_8028DC18_S1 {
    char pad0[0x80];
    void* unk80;
    char pad80[0x84 - 0x80 - sizeof(void*)];
    void* unk84;
};

s32 func_8028DC18(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *base;
    void *temp_v0;
    u8 *temp_a0;
    s32 mask;
    s32 i;

    if (arg1 != 0) {
        base = ((func_8028DC18_S1 *)(arg0))->unk80;
    } else {
        base = ((func_8028DC18_S1 *)(arg0))->unk84;
    }
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(base, 0), arg3), arg2);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32)temp_v0, 1);
    temp_a0 = (u8 *)func_8028FD94(temp_v0, 1);
    mask = 1 << (arg4 & 7);
    i = arg4;
    if (i < 0) {
        i += 7;
    }
    return (temp_a0[i >> 3] & mask) != 0;
}
