#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

void func_8028B64C(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *entry;
    void *cond;
    void *field80;
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 mask;
    s32 idx;
    s32 idx2;

    if (*(s32 *) arg0 == 2) {
        return;
    }
    if (*(s32 *) ((char *) arg0 + 0x1B40C) == arg1) {
        entry = *(char **) ((char *) arg0 + 0x138) + (s32) arg2 * 0x2E8;
        cond = *(void **) ((char *) entry + 0x18);
        if ((u32) (*(s32 *) cond - 9) < 2) {
            if (*(s32 *) ((char *) cond + 4) & 0x200) {
                return;
            }
        }
    }
    field80 = *(void **) ((char *) arg0 + 0x80);
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), (s32) arg1), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FD94(temp_v0, 1);
    base2 = base1;
    mask = 1 << (arg2 & 7);
    if (arg3 != 0) {
        idx = arg2;
        if ((s32) arg2 < 0) {
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
