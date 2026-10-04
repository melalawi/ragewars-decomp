#ifndef UNBAKE_SPAN_1000_CODE_80285170_H
#define UNBAKE_SPAN_1000_CODE_80285170_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Node_func_80285B64_de;
typedef struct Node_func_80285B64_de Node_func_80285B64_de;

struct Pool_func_80285B64_de;
typedef struct Pool_func_80285B64_de Pool_func_80285B64_de;

struct func_80285540_S1;
typedef struct func_80285540_S1 func_80285540_S1;

struct func_80285540_S2;
typedef struct func_80285540_S2 func_80285540_S2;

struct func_80285880_S1;
typedef struct func_80285880_S1 func_80285880_S1;

struct func_80285930_S1;
typedef struct func_80285930_S1 func_80285930_S1;

struct func_80285A94_S2;
typedef struct func_80285A94_S2 func_80285A94_S2;

struct func_80285C48_S2;
typedef struct func_80285C48_S2 func_80285C48_S2;

struct func_80285D00_S1;
typedef struct func_80285D00_S1 func_80285D00_S1;

struct func_80285D80_S2;
typedef struct func_80285D80_S2 func_80285D80_S2;

union func_80285D80_S2_U138;
typedef union func_80285D80_S2_U138 func_80285D80_S2_U138;

struct func_80285F28_S2;
typedef struct func_80285F28_S2 func_80285F28_S2;

struct Node_func_80285B64_de;
struct Node_func_80285B64_de {
    char pad0[8];
    Clip *key;
    Vec3 position;
    f32 value0;
    f32 value1;
    char pad20[0x18];
    struct Node_func_80285B64_de **owner;
};
struct Node_func_80285B64_de;
struct Pool_func_80285B64_de;
struct Pool_func_80285B64_de {
    struct Node_func_80285B64_de *free;
    char pad4[0x10];
    struct Node_func_80285B64_de *active;
};
struct func_80285540_S1;
struct func_80285540_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    u16 unk8;
    char pad8[0xA - 0x8 - sizeof(u16)];
    u8 unkA;
    char padA[0xC - 0xA - sizeof(u8)];
    u8 unkC;
    char padC[0xD - 0xC - sizeof(u8)];
    u8 unkD;
    char padD[0xE - 0xD - sizeof(u8)];
    u8 unkE;
    char padE[0xF - 0xE - sizeof(u8)];
    u8 unkF;
    char padF[0x10 - 0xF - sizeof(u8)];
    u8 unk10;
    char pad10[0x11 - 0x10 - sizeof(u8)];
    u8 unk11;
    char pad11[0x12 - 0x11 - sizeof(u8)];
    u8 unk12;
    char pad12[0x13 - 0x12 - sizeof(u8)];
    u8 unk13;
    char pad13[0x14 - 0x13 - sizeof(u8)];
    u16 unk14;
    char pad14[0x16 - 0x14 - sizeof(u16)];
    u16 unk16;
};
struct func_80285540_S2;
struct func_80285540_S2 {
    char pad0[0x4];
    s16 unk4;
    char pad4[0x6 - 0x4 - sizeof(s16)];
    u8 unk6;
    char pad6[0x8 - 0x6 - sizeof(u8)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    u8 unk10;
    char pad10[0x11 - 0x10 - sizeof(u8)];
    u8 unk11;
    char pad11[0x12 - 0x11 - sizeof(u8)];
    u8 unk12;
    char pad12[0x13 - 0x12 - sizeof(u8)];
    u8 unk13;
    char pad13[0x14 - 0x13 - sizeof(u8)];
    u8 unk14;
    char pad14[0x15 - 0x14 - sizeof(u8)];
    u8 unk15;
    char pad15[0x16 - 0x15 - sizeof(u8)];
    u8 unk16;
    char pad16[0x17 - 0x16 - sizeof(u8)];
    u8 unk17;
    char pad17[0x18 - 0x17 - sizeof(u8)];
    u16 unk18;
    char pad18[0x1A - 0x18 - sizeof(u16)];
    u16 unk1A;
};
struct func_80285880_S1;
struct func_80285880_S1 {
    char pad0[0x8];
    void * unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    Triple unkC;
    char padC[0x18 - 0xC - sizeof(Triple)];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    unsigned int unk20;
    char pad20[0x2C - 0x20 - sizeof(unsigned int)];
    unsigned int unk2C;
    char pad2C[0x38 - 0x2C - sizeof(unsigned int)];
    void ** unk38;
};
struct func_80285930_S1;
struct func_80285930_S1 {
    char pad0[0x38];
    int * unk38;
};
struct func_80285A94_S2;
struct func_80285A94_S2 {
    char pad0[0x3C];
    char unk3C;
};
struct func_80285C48_S2;
struct func_80285C48_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x38 - 0x4 - sizeof(void*)];
    s32 * unk38;
};
struct func_80285D00_S1;
struct func_80285D00_S1 {
    char pad0[0x14];
    func_80239C2C_S1_UF24 unk14;
    char pad14[0x28 - 0x14 - sizeof(func_80239C2C_S1_UF24)];
    s32 unk28;
};
union func_80285D80_S2_U138;
union func_80285D80_S2_U138 {
    u32 v0;
    char * v1;
};
struct func_80285D80_S2;
struct func_80285D80_S2 {
    char pad0[0x80];
    void * unk80;
    char pad80[0x138 - 0x80 - sizeof(void*)];
    func_80285D80_S2_U138 unk138;
    char pad138[0x140 - 0x138 - sizeof(func_80285D80_S2_U138)];
    s32 unk140;
    char pad140[0x1B40C - 0x140 - sizeof(s32)];
    s32 unk1B40C;
};
struct func_80285F28_S2;
struct func_80285F28_S2 {
    char pad0[0x80];
    void * unk80;
    char pad80[0x138 - 0x80 - sizeof(void*)];
    u32 unk138;
    char pad138[0x140 - 0x138 - sizeof(u32)];
    s32 unk140;
    char pad140[0x1B40C - 0x140 - sizeof(s32)];
    s32 unk1B40C;
};
extern void func_802858B0_de(void *arg0, void *arg1, Triple arg2, f32 arg5, f32 arg6, void **arg7);
extern void func_80285960_de(char *object);
extern s32 func_8028597C_de(s32 arg0);
extern f32 func_802859D0_de(f32 *arg0, u32 arg1, u32 arg2, u32 arg3);
#endif
