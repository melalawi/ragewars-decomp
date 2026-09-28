#include "basetypes.h"

extern s32 func_802AE380(u8 *);
extern s32 D_8014D3E8;

s32 func_802B15EC(s32 *arg0) {
    u8 sp10;
    s32 result;
    s32 word;

    func_802AE380(&sp10);
    result = 0;
    if (D_8014D3E8 == 0) {
        word = sp10 << 8;
        func_802AE380(&sp10);
        if (D_8014D3E8 == 0) {
            word |= sp10;
            func_802AE380(&sp10);
            word <<= 8;
            if (D_8014D3E8 == 0) {
                word |= sp10;
                func_802AE380(&sp10);
                word <<= 8;
                if (D_8014D3E8 == 0) {
                    result = 1;
                    word |= sp10;
                    *arg0 = word;
                }
            }
        }
    }
    return result;
}
