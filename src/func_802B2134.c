#include "basetypes.h"

extern s32 D_8014D3E8;
extern s32 func_802AE380(u8 *);

typedef struct ReadWordByte {
    s32 word;
    u8 byte;
    u8 value;
} ReadWordByte;

s32 func_802B2134(void) {
    ReadWordByte first;
    s32 word;
    s32 result;

    func_802AE380(&first.byte);
    result = 0;
    if (D_8014D3E8 == 0) {
        word = first.byte << 8;
        func_802AE380(&first.byte);
        if (D_8014D3E8 == 0) {
            word |= first.byte;
            func_802AE380(&first.byte);
            word <<= 8;
            if (D_8014D3E8 == 0) {
                word |= first.byte;
                func_802AE380(&first.byte);
                word <<= 8;
                if (D_8014D3E8 == 0) {
                    word |= first.byte;
                    first.word = word;
                    func_802AE380(&first.value);
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
