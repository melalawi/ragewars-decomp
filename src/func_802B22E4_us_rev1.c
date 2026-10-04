#include "span_1000/code_802B1EC8.h"
#include "types.h"

extern s32 func_802AE5AC_us_rev1(s32);
extern s32 func_802AE380_us_rev1(u8 *);
extern s32 D_8014D3E8;

s32 func_802B22E4_us_rev1(void) {
    u8 sp10;
    s32 result;

    func_802AE5AC_us_rev1(0x10);
    result = 0;
    if (D_8014D3E8 == 0) {
        func_802AE380_us_rev1(&sp10);
        if (D_8014D3E8 == 0) {
            result = sp10 == 0x11;
        }
    }
    return result;
}
