#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

typedef struct func_8028BA14_S1 func_8028BA14_S1;
struct func_8028BA14_S1 {
    char pad0[0x80];
    void* unk80;
};

void func_8028BA14(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 mask;
    s32 idx;
    s32 idx2;

    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(((func_8028BA14_S1 *)(arg0))->unk80, 0), arg1), 2);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FD94(temp_v0, 1);
    base2 = base1;
    mask = 1 << (arg2 & 7);
    if (arg3 != 0) {
        idx = arg2;
        if (arg2 < 0) {
            idx = arg2 + 7;
        }
        base1[idx >> 3] |= mask;
        return;
    }
    idx2 = arg2;
    if (idx2 < 0) {
        idx2 += 7;
    }
    base2[idx2 >> 3] &= ~mask;
}
