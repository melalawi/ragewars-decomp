#ifndef UNBAKE_SPAN_1000_CODE_80242BE0_H
#define UNBAKE_SPAN_1000_CODE_80242BE0_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ActorB0;
typedef struct ActorB0 ActorB0;

struct ContextB0;
typedef struct ContextB0 ContextB0;

struct ElementE8;
typedef struct ElementE8 ElementE8;

struct EntryC;
typedef struct EntryC EntryC;

struct GameState;
typedef struct GameState GameState;

struct Group;
typedef struct Group Group;

struct Hit8;
typedef struct Hit8 Hit8;

struct ModelF0;
typedef struct ModelF0 ModelF0;

struct ObjectState7;
typedef struct ObjectState7 ObjectState7;

struct QueryE0;
typedef struct QueryE0 QueryE0;

struct Ray180;
typedef struct Ray180 Ray180;

struct Record108;
typedef struct Record108 Record108;

struct Record_func_80244FB4_de;
typedef struct Record_func_80244FB4_de Record_func_80244FB4_de;

struct VectorPair;
typedef struct VectorPair VectorPair;

struct Work80244494;
typedef struct Work80244494 Work80244494;

struct func_80243864_S1;
typedef struct func_80243864_S1 func_80243864_S1;

struct func_80243864_S2;
typedef struct func_80243864_S2 func_80243864_S2;

struct func_80244494_S1;
typedef struct func_80244494_S1 func_80244494_S1;

struct func_80244E48_S1;
typedef struct func_80244E48_S1 func_80244E48_S1;

struct func_80244E48_S2;
typedef struct func_80244E48_S2 func_80244E48_S2;

struct func_802456FC_S1;
typedef struct func_802456FC_S1 func_802456FC_S1;

struct func_80245788_S1;
typedef struct func_80245788_S1 func_80245788_S1;

struct func_802457D0_S1;
typedef struct func_802457D0_S1 func_802457D0_S1;

struct ActorB0;
struct ActorB0 {
    u8 pad0[0x40];
    s32 *flags;
    u8 pad44[0x68];
    u8 *data;
};
struct ElementE8;
struct ElementE8 {
    char pad0[0xB8];
    Box box;
    char padD0[0x8];
    u16 flags;
    char padDA[0xE];
};
struct Ray180;
struct Ray180 {
    char pad0[0x8];
    f32 spacing;
    char padC[0x4];
    f32 length;
    char pad14[0x4];
    f32 radius;
    char pad1C[0x28];
    Vec3 start;
    Vec3 end;
    char pad5C[0x24];
    f32 scale;
    Box box;
    Vector4f rect;
    char padAC[0xD0];
    f32 nearest;
};
struct ContextB0;
struct ContextB0 {
    Ray180 *ray;
    Vec3 *start;
    Vec3 *end;
    Matrix_func_80213CF8_de matrix;
    f32 reach;
    s32 segments;
    f32 step;
    ElementE8 *element;
    s32 kind;
    char pad60[0x48];
    s32 isKind9;
    char padAC[0x4];
};
struct EntryC;
struct EntryC {
    void **resource;
    Vector4f *rect;
    s32 unk_8;
};
struct GameState;
struct GameState {
    s32 busy;
    char pad4[0x18B0];
    s32 paused;
};
struct Group;
struct Group {
    void *lead;
    char pad4[0x24];
    char members[1];
};
struct Hit8;
struct Hit8 {
    ElementE8 *element;
    f32 t;
};
struct ModelF0;
struct ModelF0 {
    s32 unk_0;
    s32 count;
    ElementE8 elements[1];
};
struct ObjectState7;
struct ObjectState7 {
    char pad0[0x6];
    s8 unk_6;
};
struct QueryE0;
struct QueryE0 {
    s32 word0;
    f32 word4;
    s32 word8;
    s32 wordC;
    s32 word10;
    s32 word14;
    Vec3 vectors[4];
    Vec3 result;
    void *input;
    s32 index;
    u8 pad5C[0x84];
};
struct Record108;
struct Record108 {
    s32 sound;
    s32 unk_4;
    char pad8[0x4];
    VoidCallback onEnd;
    VoidCallback onCue;
    char pad14[0x8];
    f32 value;
    f32 previous;
    char pad24[8];
    f32 limit;
    f32 threshold;
    f32 cue;
    s32 playing;
    s32 done;
    char pad40[0x4];
    s32 cueFired;
    s32 endFired;
    char pad4C[0x14];
    s32 fading;
    f32 fade;
    char pad68[0x4C];
    s32 active;
    char padB8[0x4C];
    s32 mode;
};
struct Record_func_80244FB4_de;
struct Record_func_80244FB4_de {
    char pad0[0x1C];
    f32 value;
    f32 previous;
    char pad24[8];
    f32 limit;
    f32 threshold;
    char pad34[8];
    s32 done;
    char pad40[0x74];
    s32 active;
    char padB8[0x24];
    s32 resource;
    char padE0[0x24];
    s32 mode;
};
struct VectorPair;
struct VectorPair {
    Vec3 first;
    Vec3 second;
    char pad[8];
};
struct Work80244494;
struct Work80244494 {
    char data[0x1B8];
};
struct func_80243864_S1;
struct func_80243864_S1 {
    char pad0[0x58];
    void * unk58;
    char pad58[0x64 - 0x58 - sizeof(void*)];
    char unk64;
    char pad64[0xA4 - 0x64 - sizeof(char)];
    void * unkA4;
};
struct func_80243864_S2;
struct func_80243864_S2 {
    char pad0[0x68];
    char unk68;
    char pad68[0xB4 - 0x68 - sizeof(char)];
    void ** unkB4;
};
struct func_80244494_S1;
struct func_80244494_S1 {
    char * unk0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    s32 unk4;
    char pad4[0x1C - 0x4 - sizeof(s32)];
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
    char pad30[0x34 - 0x30 - sizeof(s32)];
    s32 unk34;
    char pad34[0x40 - 0x34 - sizeof(s32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    Vec3 unk44;
    char pad44[0x50 - 0x44 - sizeof(Vec3)];
    Vec3 unk50;
    char pad50[0x74 - 0x50 - sizeof(Vec3)];
    Vec3 unk74;
    char pad74[0xAC - 0x74 - sizeof(Vec3)];
    s32 unkAC;
    char padAC[0x180 - 0xAC - sizeof(s32)];
    Vec3 unk180;
    char pad180[0x198 - 0x180 - sizeof(Vec3)];
    Vec3 unk198;
    char pad198[0x1A4 - 0x198 - sizeof(Vec3)];
    Vec3 unk1A4;
};
struct func_80244E48_S2;
struct func_80244E48_S2 {
    char pad0[0x57C];
    s32 unk57C;
    char pad57C[0x580 - 0x57C - sizeof(s32)];
    s32 unk580;
    char pad580[0x590 - 0x580 - sizeof(s32)];
    s32 unk590;
};
struct func_802456FC_S1;
struct func_802456FC_S1 {
    char pad0[0x60];
    s32 unk60;
    char pad60[0x64 - 0x60 - sizeof(s32)];
    f32 unk64;
};
struct func_80245788_S1;
struct func_80245788_S1 {
    char pad0[0x1C];
    float unk1C;
    char pad1C[0x30 - 0x1C - sizeof(float)];
    float unk30;
    char pad30[0x34 - 0x30 - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    int unk38;
};
struct func_802457D0_S1;
struct func_802457D0_S1 {
    char pad0[0x1C];
    f32 unk1C;
    char pad1C[0x34 - 0x1C - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    s32 unk38;
};
extern void func_80243814_de(struct Shape_func_802764D4_de_2 *arg0, struct Shape_func_802764D4_de_2 *arg1);
extern s32 func_80243850_de(void *arg0, void *arg1);
extern s32 func_802446E0_de(char *arg0, Vec3 arg1, Vec3 arg2, s32 arg3, f32 arg4);
extern void func_80244D70_de(void);
extern void func_80244E58_de(void);
extern s32 func_80244FB4_de(void);
extern void func_802450CC_de(void);
extern void func_802456A0_de(void);
extern void func_8024570C_de(void);
extern int func_80245764_de(void);
extern int func_8024576C_de(void);
extern s32 func_802457E0_de(void);
#endif
