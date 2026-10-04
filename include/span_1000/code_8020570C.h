#ifndef UNBAKE_SPAN_1000_CODE_8020570C_H
#define UNBAKE_SPAN_1000_CODE_8020570C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Action;
typedef struct Action Action;

struct ActionInfo;
typedef struct ActionInfo ActionInfo;

struct Actor_func_80205F18_de;
typedef struct Actor_func_80205F18_de Actor_func_80205F18_de;

struct CallbackHolder;
typedef struct CallbackHolder CallbackHolder;

struct Event_func_80206018_de;
typedef struct Event_func_80206018_de Event_func_80206018_de;

struct Rec;
typedef struct Rec Rec;

struct Settings;
typedef struct Settings Settings;

struct func_80206080_S2;
typedef struct func_80206080_S2 func_80206080_S2;

struct func_8020612C_S3;
typedef struct func_8020612C_S3 func_8020612C_S3;

struct func_8020612C_S4;
typedef struct func_8020612C_S4 func_8020612C_S4;

struct func_802062E0_S1;
typedef struct func_802062E0_S1 func_802062E0_S1;

struct func_802062E0_S3;
typedef struct func_802062E0_S3 func_802062E0_S3;

struct func_802063EC_S1;
typedef struct func_802063EC_S1 func_802063EC_S1;

struct func_802064A0_S2;
typedef struct func_802064A0_S2 func_802064A0_S2;

struct func_8020655C_S1;
typedef struct func_8020655C_S1 func_8020655C_S1;

struct func_802065C0_S1;
typedef struct func_802065C0_S1 func_802065C0_S1;

struct func_80206604_G1;
typedef struct func_80206604_G1 func_80206604_G1;

struct func_80206604_S1;
typedef struct func_80206604_S1 func_80206604_S1;

struct func_802066A4_S1;
typedef struct func_802066A4_S1 func_802066A4_S1;

struct func_80206758_S1;
typedef struct func_80206758_S1 func_80206758_S1;

struct func_80206930_S2;
typedef struct func_80206930_S2 func_80206930_S2;

struct func_8020694C_S1;
typedef struct func_8020694C_S1 func_8020694C_S1;

struct Action;
struct Action {
    char pad0[0x64];
    f32 delay;
    char pad68[0x124 - 0x68];
    s32 timer;
    s32 duration;
};
struct ActionInfo;
struct ActionInfo {
    s32 flags;
    char pad4[4];
    s16 duration;
};
struct Descriptor_func_80205F18_de;
struct Descriptor_func_80205F18_de {
    char pad0[0x14];
    ActionInfo info;
};
struct Actor_func_80205F18_de;
struct Descriptor_func_80205F18_de;
struct Actor_func_80205F18_de {
    char pad0[0x18];
    struct Descriptor_func_80205F18_de *desc;
    char pad1C[0xE4 - 0x1C];
    u16 model;
    char padE6[0x100 - 0xE6];
    s32 flags;
};
struct CallbackHolder;
struct Event_func_80206018_de;
struct CallbackHolder {
    char pad0[8];
    void (*callback)(void *arg0, Event_func_80206018_de *arg1);
};
struct Event_func_80206018_de {
    char pad0[0x30];
    struct CallbackHolder *holder;
};
struct Rec;
struct Rec {
    char pad0[0xC];
    void *a;
    void *b;
};
struct func_80206080_S2;
struct func_80206080_S2 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    char unk14;
};
struct func_8020612C_S3;
struct func_8020612C_S3 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0xA - 0x4 - sizeof(s32)];
    s16 unkA;
    char padA[0x14 - 0xA - sizeof(s16)];
    s16 unk14;
    char pad14[0x16 - 0x14 - sizeof(s16)];
    s16 unk16;
};
struct func_8020612C_S4;
struct func_8020612C_S4 {
    char pad0[0x40];
    f32 unk40;
    char pad40[0x64 - 0x40 - sizeof(f32)];
    f32 unk64;
    char pad64[0x124 - 0x64 - sizeof(f32)];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    s32 unk128;
};
struct func_802062E0_S1;
struct func_802062E0_S1 {
    char pad0[0x124];
    char unk124;
    char pad124[0x128 - 0x124 - sizeof(char)];
    s32 unk128;
};
struct func_802062E0_S3;
struct func_802062E0_S3 {
    char pad0[0x1A0];
    s32 unk1A0;
};
struct func_802063EC_S1;
struct func_802063EC_S1 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x6C - 0x1C - sizeof(Triple)];
    f32 unk6C;
};
struct func_802064A0_S2;
struct func_802064A0_S2 {
    char pad0[0x1C];
    Triple unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Triple)];
    Vector4f unk5C;
};
struct func_8020655C_S1;
struct func_8020655C_S1 {
    char pad0[0x18];
    s32 * unk18;
    char pad18[0x2EC - 0x18 - sizeof(s32*)];
    void * unk2EC;
};
struct func_802065C0_S1;
struct func_802065C0_S1 {
    char pad0[0x35];
    s8 unk35;
    char pad35[0xCB - 0x35 - sizeof(s8)];
    s8 unkCB;
    char padCB[0x124 - 0xCB - sizeof(s8)];
    s32 unk124;
};
struct func_80206604_G1;
struct func_80206604_G1 {
    u8 unk0;
};
struct func_80206604_S1;
struct func_80206604_S1 {
    char pad0[0x2C];
    s32 * unk2C;
    char pad2C[0x108 - 0x2C - sizeof(s32*)];
    s32 * unk108;
    char pad108[0x10C - 0x108 - sizeof(s32*)];
    s32 * unk10C;
};
struct func_802066A4_S1;
struct func_802066A4_S1 {
    char pad0[0x124];
    s32 unk124;
    char pad124[0x128 - 0x124 - sizeof(s32)];
    f32 unk128;
    char pad128[0x12C - 0x128 - sizeof(f32)];
    f32 unk12C;
};
struct func_80206758_S1;
struct func_80206758_S1 {
    char pad0[0x124];
    int unk124;
};
struct func_80206930_S2;
struct func_80206930_S2 {
    char pad0[0xE];
    unsigned char unkE;
    char padE[0x10 - 0xE - sizeof(unsigned char)];
    unsigned char unk10;
};
struct func_8020694C_S1;
struct func_8020694C_S1 {
    char pad0[0xB4];
    int unkB4;
    char padB4[0x140 - 0xB4 - sizeof(int)];
    Slot unk140;
};
extern int func_8020570C_de(void *arg0);
extern void func_80205EC4_de(void *arg0, void *arg1);
extern void func_80206080_de(void *arg0, void *arg1);
extern void func_80206258_de(void *arg0);
extern void func_802062B0_de(void *arg0);
extern s32 func_8020655C_de(s32 arg0);
extern void func_80206604_de(void *arg0, void *arg1);
extern int func_80206758_de(void *arg0, void *arg1);
extern void func_802067FC_de(void *arg0);
extern void func_80206898_de(void *arg0);
extern void func_80206930_de(void *arg0, int arg1, void *arg2);
#endif
