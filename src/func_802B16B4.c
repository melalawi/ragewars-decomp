#include "basetypes.h"

extern s32 func_802AE380(u8 *);
extern s32 D_8014D3E8;

s32 func_802B16B4(u8 *arg0, s32 arg1) {
    s32 result;
    s32 i;
    u8 value;

    result = 0;
    i = 0;
    while (1) {
        func_802AE380(&value);
        if (D_8014D3E8 != 0) {
            break;
        }
        if (i < arg1) {
            arg0[i] = value;
        }
        i += 1;
        if (value != 0) {
            continue;
        }
        result = 1;
        break;
    }
    return result;
}
