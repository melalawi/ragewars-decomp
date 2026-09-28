#include "basetypes.h"

typedef struct BitReader {
    u8 *data;
    s32 bitPos;
} BitReader;

extern s32 func_80263174(BitReader *, s32);

s32 func_8026310C(BitReader *arg0, s32 arg1) {
    s32 val;
    s32 i;
    s32 mask;

    val = func_80263174(arg0, arg1);
    mask = 1 << (arg1 - 1);
    if (val & mask) {
        i = arg1;
        if (arg1 < 0x20) {
            do {
                val |= 1 << i;
                i += 1;
            } while (i < 0x20);
        }
    }
    return val;
}
