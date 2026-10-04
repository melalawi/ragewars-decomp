#ifndef UNBAKE_SPAN_1000_CODE_8023A4CC_H
#define UNBAKE_SPAN_1000_CODE_8023A4CC_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct Block10;
typedef struct Block10 Block10;

struct Block_func_8023C85C_de;
typedef struct Block_func_8023C85C_de Block_func_8023C85C_de;

struct Channel_func_8023B9C0_eu;
typedef struct Channel_func_8023B9C0_eu Channel_func_8023B9C0_eu;

struct Descriptor_func_8023B718_de;
typedef struct Descriptor_func_8023B718_de Descriptor_func_8023B718_de;

struct Effect;
typedef struct Effect Effect;

struct Host;
typedef struct Host Host;

struct IntegerState8A4;
typedef struct IntegerState8A4 IntegerState8A4;

struct Mapping;
typedef struct Mapping Mapping;

union ObjectState1000;
typedef union ObjectState1000 ObjectState1000;

struct Object_func_8023B3F8_de;
typedef struct Object_func_8023B3F8_de Object_func_8023B3F8_de;

struct Rotor;
typedef struct Rotor Rotor;

struct Scene;
typedef struct Scene Scene;

struct Slot_func_8023B9C0_eu;
typedef struct Slot_func_8023B9C0_eu Slot_func_8023B9C0_eu;

struct State_func_8023B9C0_eu;
typedef struct State_func_8023B9C0_eu State_func_8023B9C0_eu;

struct View_func_8023B3F8_de;
typedef struct View_func_8023B3F8_de View_func_8023B3F8_de;

struct func_8023B968_S1;
typedef struct func_8023B968_S1 func_8023B968_S1;

struct func_8023C77C_S1;
typedef struct func_8023C77C_S1 func_8023C77C_S1;

struct Block10;
struct Block10 {
    s16 f28;
    s16 pad;
    s32 f2C;
    void *f30;
    void **f34;
};
struct Block_func_8023C85C_de;
struct Block_func_8023C85C_de {
    s16 type;
    s16 pad;
    s32 value;
    void *data;
};
struct Channel_func_8023B9C0_eu;
struct Channel_func_8023B9C0_eu {
    char pad0[0x1C];
};
struct Descriptor_func_8023B718_de;
struct Descriptor_func_8023B718_de {
    char pad0[8];
    f32 spinRate;
    char padC[4];
    f32 phaseRate;
    f32 baseSpeed;
    char pad18[4];
    f32 hostScale;
    f32 throttleRate;
    char pad24[5];
    u8 flags;
};
struct Effect;
struct Effect {
    char pad00[0xC];
    s16 *definition;
    s16 mask;
    char pad12[0xA];
    s32 angle0;
    s32 angle1;
    char pad24[0x1E4];
    s32 timer;
    s32 velocity;
    char pad210[4];
    f32 scale;
    f32 offset0;
    f32 offset1;
    f32 offset2;
};
struct Host;
struct Host {
    char pad0[0x24];
    s32 stalled;
    char pad28[0x104];
    f32 speed;
};
struct IntegerState8A4;
struct IntegerState8A4 {
    unsigned char padding_0[2208];
    s32 unk_8A0;
};
struct Mapping;
struct Mapping {
    char pad0[8];
    u16 flags;
    char padA;
    u8 slot;
};
union ObjectState1000;
union ObjectState1000 {
    u8 marks[4096];
    struct { u8 padding[0x3CF]; u8 indices[96]; } first;
    struct { u8 padding[0x3D0]; u8 indices[96]; } second;
};
struct Object_func_8023B3F8_de;
struct Object_func_8023B3F8_de {
    char gap0[4];
    struct Object_func_8023B3F8_de *next;
    char gap8[0x208];
    f32 depth;
};
struct Descriptor_func_8023B718_de;
struct Rotor;
struct Rotor {
    char pad0[0xC];
    struct Descriptor_func_8023B718_de *descriptor;
    u16 mask;
    char pad12[0xA];
    f32 angleA;
    f32 angleB;
    char pad24[0x1E4];
    f32 throttle;
    f32 phase;
    f32 speed;
    f32 phaseScale;
    char pad218[4];
    f32 trim;
};
struct Object_func_8023B3F8_de;
struct Scene;
struct Scene {
    char gap0[0x8B4];
    struct Object_func_8023B3F8_de *objects;
    char gap8B8[12];
    s32 count;
};
struct Slot_func_8023B9C0_eu;
struct Slot_func_8023B9C0_eu {
    s32 a;
    s32 b;
    char pad8[2];
    u8 index;
    char padB[5];
};
struct State_func_8023B9C0_eu;
struct State_func_8023B9C0_eu {
    char pad0[0x20];
    s16 f20;
    char pad22[2];
    char list0[0x3C - 0x24];
    char list0Data[0xC0 - 0x3C];
    char queue[0x2F0 - 0xC0];
    char pool[0x4F0 - 0x2F0];
    char queueData[0x920 - 0x4F0];
    Slot_func_8023B9C0_eu slots[24];
    char list1[0xAB8 - 0xAA0];
    char list1Data[0xAD8 - 0xAB8];
    char list2[0xAF0 - 0xAD8];
    char list2Data[0xB10 - 0xAF0];
    Channel_func_8023B9C0_eu channels[8];
    s32 fBF0;
    s32 fBF4;
    u8 lookup[0x100];
    Entry_func_8023B9C0_eu entries[24];
    s32 fD58;
    s16 fD5C;
    s16 fD5E;
    u32 romAddr;
    char padD64[4];
    u8 *lookupPtr;
    char padD6C[4];
    s16 fD70;
    s16 fD72;
    char padD74[4];
};
struct View_func_8023B3F8_de;
struct View_func_8023B3F8_de {
    char gap0[0x120];
    s32 hidden;
    char gap124[8];
    f32 depth;
};
struct func_8023B968_S1;
struct func_8023B968_S1 {
    char pad0[0x210];
    float unk210;
};
struct func_8023C77C_S1;
struct func_8023C77C_S1 {
    char pad0[0xC];
    void ** unkC;
};
extern void func_8023B938_de(int *arg0, int *arg1);
extern s32 func_8023B94C_de(void **arg0, void **arg1);
extern int func_8023B978_de(void *first, void *second);
extern int func_8023BC74_de(void);
extern void func_8023C6BC_de(void);
extern void func_8023C750_de(void);
extern void func_8023C85C_de(s32 arg0);
extern void func_8023C8D4_de(struct Shape_typemap_110 *arg0);
extern void func_8023CB90_de(void *arg0, void *arg1);
#endif
