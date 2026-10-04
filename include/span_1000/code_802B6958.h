#ifndef UNBAKE_SPAN_1000_CODE_802B6958_H
#define UNBAKE_SPAN_1000_CODE_802B6958_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ALEndEvent;
typedef struct ALEndEvent ALEndEvent;

struct ALEvent;
typedef struct ALEvent ALEvent;

struct ALSeq_s;
typedef struct ALSeq_s ALSeq_s;

struct ALTempoEvent;
typedef struct ALTempoEvent ALTempoEvent;

struct Entry802B6BE4;
typedef struct Entry802B6BE4 Entry802B6BE4;

struct MidiState802B70B8;
typedef struct MidiState802B70B8 MidiState802B70B8;

struct Obj_func_802B20D4_de;
typedef struct Obj_func_802B20D4_de Obj_func_802B20D4_de;

struct ObjectLinks34;
typedef struct ObjectLinks34 ObjectLinks34;

struct ObjectLinks88;
typedef struct ObjectLinks88 ObjectLinks88;

struct ObjectStateD;
typedef struct ObjectStateD ObjectStateD;

struct func_802B69B4_S1;
typedef struct func_802B69B4_S1 func_802B69B4_S1;

struct func_802B69B4_S2;
typedef struct func_802B69B4_S2 func_802B69B4_S2;

struct func_802B6A60_S1;
typedef struct func_802B6A60_S1 func_802B6A60_S1;

struct func_802B6B90_S1;
typedef struct func_802B6B90_S1 func_802B6B90_S1;

struct func_802B6B90_S2;
typedef struct func_802B6B90_S2 func_802B6B90_S2;

struct func_802B6B90_S3;
typedef struct func_802B6B90_S3 func_802B6B90_S3;

struct func_802B6BE4_S1;
typedef struct func_802B6BE4_S1 func_802B6BE4_S1;

struct func_802B6BE4_S2;
typedef struct func_802B6BE4_S2 func_802B6BE4_S2;

struct func_802B6BE4_S3;
typedef struct func_802B6BE4_S3 func_802B6BE4_S3;

struct func_802B6BE4_S4;
typedef struct func_802B6BE4_S4 func_802B6BE4_S4;

struct func_802B6D04_S1;
typedef struct func_802B6D04_S1 func_802B6D04_S1;

struct func_802B6D04_S2;
typedef struct func_802B6D04_S2 func_802B6D04_S2;

struct func_802B6D04_S4;
typedef struct func_802B6D04_S4 func_802B6D04_S4;

struct func_802B738C_S1;
typedef struct func_802B738C_S1 func_802B738C_S1;

struct func_802B738C_S2;
typedef struct func_802B738C_S2 func_802B738C_S2;

struct func_802B73C4_S1;
typedef struct func_802B73C4_S1 func_802B73C4_S1;

struct ALEndEvent;
struct ALEndEvent {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
};
struct ALTempoEvent;
struct ALTempoEvent {
    s32 ticks;
    u8 status;
    u8 type;
    u8 len;
    u8 byte1;
    u8 byte2;
    u8 byte3;
};
struct ALEvent;
struct ALEvent {
    s16 type;
    union {
        ALMIDIEvent midi;
        ALTempoEvent tempo;
        ALEndEvent end;
    } msg;
};
struct Entry802B6BE4;
struct Entry802B6BE4 {
    s16 type;
    s16 pad;
    void *object;
    s32 unused;
};
struct MidiState802B70B8;
struct MidiState802B70B8 {
    s32 start;
    s32 track_start;
    s32 current;
    s32 unkC;
    s32 end;
    f32 tick_scale;
    s16 division;
    s16 unk1A;
};
struct ObjectLinks34;
struct ObjectLinks34 {
    char pad0[0x20];
    void * unk_20;
    char pad20[0x31 - 0x20 - sizeof(void*)];
    u8 unk_31;
};
struct ObjectLinks88;
struct ObjectLinks88 {
    char pad0[0x18];
    void * unk_18;
    char pad18[0x24 - 0x18 - sizeof(void*)];
    s32 unk_24;
    char pad24[0x2C - 0x24 - sizeof(s32)];
    s32 unk_2C;
    char pad2C[0x48 - 0x2C - sizeof(s32)];
    char unk_48;
    char pad48[0x7C - 0x48 - sizeof(char)];
    void * unk_7C;
    char pad7C[0x80 - 0x7C - sizeof(void*)];
    char * unk_80;
    char pad80[0x84 - 0x80 - sizeof(char*)];
    s32 unk_84;
};
struct ObjectStateD;
struct ObjectStateD {
    unsigned char padding_0[12];
    u8 unk_C;
};
struct func_802B69B4_S1;
struct func_802B69B4_S1 {
    char pad0[0x4];
    char unk4;
    char pad4[0xC - 0x4 - sizeof(char)];
    void * unkC;
};
struct func_802B69B4_S2;
struct func_802B69B4_S2 {
    char pad0[0x34];
    u8 unk34;
};
struct func_802B6A60_S1;
struct func_802B6A60_S1 {
    char pad0[0x34];
    u8 unk34;
    char pad34[0x60 - 0x34 - sizeof(u8)];
    func_802626BC_S1_U10 unk60;
};
struct func_802B6B90_S1;
struct func_802B6B90_S1 {
    char pad0[0x60];
    s32 unk60;
};
struct func_802B6B90_S2;
struct func_802B6B90_S2 {
    void *unk0;
    u16 unk4;
    char pad4[0x7 - 0x4 - sizeof(u16)];
    u8 unk7;
    char pad7[0x8 - 0x7 - sizeof(u8)];
    u8 unk8;
    char pad8[0x9 - 0x8 - sizeof(u8)];
    u8 unk9;
};
struct func_802B6B90_S3;
struct func_802B6B90_S3 {
    u8 unk0;
    char pad0[0x1 - 0x0 - sizeof(u8)];
    u8 unk1;
    char pad1[0x2 - 0x1 - sizeof(u8)];
    u8 unk2;
    char pad2[0xC - 0x2 - sizeof(u8)];
    u16 unkC;
};
struct func_802B6BE4_S1;
struct func_802B6BE4_S1 {
    char pad0[0x10];
    char * unk10;
};
struct func_802B6BE4_S2;
struct func_802B6BE4_S2 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x30 - 0x24 - sizeof(s32)];
    u8 unk30;
    char pad30[0x33 - 0x30 - sizeof(u8)];
    u8 unk33;
    char pad33[0x34 - 0x33 - sizeof(u8)];
    u8 unk34;
};
struct func_802B6BE4_S3;
struct func_802B6BE4_S3 {
    char pad0[0x14];
    void * unk14;
    char pad14[0x1C - 0x14 - sizeof(void*)];
    s32 unk1C;
    char pad1C[0x48 - 0x1C - sizeof(s32)];
    void * unk48;
    char pad48[0x50 - 0x48 - sizeof(void*)];
    char * unk50;
};
struct func_802B6BE4_S4;
struct func_802B6BE4_S4 {
    char * unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s16 unkC;
    char padC[0x10 - 0xC - sizeof(s16)];
    void * unk10;
};
struct func_802B6D04_S1;
struct func_802B6D04_S1 {
    char pad0[0x48];
    void * unk48;
    char pad48[0x50 - 0x48 - sizeof(void*)];
    char * unk50;
    char pad50[0x78 - 0x50 - sizeof(char*)];
    void * unk78;
};
struct func_802B6D04_S2;
struct func_802B6D04_S2 {
    char * unk0;
    char pad0[0x8 - 0x0 - sizeof(char*)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    u16 unkC;
    char padC[0x10 - 0xC - sizeof(u16)];
    void * unk10;
    char pad10[0x14 - 0x10 - sizeof(void*)];
    void * unk14;
};
struct func_802B6D04_S4;
struct func_802B6D04_S4 {
    char pad0[0x37];
    u8 unk37;
};
struct func_802B738C_S1;
struct func_802B738C_S1 {
    char pad0[0x8];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x1A - 0xC - sizeof(int)];
    unsigned short unk1A;
};
struct func_802B738C_S2;
struct func_802B738C_S2 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0xC - 0x4 - sizeof(int)];
    unsigned short unkC;
};
struct func_802B73C4_S1;
struct func_802B73C4_S1 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    u32 unk8;
    char pad8[0x10 - 0x8 - sizeof(u32)];
    s32 unk10;
};
extern void func_802B1C34_de(void *arg0, void *arg1);
extern void func_802B1D24_de(void *arg0);
extern f32 func_802B20D4_de(Obj_func_802B20D4_de *arg0, s32 arg1, s32 arg2);
extern u32 func_802B2120_de(Obj_func_802B20D4_de *seq, f32 sec, u32 tempo);
extern void func_802B22D8_de(void *arg0, void *arg1);
extern void func_802B72BC_de(void);
#endif
