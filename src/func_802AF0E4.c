#include "basetypes.h"

extern s32 D_8014D3E8;
extern s32 func_802AE380(u8 *);

typedef struct ReadHalfword {
    s32 word;
    u8 byte;
    u16 value;
    u8 next_byte;
} ReadHalfword;

s32 func_802AF0E4(void) {
    ReadHalfword first;
    s32 word;
    s32 result;
    u16 value;

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
                    func_802AE380(&first.next_byte);
                    if (D_8014D3E8 == 0) {
                        value = first.next_byte << 8;
                        func_802AE380(&first.next_byte);
                        if (D_8014D3E8 == 0) {
                            first.value = value | first.next_byte;
                            result = 1;
                            *(u16 *)first.word = first.value;
                        }
                    }
                }
            }
        }
    }
    return result;
}
