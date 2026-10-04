#ifndef UNBAKE_SPAN_1000_CODE_8025DB64_H
#define UNBAKE_SPAN_1000_CODE_8025DB64_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct IntegerState2C_2;
typedef struct IntegerState2C_2 IntegerState2C_2;

struct ObjectState2BBC;
typedef struct ObjectState2BBC ObjectState2BBC;

struct ObjectState40;
typedef struct ObjectState40 ObjectState40;

struct func_8025DB64_S1;
typedef struct func_8025DB64_S1 func_8025DB64_S1;

struct func_8025DC54_S1;
typedef struct func_8025DC54_S1 func_8025DC54_S1;

struct func_8025DD80_S1;
typedef struct func_8025DD80_S1 func_8025DD80_S1;

struct IntegerState2C_2;
struct IntegerState2C_2 {
    unsigned char padding_0[20];
    s32 unk_14;
    unsigned char padding_18[16];
    s32 unk_28;
};
struct ObjectState2BBC;
struct ObjectState2BBC {
    char pad0[0x2BA4];
    f32 unk_2BA4;
    char pad2BA4[0x2BB8 - 0x2BA4 - sizeof(f32)];
    s32 unk_2BB8;
};
struct ObjectState40;
struct ObjectState40 {
    func_80230BB8_S2_U1D8 unk_0;
    char pad0[0x14 - 0x0 - sizeof(func_80230BB8_S2_U1D8)];
    s32 unk_14;
    char pad14[0x24 - 0x14 - sizeof(s32)];
    s32 unk_24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    f32 unk_2C;
    char pad2C[0x38 - 0x2C - sizeof(f32)];
    s32 unk_38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    f32 unk_3C;
};
struct func_8025DB64_S1;
struct func_8025DB64_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0x40 - 0x38 - sizeof(int)];
    float unk40;
};
struct func_8025DC54_S1;
struct func_8025DC54_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x2C - 0x14 - sizeof(s32)];
    f32 unk2C;
};
struct func_8025DD80_S1;
struct func_8025DD80_S1 {
    char pad0[0x8];
    void * unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x24 - 0x14 - sizeof(s32)];
    s32 unk24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    f32 unk2C;
};
extern void func_8025DB58_de(s32 a);
extern void func_8025DC34_de(void *arg0, f32 arg1);
extern void func_8025DC88_de(void *arg0);
extern void func_8025DD60_de(void *arg0);
extern void func_8025DE30_de(void);
extern int func_8025E04C_de(int arg0);
extern int func_8025E0F4_de(int arg0);
extern void func_8025E150_de(void);
extern void func_8025E174_de(s32 arg0);
extern void func_8025E19C_de(s32 arg0);
extern void func_8025E1EC_de(s32 arg0);
extern void func_8025E23C_de(void);
extern void func_8025E318_de(void);
#endif
