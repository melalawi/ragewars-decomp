#ifndef UNBAKE_SPAN_1000_CODE_8029AC80_H
#define UNBAKE_SPAN_1000_CODE_8029AC80_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Callback;
typedef struct Callback Callback;

struct Event_func_8029A558_de;
typedef struct Event_func_8029A558_de Event_func_8029A558_de;

struct Msg;
typedef struct Msg Msg;

struct Node_func_80299CF0_de;
typedef struct Node_func_80299CF0_de Node_func_80299CF0_de;

struct func_8029B650_S1;
typedef struct func_8029B650_S1 func_8029B650_S1;

struct func_8029BA34_S1;
typedef struct func_8029BA34_S1 func_8029BA34_S1;

struct Callback;
struct Callback {
    s32 (*callback)(void);
};
struct Event_func_8029A558_de;
struct Event_func_8029A558_de {
    s16 f0;
    s16 f2;
    s16 f4;
    s16 f6;
    s16 f8;
    s16 fA;
    s16 fC;
};
struct Msg;
struct Msg {
    s16 f0;
    s16 f2;
    s16 f4;
    s16 f6;
    s32 f8;
    s16 fC;
    s16 fE;
    s16 f10;
    s16 f12;
};
struct Node_func_80299CF0_de;
struct Node_func_80299CF0_de {
    s32 unk0;
    struct Node_func_80299CF0_de *left;
    struct Node_func_80299CF0_de *right;
    s16 value;
    u16 type;
    u16 unk10;
    u16 flags;
};
struct func_8029B650_S1;
struct func_8029B650_S1 {
    char pad0[0x4];
    s8 unk4;
    char pad4[0xAC - 0x4 - sizeof(s8)];
    s32 unkAC;
    char padAC[0xB0 - 0xAC - sizeof(s32)];
    s32 unkB0;
    char padB0[0xC4 - 0xB0 - sizeof(s32)];
    s8 unkC4;
    char padC4[0xC5 - 0xC4 - sizeof(s8)];
    s8 unkC5;
};
struct func_8029BA34_S1;
struct func_8029BA34_S1 {
    char pad0[0xC04];
    char unkC04;
};
extern void func_80299C80_de(void *arg0);
extern void func_8029AA24_de(int arg0);
extern void func_8029AA78_de(void);
extern void func_8029AAAC_de(void);
extern f64 func_8029AEA4_de(f64 x, f64 y);
extern void func_8029B3C0_de(f32 *arg0);
extern void func_8029B54C_de(Vec3 *arg0);
extern void func_8029B6E0_de(Vec3 *arg0);
extern void func_8029B868_de(f32 *arg0);
extern f64 func_8029BDEC_de(f64 x);
extern s32 func_8029C4A0_de(Vec3 *out, s32 *outCount, Vec3 *in, s32 n, f32 a, f32 b, f32 c, f32 d);
#endif
