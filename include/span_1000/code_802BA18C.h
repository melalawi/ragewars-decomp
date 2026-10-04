#ifndef UNBAKE_SPAN_1000_CODE_802BA18C_H
#define UNBAKE_SPAN_1000_CODE_802BA18C_H
#include "span_1000/types.h"
#include "../types.h"
struct ALEnvMixer;
typedef struct ALEnvMixer ALEnvMixer;

struct ALFilter_s;
typedef struct ALFilter_s ALFilter_s;

struct ALParam_s;
typedef struct ALParam_s ALParam_s;

struct func_802BA4B0_S1;
typedef struct func_802BA4B0_S1 func_802BA4B0_S1;

struct ALFilter_s;
struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    s32 (*setParam)(void *, s32, void *);
    s16 inp;
    s16 outp;
    s32 type;
};
struct ALParam_s;
struct ALParam_s {
    struct ALParam_s *next;
    s32 delta;
    s32 type;
    union {
        s32 i;
        f32 f;
        void *p;
    } data;
};
struct ALEnvMixer;
struct ALFilter_s;
struct ALParam_s;
struct ALEnvMixer {
    ALFilter_s filter;
    void *state;
    s16 pan;
    s16 volume;
    s16 cvolL;
    s16 cvolR;
    s16 dryamt;
    s16 wetamt;
    u16 lratl;
    s16 lratm;
    s16 ltgt;
    u16 rratl;
    s16 rratm;
    s16 rtgt;
    s32 delta;
    s32 segEnd;
    s32 first;
    struct ALParam_s *ctrlList;
    struct ALParam_s *ctrlTail;
    struct ALFilter_s **sources;
    s32 motion;
};
struct func_802BA4B0_S1;
struct func_802BA4B0_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    short unkC;
    char padC[0xE - 0xC - sizeof(short)];
    short unkE;
    char padE[0x10 - 0xE - sizeof(short)];
    int unk10;
};
extern f32 func_802B5288_de(f32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f64 func_802B5300_de(f64 arg0, s32 *arg2);
extern f64 func_802B53B4_de(f64 arg0, s32 arg1);
extern void func_802BA18C_de(void);
#endif
