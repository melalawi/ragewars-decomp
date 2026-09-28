#include "basetypes.h"

extern f32 D_800CC958;
extern f32 D_800CC95C;

f32 func_802BA358(f32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    f32 base;
    f32 result;
    s32 n;
    s32 i;

    n = arg1 >> 3;
    i = 0;
    if (n == 0) {
        return arg0;
    }

    base = (f32)(arg2 << 16);
    base += (f32)(arg3 & 0xFFFF);
    base *= D_800CC958;
    result = D_800CC95C;
    do {
        if (n & 1) {
            result *= base;
        }
        n >>= 1;
        i++;
        if (n == 0) {
            break;
        }
        base *= base;
    } while (i < 0x20);

    return arg0 * result;
}
