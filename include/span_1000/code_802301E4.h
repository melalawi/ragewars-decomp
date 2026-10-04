#ifndef UNBAKE_SPAN_1000_CODE_802301E4_H
#define UNBAKE_SPAN_1000_CODE_802301E4_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Player_func_802327F4_de;
typedef struct Player_func_802327F4_de Player_func_802327F4_de;

struct Shared_Actor;
typedef struct Shared_Actor Shared_Actor;

struct WeaponAnimationState;
typedef struct WeaponAnimationState WeaponAnimationState;

struct WeaponFireState;
typedef struct WeaponFireState WeaponFireState;

struct func_80230620_S2;
typedef struct func_80230620_S2 func_80230620_S2;

struct func_80230620_S3;
typedef struct func_80230620_S3 func_80230620_S3;

struct func_80230620_S4;
typedef struct func_80230620_S4 func_80230620_S4;

struct func_80230BB8_S1;
typedef struct func_80230BB8_S1 func_80230BB8_S1;

struct func_80230BB8_S2;
typedef struct func_80230BB8_S2 func_80230BB8_S2;

struct func_80230BB8_S5;
typedef struct func_80230BB8_S5 func_80230BB8_S5;

struct func_8023292C_S1;
typedef struct func_8023292C_S1 func_8023292C_S1;

struct func_8023292C_S2;
typedef struct func_8023292C_S2 func_8023292C_S2;

struct func_8023292C_S3;
typedef struct func_8023292C_S3 func_8023292C_S3;

struct func_80232A38_S1;
typedef struct func_80232A38_S1 func_80232A38_S1;

struct Player_func_802327F4_de;
struct Player_func_802327F4_de {
    char pad0[0x5D4];
    int character;
    char pad5D8[4];
    void *hud;
    char pad5E0[0x62E - 0x5E0];
    short weapon;
    char pad630[0x11D8 - 0x630];
    float shield;
    char pad11DC[0x1450 - 0x11DC];
    int isBot;
};
struct Shared_Actor;
struct Shared_Entity;
struct Shared_Variant;
struct Shared_Actor {
    u8 pad0;
    u8 color;
    u8 pad1;
    s8 subtype;
    u8 pad2[20];
    struct Shared_Variant * variant;
    u8 pad3[152];
    s32 action;
    u8 pad4[0x100 - 0xB8];
    s32 weaponFlags;
    u8 pad104[0x140 - 0x104];
    Info effects[6];
    u8 pad5[8];
    struct Shared_Entity * entity;
};
struct WeaponAnimationState;
struct WeaponAnimationState {
    char pad0[0x168];
    f32 speed;
};
struct WeaponFireState;
struct WeaponFireState {
    char pad0[0x34];
    s8 variant;
    char pad35[0x124 - 0x35];
    union { f32 spinStep; s32 reset; };
    f32 spin;
    char pad12C[0x13C - 0x12C];
    s32 mode;
    char pad140[4];
    s32 rounds;
    char pad148[4];
    s32 triggered;
    s32 alternate;
};
struct func_80230620_S2;
struct func_80230620_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5D8 - 0x10 - sizeof(s32)];
    void * unk5D8;
    char pad5D8[0x62E - 0x5D8 - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk650;
    char pad650[0x698 - 0x650 - sizeof(s16)];
    void * unk698;
    char pad698[0x6B0 - 0x698 - sizeof(void*)];
    s32 unk6B0;
    char pad6B0[0x770 - 0x6B0 - sizeof(s32)];
    s16 unk770;
    char pad770[0x11FC - 0x770 - sizeof(s16)];
    s32 unk11FC;
};
struct func_80230620_S3;
struct func_80230620_S3 {
    char pad0[0xCB];
    s8 unkCB;
    char padCB[0x138 - 0xCB - sizeof(s8)];
    s32 unk138;
    char pad138[0x13C - 0x138 - sizeof(s32)];
    s32 unk13C;
};
struct func_80230620_S4;
struct func_80230620_S4 {
    char pad0[0x168];
    s32 unk168;
};
struct func_80230BB8_S1;
struct func_80230BB8_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x5DC - 0x8 - sizeof(s32)];
    char * unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(char*)];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    s32 unk6AC;
    char pad6AC[0x11B4 - 0x6AC - sizeof(s32)];
    s32 unk11B4;
    char pad11B4[0x11D8 - 0x11B4 - sizeof(s32)];
    f32 unk11D8;
    char pad11D8[0x1450 - 0x11D8 - sizeof(f32)];
    s32 unk1450;
    char pad1450[0x1454 - 0x1450 - sizeof(s32)];
    char * unk1454;
};
struct func_80230BB8_S2;
struct func_80230BB8_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    func_80230BB8_S2_U1D8 unk1D8;
};
struct func_80230BB8_S5;
struct func_80230BB8_S5 {
    char pad0[0x64];
    f32 unk64;
    char pad64[0x128 - 0x64 - sizeof(f32)];
    f32 unk128;
};
struct func_8023292C_S1;
struct func_8023292C_S1 {
    char pad0[0xB4];
    s32 unkB4;
    char padB4[0x1D8 - 0xB4 - sizeof(s32)];
    void * unk1D8;
};
struct func_8023292C_S2;
struct func_8023292C_S2 {
    char pad0[0x5DC];
    void * unk5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x11F8 - 0x62E - sizeof(s16)];
    s32 unk11F8;
};
struct func_8023292C_S3;
struct func_8023292C_S3 {
    char pad0[0x144];
    s32 unk144;
};
struct func_80232A38_S1;
struct func_80232A38_S1 {
    char pad0[0x2C];
    char * unk2C;
    char pad2C[0x108 - 0x2C - sizeof(char*)];
    char * unk108;
    char pad108[0x10C - 0x108 - sizeof(char*)];
    char * unk10C;
    char pad10C[0x124 - 0x10C - sizeof(char*)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
    char pad128[0x12C - 0x128 - sizeof(s32)];
    f32 unk12C;
    char pad12C[0x130 - 0x12C - sizeof(f32)];
    s32 unk130;
    char pad130[0x138 - 0x130 - sizeof(s32)];
    s32 unk138;
    char pad138[0x13C - 0x138 - sizeof(s32)];
    s32 unk13C;
    char pad13C[0x144 - 0x13C - sizeof(s32)];
    s32 unk144;
    char pad144[0x148 - 0x144 - sizeof(s32)];
    s32 unk148;
    char pad148[0x14C - 0x148 - sizeof(s32)];
    s32 unk14C;
    char pad14C[0x150 - 0x14C - sizeof(s32)];
    s32 unk150;
};
extern void func_80230DA4_de(void *actor, void *weapon);
extern void func_802325E0_de(void);
extern void func_802325FC_de(void *arg0, void *arg1);
extern s32 func_80232780_de(s32 arg0);
extern s32 func_802327D4_de(s32 arg0);
extern void func_8023293C_de(void *arg0, void *arg1, void *arg2);
#endif
