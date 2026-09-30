#ifndef SHARED_SHARED_FUNC_80261EB8_S1_H
#define SHARED_SHARED_FUNC_80261EB8_S1_H

#include "basetypes.h"

typedef struct Shared_func_80261EB8_S1 Shared_func_80261EB8_S1;
struct Shared_func_80261EB8_S1 {
    f32 unk0; /* +0x0: src/func_80261EB8.c */
    char pad4[0x4];
    s16 unk8; /* +0x8: src/func_80261EB8.c */
    char padA[0x2];
    s32 unkC; /* +0xC: src/func_80261EB8.c */
    s32 ** unk10; /* +0x10: src/func_80261EB8.c */
};
typedef char Shared_func_80261EB8_S1_size_check[(sizeof(Shared_func_80261EB8_S1) == 0x14) ? 1 : -1];

#endif
