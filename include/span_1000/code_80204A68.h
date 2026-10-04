#ifndef UNBAKE_SPAN_1000_CODE_80204A68_H
#define UNBAKE_SPAN_1000_CODE_80204A68_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Access_s32_40;
typedef struct Access_s32_40 Access_s32_40;

struct Actor_func_80204FC4_de;
typedef struct Actor_func_80204FC4_de Actor_func_80204FC4_de;

struct BreakableHitContext;
typedef struct BreakableHitContext BreakableHitContext;

struct Cell;
typedef struct Cell Cell;

struct Damage;
typedef struct Damage Damage;

struct Damageable;
typedef struct Damageable Damageable;

struct Health;
typedef struct Health Health;

struct Hit;
typedef struct Hit Hit;

struct ObjectStateCC;
typedef struct ObjectStateCC ObjectStateCC;

struct func_80204C68_S1;
typedef struct func_80204C68_S1 func_80204C68_S1;

struct func_80204C68_S2;
typedef struct func_80204C68_S2 func_80204C68_S2;

struct func_80204F78_S1;
typedef struct func_80204F78_S1 func_80204F78_S1;

struct func_8020520C_S1;
typedef struct func_8020520C_S1 func_8020520C_S1;

struct func_8020520C_S2;
typedef struct func_8020520C_S2 func_8020520C_S2;

struct func_80205494_S1;
typedef struct func_80205494_S1 func_80205494_S1;

struct func_80205628_S1;
typedef struct func_80205628_S1 func_80205628_S1;

struct func_80205628_S2;
typedef struct func_80205628_S2 func_80205628_S2;

struct Access_s32_40;
struct Access_s32_40 {
    unsigned char padding_0[64];
    int field;
};
struct Actor_func_80204FC4_de;
struct Actor_func_80204FC4_de {
    char pad0[0xE6];
    signed char always;
    char padE7[0x100 - 0xE7];
    int flags;
    float range;
    short x;
    short y;
    short level;
    char pad10E[0x12C - 0x10E];
    short altLevel;
    char pad12E[0x134 - 0x12E];
    float altRange;
};
struct BreakableHitContext;
struct BreakableHitContext {
    char pad0[0x8];
    Triple unk_8;
    char pad8[0x18 - 0x8 - sizeof(Triple)];
    char * unk_18;
    char pad18[0xE6 - 0x18 - sizeof(char*)];
    s8 unk_E6;
    char padE6[0x100 - 0xE6 - sizeof(s8)];
    s32 unk_100;
    char pad100[0x104 - 0x100 - sizeof(s32)];
    f32 unk_104;
    char pad104[0x108 - 0x104 - sizeof(f32)];
    s16 unk_108;
    char pad108[0x10A - 0x108 - sizeof(s16)];
    s16 unk_10A;
    char pad10A[0x10C - 0x10A - sizeof(s16)];
    s16 unk_10C;
    char pad10C[0x12C - 0x10C - sizeof(s16)];
    s16 unk_12C;
    char pad12C[0x134 - 0x12C - sizeof(s16)];
    f32 unk_134;
};
struct Cell;
struct Cell {
    char pad0[0xCA];
    unsigned char pos;
    signed char open;
};
struct Damage;
struct Damage {
    s32 flags;
    u8 pad4[0x44];
    u8 model[4];
    u8 time[4];
    u8 threshold[4];
};
struct Descriptor;
struct Descriptor {
    u8 pad0[0x14];
    Damage damage;
};
struct Damageable;
struct Descriptor;
struct Damageable {
    u8 pad0;
    u8 stage;
    u8 pad2[0x16];
    struct Descriptor *desc;
};
struct Health;
struct Health {
    u8 pad0[4];
    s32 health;
    s32 maxHealth;
    u8 padC[0x118];
    s32 model;
    s32 time;
};
struct Hit;
struct Hit {
    u8 pad0[4];
    s32 damage;
    u8 pad8[4];
    u32 flags;
};
struct ObjectStateCC;
struct ObjectStateCC {
    char pad0[0xCA];
    s8 unk_CA;
    char padCA[0xCB - 0xCA - sizeof(s8)];
    s8 unk_CB;
};
struct func_80204C68_S1;
struct func_80204C68_S1 {
    char pad0[0x64];
    s32 unk64;
};
struct func_80204C68_S2;
struct func_80204C68_S2 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x100 - 0x8 - sizeof(Triple)];
    s32 unk100;
};
struct func_80204F78_S1;
struct func_80204F78_S1 {
    char pad0[0x40];
    float unk40;
    char pad40[0x64 - 0x40 - sizeof(float)];
    float unk64;
};
struct func_8020520C_S1;
struct func_8020520C_S1 {
    char pad0[0x2C];
    void * unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void * unk108;
    char pad108[0x10C - 0x108 - sizeof(void*)];
    void * unk10C;
    char pad10C[0x110 - 0x10C - sizeof(void*)];
    void * unk110;
    char pad110[0x124 - 0x110 - sizeof(void*)];
    int unk124;
    char pad124[0x128 - 0x124 - sizeof(int)];
    int unk128;
};
struct func_8020520C_S2;
struct func_8020520C_S2 {
    char pad0[0x3];
    signed char unk3;
};
struct func_80205494_S1;
struct func_80205494_S1 {
    char pad0[0x18];
    char * unk18;
    char pad18[0x100 - 0x18 - sizeof(char*)];
    unsigned int unk100;
};
struct func_80205628_S1;
struct func_80205628_S1 {
    char pad0[0xB4];
    s32 unkB4;
    char padB4[0x17C - 0xB4 - sizeof(s32)];
    s32 unk17C;
};
struct func_80205628_S2;
struct func_80205628_S2 {
    char pad0[0x124];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
};
extern void func_80204BB4_de(void *arg0, void *arg1);
extern void func_80204DFC_de(void *arg0);
extern void func_80204E48_de(void *arg0);
extern void func_80204F78_de(void *unused, char *object, float value);
extern void func_8020520C_de(void *source, void *dest);
extern int func_802052F8_de(void *arg0);
extern int func_80205314_de(void *arg0);
extern void func_80205494_de(void *arg0, void *arg1);
extern int func_802054D0_de(void *object);
extern void func_802055EC_de(void *arg0, void *arg1);
extern void func_80205628_de(void *arg0, void *arg1, void *arg2);
extern void func_802056D0_de(void *arg0);
extern unsigned int func_80205700_de(void *object);
#endif
