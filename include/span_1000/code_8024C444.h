#ifndef UNBAKE_SPAN_1000_CODE_8024C444_H
#define UNBAKE_SPAN_1000_CODE_8024C444_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Body_func_8024C6E8_de;
typedef struct Body_func_8024C6E8_de Body_func_8024C6E8_de;

struct Input_func_8024D728_de;
typedef struct Input_func_8024D728_de Input_func_8024D728_de;

struct Lookup_func_8024C454_de;
typedef struct Lookup_func_8024C454_de Lookup_func_8024C454_de;

struct ObjectLinks24;
typedef struct ObjectLinks24 ObjectLinks24;

struct ObjectList;
typedef struct ObjectList ObjectList;

struct Probe;
typedef struct Probe Probe;

struct SoundRequest;
typedef struct SoundRequest SoundRequest;

struct Source_func_8024C6E8_de;
typedef struct Source_func_8024C6E8_de Source_func_8024C6E8_de;

struct func_8024C5C4_S1;
typedef struct func_8024C5C4_S1 func_8024C5C4_S1;

struct func_8024C91C_S1;
typedef struct func_8024C91C_S1 func_8024C91C_S1;

struct func_8024D0F8_S1;
typedef struct func_8024D0F8_S1 func_8024D0F8_S1;

struct func_8024D49C_S1;
typedef struct func_8024D49C_S1 func_8024D49C_S1;

struct func_8024D860_S1;
typedef struct func_8024D860_S1 func_8024D860_S1;

struct func_8024D860_S2;
typedef struct func_8024D860_S2 func_8024D860_S2;

struct func_8024DD48_S1;
typedef struct func_8024DD48_S1 func_8024DD48_S1;

struct Body_func_8024C6E8_de;
struct Body_func_8024C6E8_de {
    char pad0[0x30];
    Vec3 velocity;
};
struct Input_func_8024D728_de;
struct Input_func_8024D728_de {
    u8 state;
    u8 pad[0x43];
    Vec3 direction;
};
struct Lookup_func_8024C454_de;
struct Lookup_func_8024C454_de {
    u32 pad0[3];
    void **value;
};
struct ObjectLinks24;
struct ObjectLinks24 {
    char * unk_0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    char * unk_4;
    char pad4[0xC - 0x4 - sizeof(char*)];
    void * unk_C;
    char padC[0x10 - 0xC - sizeof(void*)];
    s32 unk_10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk_14;
    char pad14[0x20 - 0x14 - sizeof(s32)];
    f32 unk_20;
};
struct ObjectList;
struct ObjectList {
    char pad0[4];
    char *objects;
    s32 count;
};
struct Probe;
struct Probe {
    char pad0[0x18];
    Vec3 start;
    char pad24[0x24];
    Vec3 dir;
    char pad54[0x8C];
};
struct SoundRequest;
struct SoundRequest {
    s32 kind;
    Triple position;
    char pad[0x148];
    s32 owner;
    s32 flags;
};
struct Source_func_8024C6E8_de;
struct Source_func_8024C6E8_de {
    char pad0[0x12];
    s8 charges;
    char pad13;
    s8 owner;
    char pad15[3];
    Vec3 position;
};
struct func_8024C5C4_S1;
struct func_8024C5C4_S1 {
    char pad0[0x17C];
    s32 unk17C;
};
struct Rec_func_8024C92C_de;
struct func_8024C91C_S1;
struct func_8024C91C_S1 {
    char * unk0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    struct Rec_func_8024C92C_de * unk4;
    char pad4[0x8 - 0x4 - sizeof(Rec_func_8024C92C_de*)];
    void * unk8;
    char pad8[0x18 - 0x8 - sizeof(void*)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    f32 unk20;
};
struct func_8024D0F8_S1;
struct func_8024D0F8_S1 {
    char pad0[0xB4];
    int unkB4;
    char padB4[0xE8 - 0xB4 - sizeof(int)];
    char unkE8;
};
struct func_8024D49C_S1;
struct func_8024D49C_S1 {
    char pad0[0x1F0];
    char * unk1F0;
};
struct func_8024D860_S1;
struct func_8024D860_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    s32 unk14;
    char pad14[0x38 - 0x14 - sizeof(s32)];
    s32 unk38;
    char pad38[0x100 - 0x38 - sizeof(s32)];
    s32 unk100;
};
struct func_8024D860_S2;
struct func_8024D860_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x40 - 0x10 - sizeof(f32)];
    f32 unk40;
    char pad40[0x44 - 0x40 - sizeof(f32)];
    Vec3 unk44;
    char pad44[0x6C - 0x44 - sizeof(Vec3)];
    f32 unk6C;
};
struct func_8024DD48_S1;
struct func_8024DD48_S1 {
    s32 unk0;
    char pad0[0x14 - 0x0 - sizeof(s32)];
    char unk14;
};
extern void func_8024C874_de(void *arg0, f32 t, void *a, void *b);
extern void func_8024C8C4_de(void *arg0, f32 t, void *a, void *b);
extern void func_8024C92C_de(void *arg0, s32 arg1, void *arg2);
extern void func_8024CA10_de(void *arg0, s32 arg1, void *arg2);
extern void func_8024CC30_de(f32 *src, PackedMatrixWords *dst);
extern void func_8024D028_de(f32 *m, f32 *q, f32 *t);
extern int func_8024D264_de(void * arg0);
#endif
