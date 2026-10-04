#ifndef UNBAKE_SPAN_16E000_CODE_80400000_H
#define UNBAKE_SPAN_16E000_CODE_80400000_H
#include "common/types.h"
#include "../types.h"
struct Entry_func_80402FB4_de;
typedef struct Entry_func_80402FB4_de Entry_func_80402FB4_de;

struct Entry_func_804030E0_de;
typedef struct Entry_func_804030E0_de Entry_func_804030E0_de;

struct Entry_func_80403200_de;
typedef struct Entry_func_80403200_de Entry_func_80403200_de;

struct Entry_func_80403458_de;
typedef struct Entry_func_80403458_de Entry_func_80403458_de;

struct Item_func_8040332C_de;
typedef struct Item_func_8040332C_de Item_func_8040332C_de;

struct Item_func_80403458_de;
typedef struct Item_func_80403458_de Item_func_80403458_de;

struct Key_func_80401214_de;
typedef struct Key_func_80401214_de Key_func_80401214_de;

struct Key_func_80401564_de;
typedef struct Key_func_80401564_de Key_func_80401564_de;

struct Record_func_80402FB4_de;
typedef struct Record_func_80402FB4_de Record_func_80402FB4_de;

struct Record_func_804030E0_de;
typedef struct Record_func_804030E0_de Record_func_804030E0_de;

struct Record_func_80403458_de;
typedef struct Record_func_80403458_de Record_func_80403458_de;

struct Spline;
typedef struct Spline Spline;

struct SplineNode;
typedef struct SplineNode SplineNode;

struct State_func_8040385C_de;
typedef struct State_func_8040385C_de State_func_8040385C_de;

struct State_func_804039C4_de;
typedef struct State_func_804039C4_de State_func_804039C4_de;

struct Tables;
typedef struct Tables Tables;

struct Tables_func_80403458_de;
typedef struct Tables_func_80403458_de Tables_func_80403458_de;

struct Entry_func_80402FB4_de;
struct Entry_func_80402FB4_de {
    s32 id0;
    s32 id4;
    char pad8[0x44];
};
struct Entry_func_804030E0_de;
struct Entry_func_804030E0_de {
    s32 id0;
    s32 id4;
    s32 id8;
    s32 flags;
    char pad10[0x3C];
};
struct Entry_func_80403200_de;
struct Entry_func_80403200_de {
    s32 id0;
    s32 id4;
    s32 id8;
    s32 flags;
    char pad10[8];
    char name[0x34];
};
struct Entry_func_80403458_de;
struct Entry_func_80403458_de {
    f32 time;
    s32 side;
    s32 index;
};
struct Item_func_8040332C_de;
struct Item_func_8040332C_de {
    char pad0[0x11];
    u8 kind;
    u8 subkind;
    char pad13[1];
};
struct Item_func_80403458_de;
struct Item_func_80403458_de {
    char pad0[0xE];
    u8 flags;
    char padF[2];
    u8 kind;
    u8 subkind;
    char pad13[1];
};
struct Key_func_80401214_de;
struct Key_func_80401214_de {
    char pad0[0x1C];
    f32 time;
    char pad20[4];
};
struct Key_func_80401564_de;
struct Key_func_80401564_de {
    f32 x;
    f32 y;
    f32 z;
    f32 pad;
    f32 time;
};
struct Record_func_80402FB4_de;
struct Record_func_80402FB4_de {
    char pad0[0x18];
    s32 owner;
    char pad1C[0x58 - 0x1C];
    s32 pending;
    char pad5C[0xD8 - 0x5C];
    s32 id;
    s32 index;
};
struct Record_func_804030E0_de;
struct Record_func_804030E0_de {
    char pad0[0x18];
    s32 owner;
    char pad1C[0x58 - 0x1C];
    s32 pending;
    char pad5C[0xD8 - 0x5C];
    s32 id;
    s32 index;
    s32 key;
};
struct Record_func_80403458_de;
struct Record_func_80403458_de {
    char pad0[4];
    s32 resource;
    char pad8[0x14];
    f32 time;
    char pad20[0x14];
    f32 endTime;
    char pad38[0x18];
    s32 active;
    char pad54[4];
    s32 pending;
};
struct SplineNode;
struct SplineNode {
    Vec3 p;
    Vec3 d2p;
    f32 s;
    f32 w;
    f32 d2s;
};
struct Spline;
struct Spline {
    s32 nodeSize;
    s32 count;
    SplineNode nodes[1];
};
struct State_func_8040385C_de;
struct State_func_8040385C_de {
    char a[4];
    void *unk4;
    char b[0x30];
    s32 unk38;
};
struct State_func_804039C4_de;
struct State_func_804039C4_de {
    s32 a;
    s32 *unk4;
};
struct Tables;
struct Tables {
    char pad0[0x11D0];
    Item_func_8040332C_de *items[2];
};
struct Tables_func_80403458_de;
struct Tables_func_80403458_de {
    char pad0[0x11D0];
    Item_func_80403458_de *items[2];
};
extern Vec3 func_80401564_de(f32 t);
extern void func_80403458_de(void);
extern Vec3 func_8040385C_de(void);
extern Vec3 func_8040390C_de(void);
extern f32 func_804039C4_de(void);
extern s32 func_80403A64_de(void);
extern void func_80403ADC_de(void);
extern void *func_80403B04_de(void *value);
extern u32 func_80403B0C_de(u8 *bits, s32 index);
extern void func_80403B2C_de(u8 *bits, s32 n, s32 set);
#endif
