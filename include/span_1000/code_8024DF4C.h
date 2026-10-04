#ifndef UNBAKE_SPAN_1000_CODE_8024DF4C_H
#define UNBAKE_SPAN_1000_CODE_8024DF4C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct IntegerState810;
typedef struct IntegerState810 IntegerState810;

struct ObjectLinks1DC_4;
typedef struct ObjectLinks1DC_4 ObjectLinks1DC_4;

struct Triple_func_8024E59C_de;
typedef struct Triple_func_8024E59C_de Triple_func_8024E59C_de;

struct func_8024E090_S2;
typedef struct func_8024E090_S2 func_8024E090_S2;

struct func_8024E148_S1;
typedef struct func_8024E148_S1 func_8024E148_S1;

struct func_8024E1A4_S1;
typedef struct func_8024E1A4_S1 func_8024E1A4_S1;

struct func_8024E2EC_S2;
typedef struct func_8024E2EC_S2 func_8024E2EC_S2;

struct func_8024E2EC_S3;
typedef struct func_8024E2EC_S3 func_8024E2EC_S3;

union func_8024E2EC_S3_U18;
typedef union func_8024E2EC_S3_U18 func_8024E2EC_S3_U18;

struct func_8024E3B4_S2;
typedef struct func_8024E3B4_S2 func_8024E3B4_S2;

struct func_8024E410_S1;
typedef struct func_8024E410_S1 func_8024E410_S1;

struct func_8024E534_S2;
typedef struct func_8024E534_S2 func_8024E534_S2;

struct func_8024E560_S2;
typedef struct func_8024E560_S2 func_8024E560_S2;

struct func_8024E58C_S2;
typedef struct func_8024E58C_S2 func_8024E58C_S2;

struct func_8024E640_S1;
typedef struct func_8024E640_S1 func_8024E640_S1;

struct func_8024E668_S1;
typedef struct func_8024E668_S1 func_8024E668_S1;

struct IntegerState810;
struct IntegerState810 {
    unsigned char padding_0[2060];
    s32 unk_80C;
};
struct Item_func_8024E6A0_de;
struct Item_func_8024E6A0_de {
    unsigned char kind;
    char pad[0x33];
    void *value;
    unsigned flags;
};
struct ObjectLinks1DC_4;
struct ObjectLinks1DC_4 {
    char pad0[0x18];
    s32 * unk_18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    s32 unk_100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char * unk_1D8;
};
struct Triple_func_8024E59C_de;
struct Triple_func_8024E59C_de {
    f32 a;
    s32 b;
    f32 c;
};
struct func_8024E090_S2;
struct func_8024E090_S2 {
    s32 unk0;
    char pad0[0x4C - 0x0 - sizeof(s32)];
    s32 unk4C;
};
struct func_8024E148_S1;
struct func_8024E148_S1 {
    char pad0[0x18];
    s32 * unk18;
    char pad18[0x100 - 0x18 - sizeof(s32*)];
    u32 unk100;
};
struct func_8024E1A4_S1;
struct func_8024E1A4_S1 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x100 - 0x1C - sizeof(s32)];
    s32 unk100;
    char pad100[0x1A0 - 0x100 - sizeof(s32)];
    void * unk1A0;
};
struct func_8024E2EC_S2;
struct func_8024E2EC_S2 {
    char pad0[0x18];
    f32 unk18;
    char pad18[0x2C - 0x18 - sizeof(f32)];
    f32 unk2C;
    char pad2C[0xEC - 0x2C - sizeof(f32)];
    f32 unkEC;
};
union func_8024E2EC_S3_U18;
union func_8024E2EC_S3_U18 {
    u16 v0;
    f32 v1;
};
struct func_8024E2EC_S3;
struct func_8024E2EC_S3 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    func_8024E2EC_S3_U18 unk18;
    char pad18[0x1C - 0x18 - sizeof(func_8024E2EC_S3_U18)];
    f32 unk1C;
};
struct func_8024E3B4_S2;
struct func_8024E3B4_S2 {
    char pad0[0x34];
    f32 unk34;
    char pad34[0xF8 - 0x34 - sizeof(f32)];
    f32 unkF8;
};
struct func_8024E410_S1;
struct func_8024E410_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x70 - 0x18 - sizeof(void*)];
    f32 unk70;
};
struct func_8024E534_S2;
struct func_8024E534_S2 {
    char pad0[0x50];
    float unk50;
};
struct func_8024E560_S2;
struct func_8024E560_S2 {
    char pad0[0x3C];
    float unk3C;
};
struct func_8024E58C_S2;
struct func_8024E58C_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s32 unk8;
};
struct func_8024E640_S1;
struct func_8024E640_S1 {
    u8 unk0;
    char pad0[0xC - 0x0 - sizeof(u8)];
    f32 unkC;
    char padC[0x40 - 0xC - sizeof(f32)];
    f32 unk40;
};
struct func_8024E668_S1;
struct func_8024E668_S1 {
    char pad0[0xC];
    float unkC;
    char padC[0x40 - 0xC - sizeof(float)];
    float unk40;
};
extern s32 func_8024E208_de(char *actor);
extern int func_8024E2B0_de(void *arg0);
extern int func_8024E610_de(void *arg0);
#endif
