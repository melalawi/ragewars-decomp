#include "basetypes.h"

extern s32 func_802AE5AC(s32);
extern s32 D_8014D3E8;

s32 func_802B1790(u32 arg0) {
    s32 result;

    result = 0;
    func_802AE5AC(arg0 >> 0x18);
    if (D_8014D3E8 == 0) {
        func_802AE5AC((arg0 >> 0x10) & 0xFF);
        if (D_8014D3E8 == 0) {
            func_802AE5AC((arg0 >> 8) & 0xFF);
            if (D_8014D3E8 == 0) {
                func_802AE5AC(arg0 & 0xFF);
                result = D_8014D3E8 == 0;
            }
        }
    }
    return result;
}
