#ifndef MATCHKIT_SHARED_SHAREDPLAYER_H
#define MATCHKIT_SHARED_SHAREDPLAYER_H

#include "basetypes.h"

typedef struct SharedPlayer SharedPlayer;
struct SharedPlayer {
    char pad0[0x5D8];
    void * unk5D8; /* +0x5D8: src/func_8022C54C.c */
    void * unk5DC; /* +0x5DC: src/func_8022A37C.c, src/func_8022A624.c */
    char pad5E0[0x4];
    s32 unk5E4; /* +0x5E4: src/func_8023333C.c */
    char pad5E8[0xC];
    s16 unk5F4; /* +0x5F4: src/func_8022BEF4.c */
    s16 unk5F6; /* +0x5F6: src/func_8022BEF4.c */
    s16 unk5F8; /* +0x5F8: src/func_8022BEF4.c */
    char pad5FA[0x34];
    s16 unk62E; /* +0x62E: src/func_8023333C.c */
    char pad630[0x20];
    u16 unk650; /* +0x650: src/func_8022BEF4.c */
    char pad652[0x1E];
    f32 unk670; /* +0x670: src/func_8022BEF4.c */
    char pad674[0x38];
    s32 unk6AC; /* +0x6AC: src/func_8023333C.c */
    char pad6B0[0xC0];
    s16 unk770; /* +0x770: src/func_8023333C.c */
    char pad772[0x9A];
    s32 unk80C; /* +0x80C: src/func_8022BEF4.c */
    char pad810[0x3C];
    s32 unk84C; /* +0x84C: src/func_8022BEF4.c */
    char pad850[0xE90];
    void * unk16E0; /* +0x16E0: src/func_8022A37C.c, src/func_8022A624.c, src/func_8022C54C.c */
};
typedef char SharedPlayer_size_check[(sizeof(SharedPlayer) == 0x16E4) ? 1 : -1];

#endif
