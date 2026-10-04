#ifndef UNBAKE_SPAN_1000_CODE_80283D24_H
#define UNBAKE_SPAN_1000_CODE_80283D24_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Arg1;
typedef struct Arg1 Arg1;

struct Entry_func_8028466C_de;
typedef struct Entry_func_8028466C_de Entry_func_8028466C_de;

struct IntegerState1E0;
typedef struct IntegerState1E0 IntegerState1E0;

struct Obj_func_80284DC4_de;
typedef struct Obj_func_80284DC4_de Obj_func_80284DC4_de;

struct ObjectLinks188;
typedef struct ObjectLinks188 ObjectLinks188;

struct TrailActor;
typedef struct TrailActor TrailActor;

struct func_80283D24_S1;
typedef struct func_80283D24_S1 func_80283D24_S1;

union func_80283D24_S1_U8;
typedef union func_80283D24_S1_U8 func_80283D24_S1_U8;

struct func_8028403C_S1;
typedef struct func_8028403C_S1 func_8028403C_S1;

struct func_8028414C_S2;
typedef struct func_8028414C_S2 func_8028414C_S2;

struct func_8028438C_S1;
typedef struct func_8028438C_S1 func_8028438C_S1;

struct func_8028469C_S1;
typedef struct func_8028469C_S1 func_8028469C_S1;

struct func_8028469C_S3;
typedef struct func_8028469C_S3 func_8028469C_S3;

struct func_8028469C_S4;
typedef struct func_8028469C_S4 func_8028469C_S4;

struct func_8028472C_S1;
typedef struct func_8028472C_S1 func_8028472C_S1;

struct func_8028472C_S2;
typedef struct func_8028472C_S2 func_8028472C_S2;

struct func_8028472C_S3;
typedef struct func_8028472C_S3 func_8028472C_S3;

struct func_80284870_S1;
typedef struct func_80284870_S1 func_80284870_S1;

struct func_80284AF4_S1;
typedef struct func_80284AF4_S1 func_80284AF4_S1;

struct func_80284AF4_S3;
typedef struct func_80284AF4_S3 func_80284AF4_S3;

struct func_80284FC8_S3;
typedef struct func_80284FC8_S3 func_80284FC8_S3;

struct func_8028509C_S1;
typedef struct func_8028509C_S1 func_8028509C_S1;

struct func_8028509C_S2;
typedef struct func_8028509C_S2 func_8028509C_S2;

struct func_80285150_S1;
typedef struct func_80285150_S1 func_80285150_S1;

struct func_80285150_S2;
typedef struct func_80285150_S2 func_80285150_S2;

struct Arg1;
struct Arg1 {
    char pad0[0x24];
    s32 field24;
    char pad28[0x100];
    Vec3 position128;
};
struct Entry_func_8028466C_de;
struct Entry_func_8028466C_de {
    int unk0;
    void *handle;
    char pad8[0xC];
};
struct IntegerState1E0;
struct IntegerState1E0 {
    unsigned char padding_0[476];
    s32 unk_1DC;
};
struct Obj_func_80284DC4_de;
struct Obj_func_80284DC4_de {
    char pad[4];
    unsigned short unk4;
    char pad6[2];
    f32 pos[3];
    char pad14[0x138];
    short unk14C;
};
struct ObjectLinks188;
struct ObjectLinks188 {
    unsigned char padding_0[280];
    void *unk_118;
    unsigned char padding_11C[104];
    f32 unk_184;
};
struct TrailState;
struct TrailState {
    char pad0[0xC];
    s8 count;
};
struct TrailNode;
struct TrailState;
struct TrailNode {
    char pad0[0x38];
    struct TrailState *state;
};
struct TrailActor;
struct TrailNode;
struct TrailActor {
    char pad0[4];
    u16 model;
    char pad6[2];
    Triple origin;
    char pad14[8];
    Triple position;
    char pad28[0x118 - 0x28];
    struct TrailNode *node;
    char pad11C[0x12C - 0x11C];
    void *owner;
    s32 property;
    s32 type;
    char pad138[0x168 - 0x138];
    Triple end;
};
union func_80283D24_S1_U8;
union func_80283D24_S1_U8 {
    Triple v0;
    s32 v1;
};
struct func_80283D24_S1;
struct func_80283D24_S1 {
    char pad0[0x8];
    func_80283D24_S1_U8 unk8;
    char pad8[0x118 - 0x8 - sizeof(func_80283D24_S1_U8)];
    void * unk118;
    char pad118[0x1D0 - 0x118 - sizeof(void*)];
    s8 unk1D0;
};
struct func_8028403C_S1;
struct func_8028403C_S1 {
    char pad0[0x5C];
    unsigned int unk5C;
};
struct func_8028414C_S2;
struct func_8028414C_S2 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5C - 0x8 - sizeof(char)];
    s32 unk5C;
};
struct func_8028438C_S1;
struct func_8028438C_S1 {
    char pad0[0x8];
    char unk8;
    char pad8[0x1DC - 0x8 - sizeof(char)];
    void * unk1DC;
};
struct func_8028469C_S1;
struct func_8028469C_S1 {
    char pad0[0xFC28];
    char unkFC28;
};
struct func_8028469C_S3;
struct func_8028469C_S3 {
    char pad0[0x8];
    s8 unk8;
};
struct func_8028469C_S4;
struct func_8028469C_S4 {
    char pad0[0x118];
    void * unk118;
    char pad118[0x124 - 0x118 - sizeof(void*)];
    s32 unk124;
    char pad124[0x1EC - 0x124 - sizeof(s32)];
    void * unk1EC;
};
struct func_8028472C_S1;
struct func_8028472C_S1 {
    char pad0[0xFC14];
    func_80239C2C_S1_UF24 unkFC14;
};
struct func_8028472C_S2;
struct func_8028472C_S2 {
    char pad0[0x5C];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    func_8028472C_S2_U118 unk118;
};
struct func_8028472C_S3;
struct func_8028472C_S3 {
    char pad0[0x118];
    s32 unk118;
    char pad118[0x1F4 - 0x118 - sizeof(s32)];
    void * unk1F4;
};
struct func_80284870_S1;
struct func_80284870_S1 {
    char pad0[0x118];
    void * unk118;
    char pad118[0x180 - 0x118 - sizeof(void*)];
    float unk180;
};
struct func_80284AF4_S1;
struct func_80284AF4_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8 - 0x4 - sizeof(u16)];
    f32 unk8;
    char pad8[0x118 - 0x8 - sizeof(f32)];
    void * unk118;
};
struct func_80284AF4_S3;
struct func_80284AF4_S3 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x16E0 - 0x8 - sizeof(Vec3)];
    void * unk16E0;
};
struct func_80284FC8_S3;
struct func_80284FC8_S3 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x8 - 0x4 - sizeof(u16)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x5C - 0x10 - sizeof(f32)];
    s32 unk5C;
    char pad5C[0x12C - 0x5C - sizeof(s32)];
    s32 unk12C;
    char pad12C[0x1EC - 0x12C - sizeof(s32)];
    s8 * unk1EC;
};
struct func_8028509C_S1;
struct func_8028509C_S1 {
    char pad0[0xFC14];
    void * unkFC14;
};
struct func_8028509C_S2;
struct func_8028509C_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x5C - 0x8 - sizeof(f32)];
    s32 unk5C;
    char pad5C[0x12C - 0x5C - sizeof(s32)];
    void * unk12C;
    char pad12C[0x1F4 - 0x12C - sizeof(void*)];
    void * unk1F4;
};
struct func_80285150_S1;
struct func_80285150_S1 {
    void * unk0;
    s32 unk4;
};
struct func_80285150_S2;
struct func_80285150_S2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    char pad8[0x6];
    s8 unk12;
};
extern float func_80284090_de(void * arg0, float arg1, void * arg2);
extern s32 func_8028480C_de(s32 arg0);
extern void func_80284870_de(f32 arg0);
extern float func_8028489C_de(void *arg0);
extern f32 func_802848BC_de(void *arg0);
extern void func_80284DC4_de(s32 unused, Obj_func_80284DC4_de *center, Obj_func_80284DC4_de **objects, s32 count);
extern void func_80285100_eu(long long arg1);
#endif
