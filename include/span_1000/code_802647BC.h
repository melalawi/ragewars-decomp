#ifndef UNBAKE_SPAN_1000_CODE_802647BC_H
#define UNBAKE_SPAN_1000_CODE_802647BC_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ActorList;
typedef struct ActorList ActorList;

struct Actor_func_80264B8C_de;
typedef struct Actor_func_80264B8C_de Actor_func_80264B8C_de;

struct Curve_func_80264EE0_de;
typedef struct Curve_func_80264EE0_de Curve_func_80264EE0_de;

struct Player_func_80264EE0_de;
typedef struct Player_func_80264EE0_de Player_func_80264EE0_de;

struct Snapshot;
typedef struct Snapshot Snapshot;

struct Snapshot_func_80264CE0_de;
typedef struct Snapshot_func_80264CE0_de Snapshot_func_80264CE0_de;

struct func_80264A40_S1;
typedef struct func_80264A40_S1 func_80264A40_S1;

struct func_80264E10_S1;
typedef struct func_80264E10_S1 func_80264E10_S1;

struct func_80264E10_S2;
typedef struct func_80264E10_S2 func_80264E10_S2;

struct Actor_func_80264B8C_de;
struct Actor_func_80264B8C_de {
    char pad0[8];
    Triple position;
    s32 id;
    char pad18[0x6C - 0x18];
    f32 field6C;
    char pad70[0x5E0 - 0x70];
    Block70 block;
    char pad650[0x16E8 - 0x650];
};
struct ActorList;
struct Actor_func_80264B8C_de;
struct ActorList {
    s32 pad0;
    struct Actor_func_80264B8C_de *actors;
    s32 count;
};
struct Curve_func_80264EE0_de;
struct Curve_func_80264EE0_de {
    int type;
    unsigned char samples[0x10];
    float length;
};
struct Curve_func_80264EE0_de;
struct Player_func_80264EE0_de;
struct Player_func_80264EE0_de {
    struct Curve_func_80264EE0_de *curve;
    float time;
    float value;
};
struct Snapshot;
struct Snapshot {
    s32 pad0;
    s32 mode;
    char pad8[0x8];
    Block70 blocks[8];
    Triple positions[8];
    f32 values[8];
    s32 handles[8];
};
struct Snapshot_func_80264CE0_de;
struct Snapshot_func_80264CE0_de {
    char pad0[0x10];
    Block70 blocks[8];
    Triple positions[8];
    f32 values[8];
    s32 handles[8];
};
struct func_80264A40_S1;
struct func_80264A40_S1 {
    char pad0[0x5EC];
    s32 unk5EC;
    char pad5EC[0x650 - 0x5EC - sizeof(s32)];
    u16 unk650;
};
struct func_80264E10_S1;
struct func_80264E10_S1 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};
struct func_80264E10_S2;
struct func_80264E10_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    u8 unk8;
    char pad8[0x9 - 0x8 - sizeof(u8)];
    u8 unk9;
    char pad9[0x14 - 0x9 - sizeof(u8)];
    f32 unk14;
};
extern void func_8026479C_de(void);
extern void func_8026480C_de(void);
extern void func_80264A20_de(void);
extern void func_80264B44_de(void);
extern void func_80264B7C_de(void);
extern void func_80264B8C_de(void);
extern void func_80264CB8_de(void);
extern void func_80264CE0_de(void);
extern s32 func_80264DF0_de(void *arg0);
#endif
