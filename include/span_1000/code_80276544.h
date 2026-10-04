#ifndef UNBAKE_SPAN_1000_CODE_80276544_H
#define UNBAKE_SPAN_1000_CODE_80276544_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct IntegerState1504;
typedef struct IntegerState1504 IntegerState1504;

struct ObjectLinks150C;
typedef struct ObjectLinks150C ObjectLinks150C;

struct Object_func_802773D4_de;
typedef struct Object_func_802773D4_de Object_func_802773D4_de;

struct Object_func_8027892C_de;
typedef struct Object_func_8027892C_de Object_func_8027892C_de;

struct func_80277198_S1;
typedef struct func_80277198_S1 func_80277198_S1;

struct func_80278900_S1;
typedef struct func_80278900_S1 func_80278900_S1;

struct IntegerState1504;
struct IntegerState1504 {
    char pad0[0x1500];
    s32 unk_1500;
};
struct ObjectLinks150C;
struct ObjectLinks150C {
    unsigned char padding_0[5384];
    s32 *unk_1508;
};
struct Object_func_802773D4_de;
struct Object_func_802773D4_de {
    char pad0[4];
    f32 value;
    char unk8;
    char pad9[0xB8-9];
    u8 flagB8;
    u8 flagB9;
    char padBA[2];
};
struct Object_func_8027892C_de;
struct Object_func_8027892C_de {
    u8 pad00[4];
    s32 count;
    u8 records[1];
};
struct func_80277198_S1;
struct func_80277198_S1 {
    char pad0[0x14];
    Vec3 unk14;
    char pad14[0xBB - 0x14 - sizeof(Vec3)];
    u8 unkBB;
};
struct func_80278900_S1;
struct func_80278900_S1 {
    char pad0[0xBC];
    u8 unkBC;
};
extern void func_80276608_eu_x(void);
extern void func_80276968_de(u8 amount, u8 r, u8 g, u8 b, u8 *outR, u8 *outG, u8 *outB);
extern s32 func_80278ABC_de(void);
#endif
