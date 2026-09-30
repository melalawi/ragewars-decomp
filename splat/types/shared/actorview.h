#ifndef SHARED_SHARED_ACTORVIEW_H
#define SHARED_SHARED_ACTORVIEW_H

#include "basetypes.h"
#include "actorview_types.h"

typedef struct Shared_ActorView Shared_ActorView;
struct Shared_ActorView {
    char pad0[0x8];
    Shared_SpawnPosition position; /* +0x8: src/func_8021B468.c */
    char pad14[0x4];
    void * model; /* +0x18: src/func_8021B468.c */
    char pad1C[0xC8];
    u16 kind; /* +0xE4: src/func_8021B468.c */
    char padE6[0x10A];
    s32 frameValue; /* +0x1F0: src/func_8021B468.c */
    char pad1F4[0xF4];
    char weapon[368]; /* +0x2E8: src/func_8021B468.c */
    char ammoData[376]; /* +0x458: src/func_8021B468.c */
    s32 actorState; /* +0x5D0: src/func_8021B468.c */
    u32 mode; /* +0x5D4: src/func_8021B468.c */
    struct Shared_ControlView * controls; /* +0x5D8: src/func_8021B468.c */
    s32 message; /* +0x5DC: src/func_8021B468.c */
    s32 state; /* +0x5E0: src/func_8021B468.c */
    char pad5E4[0x10];
    s16 ammo[3]; /* +0x5F4: src/func_8021B468.c */
    char pad5FA[0x56];
    s16 action; /* +0x650: src/func_8021B468.c */
    char pad652[0x46];
    s32 controller; /* +0x698: src/func_8021B468.c */
    char pad69C[0x7C];
    f32 speed; /* +0x718: src/func_8021B468.c */
    char pad71C[0xABC];
    s32 stun; /* +0x11D8: src/func_8021B468.c */
    char pad11DC[0x8];
    s32 pending; /* +0x11E4: src/func_8021B468.c */
    char pad11E8[0x14];
    s32 field11FC; /* +0x11FC: src/func_8021B468.c */
    char pad1200[0x18];
    s32 field1218; /* +0x1218: src/func_8021B468.c */
    s32 projectileBase; /* +0x121C: src/func_8021B468.c */
    s32 projectileIndex; /* +0x1220: src/func_8021B468.c */
    void * projectiles[2]; /* +0x1224: src/func_8021B468.c */
    s32 field122C; /* +0x122C: src/func_8021B468.c */
    s32 field1230; /* +0x1230: src/func_8021B468.c */
    s32 field1234; /* +0x1234: src/func_8021B468.c */
    s32 field1238; /* +0x1238: src/func_8021B468.c */
    char pad123C[0x4];
    s32 field1240; /* +0x1240: src/func_8021B468.c */
    char pad1244[0x180];
    u8 specialState; /* +0x13C4: src/func_8021B468.c */
    char pad13C5[0x3];
    s32 special; /* +0x13C8: src/func_8021B468.c */
    char pad13CC[0x14];
    void * parent; /* +0x13E0: src/func_8021B468.c */
    char pad13E4[0x2FC];
    struct Shared_ActorView * next; /* +0x16E0: src/func_8021B468.c */
};
typedef char Shared_ActorView_size_check[(sizeof(Shared_ActorView) == 0x16E4) ? 1 : -1];

#endif
