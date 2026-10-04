#ifndef UNBAKE_SPAN_1000_CODE_8020A95C_H
#define UNBAKE_SPAN_1000_CODE_8020A95C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct EntryList8020CCE8;
typedef struct EntryList8020CCE8 EntryList8020CCE8;

struct Graph;
typedef struct Graph Graph;

struct Node;
typedef struct Node Node;

struct Node8020BC50;
typedef struct Node8020BC50 Node8020BC50;

struct Node8020D114;
typedef struct Node8020D114 Node8020D114;

struct Obj8020BC50;
typedef struct Obj8020BC50 Obj8020BC50;

struct Obj_func_8020D220_de;
typedef struct Obj_func_8020D220_de Obj_func_8020D220_de;

struct ObjectLinks14;
typedef struct ObjectLinks14 ObjectLinks14;

struct ObjectState10;
typedef struct ObjectState10 ObjectState10;

union ObjectState4;
typedef union ObjectState4 ObjectState4;

struct Shared_Arg0;
typedef struct Shared_Arg0 Shared_Arg0;

struct Shared_Node;
typedef struct Shared_Node Shared_Node;

struct Shared_Target;
typedef struct Shared_Target Shared_Target;

struct Shared_WeaponSlot;
typedef struct Shared_WeaponSlot Shared_WeaponSlot;

struct Shared_WeaponWorld;
typedef struct Shared_WeaponWorld Shared_WeaponWorld;

struct Shared_func_8020AA40_S1;
typedef struct Shared_func_8020AA40_S1 Shared_func_8020AA40_S1;

struct Table8020BC50;
typedef struct Table8020BC50 Table8020BC50;

struct func_8020A95C_S1;
typedef struct func_8020A95C_S1 func_8020A95C_S1;

struct func_8020A95C_S2;
typedef struct func_8020A95C_S2 func_8020A95C_S2;

struct func_8020CA10_S1;
typedef struct func_8020CA10_S1 func_8020CA10_S1;

struct func_8020CFE0_S2;
typedef struct func_8020CFE0_S2 func_8020CFE0_S2;

struct func_8020D014_S1;
typedef struct func_8020D014_S1 func_8020D014_S1;

struct func_8020D014_S2;
typedef struct func_8020D014_S2 func_8020D014_S2;

struct func_8020D114_S1;
typedef struct func_8020D114_S1 func_8020D114_S1;

struct func_8020D28C_S2;
typedef struct func_8020D28C_S2 func_8020D28C_S2;

struct func_8020D318_S1;
typedef struct func_8020D318_S1 func_8020D318_S1;

struct EntryList8020CCE8;
struct Shape_func_802764D4_de_2;
struct EntryList8020CCE8 {
    s32 pad0[2];
    struct Shape_func_802764D4_de_2 *table;
    s32 count;
};
struct LinkTable;
struct LinkTable {
    int stride;
    int pad4;
    Link first;
};
struct Graph;
struct LinkTable;
struct Graph {
    char pad0[8];
    struct LinkTable *links;
    int count;
};
struct Node;
struct Node {
    int id;
    char pad4[0xC];
    struct Node *next;
    char pad14[0x18];
    int active;
};
struct Node8020BC50;
struct Node8020BC50 {
    s32 key;
    f32 value;
    s32 state;
    s32 fieldC;
    struct Node8020BC50 *next;
    s32 field14;
    s32 field18;
    s32 field1C;
    s32 field20;
    s32 field24;
    s32 field28;
    s32 field2C;
    s32 field30;
};
struct Node8020D114;
struct Node8020D114 {
    s32 value;
    char pad04[0xC];
    struct Node8020D114 *next;
    char pad14[0x1C];
    struct Node8020D114 *parent;
};
struct Table8020BC50;
struct Table8020BC50 {
    s32 stride;
    char data[4];
};
struct Obj8020BC50;
struct Obj8020BC50 {
    Table8020BC50 *records;
    s32 count;
    char pad8[8];
    Table8020BC50 *links;
    char pad14[4];
    s32 result;
    f32 value;
    s32 selected;
    Node8020BC50 *nodes;
};
struct Node;
struct Obj_func_8020D220_de;
struct Obj_func_8020D220_de {
    char pad[0x24];
    struct Node *list;
    char pad28[0x10];
    int ids[64];
};
struct ObjectLinks14;
struct ObjectLinks14 {
    char pad0[0x4];
    int unk_4;
    char pad4[0x10 - 0x4 - sizeof(int)];
    char * unk_10;
};
union ObjectState4;
union ObjectState4 {
    u32 v0;
    u16 v1;
};
struct ObjectState10;
struct ObjectState10 {
    char pad0[0xC];
    ObjectState4 unk_C;
};
struct Shared_Node;
struct Shared_Node {
    s32 unk0;
    char pad4[0xC];
    struct Shared_Node * unk10;
    char pad14[0x20];
    void * unk34;
};
struct Shared_Arg0;
struct Shared_Node;
struct Shared_Arg0 {
    s32 * unk0;
    char pad4[0x20];
    struct Shared_Node * unk24;
};
struct Shared_Target;
struct Shared_Target {
    char pad0[0xC];
    u16 unkC;
    u16 unkE;
};
struct Shared_WeaponSlot;
struct func_80204620_S2;
struct Shared_WeaponSlot {
    char pad0[0x8];
    char unk8;
    char pad9[0xF];
    struct func_80204620_S2 * unk18;
    char pad1C[0xC8];
    u16 unkE4;
    char padE6[0x2];
};
struct Shared_WeaponSlot;
struct Shared_WeaponWorld;
struct Shared_WeaponWorld {
    char pad0[0x138];
    struct Shared_WeaponSlot * unk138;
    char pad13C[0x4];
    s32 unk140;
};
struct Shared_func_8020AA40_S1;
struct Shared_func_8020AA40_S1 {
    char unk0[1];
};
struct func_8020A95C_S1;
struct func_8020A95C_S1 {
    char pad0[0x240];
    s32 unk240;
    char pad240[0x2E4 - 0x240 - sizeof(s32)];
    s32 unk2E4;
    char pad2E4[0x2E8 - 0x2E4 - sizeof(s32)];
    s32 unk2E8;
};
struct func_8020A95C_S2;
struct func_8020A95C_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x18 - 0xC - sizeof(s32)];
    s32 unk18;
};
struct func_8020CA10_S1;
struct func_8020CA10_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    f32 unk14;
    char pad14[0x34 - 0x14 - sizeof(f32)];
    s32 unk34;
    char pad34[0x38 - 0x34 - sizeof(s32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    s32 unk44;
    char pad44[0x48 - 0x44 - sizeof(s32)];
    s32 unk48;
    char pad48[0x4C - 0x48 - sizeof(s32)];
    s32 unk4C;
};
struct func_8020CFE0_S2;
struct func_8020CFE0_S2 {
    s32 unk0;
    char pad0[0x10 - 0x0 - sizeof(s32)];
    char * unk10;
};
struct func_8020D014_S1;
struct func_8020D014_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    void * unk24;
};
struct func_8020D014_S2;
struct func_8020D014_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    void * unk10;
    char pad10[0x18 - 0x10 - sizeof(void*)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
};
struct Node8020D114;
struct func_8020D114_S1;
struct func_8020D114_S1 {
    char pad0[0x18];
    s32 unk18;
    char pad18[0x24 - 0x18 - sizeof(s32)];
    struct Node8020D114 * unk24;
};
struct func_8020D28C_S2;
struct func_8020D28C_S2 {
    char pad0[0x10];
    char * unk10;
    char pad10[0x24 - 0x10 - sizeof(char*)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    s32 unk28;
};
struct func_8020D318_S1;
struct func_8020D318_S1 {
    char pad0[0x28];
    unsigned int unk28;
};
extern void func_8020A95C_de(void *arg0, void *arg1);
extern void func_8020AA40_de(Shared_Arg0 *arg0);
extern void func_8020CA10_de(void *arg0, s32 arg1);
extern int func_8020D280_de(void *arg0);
extern void *func_8020D28C_de(void *arg0);
extern void func_8020D2FC_de(void *object);
extern int func_8020D308_de(void *arg0);
extern int func_8020D318_de(void *arg0);
#endif
