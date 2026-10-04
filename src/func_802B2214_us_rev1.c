#include "span_1000/code_802B1EC8.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_8014D3E8;
extern s32 func_802AE380_us_rev1(u8 *);
extern s32 func_802AE5AC_us_rev1(s32);



s32 func_802B2214_us_rev1(void) {
    ReadWord first;
    s32 word;
    s32 result;

    func_802AE380_us_rev1(&first.byte);
    result = 0;
    if (D_8014D3E8 == 0) {
        word = first.byte << 8;
        func_802AE380_us_rev1(&first.byte);
        if (D_8014D3E8 == 0) {
            word |= first.byte;
            func_802AE380_us_rev1(&first.byte);
            word <<= 8;
            if (D_8014D3E8 == 0) {
                word |= first.byte;
                func_802AE380_us_rev1(&first.byte);
                word <<= 8;
                if (D_8014D3E8 == 0) {
                    word |= first.byte;
                    first.word = word;
                    func_802AE5AC_us_rev1(*(u8 *)first.word);
                    result = D_8014D3E8 == 0;
                }
            }
        }
    }
    return result;
}
