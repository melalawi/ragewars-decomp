#include "span_1000/code_802B033C.h"
#include "types.h"

extern s32 func_802AE5AC_us_rev1(s32);
extern s32 D_8014D3E8;

s32 func_802B1820_us_rev1(u8 *arg0) {
    s32 result;
    u8 value;

    result = 0;
    while (1) {
        value = *arg0++;
        func_802AE5AC_us_rev1(value);
        if (D_8014D3E8 != 0) {
            break;
        }
        if (value != 0) {
            continue;
        }
        result = 1;
        break;
    }
    return result;
}
