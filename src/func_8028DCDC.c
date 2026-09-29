#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern void func_8028FDD8(s32 arg0, s32 arg1);

typedef struct func_8028DCDC_S1 func_8028DCDC_S1;
struct func_8028DCDC_S1 {
    char pad0[0x84];
    void* unk84;
};

s32 func_8028DCDC(void *arg0, s32 arg1, s32 arg2) {
    void *temp_v0;
    u8 *temp_a0;
    s32 mask;
    s32 i;

    temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(((func_8028DCDC_S1 *)(arg0))->unk84, 0), arg1), 0);
    func_8028FD94(temp_v0, 0);
    func_8028FDD8((s32)temp_v0, 1);
    temp_a0 = (u8 *)func_8028FD94(temp_v0, 1);
    mask = 1 << (arg2 & 7);
    i = arg2;
    if (i < 0) {
        i += 7;
    }
    return (temp_a0[i >> 3] & mask) != 0;
}
