/* Reads two big-endian words from the port, passes 0x80100000 and the first word to func_802AE834, and when its output equals the second word stores 1, 0x80100000 and the first word into D_800D3640..D_800D3648 and returns 1. Adapted from func_802AF544, with the read address fixed at 0x80100000 through an addr local, the returned word compared against the second word, and the three global stores added. */
#include "basetypes.h"

extern s32 D_8014D3E8;
extern s32 D_800D3640;
extern s32 D_800D3644;
extern s32 D_800D3648;
extern s32 func_802AE380(u8 *);
extern void func_802AE834(s32, s32, void *);

typedef struct ReadWord {
    s32 word;
    u8 byte;
} ReadWord;

s32 func_802AF7F8(void) {
    ReadWord first;
    ReadWord second;
    s32 word;
    s32 var_s2;
    s32 output;
    s32 addr;

    func_802AE380(&first.byte);
    var_s2 = 0;
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
                                    addr = 0x80100000;
                                    func_802AE834(addr, first.word, &output);
                                    if (D_8014D3E8 == 0 && second.word == output) {
                                        D_800D3640 = 1;
                                        var_s2 = 1;
                                        D_800D3644 = 0x80100000;
                                        D_800D3648 = first.word;
                                    }
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
    return var_s2;
}
