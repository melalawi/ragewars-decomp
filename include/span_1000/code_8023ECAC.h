#ifndef UNBAKE_SPAN_1000_CODE_8023ECAC_H
#define UNBAKE_SPAN_1000_CODE_8023ECAC_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Dst;
typedef struct Dst Dst;

struct EntityTable;
typedef struct EntityTable EntityTable;

struct Entry_func_8023EE60_de;
typedef struct Entry_func_8023EE60_de Entry_func_8023EE60_de;

struct Reusable;
typedef struct Reusable Reusable;

struct func_8023ED54_S1;
typedef struct func_8023ED54_S1 func_8023ED54_S1;

struct func_8023ED54_S2;
typedef struct func_8023ED54_S2 func_8023ED54_S2;

struct func_8023EE24_S1;
typedef struct func_8023EE24_S1 func_8023EE24_S1;

struct func_8023EE50_S1;
typedef struct func_8023EE50_S1 func_8023EE50_S1;

struct func_8023F42C_S1;
typedef struct func_8023F42C_S1 func_8023F42C_S1;

struct func_8023F42C_S2;
typedef struct func_8023F42C_S2 func_8023F42C_S2;

struct func_8023F634_S1;
typedef struct func_8023F634_S1 func_8023F634_S1;

struct Dst;
struct Dst {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
};
struct EntityTable;
struct EntityTable {
    char pad0[0x144];
    u8 *entities[0x200];
    s32 count;
};
struct Dst;
struct Entry_func_8023EE60_de;
struct Entry_func_8023EE60_de {
    struct Dst *dst;
    s32 val0;
    u8 pad1[3];
    u8 flag0;
    u8 pad2[3];
    u8 flag1;
    u8 pad3[3];
    u8 flag2;
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    f32 extra;
};
struct Reusable;
struct Reusable {
    s32 unk0;
    char pad4[0x10];
    s32 unk14;
    char pad18[0x70];
    s32 unk88;
    char pad8C[0x10];
    s32 unk9C;
    char padA0[0x10];
    s32 unkB0;
    s32 unkB4;
    char padB8[0xC];
    s32 unkC4;
};
struct func_8023ED54_S1;
struct func_8023ED54_S1 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    s32 unk8;
    char pad8[0xCC - 0x8 - sizeof(s32)];
    f32 unkCC;
};
struct func_8023ED54_S2;
struct func_8023ED54_S2 {
    char pad0[0x80];
    f32 unk80;
    char pad80[0x17C - 0x80 - sizeof(f32)];
    f32 unk17C;
};
struct func_8023EE24_S1;
struct func_8023EE24_S1 {
    unsigned int unk0;
    char pad0[0x14 - 0x0 - sizeof(unsigned int)];
    int unk14;
    char pad14[0x88 - 0x14 - sizeof(int)];
    unsigned int unk88;
    char pad88[0x9C - 0x88 - sizeof(unsigned int)];
    unsigned int unk9C;
    char pad9C[0xB0 - 0x9C - sizeof(unsigned int)];
    unsigned int unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(unsigned int)];
    unsigned int unkB4;
    char padB4[0xC4 - 0xB4 - sizeof(unsigned int)];
    unsigned int unkC4;
};
struct func_8023EE50_S1;
struct func_8023EE50_S1 {
    char pad0[0x28];
    Entry_func_8023EE60_de unk28;
};
struct Shape;
struct func_8023F42C_S1;
struct func_8023F42C_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x40 - 0x14 - sizeof(f32)];
    struct Shape * unk40;
    char pad40[0x44 - 0x40 - sizeof(Shape*)];
    f32 unk44;
    char pad44[0x48 - 0x44 - sizeof(f32)];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
};
struct func_8023F42C_S2;
struct func_8023F42C_S2 {
    char pad0[0x174];
    s32 unk174;
};
struct func_8023F634_S1;
struct func_8023F634_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    char unk10;
    char pad10[0x14 - 0x10 - sizeof(char)];
    f32 unk14;
    char pad14[0x40 - 0x14 - sizeof(f32)];
    s32 * unk40;
    char pad40[0x44 - 0x40 - sizeof(s32*)];
    f32 unk44;
    char pad44[0x48 - 0x44 - sizeof(f32)];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
};
extern void func_8023EE00_de(void);
extern void func_8023EE34_de(void);
extern void func_80240538_de(float *s, float *d);
extern void func_802405FC_de(struct Shape_func_802764D4_de_2 *left, struct Shape_func_802764D4_de_2 *right);
extern int func_80240638_de(void *left, void *right);
extern s32 func_80240698_de(void *arg0, s32 arg1, Triple t, s32 arg5, s32 arg6, void *arg7);
#endif
