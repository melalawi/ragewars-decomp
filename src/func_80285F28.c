#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

s32 func_80285F28(void *arg0, void *arg1) {
    void *field80;
    void *temp_v0;
    u8 *base;
    s32 field1B40C;
    s32 mask;
    s32 index;
    s32 i;
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
        return 0;
    }
    field80 = *(void **) ((char *) arg0 + 0x80);
    field1B40C = *(s32 *) ((char *) arg0 + 0x1B40C);
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), field1B40C), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base = (u8 *) func_8028FD94(temp_v0, 1);
    mask = 1 << (index & 7);
    i = index;
    if (i < 0) {
        i += 7;
    }
    return (base[i >> 3] & mask) != 0;
}
