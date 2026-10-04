#ifndef UNBAKE_SPAN_1000_CODE_802BA18C_H
#define UNBAKE_SPAN_1000_CODE_802BA18C_H
#include "../types.h"
struct ALEnvMixer;
struct ALEnvMixer;
typedef struct ALEnvMixer ALEnvMixer;

/* unbake evidence input: c3RydWN0IEFMRW52TWl4ZXI7CnR5cGVkZWYgc3RydWN0IEFMRW52TWl4ZXIgQUxFbnZNaXhlcjsK */

struct ALFilter_s;
struct ALFilter_s;
typedef struct ALFilter_s ALFilter_s;

/* unbake evidence input: c3RydWN0IEFMRmlsdGVyX3M7CnR5cGVkZWYgc3RydWN0IEFMRmlsdGVyX3MgQUxGaWx0ZXJfczsK */

struct ALParam_s;
struct ALParam_s;
typedef struct ALParam_s ALParam_s;

/* unbake evidence input: c3RydWN0IEFMUGFyYW1fczsKdHlwZWRlZiBzdHJ1Y3QgQUxQYXJhbV9zIEFMUGFyYW1fczsK */

struct func_802BA4B0_S1;
struct func_802BA4B0_S1;
typedef struct func_802BA4B0_S1 func_802BA4B0_S1;

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyQkE0QjBfUzE7CnR5cGVkZWYgc3RydWN0IGZ1bmNfODAyQkE0QjBfUzEgZnVuY184MDJCQTRCMF9TMTsK */

struct ALFilter_s;
struct ALFilter_s;
struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    s32 (*setParam)(void *, s32, void *);
    s16 inp;
    s16 outp;
    s32 type;
};

/* unbake evidence input: c3RydWN0IEFMRmlsdGVyX3M7CnN0cnVjdCBBTEZpbHRlcl9zIHsKICAgIHN0cnVjdCBBTEZpbHRlcl9zICpzb3VyY2U7CiAgICB2b2lkICpoYW5kbGVyOwogICAgczMyICgqc2V0UGFyYW0pKHZvaWQgKiwgczMyLCB2b2lkICopOwogICAgczE2IGlucDsKICAgIHMxNiBvdXRwOwogICAgczMyIHR5cGU7Cn07Cg== */

struct ALParam_s;
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

/* unbake evidence input: c3RydWN0IEFMUGFyYW1fczsKc3RydWN0IEFMUGFyYW1fcyB7CiAgICBzdHJ1Y3QgQUxQYXJhbV9zICpuZXh0OwogICAgczMyIGRlbHRhOwogICAgczMyIHR5cGU7CiAgICB1bmlvbiB7CiAgICAgICAgczMyIGk7CiAgICAgICAgZjMyIGY7CiAgICAgICAgdm9pZCAqcDsKICAgIH0gZGF0YTsKfTsK */

struct ALEnvMixer;
struct ALFilter_s;
struct ALParam_s;
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

/* unbake evidence input: c3RydWN0IEFMRW52TWl4ZXI7CnN0cnVjdCBBTEZpbHRlcl9zOwpzdHJ1Y3QgQUxQYXJhbV9zOwpzdHJ1Y3QgQUxFbnZNaXhlciB7CiAgICBBTEZpbHRlcl9zIGZpbHRlcjsKICAgIHZvaWQgKnN0YXRlOwogICAgczE2IHBhbjsKICAgIHMxNiB2b2x1bWU7CiAgICBzMTYgY3ZvbEw7CiAgICBzMTYgY3ZvbFI7CiAgICBzMTYgZHJ5YW10OwogICAgczE2IHdldGFtdDsKICAgIHUxNiBscmF0bDsKICAgIHMxNiBscmF0bTsKICAgIHMxNiBsdGd0OwogICAgdTE2IHJyYXRsOwogICAgczE2IHJyYXRtOwogICAgczE2IHJ0Z3Q7CiAgICBzMzIgZGVsdGE7CiAgICBzMzIgc2VnRW5kOwogICAgczMyIGZpcnN0OwogICAgc3RydWN0IEFMUGFyYW1fcyAqY3RybExpc3Q7CiAgICBzdHJ1Y3QgQUxQYXJhbV9zICpjdHJsVGFpbDsKICAgIHN0cnVjdCBBTEZpbHRlcl9zICoqc291cmNlczsKICAgIHMzMiBtb3Rpb247Cn07Cg== */

struct func_802BA4B0_S1;
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

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyQkE0QjBfUzE7CnN0cnVjdCBmdW5jXzgwMkJBNEIwX1MxIHsKICAgIGludCB1bmswOwogICAgY2hhciBwYWQwWzB4NCAtIDB4MCAtIHNpemVvZihpbnQpXTsKICAgIGludCB1bms0OwogICAgY2hhciBwYWQ0WzB4OCAtIDB4NCAtIHNpemVvZihpbnQpXTsKICAgIGludCB1bms4OwogICAgY2hhciBwYWQ4WzB4QyAtIDB4OCAtIHNpemVvZihpbnQpXTsKICAgIHNob3J0IHVua0M7CiAgICBjaGFyIHBhZENbMHhFIC0gMHhDIC0gc2l6ZW9mKHNob3J0KV07CiAgICBzaG9ydCB1bmtFOwogICAgY2hhciBwYWRFWzB4MTAgLSAweEUgLSBzaXplb2Yoc2hvcnQpXTsKICAgIGludCB1bmsxMDsKfTsK */

extern f32 func_802B5288_de(f32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern f64 func_802B5300_de(f64 arg0, s32 *arg2);
extern f64 func_802B53B4_de(f64 arg0, s32 arg1);
extern void func_802BA18C_de(void);
#endif
