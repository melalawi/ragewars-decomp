#ifndef UNBAKE_SPAN_1000_CODE_80208410_H
#define UNBAKE_SPAN_1000_CODE_80208410_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Brain_func_80209308_de;
typedef struct Brain_func_80209308_de Brain_func_80209308_de;

struct CallbackState8;
typedef struct CallbackState8 CallbackState8;

struct Controls;
typedef struct Controls Controls;

struct IntegerState2C;
typedef struct IntegerState2C IntegerState2C;

struct ObjectLinks220;
typedef struct ObjectLinks220 ObjectLinks220;

struct ObjectLinks2EC;
typedef struct ObjectLinks2EC ObjectLinks2EC;

struct Player_func_80209308_de;
typedef struct Player_func_80209308_de Player_func_80209308_de;

struct Session;
typedef struct Session Session;

struct TargetPositionRef;
typedef struct TargetPositionRef TargetPositionRef;

struct func_8020986C_S1;
typedef struct func_8020986C_S1 func_8020986C_S1;

struct func_80209910_S1;
typedef struct func_80209910_S1 func_80209910_S1;

struct func_80209988_S1;
typedef struct func_80209988_S1 func_80209988_S1;

struct func_8020999C_S1;
typedef struct func_8020999C_S1 func_8020999C_S1;

struct func_80209A94_S1;
typedef struct func_80209A94_S1 func_80209A94_S1;

struct func_80209B64_S1;
typedef struct func_80209B64_S1 func_80209B64_S1;

struct func_80209B64_S3;
typedef struct func_80209B64_S3 func_80209B64_S3;

struct func_80209B64_S5;
typedef struct func_80209B64_S5 func_80209B64_S5;

struct func_80209BE0_S3;
typedef struct func_80209BE0_S3 func_80209BE0_S3;

struct func_80209C5C_S3;
typedef struct func_80209C5C_S3 func_80209C5C_S3;

struct func_80209DAC_S2;
typedef struct func_80209DAC_S2 func_80209DAC_S2;

struct func_80209DAC_S3;
typedef struct func_80209DAC_S3 func_80209DAC_S3;

struct func_80209E80_S1;
typedef struct func_80209E80_S1 func_80209E80_S1;

struct func_80209E80_S2;
typedef struct func_80209E80_S2 func_80209E80_S2;

struct func_8020A028_S1;
typedef struct func_8020A028_S1 func_8020A028_S1;

struct func_8020A028_S2;
typedef struct func_8020A028_S2 func_8020A028_S2;

struct func_8020A458_S1;
typedef struct func_8020A458_S1 func_8020A458_S1;

struct func_8020A458_S2;
typedef struct func_8020A458_S2 func_8020A458_S2;

struct func_8020A6D8_S1;
typedef struct func_8020A6D8_S1 func_8020A6D8_S1;

struct func_8020A884_S1;
typedef struct func_8020A884_S1 func_8020A884_S1;

struct func_8020A884_S2;
typedef struct func_8020A884_S2 func_8020A884_S2;

struct Player_func_80209308_de;
struct Player_func_80209308_de {
    char pad0[0x594];
    s32 gear;
    char pad598[0x104];
    f32 steer;
};
struct Brain_func_80209308_de;
struct Player_func_80209308_de;
struct Brain_func_80209308_de {
    struct Player_func_80209308_de *player;
    char pad4[0x244];
    f32 speed[4];
};
typedef void ( *SharedCallback5)(void *, signed int);
struct CallbackState8;
struct CallbackState8 {
    unsigned char padding_0[4];
    SharedCallback5 callback;
};
struct IntegerState2C;
struct IntegerState2C {
    char pad0[0x8];
    s32 unk_8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unk_C;
    char padC[0x24 - 0xC - sizeof(s32)];
    s32 unk_24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk_28;
};
struct ObjectLinks220;
struct ObjectLinks220 {
    char pad0[0x214];
    void * unk_214;
    char pad214[0x218 - 0x214 - sizeof(void*)];
    s32 * unk_218;
    char pad218[0x21C - 0x218 - sizeof(s32*)];
    s32 unk_21C;
};
struct ObjectLinks2EC;
struct ObjectLinks2EC {
    char pad0[0x64];
    char * unk_64;
    char pad64[0x23C - 0x64 - sizeof(char*)];
    s32 unk_23C;
    char pad23C[0x240 - 0x23C - sizeof(s32)];
    s32 unk_240;
    char pad240[0x2E4 - 0x240 - sizeof(s32)];
    s32 unk_2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk_2E8;
};
struct Session;
struct Session {
    char pad0[0x98];
    s32 running;
    s32 mode;
};
struct TargetPosition;
struct TargetPosition {
    u8 padding[8];
    f32 position[3];
};
struct TargetPosition;
struct TargetPositionRef;
struct TargetPositionRef {
    struct TargetPosition *target;
};
struct func_8020986C_S1;
struct func_8020986C_S1 {
    char pad0[0x214];
    int unk214;
};
struct func_80209910_S1;
struct func_80209910_S1 {
    char pad0[0x6A0];
    float unk6A0;
};
struct func_80209988_S1;
struct func_80209988_S1 {
    char pad0[0x2F4];
    int unk2F4;
    char pad2F4[0x2F8 - 0x2F4 - sizeof(int)];
    int unk2F8;
    char pad2F8[0x2FC - 0x2F8 - sizeof(int)];
    int unk2FC;
};
struct func_8020999C_S1;
struct func_8020999C_S1 {
    char pad0[0x300];
    int unk300;
    char pad300[0x304 - 0x300 - sizeof(int)];
    int unk304;
    char pad304[0x308 - 0x304 - sizeof(int)];
    int unk308;
    char pad308[0x30C - 0x308 - sizeof(int)];
    int unk30C;
    char pad30C[0x310 - 0x30C - sizeof(int)];
    int unk310;
};
struct func_80209A94_S1;
struct func_80209A94_S1 {
    char pad0[0x21C];
    s32 unk21C;
};
struct func_80209B64_S1;
struct func_80209B64_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void * unk5D8;
};
struct func_80209B64_S3;
struct func_80209B64_S3 {
    char pad0[0x28];
    f32 unk28;
};
struct func_80209B64_S5;
struct func_80209B64_S5 {
    char pad0[0x93];
    s8 unk93;
};
struct func_80209BE0_S3;
struct func_80209BE0_S3 {
    char pad0[0x34];
    f32 unk34;
};
struct func_80209C5C_S3;
struct func_80209C5C_S3 {
    char pad0[0x30];
    f32 unk30;
};
struct func_80209DAC_S2;
struct func_80209DAC_S2 {
    char pad0[0x93];
    func_80209DAC_S2_U93 unk93;
};
struct func_80209DAC_S3;
struct func_80209DAC_S3 {
    char pad0[0x244];
    f32 unk244;
};
struct func_80209E80_S1;
struct func_80209E80_S1 {
    char pad0[0x594];
    s32 unk594;
    char pad594[0x62E - 0x594 - sizeof(s32)];
    s16 unk62E;
    char pad62E[0x6AC - 0x62E - sizeof(s16)];
    u32 unk6AC;
    char pad6AC[0x6B0 - 0x6AC - sizeof(u32)];
    u32 unk6B0;
    char pad6B0[0x11D8 - 0x6B0 - sizeof(u32)];
    f32 unk11D8;
};
struct func_80209E80_S2;
struct func_80209E80_S2 {
    char pad0[0x240];
    s32 unk240;
};
struct func_8020A028_S1;
struct func_8020A028_S1 {
    s32 unk0;
    char pad0[0x64 - 0x0 - sizeof(s32)];
    void * unk64;
    char pad64[0x23C - 0x64 - sizeof(void*)];
    s32 unk23C;
    char pad23C[0x240 - 0x23C - sizeof(s32)];
    s32 unk240;
    char pad240[0x2E4 - 0x240 - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
    char pad2E8[0x2EC - 0x2E8 - sizeof(s32)];
    s32 unk2EC;
};
struct func_8020A028_S2;
struct func_8020A028_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x1C - 0x14 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
};
struct func_8020A458_S1;
struct func_8020A458_S1 {
    char pad0[0x64];
    void * unk64;
    char pad64[0x23C - 0x64 - sizeof(void*)];
    s32 unk23C;
    char pad23C[0x240 - 0x23C - sizeof(s32)];
    s32 unk240;
    char pad240[0x2E4 - 0x240 - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
    char pad2E8[0x2EC - 0x2E8 - sizeof(s32)];
    s32 unk2EC;
};
struct func_8020A458_S2;
struct func_8020A458_S2 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
    char pad30[0x34 - 0x30 - sizeof(s32)];
    s32 unk34;
};
struct func_8020A6D8_S1;
struct func_8020A6D8_S1 {
    char pad0[0x64];
    void * unk64;
    char pad64[0x23C - 0x64 - sizeof(void*)];
    s32 unk23C;
    char pad23C[0x2E4 - 0x23C - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
};
struct func_8020A884_S1;
struct func_8020A884_S1 {
    char pad0[0x23C];
    s32 unk23C;
    char pad23C[0x240 - 0x23C - sizeof(s32)];
    s32 unk240;
    char pad240[0x2EC - 0x240 - sizeof(s32)];
    s32 unk2EC;
};
struct func_8020A884_S2;
struct func_8020A884_S2 {
    char pad0[0x10];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
};
extern void func_8020A028_de(void *arg0, void *arg1);
extern void func_8020A2D4_de(void *arg0, void *config);
extern void func_8020A458_de(void *arg0, void *arg1);
extern void func_8020A6D8_de(void *arg0, void *arg1);
extern void func_8020A7B0_de(void *arg0, void *arg1);
extern void func_8020A884_de(void *arg0, void *arg1);
#endif
