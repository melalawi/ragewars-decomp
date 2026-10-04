#ifndef UNBAKE_SPAN_1000_CODE_8020D328_H
#define UNBAKE_SPAN_1000_CODE_8020D328_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor1DC;
typedef struct Actor1DC Actor1DC;

struct Actor_func_8020E674_de;
typedef struct Actor_func_8020E674_de Actor_func_8020E674_de;

struct Func8020ED50Arg;
typedef struct Func8020ED50Arg Func8020ED50Arg;

struct Node_func_8020F150_de;
typedef struct Node_func_8020F150_de Node_func_8020F150_de;

struct Obj_func_8020D9C0_de;
typedef struct Obj_func_8020D9C0_de Obj_func_8020D9C0_de;

struct Obj_func_8020DB14_de;
typedef struct Obj_func_8020DB14_de Obj_func_8020DB14_de;

struct ObjectLinks1458;
typedef struct ObjectLinks1458 ObjectLinks1458;

struct ObjectLinks40;
typedef struct ObjectLinks40 ObjectLinks40;

struct Selection_func_8020D4AC_de;
typedef struct Selection_func_8020D4AC_de Selection_func_8020D4AC_de;

struct Stage;
typedef struct Stage Stage;

struct WeightSource;
typedef struct WeightSource WeightSource;

struct func_8020D328_S2;
typedef struct func_8020D328_S2 func_8020D328_S2;

struct func_8020DC10_S1;
typedef struct func_8020DC10_S1 func_8020DC10_S1;

struct func_8020DCA0_S1;
typedef struct func_8020DCA0_S1 func_8020DCA0_S1;

struct func_8020EAE0_S1;
typedef struct func_8020EAE0_S1 func_8020EAE0_S1;

struct func_8020EE50_S1;
typedef struct func_8020EE50_S1 func_8020EE50_S1;

struct func_8020EEA4_S3;
typedef struct func_8020EEA4_S3 func_8020EEA4_S3;

struct func_8020F150_S1;
typedef struct func_8020F150_S1 func_8020F150_S1;

struct Actor1DC;
struct Actor1DC {
    char pad0[0x1D8];
    char **info;
};
struct Actor_func_8020E674_de;
struct InstanceHdr;
struct Actor_func_8020E674_de {
    struct InstanceHdr *instance;
    u8 pad004[0x254];
    f32 field258;
    u8 pad25C[4];
    f32 field260;
    f32 field264;
    u8 pad268[0x10];
    f32 field278;
};
struct Func8020ED50Arg;
struct Func8020ED50Arg {
    char pad0[4];
    s32 field4;
    char pad8[4];
    s32 fieldC;
    s32 field10;
};
struct Node_func_8020F150_de;
struct Node_func_8020F150_de {
    s32 id;
    char pad4[0xC];
    struct Node_func_8020F150_de *next;
    char pad14[0x20];
    char *owner;
};
struct Obj_func_8020D9C0_de;
struct Obj_func_8020D9C0_de {
    char pad0[0x38];
    s32 count;
    char pad3C[0x138-0x3C];
    Vec3 points[10];
    Vec3 result;
    char pad1BC[0x1C4-0x1BC];
    s32 infoIndex;
};
struct Obj_func_8020DB14_de;
struct Obj_func_8020DB14_de {
    char pad0[0x14];
    int nodes[4];
    char pad24[0x1BC - 0x24];
    int hits;
    int node;
    char pad1C4[4];
    int pending;
};
struct ObjectLinks1458;
struct ObjectLinks1458 {
    char pad0[0x1454];
    char * unk_1454;
};
struct ObjectLinks40;
struct ObjectLinks40 {
    unsigned char padding_0[60];
    Actor1DC *unk_3C;
};
struct Stage;
struct Stage {
    s32 to;
    s32 from;
    f32 distance;
};
struct Selection_func_8020D4AC_de;
struct Selection_func_8020D4AC_de {
    char pad0[0xC];
    s32 node;
    char pad10[0x28];
    s32 objectCount;
    Player *objects[33];
    Stage stages[10];
    Vec3 dirs[10];
    char pad1B0[0xC];
    s32 stageCount;
    s32 id;
};
struct WeightSource;
struct WeightSource {
    char pad[0x2C];
    f32 first;
    f32 second;
    f32 third;
};
struct func_8020D328_S2;
struct func_8020D328_S2 {
    char pad0[0x10];
    char * unk10;
    char pad10[0x28 - 0x10 - sizeof(char*)];
    s32 unk28;
};
struct func_8020DC10_S1;
struct func_8020DC10_S1 {
    char pad0[0x64];
    s32 unk64;
    char pad64[0x21C - 0x64 - sizeof(s32)];
    s32 unk21C;
};
struct func_8020DCA0_S1;
struct func_8020DCA0_S1 {
    void * unk0;
    char pad0[0x230 - 0x0 - sizeof(void*)];
    s32 unk230;
};
struct func_8020EAE0_S1;
struct func_8020EAE0_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x14 - 0xC - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x28 - 0x18 - sizeof(s32)];
    s32 unk28;
    char pad28[0x1BC - 0x28 - sizeof(s32)];
    s32 unk1BC;
    char pad1BC[0x1C0 - 0x1BC - sizeof(s32)];
    s32 unk1C0;
    char pad1C0[0x2F4 - 0x1C0 - sizeof(s32)];
    s32 unk2F4;
    char pad2F4[0x2F8 - 0x2F4 - sizeof(s32)];
    s32 unk2F8;
    char pad2F8[0x2FC - 0x2F8 - sizeof(s32)];
    s32 unk2FC;
};
struct func_8020EE50_S1;
struct func_8020EE50_S1 {
    char pad0[0x10];
    void * unk10;
    char pad10[0x18 - 0x10 - sizeof(void*)];
    f32 unk18;
    char pad18[0x38 - 0x18 - sizeof(f32)];
    s32 unk38;
};
struct func_8020EEA4_S3;
struct func_8020EEA4_S3 {
    char pad0[0x10];
    void * unk10;
    char pad10[0x18 - 0x10 - sizeof(void*)];
    f32 unk18;
};
struct Node_func_8020F150_de;
struct func_8020F150_S1;
struct func_8020F150_S1 {
    char pad0[0x24];
    struct Node_func_8020F150_de * unk24;
};
extern void func_8020D35C_de(void *arg0);
extern s32 func_8020EAB4_de(void);
extern int func_8020EF60_us(void * arg0);
extern int func_8020EF74_eu_x(void);
#endif
