#include "span_1000/code_802B1EC8.h"
#include "types.h"

extern s32 D_8014D3E8;
extern s32 func_802AE380_us_rev1(u8 *);



s32 func_802B2134_us_rev1(void) {
    ReadWordByte first;
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
                    func_802AE380_us_rev1(&first.value);
                    if (D_8014D3E8 == 0) {
                        result = 1;
                        *(u8 *)first.word = first.value;
                    }
                }
            }
        }
    }
    return result;
}
