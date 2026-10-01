#ifndef SHARED_SHARED_WEAPONMETADATA_H
#define SHARED_SHARED_WEAPONMETADATA_H

#include "basetypes.h"

typedef struct Shared_WeaponMetadata Shared_WeaponMetadata;
struct Shared_WeaponMetadata {
    char pad0[0x28];
    s16 unk28; /* +0x28: src/func_8020AA40.c */
};
typedef char Shared_WeaponMetadata_size_check[(sizeof(Shared_WeaponMetadata) == 0x2A) ? 1 : -1];

#endif
