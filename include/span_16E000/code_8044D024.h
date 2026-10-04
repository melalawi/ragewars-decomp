#ifndef UNBAKE_SPAN_16E000_CODE_8044D024_H
#define UNBAKE_SPAN_16E000_CODE_8044D024_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Item_func_8044D668_de;
typedef struct Item_func_8044D668_de Item_func_8044D668_de;

struct Level;
typedef struct Level Level;

struct Level_func_8044CD8C_de;
typedef struct Level_func_8044CD8C_de Level_func_8044CD8C_de;

struct List_func_8044D220_de;
typedef struct List_func_8044D220_de List_func_8044D220_de;

struct Node_func_8044D220_de;
typedef struct Node_func_8044D220_de Node_func_8044D220_de;

struct ObjA;
typedef struct ObjA ObjA;

struct ObjB;
typedef struct ObjB ObjB;

struct Object_func_8044D220_de;
typedef struct Object_func_8044D220_de Object_func_8044D220_de;

struct State_func_8044D0F0_de;
typedef struct State_func_8044D0F0_de State_func_8044D0F0_de;

struct State_func_8044D528_de;
typedef struct State_func_8044D528_de State_func_8044D528_de;

struct State_func_8044D5C4_de;
typedef struct State_func_8044D5C4_de State_func_8044D5C4_de;

struct Track_func_8044D220_de;
typedef struct Track_func_8044D220_de Track_func_8044D220_de;

struct func_8044D9DC_S1;
typedef struct func_8044D9DC_S1 func_8044D9DC_S1;

struct func_8044DC48_S1;
typedef struct func_8044DC48_S1 func_8044DC48_S1;

struct func_8044DE04_S1;
typedef struct func_8044DE04_S1 func_8044DE04_S1;

struct func_8044E9A0_S1;
typedef struct func_8044E9A0_S1 func_8044E9A0_S1;

struct Item_func_8044D668_de;
struct Item_func_8044D668_de {
    char pad0[0x11];
    u8 kind;
    char pad12[2];
};
struct Level;
struct Level {
    char pad0[0x11C0];
    s32 counts[2];
    char pad11C8[8];
    Item_func_8044D668_de *items[2];
};
struct Level_func_8044CD8C_de;
struct Level_func_8044CD8C_de {
    char pad0[0x30];
    s32 key;
    char pad34[0x64 - 0x34];
    s32 file;
    void *grid;
};
struct List_func_8044D220_de;
struct List_func_8044D220_de {
    char pad0[0x10];
    s32 count;
    s32 pad14;
};
struct Node_func_8044D220_de;
struct Node_func_8044D220_de {
    s32 index;
    s32 link[2];
};
struct ObjA;
struct ObjA {
    s8 pad0;
    s8 type;
    char pad2[0x20 - 2];
    void **block;
    char pad24[0xE8 - 0x24];
};
struct ObjB;
struct ObjB {
    s8 pad0;
    s8 type;
    char pad2[0x60 - 2];
    void **block;
    char pad64[0x1C8 - 0x64];
};
struct Object_func_8044D220_de;
struct Object_func_8044D220_de {
    s32 w[4];
    s16 kind;
    s16 pad12;
};
struct State_func_8044D0F0_de;
struct State_func_8044D0F0_de {
    char pad[0x3C];
    int resource;
    char pad40[8];
    int bank;
    char pad4c[0x1B3C0];
    int selection;
    char pad1b410[12];
    int changed;
};
struct State_func_8044D528_de;
struct State_func_8044D528_de {
    char pad[0x1B2B0];
    Resource_func_80419E54_de *input;
    char pad1b2b4[0x15C];
    int mode;
    int active;
    char pad1b418[0x20];
    int selection;
};
struct State_func_8044D5C4_de;
struct State_func_8044D5C4_de {
    char p[0x11C0];
    s32 unk11C0;
    s32 unk11C4;
    char q[8];
    s32 unk11D0;
    s32 unk11D4;
};
struct State_func_8044DD50_de;
struct State_func_8044DD50_de {
    char pad0[0x24];
    s32 a;
    char pad28[0x54 - 0x28];
    s32 b;
    char pad58[0x78 - 0x58];
    s32 c;
    char pad7C[0x88 - 0x7C];
    s32 d;
    char pad8C[0xAC - 0x8C];
    s32 e;
};
struct Track_func_8044D220_de;
struct Track_func_8044D220_de {
    char pad0[0x90];
    s32 resource;
};
struct func_8044D9DC_S1;
struct func_8044D9DC_S1 {
    char pad0[0x8];
    func_8022BC04_S3 unk8;
};
struct func_8044DC48_S1;
struct func_8044DC48_S1 {
    char pad0[0x1B444];
    s32 unk1B444;
    char pad1B444[0x1B448 - 0x1B444 - sizeof(s32)];
    s32 unk1B448;
    char pad1B448[0x1B44C - 0x1B448 - sizeof(s32)];
    s32 unk1B44C;
};
struct func_8044DE04_S1;
struct func_8044DE04_S1 {
    char pad0[0x1B410];
    s32 unk1B410;
    char pad1B410[0x1B414 - 0x1B410 - sizeof(s32)];
    s32 unk1B414;
    char pad1B414[0x1B418 - 0x1B414 - sizeof(s32)];
    s32 unk1B418;
    char pad1B418[0x1B41C - 0x1B418 - sizeof(s32)];
    s32 unk1B41C;
    char pad1B41C[0x1B434 - 0x1B41C - sizeof(s32)];
    s32 unk1B434;
    char pad1B434[0x1B438 - 0x1B434 - sizeof(s32)];
    s32 unk1B438;
    char pad1B438[0x1B43C - 0x1B438 - sizeof(s32)];
    s32 unk1B43C;
    char pad1B43C[0x1B440 - 0x1B43C - sizeof(s32)];
    s32 unk1B440;
};
struct func_8044E9A0_S1;
struct func_8044E9A0_S1 {
    char pad0[0x26DBC];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    u8 unk26DC1;
};
extern int func_8044DCC0_de(void);
#endif
