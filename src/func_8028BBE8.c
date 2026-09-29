#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

typedef struct func_8028BBE8_S1 func_8028BBE8_S1;
typedef struct func_8028BBE8_S2 func_8028BBE8_S2;
struct func_8028BBE8_S1 {
    char pad0[0x13];
    u8 unk13;
};
struct func_8028BBE8_S2 {
    char pad0[0x80];
    void* unk80;
    char pad80[0x1B40C - 0x80 - sizeof(void*)];
    s32 unk1B40C;
};

s32 func_8028BBE8(void *arg0, void *arg1) {
    s32 bitIndex;
    void *field80;
    s32 field1B40C;
    void *temp_v0;
    u8 *temp_a0;
    s32 mask;

    bitIndex = ((func_8028BBE8_S1 *)(arg1))->unk13;
    field80 = ((func_8028BBE8_S2 *)(arg0))->unk80;
    field1B40C = ((func_8028BBE8_S2 *)(arg0))->unk1B40C;
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field80, 0), field1B40C), 2);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    temp_a0 = (u8 *) func_8028FD94(temp_v0, 1);
    mask = 1 << (bitIndex & 7);
    if (bitIndex < 0) {
        bitIndex += 7;
    }
    return (temp_a0[bitIndex >> 3] & mask) != 0;
}
