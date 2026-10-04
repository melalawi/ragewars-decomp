#ifndef UNBAKE_SPAN_1000_CODE_8029F304_H
#define UNBAKE_SPAN_1000_CODE_8029F304_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct FloatState2C;
typedef struct FloatState2C FloatState2C;

struct FloatState2C_2;
typedef struct FloatState2C_2 FloatState2C_2;

struct Mtx3x4_8029FD54;
typedef struct Mtx3x4_8029FD54 Mtx3x4_8029FD54;

struct func_8029FA7C_S1;
typedef struct func_8029FA7C_S1 func_8029FA7C_S1;

struct func_8029FBC8_S1;
typedef struct func_8029FBC8_S1 func_8029FBC8_S1;

struct FloatState2C;
struct FloatState2C {
    unsigned char padding_0[20];
    f32 unk_14;
    f32 unk_18;
    unsigned char padding_1C[8];
    f32 unk_24;
    f32 unk_28;
};
struct FloatState2C_2;
struct FloatState2C_2 {
    f32 unk_0;
    unsigned char padding_4[4];
    f32 unk_8;
    unsigned char padding_C[20];
    f32 unk_20;
    unsigned char padding_24[4];
    f32 unk_28;
};
struct Mtx3x4_8029FD54;
struct Mtx3x4_8029FD54 {
    f32 m[3][4];
};
struct func_8029FA7C_S1;
struct func_8029FA7C_S1 {
    char pad0[0x10];
    int unk10;
    char pad10[0x14 - 0x10 - sizeof(int)];
    float unk14;
    char pad14[0x18 - 0x14 - sizeof(float)];
    float unk18;
    char pad18[0x1C - 0x18 - sizeof(float)];
    float unk1C;
    char pad1C[0x20 - 0x1C - sizeof(float)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    float unk24;
    char pad24[0x28 - 0x24 - sizeof(float)];
    float unk28;
    char pad28[0x2C - 0x28 - sizeof(float)];
    float unk2C;
    char pad2C[0x30 - 0x2C - sizeof(float)];
    int unk30;
    char pad30[0x34 - 0x30 - sizeof(int)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    float unk38;
    char pad38[0x3C - 0x38 - sizeof(float)];
    float unk3C;
    char pad3C[0x40 - 0x3C - sizeof(float)];
    float unk40;
    char pad40[0x44 - 0x40 - sizeof(float)];
    float unk44;
    char pad44[0x48 - 0x44 - sizeof(float)];
    float unk48;
    char pad48[0x4C - 0x48 - sizeof(float)];
    float unk4C;
};
struct func_8029FBC8_S1;
struct func_8029FBC8_S1 {
    float unk0;
    char pad0[0x14 - 0x0 - sizeof(float)];
    float unk14;
    char pad14[0x28 - 0x14 - sizeof(float)];
    float unk28;
};
extern void func_8029E304_de(void *arg0, void *arg1, void *arg2);
extern void func_8029E338_de(void *arg0, void *arg1, void *arg2);
extern void func_8029E36C_de(void *arg0, void *arg1, f32 arg2);
extern void func_8029E398_de(void *arg0, void *arg1);
extern void func_8029E3C0_de(f32 *a, f32 *b);
extern f32 func_8029E428_de(f32 *a, f32 *b);
extern void func_8029E458_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_8029E4DC_de(Vec3 *arg0);
extern void func_8029E52C_de(f32 *arg0);
extern void func_8029E77C_de(f32 *arg0, f32 *arg1, f32 *arg2);
extern void func_8029E810_de(f32 *arg0, f32 *arg1, f32 *arg2);
extern void func_8029E8AC_de(Vec3 *out, Vec3 *in, s32 n, f32 ox, f32 sx, f32 oy, f32 sy);
extern void func_8029E93C_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6);
extern void func_8029EA44_de(void *arg0, void *arg1);
extern void func_8029EA7C_de(void *arg0, int arg1, int arg2, int arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14, float arg15, float arg16);
extern void func_8029EB58_de(f32 *arg0);
extern void func_8029EBC8_de(void *arg0, void *arg1);
extern void func_8029EBE4_de(void *arg0, void *arg1);
extern void func_8029ECA8_de(void *arg0, float value);
extern void func_8029ECBC_de(void *arg0, f32 arg1);
extern void func_8029ED54_de(Mtx3x4_8029FD54 *arg0);
extern void func_8029EDA0_de(s32 arg0);
#endif
