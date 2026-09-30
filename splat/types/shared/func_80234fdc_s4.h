#ifndef SHARED_SHARED_FUNC_80234FDC_S4_H
#define SHARED_SHARED_FUNC_80234FDC_S4_H

#include "basetypes.h"
#include "func_80234fdc_s4_types.h"

typedef struct Shared_func_80234FDC_S4 Shared_func_80234FDC_S4;
struct Shared_func_80234FDC_S4 {
    s32 unk0; /* +0x0: src/func_80234FDC.c */
    s32 unk4; /* +0x4: src/func_80234FDC.c */
    s32 unk8; /* +0x8: src/func_80234FDC.c */
    char padC[0x1223];
    u8 unk122F; /* +0x122F: src/func_80234FDC.c */
    char pad1230[0x590];
    Shared_func_80234FDC_S5 state; /* +0x17C0: src/func_80234FDC.c */
};
typedef char Shared_func_80234FDC_S4_size_check[(sizeof(Shared_func_80234FDC_S4) == 0x17C4) ? 1 : -1];

#endif
