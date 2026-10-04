#ifndef UNBAKE_SPAN_1000_CODE_80245804_H
#define UNBAKE_SPAN_1000_CODE_80245804_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Record_func_80245C38_de;
typedef struct Record_func_80245C38_de Record_func_80245C38_de;

struct func_802458F8_S1;
typedef struct func_802458F8_S1 func_802458F8_S1;

struct func_80245930_S1;
typedef struct func_80245930_S1 func_80245930_S1;

struct func_80245958_S1;
typedef struct func_80245958_S1 func_80245958_S1;

struct func_80245990_S1;
typedef struct func_80245990_S1 func_80245990_S1;

struct func_802459F0_S1;
typedef struct func_802459F0_S1 func_802459F0_S1;

struct func_80245A20_S1;
typedef struct func_80245A20_S1 func_80245A20_S1;

struct func_80245A68_S1;
typedef struct func_80245A68_S1 func_80245A68_S1;

struct func_80245AC8_S1;
typedef struct func_80245AC8_S1 func_80245AC8_S1;

struct func_80245AE8_S1;
typedef struct func_80245AE8_S1 func_80245AE8_S1;

struct Record_func_80245C38_de;
struct Record_func_80245C38_de {
    char pad0[0x1C];
    f32 value;
    f32 previous;
    char pad24[8];
    f32 limit;
    f32 threshold;
    char pad34[8];
    s32 done;
    char pad40[0x74];
    s32 active;
    char padB8[0x4C];
    s32 mode;
};
struct func_802458F8_S1;
struct func_802458F8_S1 {
    char pad0[0x74];
    int unk74;
};
struct func_80245930_S1;
struct func_80245930_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0xAC - 0x38 - sizeof(int)];
    int unkAC;
};
struct func_80245958_S1;
struct func_80245958_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0xA8 - 0x38 - sizeof(int)];
    int unkA8;
};
struct func_80245990_S1;
struct func_80245990_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x38 - 0x1C - sizeof(f32)];
    int unk38;
    char pad38[0x100 - 0x38 - sizeof(int)];
    f32 unk100;
};
struct func_802459F0_S1;
struct func_802459F0_S1 {
    char pad0[0x100];
    float unk100;
};
struct func_80245A20_S1;
struct func_80245A20_S1 {
    char pad0[0x108];
    int unk108;
    char pad108[0x10C - 0x108 - sizeof(int)];
    int unk10C;
    char pad10C[0x110 - 0x10C - sizeof(int)];
    int unk110;
    char pad110[0x114 - 0x110 - sizeof(int)];
    int unk114;
};
struct func_80245A68_S1;
struct func_80245A68_S1 {
    char pad0[0x1E0];
    int unk1E0;
};
struct func_80245AC8_S1;
struct func_80245AC8_S1 {
    char pad0[0xA0];
    float unkA0;
};
struct func_80245AE8_S1;
struct func_80245AE8_S1 {
    char pad0[0xB0];
    unsigned int unkB0;
};
extern void func_802458F8_de(void);
extern int func_80245908_de(void);
extern void func_80245990_de(void *arg0);
extern f32 func_802459A0_de(void);
extern void func_80245AC8_de(void);
extern float func_80245AD8_de(void);
extern unsigned int func_80245AF8_de(void);
extern void func_80245B20_de(void);
extern void func_80245C38_de(void);
#endif
