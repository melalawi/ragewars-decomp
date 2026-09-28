#include "basetypes.h"

extern u8 D_800CB480;
extern s32 D_8014D3E8;
extern s32 func_802AE380(u8 *);
extern s32 func_802AE5AC(s32);
extern void func_802AEAB4(s32, s32);
extern s32 func_802C24F0(u8 *arg0);

typedef struct ReadWord {
    u32 word;
    u8 byte;
} ReadWord;

s32 func_802AEF84(void) {
    ReadWord first;
    u32 word;
    s32 result;
    u32 var_s0;
    u8 *data;

    result = 0;
    func_802AE380(&first.byte);
    data = &D_800CB480;
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
                    if (first.word >= (u32)func_802C24F0(data)) {
                        var_s0 = func_802C24F0(data);
                    } else {
                        var_s0 = first.word;
                    }
                    first.word = var_s0;
                    func_802AE5AC(var_s0 >> 24);
                    if (D_8014D3E8 == 0) {
                        func_802AE5AC((var_s0 >> 16) & 0xFF);
                        if (D_8014D3E8 == 0) {
                            func_802AE5AC((var_s0 >> 8) & 0xFF);
                            if (D_8014D3E8 == 0) {
                                func_802AE5AC(var_s0 & 0xFF);
                            }
                        }
                    }
                    func_802AEAB4(data, first.word);
                    if (D_8014D3E8 == 0) {
                        result = 1;
                    }
                }
            }
        }
    }
    return result;
}
