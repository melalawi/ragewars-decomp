#include "basetypes.h"

extern s32 func_802AE380(u8 *);
extern s32 D_8014D3E8;

s32 func_802B156C(u16 *arg0) {
    u8 sp10;
    s32 result;
    u16 high;

    func_802AE380(&sp10);
    result = 0;
    if (D_8014D3E8 == 0) {
        high = sp10 << 8;
        func_802AE380(&sp10);
        if (D_8014D3E8 == 0) {
            result = 1;
            *arg0 = high | sp10;
        }
    }
    return result;
}
