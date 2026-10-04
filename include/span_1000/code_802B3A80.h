#ifndef UNBAKE_SPAN_1000_CODE_802B3A80_H
#define UNBAKE_SPAN_1000_CODE_802B3A80_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Buf16b;
typedef struct Buf16b Buf16b;

struct Buf16c;
typedef struct Buf16c Buf16c;

struct CallbackNode;
typedef struct CallbackNode CallbackNode;

struct InitParams;
typedef struct InitParams InitParams;

struct Node_func_802AFD6C_de;
typedef struct Node_func_802AFD6C_de Node_func_802AFD6C_de;

struct ObjectLinks4_5;
typedef struct ObjectLinks4_5 ObjectLinks4_5;

struct ObjectLinks54_2;
typedef struct ObjectLinks54_2 ObjectLinks54_2;

struct ObjectState10_2;
typedef struct ObjectState10_2 ObjectState10_2;

struct ObjectState4C;
typedef struct ObjectState4C ObjectState4C;

struct ValueSet;
typedef struct ValueSet ValueSet;

struct func_802B3B80_S1;
typedef struct func_802B3B80_S1 func_802B3B80_S1;

struct func_802B4220_S1;
typedef struct func_802B4220_S1 func_802B4220_S1;

struct func_802B4E3C_S1;
typedef struct func_802B4E3C_S1 func_802B4E3C_S1;

struct Buf16b;
struct Buf16b {
    s16 count;
    s16 _pad2;
    s16 value;
    s16 _pad6;
    s32 _pad8;
    s32 _padC;
};
struct Buf16c;
struct Buf16c {
    s16 count;
    s16 _pad2;
    s32 zero;
    s8 f8;
    s8 f9;
    s8 fA;
    s8 _padB;
    s32 _padC;
};
struct CallbackNode;
struct CallbackNode {
    s32 state;
    struct CallbackNode *self;
    void *callback;
};
struct InitParams;
struct InitParams {
    s32 count38;
    s32 count1C;
    u8 kind;
    u8 pad09[3];
    s32 context;
    s32 value10;
    s32 value14;
    s32 value18;
};
struct Node_func_802AFD6C_de;
struct Node_func_802AFD6C_de {
    struct Node_func_802AFD6C_de *prev;
    struct Node_func_802AFD6C_de *next;
    s32 value;
    short type;
};
struct ObjectLinks4_5;
struct ObjectLinks4_5 {
    Node_func_802AFD6C_de * link;
};
struct ObjectLinks54_2;
struct ObjectLinks54_2 {
    unsigned char padding[80];
    Node_func_802AFD6C_de * link;
};
struct ObjectState10_2;
struct ObjectState10_2 {
    s16 type;
    u8 pad2[6];
    u8 unk_8;
    u8 unk_9;
    u8 padA;
    u8 unk_B;
    u8 unk_C;
    u8 unk_D;
    u8 padE[2];
};
struct ObjectState4C;
struct ObjectState4C {
    char pad0[0x24];
    s32 unk_24;
    char pad24[0x48 - 0x24 - sizeof(s32)];
    char unk_48;
};
struct ValueSet;
struct ValueSet {
    char pad0[4];
    u32 mask;
    char pad8[8];
    u32 amount;
    s32 active;
    char pad18[0xA0];
    u32 values[16];
};
struct func_802B3B80_S1;
struct func_802B3B80_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
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
    s16 unk30;
    char pad30[0x32 - 0x30 - sizeof(s16)];
    s16 unk32;
    char pad32[0x34 - 0x32 - sizeof(s16)];
    u8 unk34;
    char pad34[0x38 - 0x34 - sizeof(u8)];
    s16 unk38;
    char pad38[0x5C - 0x38 - sizeof(s16)];
    s32 unk5C;
    char pad5C[0x60 - 0x5C - sizeof(s32)];
    s32 unk60;
    char pad60[0x64 - 0x60 - sizeof(s32)];
    s32 unk64;
    char pad64[0x68 - 0x64 - sizeof(s32)];
    s32 unk68;
    char pad68[0x6C - 0x68 - sizeof(s32)];
    func_8028472C_S2_U118 unk6C;
    char pad6C[0x70 - 0x6C - sizeof(func_8028472C_S2_U118)];
    s32 unk70;
    char pad70[0x74 - 0x70 - sizeof(s32)];
    s32 unk74;
    char pad74[0x78 - 0x74 - sizeof(s32)];
    s32 unk78;
};
struct func_802B4220_S1;
struct func_802B4220_S1 {
    char pad0[0x18];
    s32 unk18;
    char pad18[0x24 - 0x18 - sizeof(s32)];
    s32 unk24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x48 - 0x2C - sizeof(s32)];
    char unk48;
};
struct Node_func_802AFD6C_de;
struct func_802B4E3C_S1;
struct func_802B4E3C_S1 {
    char pad0[0x8];
    struct Node_func_802AFD6C_de * unk8;
};
extern void func_802AF150_de(void *arg0);
extern void func_802AFD00_de(void *arg0);
extern void func_802AFDFC_de(void *arg0, f32 arg1);
extern f32 func_802AFE30_de(s32 arg0);
#endif
