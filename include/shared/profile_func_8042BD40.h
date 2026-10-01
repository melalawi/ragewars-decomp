#ifndef SHARED_SHARED_PROFILE_FUNC_8042BD40_H
#define SHARED_SHARED_PROFILE_FUNC_8042BD40_H

#include "basetypes.h"

typedef struct Shared_Profile_func_8042BD40 Shared_Profile_func_8042BD40;
struct Shared_Profile_func_8042BD40 {
    char pad0[0xD];
    s8 present; /* +0xD: src/func_8042BD40.c */
    s8 locked; /* +0xE: src/func_8042BD40.c */
    char padF[0x181];
};
typedef char Shared_Profile_func_8042BD40_size_check[(sizeof(Shared_Profile_func_8042BD40) == 0x190) ? 1 : -1];

#endif
