#include "basetypes.h"

extern void func_80202CA0(s32, f32 *);

s32 func_80203848(s32 arg0, s32 arg1, void *arg2) {
    f32 sp10[3];

    sp10[0] = *(f32 *) ((char *) arg2 + 0x130);
    sp10[1] = *(f32 *) ((char *) arg2 + 0x134);
    sp10[2] = *(f32 *) ((char *) arg2 + 0x138);
    func_80202CA0(arg0, sp10);
    return arg0;
}
