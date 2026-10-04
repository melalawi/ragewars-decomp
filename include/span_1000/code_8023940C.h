#ifndef UNBAKE_SPAN_1000_CODE_8023940C_H
#define UNBAKE_SPAN_1000_CODE_8023940C_H
#include "common/types.h"
#include "gfx.h"
#include "span_1000/types.h"
#include "../types.h"
struct IntegerStateF24;
typedef struct IntegerStateF24 IntegerStateF24;

struct func_802394AC_S1;
typedef struct func_802394AC_S1 func_802394AC_S1;

struct func_802394AC_S2;
typedef struct func_802394AC_S2 func_802394AC_S2;

struct func_80239594_S1;
typedef struct func_80239594_S1 func_80239594_S1;

struct func_80239594_S2;
typedef struct func_80239594_S2 func_80239594_S2;

struct func_80239668_S1;
typedef struct func_80239668_S1 func_80239668_S1;

struct func_80239668_S2;
typedef struct func_80239668_S2 func_80239668_S2;

struct func_80239760_S2;
typedef struct func_80239760_S2 func_80239760_S2;

struct func_80239AE4_S1;
typedef struct func_80239AE4_S1 func_80239AE4_S1;

struct func_80239AE4_S2;
typedef struct func_80239AE4_S2 func_80239AE4_S2;

struct func_80239B54_S2;
typedef struct func_80239B54_S2 func_80239B54_S2;

struct func_80239C2C_S1;
typedef struct func_80239C2C_S1 func_80239C2C_S1;

struct func_80239CF0_S1;
typedef struct func_80239CF0_S1 func_80239CF0_S1;

struct func_80239D80_S1;
typedef struct func_80239D80_S1 func_80239D80_S1;

struct func_80239E94_S1;
typedef struct func_80239E94_S1 func_80239E94_S1;

struct func_80239FCC_S1;
typedef struct func_80239FCC_S1 func_80239FCC_S1;

struct func_8023A104_S1;
typedef struct func_8023A104_S1 func_8023A104_S1;

struct func_8023A180_S1;
typedef struct func_8023A180_S1 func_8023A180_S1;

struct func_8023A1E4_S1;
typedef struct func_8023A1E4_S1 func_8023A1E4_S1;

struct Channel;
struct Channel {
    s32 mode;
    f32 level;
    char pad[0x14 - 8];
};
struct IntegerStateF24;
struct IntegerStateF24 {
    unsigned char padding_0[3864];
    s32 unk_F18;
    s32 unk_F1C;
    s32 unk_F20;
};
struct Channel;
struct Record_func_80239DE8_de;
struct Record_func_80239DE8_de {
    char pad[8];
    Triple triple;
    f32 value;
    struct Channel channels[3];
};
struct Wave;
struct Wave {
    s32 kind;
    char pad4[0xC - 4];
    f32 amplitude;
    f32 phase;
};
struct func_802394AC_S1;
struct func_802394AC_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x14 - 0x8 - sizeof(Vec3)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    f32 unk1C;
    char pad1C[0x2C - 0x1C - sizeof(f32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    f32 unk30;
    char pad30[0x40 - 0x30 - sizeof(f32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    f32 unk44;
};
struct func_802394AC_S2;
struct func_802394AC_S2 {
    char pad0[0x11D8];
    char * unk11D8;
    char pad11D8[0x11F0 - 0x11D8 - sizeof(char*)];
    char * unk11F0;
};
struct func_80239594_S1;
struct func_80239594_S1 {
    char pad0[0x20];
    void * unk20;
    char pad20[0x40 - 0x20 - sizeof(void*)];
    char unk40;
    char pad40[0x1200 - 0x40 - sizeof(char)];
    s32 unk1200;
};
struct func_80239594_S2;
struct func_80239594_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x128 - 0x4 - sizeof(void*)];
    Vec3 unk128;
};
struct func_80239668_S1;
struct func_80239668_S1 {
    char pad0[0x20];
    void * unk20;
    char pad20[0x30 - 0x20 - sizeof(void*)];
    s32 unk30;
};
struct func_80239668_S2;
struct func_80239668_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x128 - 0x4 - sizeof(void*)];
    char unk128;
};
struct func_80239760_S2;
struct func_80239760_S2 {
    char pad0[0xE40];
    char unkE40;
};
struct Node_func_80239AF4_de;
struct func_80239AE4_S1;
struct func_80239AE4_S1 {
    char pad0[0xE40];
    char unkE40;
    char padE40[0xE44 - 0xE40 - sizeof(char)];
    struct Node_func_80239AF4_de * unkE44;
};
struct func_80239AE4_S2;
struct func_80239AE4_S2 {
    char pad0[0xF24];
    char unkF24;
};
struct func_80239B54_S2;
struct func_80239B54_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0xE40 - 0x4 - sizeof(void*)];
    char unkE40;
    char padE40[0xE44 - 0xE40 - sizeof(char)];
    Node_func_80239AF4_de * unkE44;
};
struct func_80239C2C_S1;
struct func_80239C2C_S1 {
    char pad0[0xF24];
    func_80239C2C_S1_UF24 unkF24;
};
struct func_80239CF0_S1;
struct func_80239CF0_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    float unk4;
};
struct func_80239D80_S1;
struct func_80239D80_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    f32 unk14;
};
struct func_80239E94_S1;
struct func_80239E94_S1 {
    char pad0[0x58];
    s32 unk58;
    char pad58[0xF4 - 0x58 - sizeof(s32)];
    f32 unkF4;
    char padF4[0xF8 - 0xF4 - sizeof(f32)];
    f32 unkF8;
};
struct func_80239FCC_S1;
struct func_80239FCC_S1 {
    char pad0[0x38];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(f32)];
    f32 unk40;
    char pad40[0x44 - 0x40 - sizeof(f32)];
    f32 unk44;
    char pad44[0x58 - 0x44 - sizeof(f32)];
    s32 unk58;
    char pad58[0x5C - 0x58 - sizeof(s32)];
    f32 unk5C;
    char pad5C[0x64 - 0x5C - sizeof(f32)];
    s32 unk64;
};
struct func_8023A104_S1;
struct func_8023A104_S1 {
    void * unk0;
    char pad0[0x4 - 0x0 - sizeof(void*)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
};
struct func_8023A180_S1;
struct func_8023A180_S1 {
    char pad0[0xF18];
    void * unkF18;
    char padF18[0xF1C - 0xF18 - sizeof(void*)];
    int unkF1C;
    char padF1C[0xF20 - 0xF1C - sizeof(int)];
    int unkF20;
};
struct func_8023A1E4_S1;
struct func_8023A1E4_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0x1200 - 0x8 - sizeof(s32)];
    s32 unk1200;
};
extern int func_8023941C_de(void *arg0);
extern void func_80239AF4_de(s32 arg0, void *arg1);
extern void func_80239CEC_de(void *arg0);
extern void func_80239D00_de(void *arg0, float arg1, int arg2);
extern f32 func_80239D1C_de(struct Wave *wave);
extern void func_80239D90_de(void *arg0);
extern void func_80239DE8_de(struct Record_func_80239DE8_de *record, f32 first, f32 second, f32 third, f32 value, s32 mode, Triple triple);
extern s32 func_80239E48_de(s32 arg0);
extern void func_80239FCC_de(void);
extern void func_80239FDC_de(void *arg0);
extern void func_8023A114_de(void *arg0, s32 arg1);
extern void func_8023A190_de(void *arg0, int arg1);
extern void func_8023A1F4_de(void *arg0);
extern void func_8023A24C_de(void *arg0);
extern f32 func_8023A294_de(s32 arg0, f32 value, f32 target, f32 step);
extern Message *func_8023A344_de(void *owner, void *pool, u8 *text, s32 kind, f32 size, s32 target);
#endif
