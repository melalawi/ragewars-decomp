#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

void func_8028B874(void *arg0, void *arg1, s32 arg2) {
    s32 bitIndex;
    void *field80;
    s32 field1B40C;
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 mask;
    s32 idx;
    s32 idx2;

    bitIndex = *(u16 *) ((char *) arg1 + 0x19E);
    field80 = *(void **) ((char *) arg0 + 0x80);
    field1B40C = *(s32 *) ((char *) arg0 + 0x1B40C);
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), field1B40C), 1);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FD94(temp_v0, 1);
    base2 = base1;
    mask = 1 << (bitIndex & 7);
    if (arg2 != 0) {
        idx = bitIndex;
        if (bitIndex < 0) {
            idx = bitIndex + 7;
        }
        base1[idx >> 3] |= mask;
        return;
    }
    idx2 = bitIndex;
    if (idx2 < 0) {
        idx2 += 7;
    }
    base2[idx2 >> 3] &= ~mask;
}
