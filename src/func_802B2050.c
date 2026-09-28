#include "basetypes.h"

extern s32 D_8014D3E8;
extern s32 func_802AE380(u8 *);
extern s32 func_802C2260(s32);
extern void func_802C23E0(void);
extern void func_802C2100(u32, u32);

typedef struct ReadWord {
    s32 word;
    u8 byte;
} ReadWord;

s32 func_802B2050(void) {
    ReadWord first;
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
                    if (word != 0) {
                        func_802C2260(1);
                        func_802C23E0();
                        func_802C2100(0x80000000, 0x800000);
                        ((void (*)(void))word)();
                    }
                    result = 1;
                }
            }
        }
    }
    return result;
}
