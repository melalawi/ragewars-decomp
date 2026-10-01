#ifndef SHARED_SHARED_SETTINGS_H
#define SHARED_SHARED_SETTINGS_H

#include "basetypes.h"
#include "settings_types.h"

typedef struct Shared_Settings Shared_Settings;
struct Shared_Settings {
    char pad0[0xD];
    u8 trialKind; /* +0xD: src/func_8042BD40.c */
    char padE[0xC2];
    Shared_RosterEntry roster[8]; /* +0xD0: src/func_8042BD40.c */
    char pad580[0x1];
    u8 language; /* +0x581: src/func_8042BD40.c */
    char pad582[0xFE];
    s32 humanWon; /* +0x680: src/func_8042BD40.c */
};
typedef char Shared_Settings_size_check[(sizeof(Shared_Settings) == 0x684) ? 1 : -1];

#endif
