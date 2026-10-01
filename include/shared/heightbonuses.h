#ifndef SHARED_SHARED_HEIGHTBONUSES_H
#define SHARED_SHARED_HEIGHTBONUSES_H

#include "basetypes.h"

typedef struct Shared_HeightBonuses Shared_HeightBonuses;
struct Shared_HeightBonuses {
    f32 spawn; /* +0x0: src/func_8021B468.c */
    f32 projectile; /* +0x4: src/func_8021B468.c */
};
typedef char Shared_HeightBonuses_size_check[(sizeof(Shared_HeightBonuses) == 0x8) ? 1 : -1];

#endif
