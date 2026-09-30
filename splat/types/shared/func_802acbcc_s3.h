#ifndef SHARED_SHARED_FUNC_802ACBCC_S3_H
#define SHARED_SHARED_FUNC_802ACBCC_S3_H

#include "basetypes.h"

typedef struct Shared_func_802ACBCC_S3 Shared_func_802ACBCC_S3;
struct Shared_func_802ACBCC_S3 {
    char pad0[0xC];
    s16 unkC; /* +0xC: src/func_802ACBCC.c */
};
typedef char Shared_func_802ACBCC_S3_size_check[(sizeof(Shared_func_802ACBCC_S3) == 0xE) ? 1 : -1];

#endif
