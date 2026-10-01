#ifdef NON_MATCHING
/* NON_MATCHING: draft of de_func_80404D84; verify behavior and bytes before match. */
#include "basetypes.h"

s32 *func_802533DC(s32, s32, s32, s32 *);
s32 func_802A101C(s32, s32, s32);
extern s32 D_800DCCC0;
extern s32 D_800E2850;
extern s32 D_800E2854;
extern s32 *D_800E2858;

void de_func_80404D84(void) {
    s32 *temp_v0;
    s32 temp_a0;

    temp_v0 = func_802533DC(0, 0x810, 0x23, &D_800DCCC0);
    temp_a0 = *temp_v0;
    D_800E2858 = temp_v0;
    D_800E2854 = temp_a0;
    func_802A101C(temp_a0, 0, 0x810);
    D_800E2850 = 1;
}
#endif
