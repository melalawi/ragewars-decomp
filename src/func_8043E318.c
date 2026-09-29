#include "basetypes.h"

/** Runs func_8044252C on a byte in arg1->unk1C->unk5D8[0x83] and writes the result back into that byte. */

extern s32 func_8044252C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

typedef struct func_8043E318_S1 func_8043E318_S1;
typedef struct func_8043E318_S2 func_8043E318_S2;
struct func_8043E318_S1 {
    char pad0[0x1C];
    void* unk1C;
};
struct func_8043E318_S2 {
    char pad0[0x5D8];
    u8* unk5D8;
};

s32 func_8043E318(void *arg0, void *arg1) {
    void *p;
    u8 *base;
    u8 *bytep;
    s32 result;

    p = ((func_8043E318_S1 *)(arg1))->unk1C;
    base = ((func_8043E318_S2 *)(p))->unk5D8;
    bytep = base + 0x83;
    result = func_8044252C(arg1, *bytep, 1, 0, 0xA, 0);
    *bytep = (u8)result;
    return 0;
}
