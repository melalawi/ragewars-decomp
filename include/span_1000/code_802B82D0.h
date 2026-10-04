#ifndef UNBAKE_SPAN_1000_CODE_802B82D0_H
#define UNBAKE_SPAN_1000_CODE_802B82D0_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct ALStartParamAlt;
typedef struct ALStartParamAlt ALStartParamAlt;

struct CallbackStateC_4;
typedef struct CallbackStateC_4 CallbackStateC_4;

struct IntegerStateDC_2;
typedef struct IntegerStateDC_2 IntegerStateDC_2;

struct ObjectLinks10_2;
typedef struct ObjectLinks10_2 ObjectLinks10_2;

struct ObjectState10_3;
typedef struct ObjectState10_3 ObjectState10_3;

struct ObjectState10_4;
typedef struct ObjectState10_4 ObjectState10_4;

struct ObjectState10_5;
typedef struct ObjectState10_5 ObjectState10_5;

struct ObjectState14_2;
typedef struct ObjectState14_2 ObjectState14_2;

struct ObjectState1C;
typedef struct ObjectState1C ObjectState1C;

struct ObjectStateC_2;
typedef struct ObjectStateC_2 ObjectStateC_2;

struct ObjectStateC_3;
typedef struct ObjectStateC_3 ObjectStateC_3;

struct func_802B8540_S1;
typedef struct func_802B8540_S1 func_802B8540_S1;

struct func_802B8CC8_S1;
typedef struct func_802B8CC8_S1 func_802B8CC8_S1;

struct ALStartParamAlt;
struct Node_func_80239AF4_de;
struct ALStartParamAlt {
    struct Node_func_80239AF4_de *next;
    s32 delta;
    s16 type;
    s16 unity;
    f32 pitch;
    s16 volume;
    u8 pan;
    u8 fxMix;
    s32 samples;
    void *wave;
};
struct CallbackStateC_4;
struct CallbackStateC_4 {
    char pad0[0x8];
    void (*callback)(void *, s32, void *);
};
struct IntegerStateDC_2;
struct IntegerStateDC_2 {
    unsigned char padding[216];
    s32 state;
};
struct ObjectLinks10_2;
struct ObjectLinks10_2 {
    char pad0[0x4];
    s32 unk_4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s16 unk_8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    void * unk_C;
};
struct ObjectState10_3;
struct ObjectState10_3 {
    s32 unk_0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk_4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s16 unk_8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    s32 unk_C;
};
struct ObjectState10_4;
struct ObjectState10_4 {
    s32 unk_0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk_4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s16 unk_8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    f32 unk_C;
};
struct ObjectState10_5;
struct ObjectState10_5 {
    s32 unk_0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk_4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s16 unk_8;
    char pad8[0xA - 0x8 - sizeof(s16)];
    u16 unk_A;
    char padA[0xC - 0xA - sizeof(u16)];
    s32 unk_C;
};
struct ObjectState14_2;
struct ObjectState14_2 {
    s32 unk_0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk_4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s16 unk_8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    s32 unk_C;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk_10;
};
struct ObjectState1C;
struct ObjectState1C {
    char pad0[0x8];
    ObjectLinks4_3 unk_8;
    char pad8[0x1A - 0x8 - sizeof(ObjectLinks4_3)];
    u16 unk_1A;
};
struct ObjectStateC_2;
struct ObjectStateC_2 {
    char pad0[0x8];
    ObjectLinks4_3 unk_8;
};
struct ObjectStateC_3;
struct ObjectStateC_3 {
    s32 unk_0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk_4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s16 unk_8;
};
struct Shape_typemap_71;
struct Shape_typemap_71 {
    unsigned char padding_0[28];
    int field_1C;
};
struct func_802B8540_S1;
struct func_802B8540_S1 {
    char pad0[0x16];
    unsigned short unk16;
};
struct func_802B8CC8_S1;
struct func_802B8CC8_S1 {
    char pad0[0x2C];
    void * unk2C;
};
typedef void ( *Shared_func_802B3200_de_FuncPtr)(void *, signed int, void *);
typedef void ( *Shared_func_802B32A0_de_FuncPtr)(void *, signed int, void *);
typedef void ( *Shared_func_802B3350_de_FuncPtr)(void *, signed int, void *);
typedef void ( *Shared_func_802B33E0_de_FuncPtr)(void *, signed int, void *);
typedef void ( *Shared_func_802B3480_de_FuncPtr)(void *, signed int, void *);
typedef void ( *Shared_func_802B3540_de_FuncPtr)(void *, signed int, void *);
typedef void ( *Shared_func_802B36F0_de_FuncPtr)(void *, signed int, void *);
extern void func_802B3540_de(void *arg0, void *arg1, s32 arg2);
extern void func_802B36F0_de(void *arg0, void *arg1);
extern void func_802B38B4_eu_x(void);
#endif
