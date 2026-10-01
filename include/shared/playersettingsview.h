#ifndef SHARED_SHARED_PLAYERSETTINGSVIEW_H
#define SHARED_SHARED_PLAYERSETTINGSVIEW_H

#include "basetypes.h"

typedef struct Shared_PlayerSettingsView Shared_PlayerSettingsView;
struct Shared_PlayerSettingsView {
    char pad0[0x80];
    s8 character; /* +0x80: src/func_8021B468.c */
    char pad81[0x14];
    u8 active; /* +0x95: src/func_8021B468.c */
    char pad96[0x46A];
    s32 effect; /* +0x500: src/func_8021B468.c */
    char pad504[0xA0];
    s32 state; /* +0x5A4: src/func_8021B468.c */
};
typedef char Shared_PlayerSettingsView_size_check[(sizeof(Shared_PlayerSettingsView) == 0x5A8) ? 1 : -1];

#endif
