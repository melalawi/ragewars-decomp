#ifndef SHARED_SHARED_WEAPONWORLD_H
#define SHARED_SHARED_WEAPONWORLD_H

#include "basetypes.h"

typedef struct Shared_WeaponWorld Shared_WeaponWorld;
struct Shared_WeaponWorld {
    char pad0[0x138];
    struct Shared_WeaponSlot * unk138; /* +0x138: src/func_8020AA40.c */
    char pad13C[0x4];
    s32 unk140; /* +0x140: src/func_8020AA40.c */
};
typedef char Shared_WeaponWorld_size_check[(sizeof(Shared_WeaponWorld) == 0x144) ? 1 : -1];

#endif
