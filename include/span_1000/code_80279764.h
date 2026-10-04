#ifndef UNBAKE_SPAN_1000_CODE_80279764_H
#define UNBAKE_SPAN_1000_CODE_80279764_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_80279B40_de;
typedef struct Actor_func_80279B40_de Actor_func_80279B40_de;

struct Actor_func_8027B428_de;
typedef struct Actor_func_8027B428_de Actor_func_8027B428_de;

struct Actor_func_8027DAD0_de;
typedef struct Actor_func_8027DAD0_de Actor_func_8027DAD0_de;

struct Actor_func_8027E784_de;
typedef struct Actor_func_8027E784_de Actor_func_8027E784_de;

struct Ground;
typedef struct Ground Ground;

struct Instance_func_8027E784_de;
typedef struct Instance_func_8027E784_de Instance_func_8027E784_de;

struct IntegerState5AC;
typedef struct IntegerState5AC IntegerState5AC;

struct ObjectLinks1BC;
typedef struct ObjectLinks1BC ObjectLinks1BC;

struct ObjectStateC4;
typedef struct ObjectStateC4 ObjectStateC4;

struct Parent;
typedef struct Parent Parent;

struct Shared_CollisionResult;
typedef struct Shared_CollisionResult Shared_CollisionResult;

struct Shared_Particle;
typedef struct Shared_Particle Shared_Particle;

struct Shared_ParticleInstance;
typedef struct Shared_ParticleInstance Shared_ParticleInstance;

struct Shared_ParticleOwner;
typedef struct Shared_ParticleOwner Shared_ParticleOwner;

struct Shared_ParticleTarget;
typedef struct Shared_ParticleTarget Shared_ParticleTarget;

struct WeightedTable;
typedef struct WeightedTable WeightedTable;

struct func_8027C324_S1;
typedef struct func_8027C324_S1 func_8027C324_S1;

union func_8027C324_S1_U118;
typedef union func_8027C324_S1_U118 func_8027C324_S1_U118;

struct func_8027C5A0_S1;
typedef struct func_8027C5A0_S1 func_8027C5A0_S1;

union func_8027C5A0_S1_U118;
typedef union func_8027C5A0_S1_U118 func_8027C5A0_S1_U118;

struct func_8027C808_S1;
typedef struct func_8027C808_S1 func_8027C808_S1;

struct func_8027D950_S1;
typedef struct func_8027D950_S1 func_8027D950_S1;

struct func_8027D950_S2;
typedef struct func_8027D950_S2 func_8027D950_S2;

struct func_8027DAA4_S1;
typedef struct func_8027DAA4_S1 func_8027DAA4_S1;

struct func_8027EB00_S2;
typedef struct func_8027EB00_S2 func_8027EB00_S2;

struct ActorDef;
struct ActorDef {
    s32 flags;
    char pad4[0x10];
    s32 large;
    char pad18[0xC];
    func_80232C78_S4 *size;
};
struct Actor_func_80279B40_de;
struct Actor_func_80279B40_de {
    char pad0[8];
    Vec3 position;
    char pad14[8];
    Vec3 facing;
    char pad28[0x34];
    s32 flags;
    char pad60[0xB8];
    func_8021CD70_S3 *def;
    char pad11C[0x10];
    void *owner;
    s32 unk130;
    s32 unk134;
    char pad138[0x48];
    f32 offsetX;
    f32 offsetY;
    s32 angle;
};
struct Actor_func_8027B428_de;
struct Shape_func_8021A2D4_de_2;
struct Actor_func_8027B428_de {
    char pad0[4];
    u16 type;
    char pad6[0x12];
    struct Shape_func_8021A2D4_de_2 *descriptor;
    char pad1C[0x110];
    func_8024E8F0_S1 *owner;
};
struct Parent;
struct Parent {
    char pad0[8];
    Vec3 position;
    char pad14[0x60];
    f32 transform[16];
    void *skeleton;
    char padB8[0x48];
    s32 flags;
    char pad104[0xD4];
    func_80228774_S5 *model;
};
struct Actor_func_8027DAD0_de;
struct Parent;
struct Actor_func_8027DAD0_de {
    char pad0[4];
    u16 type;
    char pad6[2];
    Vec3 position;
    s32 unk14;
    char pad18[4];
    Vec3 heading;
    char pad28[0x28];
    Vec3 offset;
    s32 flags;
    char pad60[0xCC];
    struct Parent *owner;
    char pad130[4];
    struct Parent *parent;
    char pad138[0x3C];
    Vec3 facing;
    char pad180[0x51];
    s8 bone;
};
struct Instance_func_8027E784_de;
struct Instance_func_8027E784_de {
    char pad0[8];
    Vec3 position;
    char pad14[8];
    Vec3 velocity;
    char pad28[0x28];
};
struct ActorDef;
struct Actor_func_8027E784_de;
struct Actor_func_8027E784_de {
    Instance_func_8027E784_de instance;
    char pad50[0xC8];
    struct ActorDef *def;
    char pad11C[0x24];
    f32 damage;
    char pad144[8];
    s16 health;
    char pad14E[0xA];
    f32 radius;
};
struct Ground;
struct Ground {
    s32 found;
    char pad4[8];
    f32 height;
    char pad10[0xE0];
    Vec3 normal;
};
struct IntegerState5AC;
struct IntegerState5AC {
    char pad0[0x59C];
    s32 unk_59C;
    char pad59C[0x5A4 - 0x59C - sizeof(s32)];
    s32 unk_5A4;
    char pad5A4[0x5A8 - 0x5A4 - sizeof(s32)];
    s32 unk_5A8;
};
struct ObjectLinks1BC;
struct ObjectLinks1BC {
    char pad0[0x4];
    u16 unk_4;
    char pad4[0x118 - 0x4 - sizeof(u16)];
    char * unk_118;
    char pad118[0x12C - 0x118 - sizeof(char*)];
    char * unk_12C;
    char pad12C[0x1B8 - 0x12C - sizeof(char*)];
    s8 unk_1B8;
    char pad1B8[0x1B9 - 0x1B8 - sizeof(s8)];
    s8 unk_1B9;
    char pad1B9[0x1BA - 0x1B9 - sizeof(s8)];
    s8 unk_1BA;
};
struct ObjectStateC4;
struct ObjectStateC4 {
    unsigned char padding_0[190];
    u16 unk_BE;
    unsigned char padding_C0[2];
    u16 unk_C2;
};
struct Shared_CollisionResult;
struct Shared_CollisionResult {
    u8 *unk0;
    char pad4[0x4];
    char unk8[0x80];
    s32 unk88;
    char pad8C[0x4];
    char unk90[0xC];
    s32 unk9C;
    char unkA0[0x10];
    s32 unkB0;
    s32 unkB4;
    char unkB8[0xC];
    s32 unkC4;
    char unkC8[0x10];
    Vec3 unkD8;
};
struct Shared_ParticleColors;
struct Shared_ParticleColors {
    char pad0[0x6];
    u8 prim[3];
    u8 env[3];
};
struct Shared_ParticleFade;
struct Shared_ParticleFade {
    char pad0[0x5];
    s8 rangeMode;
    char pad6[0x3];
    s8 fadeIn;
    s8 fadeOut;
    char padB[0x3];
    s8 unkE;
};
struct Shared_ParticleColors;
struct Shared_ParticleDesc;
struct Shared_ParticleFade;
struct Shared_ParticleDesc {
    s32 flags;
    char pad4[0x4];
    s8 animMode;
    char pad9[0x7];
    s16 unk10;
    char pad12[0x22];
    struct Shared_ParticleColors *colors;
    struct Shared_ParticleFade *fade;
};
struct Shared_ParticleInstance;
struct Shared_ParticleInstance {
    char pad0[0x4];
    u16 type;
    char pad6[0x2];
    Vec3 pos;
    s32 unk14;
    char pad18[0x4];
    Vec3 velocity;
    char pad28[0x10];
    s32 unk38;
    char pad3C[0x14];
};
struct Shared_ParticleOwner;
struct Shared_ParticleOwner {
    u8 kind;
    char pad1[0xFF];
    s32 flags;
    char pad104[0xD4];
    Player_func_802676EC_de *state;
};
struct Shared_ParticleTarget;
struct Shared_ParticleTarget {
    char pad0[0x100];
    s32 flags;
    char pad104[0x6C];
    s32 unk170;
    s32 unk174;
    char pad178[0x2C];
    s8 unk1A4;
};
struct Shared_Particle;
struct Shared_ParticleDesc;
struct Shared_ParticleOwner;
struct Shared_ParticleTarget;
struct Shared_Particle {
    Shared_ParticleInstance inst;
    char pad50[0xC];
    s32 flags;
    Matrix mtx[2];
    char padE0[0x38];
    struct Shared_ParticleDesc *desc;
    s32 model;
    char pad120[0xC];
    struct Shared_ParticleOwner *owner;
    char pad130[0x4];
    struct Shared_ParticleTarget *target;
    char pad138[0x8];
    f32 time;
    f32 frame;
    f32 unk148;
    s16 life;
    s8 unk14E;
    s8 unk14F;
    Vec3 size;
    Vec3 growth;
    Vec3 prevPos;
    Vec3 unk174;
    Vec3 rot;
    Vec3 rotSpeed;
    f32 alpha;
    char pad19C[0x18];
    s32 unk1B4;
    char pad1B8[0x1];
    s8 unk1B9;
    char pad1BA[0x2];
    f32 unk1BC;
    char pad1C0[0x10];
    s8 unk1D0;
    s8 unk1D1;
    u8 prim[3];
    u8 env[3];
    u8 opacity;
};
struct WeightedTable;
struct WeightedTable {
    s16 count;
    s16 entries[1][2];
};
union func_8027C324_S1_U118;
union func_8027C324_S1_U118 {
    s32 * v0;
    void * v1;
};
struct func_8027C324_S1;
struct func_8027C324_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    func_8027C324_S1_U118 unk118;
    char pad118[0x12C - 0x118 - sizeof(func_8027C324_S1_U118)];
    void * unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
    char pad134[0x18C - 0x134 - sizeof(s32)];
    char unk18C;
    char pad18C[0x1B9 - 0x18C - sizeof(char)];
    s8 unk1B9;
    char pad1B9[0x1C4 - 0x1B9 - sizeof(s8)];
    s32 unk1C4;
};
union func_8027C5A0_S1_U118;
union func_8027C5A0_S1_U118 {
    void * v0;
    s32 * v1;
};
struct func_8027C5A0_S1;
struct func_8027C5A0_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    func_8027C5A0_S1_U118 unk118;
    char pad118[0x12C - 0x118 - sizeof(func_8027C5A0_S1_U118)];
    void * unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
};
struct func_8027C808_S1;
struct func_8027C808_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    func_8027C5A0_S1_U118 unk118;
    char pad118[0x12C - 0x118 - sizeof(func_8027C5A0_S1_U118)];
    void * unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
    char pad134[0x18C - 0x134 - sizeof(s32)];
    char unk18C;
    char pad18C[0x1BA - 0x18C - sizeof(char)];
    s8 unk1BA;
    char pad1BA[0x1C4 - 0x1BA - sizeof(s8)];
    s32 unk1C4;
};
struct func_8027D950_S1;
struct func_8027D950_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    s32 unk10;
    char pad10[0x1D0 - 0x10 - sizeof(s32)];
    func_80209DAC_S2_U93 unk1D0;
};
struct func_8027D950_S2;
struct func_8027D950_S2 {
    char pad0[0xE54];
    char unkE54;
    char padE54[0xE94 - 0xE54 - sizeof(char)];
    char unkE94;
};
struct func_8027DAA4_S1;
struct func_8027DAA4_S1 {
    char pad0[0x160];
    char unk160;
};
struct func_8027EB00_S2;
struct func_8027EB00_S2 {
    char pad0[0x8];
    char unk8;
    char pad8[0x110 - 0x8 - sizeof(char)];
    s32 unk110;
    s32 unk114;
    void *unk118;
};
extern s16 func_80279798_de(s16 *arg0);
extern void func_80279990_de(void *arg0);
extern void func_8027E784_de(Actor_func_8027E784_de *actor);
#endif
