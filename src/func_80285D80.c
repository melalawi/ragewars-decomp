#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

void func_80285D80(void *arg0, void *arg1, s32 arg2) {
    void *entry;
    void *cond;
    void *field80;
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 field1B40C;
    s32 mask;
    s32 index;
    s32 idx;
    s32 idx2;
    s32 lastOffset;
    u32 first;

    if (!(*(s32 *) ((char *) arg1 + 0x100) & 0x80000)) {
        first = *(u32 *) ((char *) arg0 + 0x138);
        index = -1;
        if ((u32) arg1 >= first) {
            lastOffset = *(s32 *) ((char *) arg0 + 0x140) * 0x2E8;
            lastOffset -= 0x2E8;
            if (first + lastOffset >= (u32) arg1) {
                index = ((u32) arg1 - first) / 0x2E8;
            }
        }
    } else {
        index = -1;
    }
    if (index == -1) {
        return;
    }
    field1B40C = *(s32 *) ((char *) arg0 + 0x1B40C);
    if (*(s32 *) arg0 == 2) {
        return;
    }
    entry = *(char **) ((char *) arg0 + 0x138) + index * 0x2E8;
    cond = *(void **) ((char *) entry + 0x18);
    if ((u32) (*(s32 *) cond - 9) < 2) {
        if (*(s32 *) ((char *) cond + 4) & 0x200) {
            return;
        }
    }
    field80 = *(void **) ((char *) arg0 + 0x80);
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), field1B40C), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FD94(temp_v0, 1);
    base2 = base1;
    mask = 1 << (index & 7);
    if (arg2 != 0) {
        idx = index;
        if (index < 0) {
            idx = index + 7;
        }
        base1[idx >> 3] |= mask;
        return;
    }
    idx2 = index;
    if (idx2 < 0) {
        idx2 += 7;
    }
    base2[idx2 >> 3] &= ~mask;
}
