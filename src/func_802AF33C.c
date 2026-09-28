#include "basetypes.h"

extern s32 D_8014D3E8;
extern s32 func_802AE380(u8 *);
extern s32 func_802AE5AC(s32);

typedef struct ReadWord {
    s32 word;
    u8 byte;
} ReadWord;

s32 func_802AF33C(void) {
    ReadWord first;
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
                    value = *(u16 *)first.word;
                    func_802AE5AC(value >> 8);
                    if (D_8014D3E8 == 0) {
                        func_802AE5AC(value & 0xFF);
                        result = D_8014D3E8 == 0;
                    }
                }
            }
        }
    }
    return result;
}
