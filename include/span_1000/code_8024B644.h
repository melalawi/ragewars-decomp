#ifndef UNBAKE_SPAN_1000_CODE_8024B644_H
#define UNBAKE_SPAN_1000_CODE_8024B644_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Camera;
typedef struct Camera Camera;

struct IntegerState104;
typedef struct IntegerState104 IntegerState104;

struct ObjectLinks1DC_3;
typedef struct ObjectLinks1DC_3 ObjectLinks1DC_3;

struct ObjectState110;
typedef struct ObjectState110 ObjectState110;

struct Object_func_8024B990_de;
typedef struct Object_func_8024B990_de Object_func_8024B990_de;

struct Scratch;
typedef struct Scratch Scratch;

struct func_8024B64C_S1;
typedef struct func_8024B64C_S1 func_8024B64C_S1;

struct func_8024B7D4_S1;
typedef struct func_8024B7D4_S1 func_8024B7D4_S1;

struct func_8024B8DC_S1;
typedef struct func_8024B8DC_S1 func_8024B8DC_S1;

struct func_8024BA6C_S1;
typedef struct func_8024BA6C_S1 func_8024BA6C_S1;

struct func_8024BCF8_S1;
typedef struct func_8024BCF8_S1 func_8024BCF8_S1;

struct func_8024BE48_S1;
typedef struct func_8024BE48_S1 func_8024BE48_S1;

struct func_8024BE70_S2;
typedef struct func_8024BE70_S2 func_8024BE70_S2;

struct func_8024BECC_S1;
typedef struct func_8024BECC_S1 func_8024BECC_S1;

struct func_8024C0F4_S1;
typedef struct func_8024C0F4_S1 func_8024C0F4_S1;

struct func_8024C284_S1;
typedef struct func_8024C284_S1 func_8024C284_S1;

struct func_8024C33C_S1;
typedef struct func_8024C33C_S1 func_8024C33C_S1;

union func_8024C33C_S1_U8;
typedef union func_8024C33C_S1_U8 func_8024C33C_S1_U8;

struct Camera;
struct Camera {
    char pad0[8];
    s32 matrices;
    char pad1[4];
    s32 style;
};
struct IntegerState104;
struct IntegerState104 {
    unsigned char padding_0[180];
    s32 unk_B4;
    s32 unk_B8;
    s32 unk_BC;
    s32 unk_C0;
    unsigned char padding_C4[60];
    s32 unk_100;
};
struct ObjectLinks1DC_3;
struct ObjectLinks1DC_3 {
    char pad0[0x8];
    Vec3 unk_8;
    char pad8[0x100 - 0x8 - sizeof(Vec3)];
    s32 unk_100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char * unk_1D8;
};
struct ObjectState110;
struct ObjectState110 {
    unsigned char padding_0[256];
    s32 unk_100;
    s32 unk_104;
    unsigned char padding_108[6];
    s8 unk_10E;
    s8 unk_10F;
};
struct Object_func_8024B990_de;
struct Object_func_8024B990_de {
    char pad[0x140];
    Block24 blocks[2];
};
struct Scratch;
struct Scratch {
    f32 first[4];
    f32 second[4];
    f32 in[4];
    f32 out[4];
    f32 position[4];
    char matrix[0x40];
};
struct func_8024B64C_S1;
struct func_8024B64C_S1 {
    char pad0[0x108];
    s16 unk108;
    char pad108[0x10A - 0x108 - sizeof(s16)];
    s16 unk10A;
    char pad10A[0x10E - 0x10A - sizeof(s16)];
    s8 unk10E;
    char pad10E[0x10F - 0x10E - sizeof(s8)];
    s8 unk10F;
};
struct func_8024B7D4_S1;
struct func_8024B7D4_S1 {
    char pad0[0x1];
    s8 unk1;
    char pad1[0xC4 - 0x1 - sizeof(s8)];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
};
struct func_8024B8DC_S1;
struct func_8024B8DC_S1 {
    char pad0[0x1];
    s8 unk1;
    char pad1[0x3 - 0x1 - sizeof(s8)];
    s8 unk3;
    char pad3[0xB4 - 0x3 - sizeof(s8)];
    s32 unkB4;
    char padB4[0x17C - 0xB4 - sizeof(s32)];
    s32 unk17C;
};
struct func_8024BA6C_S1;
struct func_8024BA6C_S1 {
    char pad0[0x3];
    s8 unk3;
    char pad3[0xB4 - 0x3 - sizeof(s8)];
    s32 unkB4;
    char padB4[0x140 - 0xB4 - sizeof(s32)];
    Slot unk140;
};
struct Node75;
struct func_8024BCF8_S1;
struct func_8024BCF8_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x14 - 0xC - sizeof(f32)];
    struct Node75 * unk14;
    char pad14[0x6C - 0x14 - sizeof(Node75*)];
    f32 unk6C;
};
struct func_8024BE48_S1;
struct func_8024BE48_S1 {
    char pad0[0x2E0];
    unsigned int unk2E0;
};
struct func_8024BE70_S2;
struct func_8024BE70_S2 {
    char pad0[0x6E];
    u8 unk6E;
};
struct func_8024BECC_S1;
struct func_8024BECC_S1 {
    char pad0[0x50];
    float unk50;
    char pad50[0x54 - 0x50 - sizeof(float)];
    float unk54;
    char pad54[0x58 - 0x54 - sizeof(float)];
    float unk58;
};
struct func_8024C0F4_S1;
struct func_8024C0F4_S1 {
    char pad0[0x50];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x6C - 0x58 - sizeof(f32)];
    s32 unk6C;
};
struct func_8024C284_S1;
struct func_8024C284_S1 {
    char pad0[0xC4];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
};
union func_8024C33C_S1_U8;
union func_8024C33C_S1_U8 {
    f32 v0;
    char v1;
};
struct func_8024C33C_S1;
struct func_8024C33C_S1 {
    char pad0[0x8];
    func_8024C33C_S1_U8 unk8;
    char pad8[0xC - 0x8 - sizeof(func_8024C33C_S1_U8)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    s32 unk14;
    char pad14[0x50 - 0x14 - sizeof(s32)];
    f32 unk50;
    char pad50[0x58 - 0x50 - sizeof(f32)];
    f32 unk58;
    char pad58[0x6C - 0x58 - sizeof(f32)];
    s32 unk6C;
};
extern void func_8024B654_de(void);
extern void func_8024B67C_de(void *arg0);
extern s32 func_8024BD08_de(void *arg0);
extern float func_8024BE2C_de(void);
extern void func_8024BE58_de(void *object, int enabled);
extern void func_8024C0D4_us(void);
extern void func_8024C0DC_us(void);
extern void func_8024C104_eu(void);
extern void func_8024C10C_eu(void);
extern void func_8024C134_eu_x(void);
extern void func_8024C13C_eu_x(void);
extern s32 func_8024C294_de(void *arg0, s32 arg1);
#endif
