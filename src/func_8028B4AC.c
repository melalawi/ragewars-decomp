#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

void func_8028B4AC(void *arg0, s32 arg1, s32 arg2) {
    void *field84;
    s32 field1B40C;
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 mask;
    s32 idx;
    s32 idx2;

    field84 = *(void **) ((char *) arg0 + 0x84);
    field1B40C = *(s32 *) ((char *) arg0 + 0x1B40C);
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field84, 0), field1B40C), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FD94(temp_v0, 1);
    base2 = base1;
    mask = 1 << (arg1 & 7);
    if (arg2 != 0) {
        idx = arg1;
        if (arg1 < 0) {
            idx = arg1 + 7;
        }
        base1[idx >> 3] |= mask;
        return;
    }
    idx2 = arg1;
    if (idx2 < 0) {
        idx2 += 7;
    }
    base2[idx2 >> 3] &= ~mask;
}
