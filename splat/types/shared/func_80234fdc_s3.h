#ifndef SHARED_SHARED_FUNC_80234FDC_S3_H
#define SHARED_SHARED_FUNC_80234FDC_S3_H

#include "basetypes.h"
#include "func_80234fdc_s3_types.h"

typedef struct Shared_func_80234FDC_S3 Shared_func_80234FDC_S3;
struct Shared_func_80234FDC_S3 {
    char pad0[0x400];
    Shared_func_80234FDC_S6 unk400[2]; /* +0x400: src/func_80234FDC.c */
};
typedef char Shared_func_80234FDC_S3_size_check[(sizeof(Shared_func_80234FDC_S3) == 0x440) ? 1 : -1];

#endif
