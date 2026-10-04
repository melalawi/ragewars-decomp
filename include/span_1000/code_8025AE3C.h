#ifndef UNBAKE_SPAN_1000_CODE_8025AE3C_H
#define UNBAKE_SPAN_1000_CODE_8025AE3C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Context_func_8025AE1C_de;
typedef struct Context_func_8025AE1C_de Context_func_8025AE1C_de;

struct Header_func_8025B5F0_de;
typedef struct Header_func_8025B5F0_de Header_func_8025B5F0_de;

struct IntegerStateB4;
typedef struct IntegerStateB4 IntegerStateB4;

struct IntegerStateB4_2;
typedef struct IntegerStateB4_2 IntegerStateB4_2;

struct Obj_func_8025BDAC_de;
typedef struct Obj_func_8025BDAC_de Obj_func_8025BDAC_de;

struct ObjectStateB4;
typedef struct ObjectStateB4 ObjectStateB4;

struct Owner_func_8025B5F0_de;
typedef struct Owner_func_8025B5F0_de Owner_func_8025B5F0_de;

struct Record_func_8025B5F0_de;
typedef struct Record_func_8025B5F0_de Record_func_8025B5F0_de;

struct Record_func_8025B758_de;
typedef struct Record_func_8025B758_de Record_func_8025B758_de;

struct Record_func_8025BA4C_de;
typedef struct Record_func_8025BA4C_de Record_func_8025BA4C_de;

struct Record_func_8025BF08_de;
typedef struct Record_func_8025BF08_de Record_func_8025BF08_de;

struct Record_func_8025C008_de;
typedef struct Record_func_8025C008_de Record_func_8025C008_de;

struct Slot_func_8025B5F0_de;
typedef struct Slot_func_8025B5F0_de Slot_func_8025B5F0_de;

struct Slot_func_8025B8BC_de;
typedef struct Slot_func_8025B8BC_de Slot_func_8025B8BC_de;

struct Slot_func_8025BA4C_de;
typedef struct Slot_func_8025BA4C_de Slot_func_8025BA4C_de;

struct Slot_func_8025BDAC_de;
typedef struct Slot_func_8025BDAC_de Slot_func_8025BDAC_de;

struct Slot_func_8025BF08_de;
typedef struct Slot_func_8025BF08_de Slot_func_8025BF08_de;

struct Slot_func_8025C008_de;
typedef struct Slot_func_8025C008_de Slot_func_8025C008_de;

struct Slots;
typedef struct Slots Slots;

struct View_func_8025AE1C_de;
typedef struct View_func_8025AE1C_de View_func_8025AE1C_de;

struct func_8025B718_S1;
typedef struct func_8025B718_S1 func_8025B718_S1;

struct func_8025B778_S2;
typedef struct func_8025B778_S2 func_8025B778_S2;

struct func_8025BB7C_S1;
typedef struct func_8025BB7C_S1 func_8025BB7C_S1;

struct func_8025C388_S1;
typedef struct func_8025C388_S1 func_8025C388_S1;

struct func_8025C458_S1;
typedef struct func_8025C458_S1 func_8025C458_S1;

struct func_8025C458_S3;
typedef struct func_8025C458_S3 func_8025C458_S3;

struct func_8025C4D4_S1;
typedef struct func_8025C4D4_S1 func_8025C4D4_S1;

struct func_8025C598_S1;
typedef struct func_8025C598_S1 func_8025C598_S1;

struct Slots;
struct Slots {
    char pad0[0x60];
    s16 ids[16];
};
struct Context_func_8025AE1C_de;
struct Context_func_8025AE1C_de {
    char pad0[0x7C];
    Slots slots;
    char padFC[0x104 - 0xFC];
    s32 frame;
    char pad108[0x134 - 0x108];
    s32 track;
    char pad138[0x2B98 - 0x138];
    s32 result;
};
struct IntegerStateB4;
struct IntegerStateB4 {
    s32 unk_0;
    s32 unk_4;
    unsigned char padding_8[8];
    s32 unk_10;
    unsigned char padding_14[60];
    s32 unk_50;
    unsigned char padding_54[88];
    s32 unk_AC;
    s32 unk_B0;
};
struct IntegerStateB4_2;
struct IntegerStateB4_2 {
    char pad0[0x4];
    s32 unk_4;
    char pad4[0x10 - 0x4 - sizeof(s32)];
    s32 unk_10;
    char pad10[0x50 - 0x10 - sizeof(s32)];
    s32 unk_50;
    char pad50[0xAC - 0x50 - sizeof(s32)];
    s32 unk_AC;
    char padAC[0xB0 - 0xAC - sizeof(s32)];
    s32 unk_B0;
};
struct Slot_func_8025BDAC_de;
struct Slot_func_8025BDAC_de {
    int id;
    char pad4[0x9C];
    int keyA;
    char padA4[8];
    int keyB;
    char padB0[0x1C];
};
struct Obj_func_8025BDAC_de;
struct Obj_func_8025BDAC_de {
    Header_func_8025B5F0_de *owner;
    char pad4[8];
    Slot_func_8025BDAC_de slots[16];
};
struct ObjectStateB4;
struct ObjectStateB4 {
    char unk_0;
    char pad0[0xB0 - 0x0 - sizeof(char)];
    s32 unk_B0;
};
struct Owner_func_8025B5F0_de;
struct Slot_func_8025B5F0_de;
struct Slot_func_8025B5F0_de {
    s32 index;
    s32 state;
    s32 used;
    char pad0[4];
    s32 key;
    char pad1[0x3C];
    s32 flag;
    char pad2[0x54];
    s32 value;
    s32 active;
    struct Owner_func_8025B5F0_de *owner;
    char pad3[0x18];
};
struct Header_func_8025B5F0_de;
struct Record_func_8025B5F0_de;
struct Record_func_8025B5F0_de {
    struct Header_func_8025B5F0_de *header;
    Slot_func_8025B5F0_de slots[17];
};
struct Record_func_8025B758_de;
struct Record_func_8025B758_de {
    s32 index;
    char pad04[4];
    s32 f08;
    s32 f0C;
    char pad10[4];
    s32 f14;
    char pad18[0x14];
    f32 f2C;
    char pad30[4];
    f32 f34;
    s16 f38;
    s16 f3A;
    char pad3C[4];
    s32 f40;
    char pad44[0x14];
    s32 f58;
    s32 f5C;
    char pad60[0x44];
    s32 fA4;
    char padA8[4];
    s32 fAC;
    s32 owner;
    s32 fB4;
    f32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    char padC8[4];
};
struct Slot_func_8025BA4C_de;
struct Slot_func_8025BA4C_de {
    char pad0[8];
    s32 used;
    char pad[0x9C];
    s32 value;
    char pad2[0x20];
};
struct Record_func_8025BA4C_de;
struct Record_func_8025BA4C_de {
    Header_func_8025B5F0_de *header;
    Slot_func_8025BA4C_de slots[17];
};
struct Slot_func_8025BF08_de;
struct Slot_func_8025BF08_de {
    s32 index;
    s32 state;
    s32 used;
    char pad0[4];
    s32 key;
    char pad1[0x3C];
    s32 flag;
    char pad2[0x54];
    s32 other;
    s32 active;
    Owner_func_8025B5F0_de *owner;
    s32 value;
    char pad3[0x14];
};
struct Record_func_8025BF08_de;
struct Record_func_8025BF08_de {
    Header_func_8025B5F0_de *header;
    Slot_func_8025BF08_de slots[17];
};
struct Slot_func_8025C008_de;
struct Slot_func_8025C008_de {
    s32 index;
    s32 state;
    s32 used;
    char pad0[4];
    s32 key;
    char pad1[0x3C];
    s32 flag;
    char pad2[0x50];
    s32 mask;
    s32 value;
    s32 active;
    Owner_func_8025B5F0_de *owner;
    char pad3[0x18];
};
struct Record_func_8025C008_de;
struct Record_func_8025C008_de {
    Header_func_8025B5F0_de *header;
    Slot_func_8025C008_de slots[17];
};
struct Slot_func_8025B8BC_de;
struct Slot_func_8025B8BC_de {
    char pad0[0xA8];
    s32 flags;
    char padaC[8];
    char *owner;
    char end[0x14];
};
struct Context_func_8025AE1C_de;
struct View_func_8025AE1C_de;
struct View_func_8025AE1C_de {
    s32 slot;
    s32 handle;
    s32 field8;
    s32 fieldC;
    s32 frame;
    char pad14[4];
    s32 finished;
    char pad1C[0x2C - 0x1C];
    f32 time;
    char pad30[0x38 - 0x30];
    s16 field38;
    s16 field3A;
    char pad3C[0x44 - 0x3C];
    Triple position;
    Triple *tracked;
    char pad54[0xA0 - 0x54];
    s32 hold;
    s32 flags;
    s32 trackId;
    s32 done;
    struct Context_func_8025AE1C_de *context;
    s32 fieldB4;
    char padB8[4];
    s32 followTrack;
};
struct func_8025B718_S1;
struct func_8025B718_S1 {
    int unk0;
    char pad0[0x8 - 0x0 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x14 - 0xC - sizeof(int)];
    int unk14;
    char pad14[0x2C - 0x14 - sizeof(int)];
    float unk2C;
    char pad2C[0x34 - 0x2C - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    short unk38;
    char pad38[0x3A - 0x38 - sizeof(short)];
    short unk3A;
    char pad3A[0x40 - 0x3A - sizeof(short)];
    int unk40;
    char pad40[0x58 - 0x40 - sizeof(int)];
    int unk58;
    char pad58[0x5C - 0x58 - sizeof(int)];
    int unk5C;
    char pad5C[0xA4 - 0x5C - sizeof(int)];
    int unkA4;
    char padA4[0xAC - 0xA4 - sizeof(int)];
    int unkAC;
    char padAC[0xB0 - 0xAC - sizeof(int)];
    int unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(int)];
    int unkB4;
    char padB4[0xB8 - 0xB4 - sizeof(int)];
    float unkB8;
    char padB8[0xBC - 0xB8 - sizeof(float)];
    int unkBC;
    char padBC[0xC0 - 0xBC - sizeof(int)];
    int unkC0;
    char padC0[0xC4 - 0xC0 - sizeof(int)];
    int unkC4;
};
struct func_8025B778_S2;
struct func_8025B778_S2 {
    char pad0[0x4];
    Record_func_8025B758_de unk4;
};
struct func_8025BB7C_S1;
struct func_8025BB7C_S1 {
    char pad0[0x44];
    Triple unk44;
    char pad44[0x50 - 0x44 - sizeof(Triple)];
    int unk50;
};
struct func_8025C388_S1;
struct func_8025C388_S1 {
    char pad0[0x34];
    Vec3 unk34;
    char pad34[0x44 - 0x34 - sizeof(Vec3)];
    s8 unk44;
};
struct func_8025C458_S1;
struct func_8025C458_S1 {
    char unk0;
    char pad0[0xB0 - 0x0 - sizeof(char)];
    s32 unkB0;
    char padB0[0xC8 - 0xB0 - sizeof(s32)];
    f32 unkC8;
};
struct func_8025C458_S3;
struct func_8025C458_S3 {
    char pad0[0xDC];
    s16 unkDC;
};
struct func_8025C4D4_S1;
struct func_8025C4D4_S1 {
    char unk0;
    char pad0[0x34 - 0x0 - sizeof(char)];
    f32 unk34;
    char pad34[0xB0 - 0x34 - sizeof(f32)];
    s32 unkB0;
    char padB0[0xB8 - 0xB0 - sizeof(s32)];
    f32 unkB8;
};
struct func_8025C598_S1;
struct func_8025C598_S1 {
    s32 unk0;
    char pad0[0xB0 - 0x0 - sizeof(s32)];
    s32 unkB0;
};
extern s32 func_8025B854_de(s32 arg0, s16 arg1);
extern void func_8025B8BC_de(Slot_func_8025B8BC_de *base, s16 index);
extern void func_8025BB3C_de(s32 a);
extern void func_8025BB7C_de(void *arg0, int arg1);
extern void func_8025BD00_de(void **arg0);
extern f32 func_8025C1CC_de(f32 arg0);
extern s16 func_8025C25C_de(s16 arg0, s16 arg1);
extern f32 func_8025C2EC_de(u8 arg0, u8 arg1);
extern void func_8025C438_de(void *arg0, s32 arg1);
extern void func_8025C4B4_de(void *arg0, f32 arg1);
extern void func_8025C524_de(void *arg0, s32 arg1);
extern void func_8025C578_de(void *arg0);
extern void func_8025C5BC_de(void *arg0);
extern void func_8025C5DC_de(void *arg0);
#endif
