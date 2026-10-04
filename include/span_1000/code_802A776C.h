#ifndef UNBAKE_SPAN_1000_CODE_802A776C_H
#define UNBAKE_SPAN_1000_CODE_802A776C_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Bar;
typedef struct Bar Bar;

struct Entry_func_802A6F68_de;
typedef struct Entry_func_802A6F68_de Entry_func_802A6F68_de;

struct Entry_func_802A70D4_de;
typedef struct Entry_func_802A70D4_de Entry_func_802A70D4_de;

struct Frame_func_802A7660_de;
typedef struct Frame_func_802A7660_de Frame_func_802A7660_de;

struct Hud;
typedef struct Hud Hud;

struct Marker_func_802A71C0_de;
typedef struct Marker_func_802A71C0_de Marker_func_802A71C0_de;

struct Menu_func_802A70D4_de;
typedef struct Menu_func_802A70D4_de Menu_func_802A70D4_de;

struct ObjectLinksC_2;
typedef struct ObjectLinksC_2 ObjectLinksC_2;

struct ObjectState30_2;
typedef struct ObjectState30_2 ObjectState30_2;

struct Record_func_802A6F68_de;
typedef struct Record_func_802A6F68_de Record_func_802A6F68_de;

struct func_802A7FA8_S1;
typedef struct func_802A7FA8_S1 func_802A7FA8_S1;

struct func_802A7FA8_S3;
typedef struct func_802A7FA8_S3 func_802A7FA8_S3;

struct func_802A7FA8_S4;
typedef struct func_802A7FA8_S4 func_802A7FA8_S4;

struct func_802A8158_S1;
typedef struct func_802A8158_S1 func_802A8158_S1;

struct func_802AB6C0_S1;
typedef struct func_802AB6C0_S1 func_802AB6C0_S1;

struct Bar;
struct Bar {
    s32 unk0;
    s32 *script;
    s32 state;
    s32 wait;
    f32 x;
    f32 y;
    char pad18[0x20];
    s32 fill;
    s32 label;
    char pad40[4];
    s32 target;
};
struct Entry_func_802A6F68_de;
struct Entry_func_802A6F68_de {
    int unk0;
    int unk4;
    char pad8[5];
    unsigned char unkD;
    char padE[0x18 - 0xE];
    short unk18;
    int unk1C;
    char pad20[0x18];
};
struct Entry_func_802A70D4_de;
struct Entry_func_802A70D4_de {
    char pad0[0x4];
    s32 active;
    char pad8[0x38 - 0x8];
};
struct Frame_func_802A7660_de;
struct Frame_func_802A7660_de {
    char pad0[0x2A0];
    f32 height;
};
struct Hud;
struct Hud {
    Bar bars[2];
};
struct Marker_func_802A71C0_de;
struct Marker_func_802A71C0_de {
    char text[15];
};
struct Menu_func_802A70D4_de;
struct Menu_func_802A70D4_de {
    Entry_func_802A70D4_de entries[4];
    char padE0[0xE4 - 0xE0];
    u16 cursor;
};
struct ObjectLinksC_2;
struct ObjectLinksC_2 {
    unsigned char padding_0[4];
    s32 *unk_4;
    s32 unk_8;
};
struct ObjectState30_2;
struct ObjectState30_2 {
    unsigned char padding_0[4];
    s32 unk_4;
    unsigned char padding_8[16];
    s16 unk_18;
    unsigned char padding_1A[2];
    s32 unk_1C;
    f32 unk_20;
    s32 unk_24;
    f32 unk_28;
    s32 unk_2C;
};
struct Record_func_802A6F68_de;
struct Record_func_802A6F68_de {
    unsigned char unk0;
    unsigned char unk1;
    char pad2[2];
    Entry_func_802A6F68_de entries[4];
    short unkE4;
    short unkE6;
    int unkE8;
};
struct func_802A7FA8_S1;
struct func_802A7FA8_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x10 - 0x4 - sizeof(s32)];
    u8 unk10;
};
struct func_802A7FA8_S3;
struct func_802A7FA8_S3 {
    char pad0[0xE4];
    s16 unkE4;
};
struct func_802A7FA8_S4;
struct func_802A7FA8_S4 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    u8 unkC;
    char padC[0xD - 0xC - sizeof(u8)];
    u8 unkD;
    char padD[0x10 - 0xD - sizeof(u8)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x28 - 0x14 - sizeof(s32)];
    f32 unk28;
    char pad28[0x2C - 0x28 - sizeof(f32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
    char pad30[0x34 - 0x30 - sizeof(s32)];
    s32 unk34;
};
struct func_802A8158_S1;
struct func_802A8158_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0xD - 0x4 - sizeof(int)];
    char unkD;
    char padD[0x18 - 0xD - sizeof(char)];
    short unk18;
    char pad18[0x1C - 0x18 - sizeof(short)];
    int unk1C;
};
struct func_802AB6C0_S1;
struct func_802AB6C0_S1 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    char unk8;
    char pad8[0x10 - 0x8 - sizeof(char)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x38 - 0x14 - sizeof(f32)];
    s32 unk38;
};
extern void func_802A7168_de(void *arg0);
extern void func_802A7180_de(void *arg0, void *arg1);
extern void func_802A754C_de(void);
extern void func_802A84F8_de(void);
extern void func_802A8710_de(void);
extern void func_802A8800_de(void);
#endif
