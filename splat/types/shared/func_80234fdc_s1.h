#ifndef SHARED_SHARED_FUNC_80234FDC_S1_H
#define SHARED_SHARED_FUNC_80234FDC_S1_H

#include "basetypes.h"

typedef struct Shared_func_80234FDC_S1 Shared_func_80234FDC_S1;
struct Shared_func_80234FDC_S1 {
    char pad0[0x5DC];
    s32 unk5DC; /* +0x5DC: src/func_80234FDC.c */
    char pad5E0[0x84];
    s32 unk664; /* +0x664: src/func_80234FDC.c */
    char pad668[0x60];
    f32 unk6C8; /* +0x6C8: src/func_80234FDC.c */
    char pad6CC[0x1014];
    void * unk16E0; /* +0x16E0: src/func_80234FDC.c */
};
typedef char Shared_func_80234FDC_S1_size_check[(sizeof(Shared_func_80234FDC_S1) == 0x16E4) ? 1 : -1];

#endif
