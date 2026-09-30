#ifndef SHARED_SHARED_FUNC_8027ADBC_S2_H
#define SHARED_SHARED_FUNC_8027ADBC_S2_H

#include "basetypes.h"
#include "func_8027adbc_s2_types.h"

typedef struct Shared_func_8027ADBC_S2 Shared_func_8027ADBC_S2;
struct Shared_func_8027ADBC_S2 {
    char pad0[0x8];
    Vec3 pos; /* +0x8: src/func_8027ADBC.c */
    char pad14[0x5C];
    f32 unk70; /* +0x70: src/func_8027ADBC.c */
    char pad74[0x166C];
    void * unk16E0; /* +0x16E0: src/func_8027ADBC.c */
};
typedef char Shared_func_8027ADBC_S2_size_check[(sizeof(Shared_func_8027ADBC_S2) == 0x16E4) ? 1 : -1];

#endif
