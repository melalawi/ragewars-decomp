#ifndef SHARED_SHARED_FUNC_80234FDC_S8_H
#define SHARED_SHARED_FUNC_80234FDC_S8_H

#include "basetypes.h"

typedef struct Shared_func_80234FDC_S8 Shared_func_80234FDC_S8;
struct Shared_func_80234FDC_S8 {
    char pad0[0x1C];
    s32 unk1C; /* +0x1C: src/func_80234FDC.c */
};
typedef char Shared_func_80234FDC_S8_size_check[(sizeof(Shared_func_80234FDC_S8) == 0x20) ? 1 : -1];

#endif
