#include "basetypes.h"

extern s32 func_802AE5AC(s32);
extern s32 func_802AE380(u8 *);
extern s32 D_8014D3E8;

s32 func_802B22E4(void) {
    u8 sp10;
    s32 result;

    func_802AE5AC(0x10);
    result = 0;
    if (D_8014D3E8 == 0) {
        func_802AE380(&sp10);
        if (D_8014D3E8 == 0) {
            result = sp10 == 0x11;
        }
    }
    return result;
}
