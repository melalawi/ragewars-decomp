#ifndef SHARED_SHARED_FUNC_80234FDC_CALLBACK_H
#define SHARED_SHARED_FUNC_80234FDC_CALLBACK_H

#include "basetypes.h"

typedef struct Shared_Func_80234FDC_Callback Shared_Func_80234FDC_Callback;
struct Shared_Func_80234FDC_Callback {
    s32 (*fn)(s8 *); /* +0x0: src/func_80234FDC.c */
    s32 pad; /* +0x4: src/func_80234FDC.c */
};
typedef char Shared_Func_80234FDC_Callback_size_check[(sizeof(Shared_Func_80234FDC_Callback) == 0x8) ? 1 : -1];

#endif
