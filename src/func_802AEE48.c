#include "basetypes.h"

extern s32 D_8014D3E8;
extern s32 (*D_800D364C)(s32 arg0);
extern void func_802AE380(u8 *arg0);
extern s32 func_802AE5AC(s32);

typedef struct ReadWord {
    s32 word;
    u8 byte;
} ReadWord;

s32 func_802AEE48(void) {
    ReadWord first;
    s32 word;
    u32 value;

    first.word = 0;
    func_802AE380(&first.byte);
    value = 0;
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
                    if (D_800D364C != 0) {
                        value = D_800D364C(first.word);
                    }
                    func_802AE5AC(value >> 24);
                    if (D_8014D3E8 == 0) {
                        func_802AE5AC((value >> 16) & 0xFF);
                        if (D_8014D3E8 == 0) {
                            func_802AE5AC((value >> 8) & 0xFF);
                            if (D_8014D3E8 == 0) {
                                func_802AE5AC(value & 0xFF);
                            }
                        }
                    }
                    if (D_8014D3E8 == 0) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
