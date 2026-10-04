#ifndef UNBAKE_SPAN_1000_CODE_8022F054_H
#define UNBAKE_SPAN_1000_CODE_8022F054_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct CallbackState60;
typedef struct CallbackState60 CallbackState60;

struct Obj_func_8022F3A4_de;
typedef struct Obj_func_8022F3A4_de Obj_func_8022F3A4_de;

struct Obj_func_8022F3F8_de;
typedef struct Obj_func_8022F3F8_de Obj_func_8022F3F8_de;

struct ObjectLinks14C;
typedef struct ObjectLinks14C ObjectLinks14C;

struct ObjectLinks1DC;
typedef struct ObjectLinks1DC ObjectLinks1DC;

struct ObjectLinks1DC_2;
typedef struct ObjectLinks1DC_2 ObjectLinks1DC_2;

union ObjectLinks4;
typedef union ObjectLinks4 ObjectLinks4;

struct ObjectState1230;
typedef struct ObjectState1230 ObjectState1230;

struct ObjectState44;
typedef struct ObjectState44 ObjectState44;

struct ObjectState630;
typedef struct ObjectState630 ObjectState630;

struct Object_func_8022FAF8_de;
typedef struct Object_func_8022FAF8_de Object_func_8022FAF8_de;

struct func_8022F304_S1;
typedef struct func_8022F304_S1 func_8022F304_S1;

struct func_8022F330_S1;
typedef struct func_8022F330_S1 func_8022F330_S1;

struct func_8022F34C_S1;
typedef struct func_8022F34C_S1 func_8022F34C_S1;

struct func_8022F388_S1;
typedef struct func_8022F388_S1 func_8022F388_S1;

struct func_8022F95C_S1;
typedef struct func_8022F95C_S1 func_8022F95C_S1;

struct func_8022F95C_S2;
typedef struct func_8022F95C_S2 func_8022F95C_S2;

struct func_8022FEF4_S1;
typedef struct func_8022FEF4_S1 func_8022FEF4_S1;

struct func_8022FEF4_S3;
typedef struct func_8022FEF4_S3 func_8022FEF4_S3;

struct CallbackState60;
struct CallbackState60 {
    unsigned char padding_0[92];
    void (*callback)(void *, void *);
};
struct Obj_func_8022F3A4_de;
struct Obj_func_8022F3A4_de {
    char pad[0x18];
    char slots[13];
};
struct Obj_func_8022F3F8_de;
struct Obj_func_8022F3F8_de {
    char pad[0x18];
    unsigned char slots[13];
};
struct ObjectLinks14C;
struct ObjectLinks14C {
    char pad0[0x30];
    void * callback_owner;
    char pad30[0x130 - 0x30 - sizeof(void*)];
    f32 unk_130;
    char pad130[0x148 - 0x130 - sizeof(f32)];
    f32 unk_148;
};
struct ObjectLinks1DC;
struct ObjectLinks1DC {
    char pad0[0x50];
    Vec3 unk_50;
    char pad50[0x1D8 - 0x50 - sizeof(Vec3)];
    char * unk_1D8;
};
struct ObjectLinks1DC_2;
struct ObjectLinks1DC_2 {
    char pad0[0x1];
    u8 unk_1;
    char pad1[0x1D8 - 0x1 - sizeof(u8)];
    void * unk_1D8;
};
union ObjectLinks4;
union ObjectLinks4 {
    s32 v0;
    char * v1;
};
struct ObjectState1230;
struct ObjectState1230 {
    char pad0[0x62E];
    s16 unk_62E;
    char pad62E[0x650 - 0x62E - sizeof(s16)];
    s16 unk_650;
    char pad650[0x770 - 0x650 - sizeof(s16)];
    s16 unk_770;
    char pad770[0x7E8 - 0x770 - sizeof(s16)];
    s32 unk_7E8;
    char pad7E8[0x11D8 - 0x7E8 - sizeof(s32)];
    f32 unk_11D8;
    char pad11D8[0x122C - 0x11D8 - sizeof(f32)];
    s32 unk_122C;
};
struct ObjectState44;
struct ObjectState44 {
    unsigned char padding_0[56];
    Vec3 unk_38;
};
struct ObjectState630;
struct ObjectState630 {
    char pad0[0x5DC];
    ObjectLinks4 unk_5DC;
    char pad5DC[0x62E - 0x5DC - sizeof(ObjectLinks4)];
    s16 unk_62E;
};
struct Object_func_8022FAF8_de;
struct Object_func_8022FAF8_de {
    s8 pad603[0x603];
    s8 values[0x2B];
    s16 selected;
};
struct func_8022F304_S1;
struct func_8022F304_S1 {
    char pad0[0x14];
    unsigned char unk14;
};
struct func_8022F330_S1;
struct func_8022F330_S1 {
    char pad0[0x15];
    unsigned char unk15;
};
struct func_8022F34C_S1;
struct func_8022F34C_S1 {
    char pad0[0x16];
    unsigned char unk16;
};
struct func_8022F388_S1;
struct func_8022F388_S1 {
    char pad0[0x10];
    unsigned int unk10;
};
struct func_8022F95C_S1;
struct func_8022F95C_S1 {
    char pad0[0x5F4];
    s16 unk5F4;
    char pad5F4[0x62E - 0x5F4 - sizeof(s16)];
    s16 unk62E;
    char pad62E[0x1450 - 0x62E - sizeof(s16)];
    s32 unk1450;
};
struct func_8022F95C_S2;
struct func_8022F95C_S2 {
    char pad0[0x603];
    s8 unk603;
};
struct func_8022FEF4_S1;
struct func_8022FEF4_S1 {
    char pad0[0x1];
    char unk1;
    char pad1[0x1D8 - 0x1 - sizeof(char)];
    char * unk1D8;
};
struct func_8022FEF4_S3;
struct func_8022FEF4_S3 {
    char pad0[0x2C];
    s32 unk2C;
    char pad2C[0x120 - 0x2C - sizeof(s32)];
    s32 unk120;
    char pad120[0x124 - 0x120 - sizeof(s32)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
    char pad128[0x130 - 0x128 - sizeof(s32)];
    s32 unk130;
    char pad130[0x13C - 0x130 - sizeof(s32)];
    s32 unk13C;
    char pad13C[0x144 - 0x13C - sizeof(s32)];
    s32 unk144;
};
extern void func_8022F204_de(s32 arg0);
extern unsigned char func_8022F32C_de(void *arg0);
extern unsigned char func_8022F350_de(void *arg0);
extern unsigned char func_8022F374_de(void *object);
extern unsigned int func_8022F398_de(void *object);
extern void func_8022F5E0_de(char *arg0);
extern void func_8022FF04_de(void *arg0, void *arg1);
#endif
