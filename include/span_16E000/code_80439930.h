#ifndef UNBAKE_SPAN_16E000_CODE_80439930_H
#define UNBAKE_SPAN_16E000_CODE_80439930_H
#include "common/types.h"
#include "gfx.h"
#include "span_16E000/types.h"
#include "../types.h"
struct MenuModelItem;
typedef struct MenuModelItem MenuModelItem;

struct MenuModelScreen;
typedef struct MenuModelScreen MenuModelScreen;

struct Shared_Body;
typedef struct Shared_Body Shared_Body;

struct State_func_80439B5C_de;
typedef struct State_func_80439B5C_de State_func_80439B5C_de;

struct Entry_func_8043ACF0_de;
struct Entry_func_8043ACF0_de {
    char pad0[0x4AC];
    s32 column;
    char pad4B0[0x4CC - 0x4B0];
    s32 mode;
};
struct Entry_func_8043B0CC_de;
struct Resource_func_80419E54_de;
struct Entry_func_8043B0CC_de {
    char pad0[0x4A8];
    s32 open;
    s32 column;
    s32 values[6];
    struct Resource_func_80419E54_de *item;
    s32 mode;
};
struct Entry_func_8043B6E8_de;
struct Entry_func_8043B6E8_de {
    char pad0[0x4B0];
    s32 values[6];
    char pad4C8[0x4CC - 0x4C8];
    s32 mode;
};
struct Entry_func_8043BA24_de;
struct Entry_func_8043BA24_de {
    char pad[0x4B0];
    s32 state;
    char pad4B4[0x4D0 - 0x4B4];
};
struct Entry_func_8043BA5C_de;
struct Entry_func_8043BA5C_de {
    void *window;
    char pad4[0x4B4 - 0x4];
    s32 selection;
    s32 values[6];
    char pad4D0[0x4D0 - 0x4D0];
};
struct FourPlayerResultsScreen;
struct ResultsPlayerPanel;
struct FourPlayerResultsScreen {
    char pad0[8];
    struct ResultsPlayerPanel panels[4];
    char pad1348[0x1358 - 0x1348];
    s32 state;
    char pad135C[0x1370 - 0x135C];
    char badges[4][0xC0];
};
struct MenuModelItem;
struct MenuModelItem {
    s32 unused;
    Vec3 scale;
    Vec3 position;
    Vec3 rotation;
    Vec3 speed;
    s32 model;
    char matrices[128];
    s32 flags;
};
struct MenuModelScreen;
struct MenuModelScreen {
    char p0[0x160];
    Matrix camera;
    char p1[0x29C-0x1A0];
    f32 width;
    f32 height;
    char p2[0x380-0x2A4];
    Matrix matrices[2];
};
struct ObjectB8;
struct ObjectB8 {
    char pad[0xB8];
    s32 value;
};
struct Object_func_80439C30_de;
struct Triple;
struct Object_func_80439C30_de {
    char pad[0x28];
    struct Triple vector;
};
struct Object_func_80439CDC_de;
struct Triple;
struct Object_func_80439CDC_de {
    char pad[0x10];
    struct Triple vector;
};
struct Entry_func_8043ACF0_de;
struct Screen_func_8043ACF0_de;
struct Screen_func_8043ACF0_de {
    void *window;
    s32 pad4;
    struct Entry_func_8043ACF0_de entries[4];
};
struct Entry_func_8043B0CC_de;
struct Screen_func_8043B0CC_de;
struct Screen_func_8043B0CC_de {
    s32 window;
    s32 unk4;
    struct Entry_func_8043B0CC_de entries[4];
};
struct Entry_func_8043B6E8_de;
struct Screen_func_8043B6E8_de;
struct Screen_func_8043B6E8_de {
    void *window;
    s32 pad4;
    struct Entry_func_8043B6E8_de entries[4];
};
struct Entry_func_8043BA5C_de;
struct Screen_func_8043BA5C_de;
struct Screen_func_8043BA5C_de {
    struct Entry_func_8043BA5C_de entries[4];
};
struct State_func_80439B5C_de;
struct State_func_80439B5C_de {
    s32 unk0;
    Triple first;
    Triple second;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
};
extern s32 func_80439758_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80439D00_de(struct Object_func_80439CDC_de *object, struct Triple vector);
extern s32 func_80439E34_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern int func_8043B854_de(void);
extern void func_8043B96C_de(void);
extern s32 func_8043BA24_de(void);
#endif
