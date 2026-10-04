#include "span_1000/code_802B033C.h"
#include "types.h"

extern s32 func_802AE380_us_rev1(u8 *);
extern s32 D_8014D3E8;

s32 func_802B15EC_us_rev1(s32 *arg0) {
    u8 sp10;
    s32 result;
    s32 word;

    func_802AE380_us_rev1(&sp10);
    result = 0;
    if (D_8014D3E8 == 0) {
        word = sp10 << 8;
        func_802AE380_us_rev1(&sp10);
        if (D_8014D3E8 == 0) {
            word |= sp10;
            func_802AE380_us_rev1(&sp10);
            word <<= 8;
            if (D_8014D3E8 == 0) {
                word |= sp10;
                func_802AE380_us_rev1(&sp10);
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
