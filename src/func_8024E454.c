#include "basetypes.h"

extern f32 func_802B2350(s32 arg0);

f32 func_8024E454(void *arg0)
{
    void *temp_a1;
    void *next;
    s32 temp_v1;

loop:
    temp_a1 = *(void **)((u8 *)arg0 + 0x18);
    temp_v1 = *(s32 *)temp_a1;
    if (temp_v1 == 4) {
        goto value_2c;
    }
    if (temp_v1 < 5) {
        if (temp_v1 == 1) {
            goto value_2c;
        }
        goto other;
    }
    if (temp_v1 == 5) {
        goto value_18;
    }
    if (temp_v1 != 11) {
        goto other;
    }
    if (*(u8 *)arg0 == 1 &&
        (*(u32 *)((u8 *)arg0 + 0x100) & 0x300000) != 0) {
        next = *(void **)((u8 *)*(void **)((u8 *)arg0 + 0x1D8) + 0x80C);
        if (next != 0) {
            arg0 = next;
            goto loop;
        }
    }
    return *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x18) + 0xF0);

value_2c:
    return *(f32 *)((u8 *)temp_a1 + 0x2C);
value_18:
    return *(f32 *)((u8 *)temp_a1 + 0x18);
other:
    if (*(u8 *)arg0 == 2) {
        next = *(void **)((u8 *)arg0 + 0x118);
        next = *(void **)((u8 *)next + 0x30);
        return func_802B2350(*(u16 *)((u8 *)next + 0x14));
    }
    return 0.0f;
}
