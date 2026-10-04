#ifndef UNBAKE_SPAN_1000_CODE_802406DC_H
#define UNBAKE_SPAN_1000_CODE_802406DC_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_80241BAC_de;
typedef struct Actor_func_80241BAC_de Actor_func_80241BAC_de;

struct Actor_func_80242288_de;
typedef struct Actor_func_80242288_de Actor_func_80242288_de;

struct Actor_func_80242550_de;
typedef struct Actor_func_80242550_de Actor_func_80242550_de;

struct Actor_func_802426CC_de;
typedef struct Actor_func_802426CC_de Actor_func_802426CC_de;

struct Bounds;
typedef struct Bounds Bounds;

struct EntryBlock;
typedef struct EntryBlock EntryBlock;

struct Entry_func_80242288_de;
typedef struct Entry_func_80242288_de Entry_func_80242288_de;

struct Entry_func_80242550_de;
typedef struct Entry_func_80242550_de Entry_func_80242550_de;

struct FloatState68;
typedef struct FloatState68 FloatState68;

struct FloatState68_2;
typedef struct FloatState68_2 FloatState68_2;

struct Footprint;
typedef struct Footprint Footprint;

struct Input_func_80241BAC_de;
typedef struct Input_func_80241BAC_de Input_func_80241BAC_de;

struct Input_func_80242550_de;
typedef struct Input_func_80242550_de Input_func_80242550_de;

struct Input_func_802426CC_de;
typedef struct Input_func_802426CC_de Input_func_802426CC_de;

struct Owner_func_80241BAC_de;
typedef struct Owner_func_80241BAC_de Owner_func_80241BAC_de;

struct Plane;
typedef struct Plane Plane;

struct Query_func_80241BAC_de;
typedef struct Query_func_80241BAC_de Query_func_80241BAC_de;

struct Query_func_80242288_de;
typedef struct Query_func_80242288_de Query_func_80242288_de;

struct Shape_func_80241950_de;
typedef struct Shape_func_80241950_de Shape_func_80241950_de;

struct func_80240C7C_S1;
typedef struct func_80240C7C_S1 func_80240C7C_S1;

struct func_80240C9C_S1;
typedef struct func_80240C9C_S1 func_80240C9C_S1;

struct func_80241250_S1;
typedef struct func_80241250_S1 func_80241250_S1;

struct func_802414E4_S1;
typedef struct func_802414E4_S1 func_802414E4_S1;

struct func_80241718_S1;
typedef struct func_80241718_S1 func_80241718_S1;

struct func_80241940_S1;
typedef struct func_80241940_S1 func_80241940_S1;

struct func_80241940_S2;
typedef struct func_80241940_S2 func_80241940_S2;

struct func_80241940_S3;
typedef struct func_80241940_S3 func_80241940_S3;

struct func_80241F14_S3;
typedef struct func_80241F14_S3 func_80241F14_S3;

struct func_802428DC_S2;
typedef struct func_802428DC_S2 func_802428DC_S2;

struct Query_func_80241BAC_de;
struct Query_func_80241BAC_de {
    s32 word0;
    s32 word4;
    s32 word8;
    s32 wordC;
    s32 word10;
    u8 pad14[0x40];
    void *input;
    s32 index;
    u8 pad5C[0x80];
};
struct Actor_func_80241BAC_de;
struct Actor_func_80241BAC_de {
    u8 pad00[0x3C];
    s32 flags;
    u8 pad40[0x1C];
    f32 move_x;
    f32 move_y;
    f32 move_z;
    u8 pad68[0x48];
    Query_func_80241BAC_de saved_query;
};
struct Owner_func_80241BAC_de;
struct Owner_func_80241BAC_de {
    u8 pad0[0x18];
    u8 *entries;
};
struct Actor_func_80242288_de;
struct Actor_func_80242288_de {
    Owner_func_80241BAC_de *owner;
    u8 pad04[8];
    f32 fieldC;
    u8 pad10[0x30];
    void *field40;
    u8 pad44[0x18];
    f32 field5C;
    f32 field60;
    f32 field64;
};
struct Actor_func_80242550_de;
struct Actor_func_80242550_de {
    Owner_func_80241BAC_de *owner;
    u8 pad04[0x3C];
    s32 *flags;
    Triple previous;
    Triple position;
    Triple delta;
};
struct Actor_func_802426CC_de;
struct Actor_func_802426CC_de {
    u8 pad00[0x3C];
    s32 flags;
    u8 pad40[0x70];
    Query_func_80241BAC_de saved_query;
};
struct Bounds;
struct Bounds {
    u8 bytes[0x60];
};
struct Entry_func_80242288_de;
struct Entry_func_80242288_de {
    u8 pad0[4];
    u16 kind;
    u8 pad6[2];
    f32 value;
};
struct EntryBlock;
struct EntryBlock {
    u8 pad[0x14];
    Entry_func_80242288_de entry;
};
struct Entry_func_80242550_de;
struct Entry_func_80242550_de {
    u8 pad0[4];
    u16 kind;
};
struct FloatState68;
struct FloatState68 {
    unsigned char padding_0[92];
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
};
struct FloatState68_2;
struct FloatState68_2 {
    unsigned char padding_0[12];
    f32 unk_C;
    unsigned char padding_10[76];
    f32 unk_5C;
    f32 unk_60;
    f32 unk_64;
};
struct Footprint;
struct Footprint {
    char pad0[0x18];
    Vec3 corner[4];
    f32 pad48;
    f32 winding;
};
struct Input_func_80241BAC_de;
struct Owner_func_80241BAC_de;
struct Input_func_80241BAC_de {
    u8 kind;
    u8 pad01[7];
    f32 x;
    f32 y;
    f32 z;
    u8 pad14[0xC];
    f32 floor;
    u8 pad24[0x10];
    struct Owner_func_80241BAC_de *owner;
    s32 flags38;
    u8 pad3C[0xC4];
    s32 flags100;
};
struct Input_func_80242550_de;
struct Input_func_80242550_de {
    u8 pad0[8];
    Triple position;
};
struct Input_func_802426CC_de;
struct Input_func_802426CC_de {
    u8 kind;
    u8 pad01[7];
    f32 x;
    f32 y;
    f32 z;
    u8 pad14[0xC];
    f32 floor;
    u8 pad24[0x10];
    void *owner;
    s32 flags38;
    u8 pad3C[0xC4];
    s32 flags100;
};
struct Plane;
struct Plane {
    char pad[0x18];
    Vec3 pos;
    char pad24[0x24];
    Vec3 normal;
};
struct Quad;
struct Quad {
    char pad0[0x14];
    s32 kind;
    Vec3 corner[4];
    Vec3 normal;
};
struct Query_func_80242288_de;
struct Query_func_80242288_de {
    s32 word0;
    s32 word4;
    s32 word8;
    s32 wordC;
    s32 word10;
    u8 pad14[0x40];
    Owner_func_80241BAC_de *owner;
    s32 index;
    u8 pad5C[0x84];
};
struct Shape_func_80241950_de;
struct Shape_func_80241950_de {
    s32 flags;
    u16 kind;
    f32 radius;
    f32 halfWidth;
    f32 height;
    f32 halfDepth;
    Vec3 center;
};
struct func_80240C7C_S1;
struct func_80240C7C_S1 {
    s32 unk0;
    char pad0[0x54 - 0x0 - sizeof(s32)];
    s32 unk54;
    char pad54[0x58 - 0x54 - sizeof(s32)];
    s32 unk58;
    char pad58[0xCC - 0x58 - sizeof(s32)];
    f32 unkCC;
};
struct func_80240C9C_S1;
struct func_80240C9C_S1 {
    char pad0[0x18];
    Vec3 unk18;
    char pad18[0x24 - 0x18 - sizeof(Vec3)];
    Vec3 unk24;
    char pad24[0x30 - 0x24 - sizeof(Vec3)];
    Vec3 unk30;
    char pad30[0x48 - 0x30 - sizeof(Vec3)];
    Vec3 unk48;
};
struct func_80241250_S1;
struct func_80241250_S1 {
    char pad0[0x18];
    Vec3 unk18;
    char pad18[0x48 - 0x18 - sizeof(Vec3)];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
};
struct func_802414E4_S1;
struct func_802414E4_S1 {
    char pad0[0x18];
    char unk18;
    char pad18[0x48 - 0x18 - sizeof(char)];
    char unk48;
};
struct func_80241718_S1;
struct func_80241718_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x48 - 0x1C - sizeof(f32)];
    Vec3 unk48;
};
struct func_80241940_S1;
struct func_80241940_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x18 - 0x10 - sizeof(s32)];
    char * unk18;
    char pad18[0x5C - 0x18 - sizeof(char*)];
    Vector4f unk5C;
    char pad5C[0x6C - 0x5C - sizeof(Vector4f)];
    f32 unk6C;
};
struct func_80241940_S2;
struct func_80241940_S2 {
    char pad0[0x134];
    s32 unk134;
};
struct func_80241940_S3;
struct func_80241940_S3 {
    char pad0[0x10];
    f32 unk10;
    char pad10[0x54 - 0x10 - sizeof(f32)];
    f32 unk54;
};
struct func_80241F14_S3;
struct func_80241F14_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x34 - 0x4 - sizeof(s32)];
    f32 unk34;
};
struct func_802428DC_S2;
struct func_802428DC_S2 {
    char pad0[0x3C];
    int unk3C;
    char pad3C[0x5C - 0x3C - sizeof(int)];
    Vec3 unk5C;
};
extern void func_80240C8C_de(void *arg0);
extern f32 func_802417C4_de(f32 *arg0);
extern void func_802428D0_de(void *first, void *second);
extern void func_802428EC_de(void *arg0, void *arg1);
#endif
