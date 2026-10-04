#ifndef UNBAKE_SPAN_1000_CODE_8025C67C_H
#define UNBAKE_SPAN_1000_CODE_8025C67C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Bank;
typedef struct Bank Bank;

struct Bank_func_8025CED0_de;
typedef struct Bank_func_8025CED0_de Bank_func_8025CED0_de;

struct Context_func_8025D450_de;
typedef struct Context_func_8025D450_de Context_func_8025D450_de;

struct Node_func_8025CBEC_de;
typedef struct Node_func_8025CBEC_de Node_func_8025CBEC_de;

struct Player_func_8025CC90_de;
typedef struct Player_func_8025CC90_de Player_func_8025CC90_de;

struct Player_func_8025CED0_de;
typedef struct Player_func_8025CED0_de Player_func_8025CED0_de;

struct Queue_func_8025CC90_de;
typedef struct Queue_func_8025CC90_de Queue_func_8025CC90_de;

struct Resource;
typedef struct Resource Resource;

struct SlotArray;
typedef struct SlotArray SlotArray;

struct SongHeader;
typedef struct SongHeader SongHeader;

struct State_func_8025DACC_de;
typedef struct State_func_8025DACC_de State_func_8025DACC_de;

struct Track;
typedef struct Track Track;

struct func_8025C67C_S1;
typedef struct func_8025C67C_S1 func_8025C67C_S1;

struct func_8025C67C_S2;
typedef struct func_8025C67C_S2 func_8025C67C_S2;

struct func_8025C97C_S2;
typedef struct func_8025C97C_S2 func_8025C97C_S2;

struct func_8025CA44_S2;
typedef struct func_8025CA44_S2 func_8025CA44_S2;

struct func_8025CAD0_S1;
typedef struct func_8025CAD0_S1 func_8025CAD0_S1;

struct func_8025CB2C_S2;
typedef struct func_8025CB2C_S2 func_8025CB2C_S2;

struct func_8025CBA8_S2;
typedef struct func_8025CBA8_S2 func_8025CBA8_S2;

struct func_8025CC0C_S1;
typedef struct func_8025CC0C_S1 func_8025CC0C_S1;

union func_8025CC0C_S1_U14;
typedef union func_8025CC0C_S1_U14 func_8025CC0C_S1_U14;

struct func_8025D1DC_S1;
typedef struct func_8025D1DC_S1 func_8025D1DC_S1;

struct func_8025D258_S1;
typedef struct func_8025D258_S1 func_8025D258_S1;

struct func_8025D370_S2;
typedef struct func_8025D370_S2 func_8025D370_S2;

struct func_8025D370_S3;
typedef struct func_8025D370_S3 func_8025D370_S3;

struct func_8025D948_S1;
typedef struct func_8025D948_S1 func_8025D948_S1;

struct func_8025DB54_S1;
typedef struct func_8025DB54_S1 func_8025DB54_S1;

struct Bank;
struct Bank {
    char pad0[0x2B50];
    void *songs;
};
struct Bank_func_8025CED0_de;
struct Bank_func_8025CED0_de {
    char pad0[0x2B60];
    s32 table;
    s32 count;
};
struct Context_func_8025D450_de;
struct Context_func_8025D450_de {
    char pad[0x2B50];
    s32 unk2B50;
    char p54[12];
    s32 unk2B60;
    s32 unk2B64;
    char p68[0x3C];
    f32 unk2BA4;
    char pa8[16];
    s32 unk2BB8;
};
struct Node_func_8025CBEC_de;
struct Node_func_8025CBEC_de {
    s32 unk0;
    struct Node_func_8025CBEC_de *next;
    s32 value;
    s32 state;
};
struct Bank;
struct Player_func_8025CC90_de;
struct Player_func_8025CC90_de {
    struct Bank *bank;
    char pad4[4];
    u32 state;
    s32 loop;
    s32 song;
    s32 speed;
    char pad18[3];
    u8 priority;
    char pad1C[2];
    s16 id;
    f32 tempoScale;
    f32 volume;
};
struct Bank_func_8025CED0_de;
struct Player_func_8025CED0_de;
struct Player_func_8025CED0_de {
    struct Bank_func_8025CED0_de *bank;
    s32 request;
    s32 state;
    s32 group;
    s32 song;
    s32 speed;
    s32 volume;
    char pad1C[2];
    s16 id;
};
struct Queue_func_8025CC90_de;
struct Queue_func_8025CC90_de {
    void *sequence;
    s32 head;
    u8 kind;
    s32 tail;
};
struct Resource;
struct Resource {
    s32 unk0;
    u16 unk4;
};
struct SlotArray;
struct SlotArray {
    char pad0[0x60];
    short slot[1];
};
struct SongHeader;
struct SongHeader {
    u32 tempo;
    u16 volume;
};
struct State_func_8025DACC_de;
struct State_func_8025DACC_de {
    char pad[0x18];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
};
struct Context_func_8025D450_de;
struct Shape_func_802764D4_de_2;
struct Track;
struct Track {
    struct Context_func_8025D450_de *unk0;
    s32 unk4;
    struct Shape_func_802764D4_de_2 *unk8;
    void *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    s32 unk38;
    f32 unk3C;
};
struct func_8025C67C_S1;
struct func_8025C67C_S1 {
    int unk0;
    char pad0[0x8 - 0x0 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x38 - 0xC - sizeof(int)];
    short unk38;
    char pad38[0x3A - 0x38 - sizeof(short)];
    short unk3A;
    char pad3A[0xA8 - 0x3A - sizeof(short)];
    int unkA8;
    char padA8[0xB0 - 0xA8 - sizeof(int)];
    void * unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(void*)];
    int unkB4;
};
struct func_8025C67C_S2;
struct func_8025C67C_S2 {
    char pad0[0x7C];
    char unk7C;
    char pad7C[0x84 - 0x7C - sizeof(char)];
    char unk84;
};
struct func_8025C97C_S2;
struct func_8025C97C_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    Triple unk10;
    char pad10[0x1C - 0x10 - sizeof(Triple)];
    void * unk1C;
};
struct func_8025CA44_S2;
struct func_8025CA44_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    s32 unk8;
};
struct func_8025CAD0_S1;
struct func_8025CAD0_S1 {
    char pad0[0x14];
    void * unk14;
    char pad14[0x28 - 0x14 - sizeof(void*)];
    s32 unk28;
};
struct func_8025CB2C_S2;
struct func_8025CB2C_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    s32 unk8;
    char pad8[0xE - 0x8 - sizeof(s32)];
    s16 unkE;
    char padE[0x10 - 0xE - sizeof(s16)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
};
struct func_8025CBA8_S2;
struct func_8025CBA8_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
};
struct Node_func_8025CBEC_de;
union func_8025CC0C_S1_U14;
union func_8025CC0C_S1_U14 {
    struct Node_func_8025CBEC_de * v0;
    char v1;
};
struct func_8025CC0C_S1;
struct func_8025CC0C_S1 {
    char pad0[0x14];
    func_8025CC0C_S1_U14 unk14;
};
struct func_8025D1DC_S1;
struct func_8025D1DC_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x1E - 0x8 - sizeof(s32)];
    s16 unk1E;
};
struct func_8025D258_S1;
struct func_8025D258_S1 {
    char pad0[0x2B60];
    s32 unk2B60;
    char pad2B60[0x2B64 - 0x2B60 - sizeof(s32)];
    s32 unk2B64;
};
struct func_8025D370_S2;
struct func_8025D370_S2 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    u16 unk4;
};
struct func_8025D370_S3;
struct func_8025D370_S3 {
    char pad0[0x20];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
};
struct func_8025D948_S1;
struct func_8025D948_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x1C - 0x14 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x22 - 0x1C - sizeof(s32)];
    s16 unk22;
    char pad22[0x34 - 0x22 - sizeof(s16)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    f32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(f32)];
    f32 unk40;
};
struct func_8025DB54_S1;
struct func_8025DB54_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0x40 - 0x38 - sizeof(int)];
    int unk40;
};
extern void func_8025C65C_de(void *arg0);
extern void func_8025C8C0_de(void *arg0);
extern void func_8025C8D0_de(void);
extern void func_8025D1BC_de(void *arg0);
extern s32 func_8025D238_de(void **arg0, s16 id, s16 avoid);
extern void func_8025D350_de(void *arg0, s32 arg1);
extern void func_8025D3E4_de(void *arg0);
extern void func_8025D928_de(void *arg0);
#endif
