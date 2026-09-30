#ifndef SHARED_SHARED_PLAYERSETTINGSRECORD_H
#define SHARED_SHARED_PLAYERSETTINGSRECORD_H

#include "basetypes.h"

typedef struct Shared_PlayerSettingsRecord Shared_PlayerSettingsRecord;
struct Shared_PlayerSettingsRecord {
    char pad0[0x80];
    s8 character; /* +0x80: src/func_8021B468.c */
    char pad81[0x14];
    u8 active; /* +0x95: src/func_8021B468.c */
};
typedef char Shared_PlayerSettingsRecord_size_check[(sizeof(Shared_PlayerSettingsRecord) == 0x96) ? 1 : -1];

#endif
