#ifndef UNBAKE_SPAN_1000_CODE_8027ED40_H
#define UNBAKE_SPAN_1000_CODE_8027ED40_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor_func_80281A9C_de;
typedef struct Actor_func_80281A9C_de Actor_func_80281A9C_de;

struct D801041F8_Layout;
typedef struct D801041F8_Layout D801041F8_Layout;

struct Entry_func_80282C8C_de;
typedef struct Entry_func_80282C8C_de Entry_func_80282C8C_de;

struct Node_func_8027FF58_de;
typedef struct Node_func_8027FF58_de Node_func_8027FF58_de;

struct Obj_func_80283920_de;
typedef struct Obj_func_80283920_de Obj_func_80283920_de;

struct ObjectLinks1E8;
typedef struct ObjectLinks1E8 ObjectLinks1E8;

struct ObjectState60;
typedef struct ObjectState60 ObjectState60;

struct Object_func_80281A9C_de;
typedef struct Object_func_80281A9C_de Object_func_80281A9C_de;

struct Params_func_80283920_de;
typedef struct Params_func_80283920_de Params_func_80283920_de;

struct Record_func_80282C8C_de;
typedef struct Record_func_80282C8C_de Record_func_80282C8C_de;

struct World_func_80281A9C_de;
typedef struct World_func_80281A9C_de World_func_80281A9C_de;

struct func_80282E6C_S1;
typedef struct func_80282E6C_S1 func_80282E6C_S1;

union func_80282E6C_S1_U8;
typedef union func_80282E6C_S1_U8 func_80282E6C_S1_U8;

struct func_80282E6C_S2;
typedef struct func_80282E6C_S2 func_80282E6C_S2;

struct func_80282E6C_S3;
typedef struct func_80282E6C_S3 func_80282E6C_S3;

struct func_80282E6C_S5;
typedef struct func_80282E6C_S5 func_80282E6C_S5;

struct func_80282E6C_Table;
typedef struct func_80282E6C_Table func_80282E6C_Table;

struct func_80283038_S1;
typedef struct func_80283038_S1 func_80283038_S1;

struct func_8028308C_S1;
typedef struct func_8028308C_S1 func_8028308C_S1;

struct func_802831FC_S2;
typedef struct func_802831FC_S2 func_802831FC_S2;

struct func_8028324C_S1;
typedef struct func_8028324C_S1 func_8028324C_S1;

struct func_80283454_S1;
typedef struct func_80283454_S1 func_80283454_S1;

struct func_8028357C_S1;
typedef struct func_8028357C_S1 func_8028357C_S1;

struct func_802836A4_S1;
typedef struct func_802836A4_S1 func_802836A4_S1;

struct func_802839F0_S1;
typedef struct func_802839F0_S1 func_802839F0_S1;

struct func_80283BA0_S1;
typedef struct func_80283BA0_S1 func_80283BA0_S1;

struct Actor_func_80281A9C_de;
struct Actor_func_80281A9C_de {
    char pad0[4];
    u16 type;
    char pad6[2];
    Vec3 position;
    char pad14[0x118];
    SharedPlayer_func_8022A398_de *owner;
    char pad130[0x1C];
    s16 crowded;
};
struct D801041F8_Layout;
struct D801041F8_Layout {
    Triple first;
    char pad[0xD0 - 0xC];
    Triple second;
};
struct Entry_func_80282C8C_de;
struct Entry_func_80282C8C_de {
    s16 kind;
    char pad[2];
    s16 id;
};
struct Node_func_8027FF58_de;
struct Node_func_8027FF58_de {
    char pad0[0x5C];
    s32 flags;
    char pad60[0xD0];
    s32 *counter;
    char pad134[4];
    s32 resource;
    char pad13C[0x9D];
    u8 marker;
    char pad1DA[0xA];
    void *handle;
    char pad1E8[4];
    struct Node_func_8027FF58_de *next;
};
struct Obj_func_80283920_de;
struct Obj_func_80283920_de {
    char pad0[4];
    u16 unk4;
    char pad6[2];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    char pad14[0x48];
    u32 unk5C;
    char pad60[0xd8];
    s32 unk138;
};
struct ObjectLinks1E8;
struct ObjectLinks1E8 {
    s8 unk_0;
    unsigned char padding_1[23];
    s32 *unk_18;
    unsigned char padding_1C[64];
    s32 unk_5C;
    unsigned char padding_60[380];
    s32 unk_1DC;
    unsigned char padding_1E0[4];
    s32 unk_1E4;
};
struct ObjectState60;
struct ObjectState60 {
    unsigned char padding_0[4];
    u16 unk_4;
    unsigned char padding_6[86];
    s32 unk_5C;
};
struct Object_func_80281A9C_de;
struct Object_func_80281A9C_de {
    char pad0[8];
    Vec3 position;
    char pad14[0x160];
    s32 count;
};
struct Params_func_80283920_de;
struct Params_func_80283920_de {
    char pad0[6];
    s8 unk6;
    s8 unk7;
    char pad8[4];
    s16 unkC;
};
struct Record_func_80282C8C_de;
struct Record_func_80282C8C_de {
    char pad[0x20];
    Entry_func_80282C8C_de *first[3];
    Entry_func_80282C8C_de *second[3];
};
struct World_func_80281A9C_de;
struct World_func_80281A9C_de {
    char pad0[0xE54];
    Object_func_80281A9C_de *objects[64];
    s32 objectCount;
};
union func_80282E6C_S1_U8;
union func_80282E6C_S1_U8 {
    Triple v0;
    Vec3 v1;
};
struct func_80282E6C_S1;
struct func_80282E6C_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8 - 0x4 - sizeof(u16)];
    func_80282E6C_S1_U8 unk8;
    char pad8[0x118 - 0x8 - sizeof(func_80282E6C_S1_U8)];
    void * unk118;
    char pad118[0x12C - 0x118 - sizeof(void*)];
    void * unk12C;
    char pad12C[0x1D0 - 0x12C - sizeof(void*)];
    s8 unk1D0;
};
struct func_80282E6C_S2;
struct func_80282E6C_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x698 - 0x8 - sizeof(Vec3)];
    void * unk698;
    char pad698[0x11EC - 0x698 - sizeof(void*)];
    f32 unk11EC;
};
struct func_80282E6C_S3;
struct func_80282E6C_S3 {
    char pad0[0x140];
    char unk140;
};
struct func_80282E6C_S5;
struct func_80282E6C_S5 {
    char pad0[0x70];
    u16 unk70;
    char pad70[0x8C - 0x70 - sizeof(u16)];
    u16 unk8C;
};
struct func_80282E6C_Table;
struct func_80282E6C_Table {
    char pad[0xA8];
    u16 unkA8;
};
struct func_80283038_S1;
struct func_80283038_S1 {
    char pad0[0x5C];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32 * unk118;
};
struct func_8028308C_S1;
struct func_8028308C_S1 {
    char pad0[0xFC68];
    int unkFC68;
};
struct func_802831FC_S2;
struct func_802831FC_S2 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x12C - 0x4 - sizeof(u16)];
    s32 unk12C;
    char pad12C[0x1EC - 0x12C - sizeof(s32)];
    s8 * unk1EC;
};
struct func_8028324C_S1;
struct func_8028324C_S1 {
    char pad0[0xFC00];
    char unkFC00;
    char padFC00[0xFC14 - 0xFC00 - sizeof(char)];
    char unkFC14;
};
struct func_80283454_S1;
struct func_80283454_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32 * unk118;
    char pad118[0x12C - 0x118 - sizeof(s32*)];
    void * unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
};
struct func_8028357C_S1;
struct func_8028357C_S1 {
    char pad0[0x1C];
    Vec3 unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Vec3)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32 * unk118;
    char pad118[0x12C - 0x118 - sizeof(s32*)];
    void * unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    void * unk130;
    char pad130[0x134 - 0x130 - sizeof(void*)];
    s32 unk134;
};
struct func_802836A4_S1;
struct func_802836A4_S1 {
    char pad0[0x1C];
    Vec3 unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Vec3)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32 * unk118;
    char pad118[0x12C - 0x118 - sizeof(s32*)];
    void * unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    s32 unk130;
    char pad130[0x134 - 0x130 - sizeof(s32)];
    s32 unk134;
};
struct func_802839F0_S1;
struct func_802839F0_S1 {
    char pad0[0x138];
    s32 unk138;
    char pad138[0x1D9 - 0x138 - sizeof(s32)];
    u8 unk1D9;
};
struct func_80283BA0_S1;
struct func_80283BA0_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x1C - 0x8 - sizeof(Triple)];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    int unk5C;
};
extern void func_8027FF58_de(void *arg0);
extern s32 func_802833DC_de(void *arg0);
extern void func_80283424_de(void *arg0);
extern void func_80283BA0_de(void *arg0, s32 arg1);
extern void func_80283BCC_de(void *arg0);
extern s32 func_80283D38_de(s32 arg0);
#endif
