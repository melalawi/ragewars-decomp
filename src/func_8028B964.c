#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

s32 func_8028B964(void *arg0, void *arg1) {
    s32 bitIndex;
    void *field80;
    s32 field1B40C;
    void *temp_v0;
    u8 *temp_a0;
    s32 mask;

    bitIndex = *(u16 *) ((char *) arg1 + 0x19E);
    field80 = *(void **) ((char *) arg0 + 0x80);
    field1B40C = *(s32 *) ((char *) arg0 + 0x1B40C);
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), field1B40C), 1);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    temp_a0 = (u8 *) func_8028FD94(temp_v0, 1);
    mask = 1 << (bitIndex & 7);
    if (bitIndex < 0) {
        bitIndex += 7;
    }
    return (temp_a0[bitIndex >> 3] & mask) != 0;
}
