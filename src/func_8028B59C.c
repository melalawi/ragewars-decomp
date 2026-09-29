#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

typedef struct func_8028B59C_S1 func_8028B59C_S1;
struct func_8028B59C_S1 {
    char pad0[0x84];
    void* unk84;
    char pad84[0x1B40C - 0x84 - sizeof(void*)];
    s32 unk1B40C;
};

s32 func_8028B59C(void *arg0, s32 arg1) {
    void *field84;
    s32 field1B40C;
    void *temp_v0;
    u8 *temp_a0;
    s32 mask;
    s32 i;

    field84 = ((func_8028B59C_S1 *)(arg0))->unk84;
    field1B40C = ((func_8028B59C_S1 *)(arg0))->unk1B40C;
    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(field84, 0), field1B40C), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32) temp_v0, 1);
    temp_a0 = (u8 *) func_8028FD94(temp_v0, 1);
    mask = 1 << (arg1 & 7);
    i = arg1;
    if (i < 0) {
        i += 7;
    }
    return (temp_a0[i >> 3] & mask) != 0;
}
