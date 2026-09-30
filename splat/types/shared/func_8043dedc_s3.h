#ifndef SHARED_SHARED_FUNC_8043DEDC_S3_H
#define SHARED_SHARED_FUNC_8043DEDC_S3_H

#include "basetypes.h"

typedef struct Shared_func_8043DEDC_S3 Shared_func_8043DEDC_S3;
struct Shared_func_8043DEDC_S3 {
    char pad0[0x78];
    s8 unk78; /* +0x78: src/func_8043DEDC.c */
    char pad79[0x6];
    s8 unk7F; /* +0x7F: src/func_8043DEDC.c */
};
typedef char Shared_func_8043DEDC_S3_size_check[(sizeof(Shared_func_8043DEDC_S3) == 0x80) ? 1 : -1];

#endif
