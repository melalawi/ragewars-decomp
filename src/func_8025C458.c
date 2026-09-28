#include "basetypes.h"

extern void func_802B7FD0(void *arg0, s16 arg1);
extern void func_802B7FE0(void *arg0, s16 arg1);

void func_8025C458(void *arg0, s32 arg1) {
    s8 *new_var;
    int new_var2;
    s32 temp_s0;
    void *temp_s0_2;

    temp_s0 = *(s32 *)((s8 *)arg0 + 0xB0);
    temp_s0_2 = (s8 *)temp_s0 + 0x84;
    new_var2 = 2;
    new_var = (s8 *)arg0 + 0;
    func_802B7FD0(temp_s0_2, *(s16 *)((s8 *)(temp_s0 + ((*(s32 *)new_var) * new_var2)) + 0xDC));
    func_802B7FE0(temp_s0_2, (s16)(s32)((f32) arg1 * (*(f32 *)((s8 *)arg0 + 0xC8))));
}
