#ifndef SHARED_SHARED_SETTINGS_H
#define SHARED_SHARED_SETTINGS_H

#include "basetypes.h"
#include "settings_types.h"
#include "matchrules.h"

typedef struct Shared_Settings Shared_Settings;
struct Shared_Settings {
    s32 flags; /* +0x0: src/func_8027ED40.c */
    char pad4[0x9];
    u8 trialKind; /* +0xD: src/func_8042BD40.c, src/func_8021EED8.c */
    char padE[0x8];
    u8 hudFade; /* +0x16: src/func_8021EED8.c */
    char pad17[0x6];
    u8 hudShown; /* +0x1D: src/func_8021EED8.c */
    char pad1E[0xB2];
    Shared_RosterEntry roster[8]; /* +0xD0: src/func_8042BD40.c */
    char pad580[0x1];
    u8 language; /* +0x581: src/func_8042BD40.c */
    char pad582[0x32];
    s32 state; /* +0x5B4: src/func_8021EED8.c */
    char pad5B8[0x20];
    Shared_MatchRules rules; /* +0x5D8: src/func_8021EED8.c */
    char pad674[0xC];
    s32 humanWon; /* +0x680: src/func_8042BD40.c */
};
typedef char Shared_Settings_size_check[(sizeof(Shared_Settings) == 0x684) ? 1 : -1];

#endif
