#include "basetypes.h"

extern void func_80202CA0(s32, f32 *);
extern void func_802742B4(void *, void *);

void func_80203CFC(void *unused0, void *arg1, s32 arg2) {
    s32 sp10[4];
    f32 sp20[3];

    sp20[0] = *(f32 *) ((char *) arg1 + 0x130);
    sp20[1] = *(f32 *) ((char *) arg1 + 0x134);
    sp20[2] = *(f32 *) ((char *) arg1 + 0x138);
    func_80202CA0(sp10, sp20);
    func_802742B4(sp10, arg2);
}
