#ifndef SHARED_SHARED_FUNC_8043DEDC_S4_H
#define SHARED_SHARED_FUNC_8043DEDC_S4_H

#include "basetypes.h"

typedef struct Shared_func_8043DEDC_S4 Shared_func_8043DEDC_S4;
struct Shared_func_8043DEDC_S4 {
    char pad0[0x20];
    s32 * unk20; /* +0x20: src/func_8043DEDC.c */
};
typedef char Shared_func_8043DEDC_S4_size_check[(sizeof(Shared_func_8043DEDC_S4) == 0x24) ? 1 : -1];

#endif
