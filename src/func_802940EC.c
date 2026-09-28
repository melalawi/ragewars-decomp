#include "basetypes.h"

/* Clears D_800D29C8 when func_802938E8 accepts its argument with 4.0 and two fours. */
extern s32 D_800D29C8;
extern s32 func_802938E8(s32, f32, s32, s32);

void func_802940EC(s32 value) {
    if (func_802938E8(value, 4.0f, 4, 4) != 0) {
        D_800D29C8 = 0;
    }
}
