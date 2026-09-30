#ifndef SHARED_SHARED_FUNC_8027ADBC_S3_H
#define SHARED_SHARED_FUNC_8027ADBC_S3_H

#include "basetypes.h"
#include "func_8027adbc_s3_types.h"

typedef struct Shared_func_8027ADBC_S3 Shared_func_8027ADBC_S3;
struct Shared_func_8027ADBC_S3 {
    char pad0[0x8];
    Vec3 pos; /* +0x8: src/func_8027ADBC.c */
};
typedef char Shared_func_8027ADBC_S3_size_check[(sizeof(Shared_func_8027ADBC_S3) == 0x14) ? 1 : -1];

#endif
