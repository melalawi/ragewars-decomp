#ifndef SHARED_SHARED_WEAPONSLOT_H
#define SHARED_SHARED_WEAPONSLOT_H

#include "basetypes.h"

typedef struct Shared_WeaponSlot Shared_WeaponSlot;
struct Shared_WeaponSlot {
    char pad0[0x8];
    char unk8; /* +0x8: src/func_8020AA40.c */
    char pad9[0xF];
    struct Shared_WeaponMetadata * unk18; /* +0x18: src/func_8020AA40.c */
    char pad1C[0xC8];
    u16 unkE4; /* +0xE4: src/func_8020AA40.c */
    char padE6[0x2];
};
typedef char Shared_WeaponSlot_size_check[(sizeof(Shared_WeaponSlot) == 0xE8) ? 1 : -1];

#endif
