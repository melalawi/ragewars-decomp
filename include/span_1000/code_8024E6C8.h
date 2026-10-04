#ifndef UNBAKE_SPAN_1000_CODE_8024E6C8_H
#define UNBAKE_SPAN_1000_CODE_8024E6C8_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_8024ED90_de;
typedef struct Actor_func_8024ED90_de Actor_func_8024ED90_de;

struct FloatState3C;
typedef struct FloatState3C FloatState3C;

struct GlobalState_func_8024F4A0_de;
typedef struct GlobalState_func_8024F4A0_de GlobalState_func_8024F4A0_de;

struct ObjectLinks18;
typedef struct ObjectLinks18 ObjectLinks18;

struct Object_func_8024EB90_de;
typedef struct Object_func_8024EB90_de Object_func_8024EB90_de;

struct Record_func_8024F960_eu;
typedef struct Record_func_8024F960_eu Record_func_8024F960_eu;

struct func_8024E6C8_S1;
typedef struct func_8024E6C8_S1 func_8024E6C8_S1;

struct func_8024E914_S1;
typedef struct func_8024E914_S1 func_8024E914_S1;

struct func_8024EF18_S1;
typedef struct func_8024EF18_S1 func_8024EF18_S1;

struct func_8024F460_S1;
typedef struct func_8024F460_S1 func_8024F460_S1;

struct func_8024F490_Inner;
typedef struct func_8024F490_Inner func_8024F490_Inner;

struct func_8024F490_S1;
typedef struct func_8024F490_S1 func_8024F490_S1;

struct func_8024F590_S1;
typedef struct func_8024F590_S1 func_8024F590_S1;

struct func_8024F608_S1;
typedef struct func_8024F608_S1 func_8024F608_S1;

struct func_8024F624_S1;
typedef struct func_8024F624_S1 func_8024F624_S1;

struct func_8024F848_S1;
typedef struct func_8024F848_S1 func_8024F848_S1;

struct func_8024F8CC_S1;
typedef struct func_8024F8CC_S1 func_8024F8CC_S1;

struct Actor_func_8024ED90_de;
struct Actor_func_8024ED90_de {
    u32 pad0[2];
    Vec3 position0;
    u32 pad14[2];
    Vec3 position1;
};
struct FloatState3C;
struct FloatState3C {
    unsigned char padding_0[56];
    f32 unk_38;
};
struct GlobalState_func_8024F4A0_de;
struct GlobalState_func_8024F4A0_de {
    s32 field0;
    u8 pad4[0x18];
    s32 field1C;
};
struct ObjectLinks18;
struct ObjectLinks18 {
    unsigned char padding_0[12];
    f32 unk_C;
    unsigned char padding_10[4];
    void *unk_14;
};
struct Object_func_8024E80C_de;
struct StateFlags;
struct Object_func_8024E80C_de {
    char pad[0x14];
    struct StateFlags *key;
};
struct Object_func_8024EB90_de;
struct Object_func_8024EB90_de {
    char pad0;
    s8 model;
    char pad2;
    s8 material;
    char pad4[4];
    Vec3 position;
    char pad14[4];
    s32 *type;
    char pad1C[0x68 - 0x1C];
    char matrices[4][0x40];
    char pad168[0x174 - 0x168];
    s32 angle;
    char pad178[0x194 - 0x178];
    f32 scale;
    f32 height;
    char pad19C[0x1A8 - 0x19C];
    char lights[0x1C];
    Gfx *cached;
};
struct Record_func_8024F960_eu;
struct Record_func_8024F960_eu {
    s32 value;
    f32 scale;
    u16 id;
    u16 segment;
    u16 flags;
    u16 model;
    s16 height;
    s8 extents[6];
    u8 placement;
    u8 cellX;
    u8 cellZ;
};
struct func_8024E6C8_S1;
struct func_8024E6C8_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
};
struct func_8024E914_S1;
struct func_8024E914_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0xE4 - 0x4 - sizeof(u16)];
    u16 unkE4;
};
struct func_8024EF18_S1;
struct func_8024EF18_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x40 - 0x10 - sizeof(f32)];
    f32 unk40;
};
struct func_8024F460_S1;
struct func_8024F460_S1 {
    char pad0[0x1C4];
    int unk1C4;
};
struct func_8024F490_Inner;
struct func_8024F490_Inner {
    char pad[0x12];
    u8 value;
};
struct func_8024F490_S1;
struct func_8024F490_S1 {
    char pad0[0x1];
    u8 unk1;
    char pad1[0x3 - 0x1 - sizeof(u8)];
    u8 unk3;
    char pad3[0x14 - 0x3 - sizeof(u8)];
    void * unk14;
    char pad14[0x18 - 0x14 - sizeof(void*)];
    char * unk18;
    char pad18[0x194 - 0x18 - sizeof(char*)];
    f32 unk194;
    char pad194[0x19C - 0x194 - sizeof(f32)];
    u16 unk19C;
    char pad19C[0x1A0 - 0x19C - sizeof(u16)];
    f32 unk1A0;
    char pad1A0[0x1A4 - 0x1A0 - sizeof(f32)];
    f32 unk1A4;
    char pad1A4[0x1C0 - 0x1A4 - sizeof(f32)];
    s32 unk1C0;
};
struct func_8024F590_S1;
struct func_8024F590_S1 {
    char pad0[0x194];
    f32 unk194;
    char pad194[0x19C - 0x194 - sizeof(f32)];
    u16 unk19C;
    char pad19C[0x1A0 - 0x19C - sizeof(u16)];
    f32 unk1A0;
};
struct func_8024F608_S1;
struct func_8024F608_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x1A4 - 0x18 - sizeof(void*)];
    float unk1A4;
};
struct func_8024F624_S1;
struct func_8024F624_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x18 - 0x10 - sizeof(f32)];
    s32 * unk18;
    char pad18[0x174 - 0x18 - sizeof(s32*)];
    s32 unk174;
    char pad174[0x194 - 0x174 - sizeof(s32)];
    f32 unk194;
    char pad194[0x198 - 0x194 - sizeof(f32)];
    f32 unk198;
};
struct func_8024F848_S1;
struct func_8024F848_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x18 - 0x4 - sizeof(u16)];
    void * unk18;
};
struct func_8024F8CC_S1;
struct func_8024F8CC_S1 {
    char pad0[0x60];
    s32 * unk60;
    char pad60[0x17C - 0x60 - sizeof(s32*)];
    char unk17C;
};
extern f32 func_8024E870_de(void *arg0);
extern f32 func_8024E8B8_de(void *arg0);
extern void func_8024F108_de(void *arg0);
extern void func_8024F470_de(void *arg0);
extern void func_8024F5A0_de(void *arg0);
extern void func_8024F618_de(void *arg0);
extern void func_8024F634_de(void *arg0);
#endif
