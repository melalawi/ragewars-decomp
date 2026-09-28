#include "basetypes.h"

extern void func_802B7FD0(void *arg0, s16 arg1);
extern void func_802B7F50(void *arg0, f32 arg1);

void func_8025C4D4(void *arg0, f32 arg1) {
    s8 *new_var;
    int new_var2;
    s32 temp_s0;
    void *temp_s0_2;
    f32 scaled;

    temp_s0 = *(s32 *)((s8 *)arg0 + 0xB0);
    temp_s0_2 = (s8 *)temp_s0 + 0x84;
    new_var2 = 2;
    new_var = (s8 *)arg0 + 0;
    func_802B7FD0(temp_s0_2, *(s16 *)((s8 *)(temp_s0 + ((*(s32 *)new_var) * new_var2)) + 0xDC));
    scaled = arg1 * (*(f32 *)((s8 *)arg0 + 0x34));
    scaled = scaled * (*(f32 *)((s8 *)arg0 + 0xB8));
    func_802B7F50(temp_s0_2, scaled);
}
