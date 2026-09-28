#include "basetypes.h"

extern s32 D_8014D3E8;
extern s32 func_802AE380(u8 *);

typedef struct ReadWord {
    s32 word;
    u8 byte;
} ReadWord;

s32 func_802AF1F0(void) {
    ReadWord first;
    ReadWord second;
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
                    func_802AE380(&second.byte);
                    if (D_8014D3E8 == 0) {
                        word = second.byte << 8;
                        func_802AE380(&second.byte);
                        if (D_8014D3E8 == 0) {
                            word |= second.byte;
                            func_802AE380(&second.byte);
                            word <<= 8;
                            if (D_8014D3E8 == 0) {
                                word |= second.byte;
                                func_802AE380(&second.byte);
                                word <<= 8;
                                if (D_8014D3E8 == 0) {
                                    word |= second.byte;
                                    second.word = word;
                                    result = 1;
                                    *(s32 *)first.word = second.word;
                                }
                            }
                            goto block_9;
                        }
                    }
                } else {
                    goto block_9;
                }
            }
block_9:
            ;
        }
    }
    return result;
}
