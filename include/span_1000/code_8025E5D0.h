#ifndef UNBAKE_SPAN_1000_CODE_8025E5D0_H
#define UNBAKE_SPAN_1000_CODE_8025E5D0_H
#include "acmd.h"
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Curve;
typedef struct Curve Curve;

struct Decode8025EF54;
typedef struct Decode8025EF54 Decode8025EF54;

struct DecodeArray;
typedef struct DecodeArray DecodeArray;

struct Output8025EF54;
typedef struct Output8025EF54 Output8025EF54;

struct Poly;
typedef struct Poly Poly;

struct Segment8025FFD0;
typedef struct Segment8025FFD0 Segment8025FFD0;

struct Stream;
typedef struct Stream Stream;

struct func_802604BC_S1;
typedef struct func_802604BC_S1 func_802604BC_S1;

struct func_802604CC_S1;
typedef struct func_802604CC_S1 func_802604CC_S1;

struct Curve;
struct Curve {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    s32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    u32 unk20;
    s32 unk24;
    s32 unk28;
};
struct Decode8025EF54;
struct Decode8025EF54 {
    s32 bits;
    f32 base;
    f32 range;
    s32 unused;
    u32 stream;
    s32 first_bits;
    s32 second_bits;
};
struct DecodeArray;
struct DecodeArray {
    s32 base;
    Func802608ECResult range;
};
struct Output8025EF54;
struct Output8025EF54 {
    f32 value;
    s32 pad04;
    s32 pad08;
    s32 pad0C;
};
struct Poly;
struct Poly {
    float a;
    float b;
    float c;
    float d;
    u32 duration;
};
struct Segment8025FFD0;
struct Segment8025FFD0 {
    s32 unk0;
    f32 unk4;
    f32 unk8;
    u32 unkC;
    u8 pad10[0x24 - 0x10];
    s32 unk24;
    s32 unk28;
    s32 unk2C;
};
struct Stream;
struct Stream {
    s32 unk0;
    char pad4[8];
    s32 unkC;
    float coeff[4];
    u32 unk20;
    u32 unk24;
    s32 unk28;
};
struct func_802604BC_S1;
struct func_802604BC_S1 {
    char pad0[0x10];
    unsigned int * unk10;
};
struct func_802604CC_S1;
struct func_802604CC_S1 {
    char * unk0;
    char pad0[0x4 - 0x0 - sizeof(char*)];
    Rec_func_8024C92C_de * unk4;
    char pad4[0x8 - 0x4 - sizeof(Rec_func_8024C92C_de*)];
    void * unk8;
    char pad8[0x18 - 0x8 - sizeof(void*)];
    s32 unk18;
    char pad18[0x1C - 0x18 - sizeof(s32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
};
extern void func_8025EF34_de(u32 *stream, Output8025EF54 *out, s32 count);
extern f32 func_8025F434_de(f32 amount, f32 period);
extern float func_80260634_de(float value, int bits);
extern unsigned int func_80260684_de(unsigned int value);
extern unsigned int func_802606A4_de(unsigned int arg0);
extern void func_80260724_de(u32 arg0, u32 arg1, u32 arg2);
extern void func_80260828_de(u32 *arg0, u32 arg1, u32 arg2);
extern Func802608ECResult func_802608CC_de(f32 arg0, f32 arg1, f32 arg2);
extern f32 func_802609AC_de(s32 bitAddress, Func802608ECResult range);
extern void func_80260A5C_de(s32 arg0, Func802608ECResult range, f32 arg4);
extern void func_80260C6C_de(void *arg0, int arg1, Triple t, int arg5);
extern f32 func_80260C9C_de(DecodeArray *arg0, s32 arg1);
#endif
