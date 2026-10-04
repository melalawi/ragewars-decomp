#ifndef UNBAKE_SPAN_1000_CODE_802B8D4C_H
#define UNBAKE_SPAN_1000_CODE_802B8D4C_H
#include "../types.h"
struct AudioLowPassFilter;
struct AudioLowPassFilter;
typedef struct AudioLowPassFilter AudioLowPassFilter;

/* unbake evidence input: c3RydWN0IEF1ZGlvTG93UGFzc0ZpbHRlcjsKdHlwZWRlZiBzdHJ1Y3QgQXVkaW9Mb3dQYXNzRmlsdGVyIEF1ZGlvTG93UGFzc0ZpbHRlcjsK */

struct func_802B9474_S1;
struct func_802B9474_S1;
typedef struct func_802B9474_S1 func_802B9474_S1;

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyQjk0NzRfUzE7CnR5cGVkZWYgc3RydWN0IGZ1bmNfODAyQjk0NzRfUzEgZnVuY184MDJCOTQ3NF9TMTsK */

struct func_802B95DC_S1;
struct func_802B95DC_S1;
typedef struct func_802B95DC_S1 func_802B95DC_S1;

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyQjk1RENfUzE7CnR5cGVkZWYgc3RydWN0IGZ1bmNfODAyQjk1RENfUzEgZnVuY184MDJCOTVEQ19TMTsK */

typedef signed short AudioPoleFilterState[4];

/* unbake evidence input: dHlwZWRlZiBzaWduZWQgc2hvcnQgQXVkaW9Qb2xlRmlsdGVyU3RhdGVbNF07Cg== */

struct AudioLowPassFilter;
struct AudioLowPassFilter;
struct AudioLowPassFilter {
    s16 cutoff;
    s16 gain;
    union {
        s16 taps[16];
        s64 alignment;
    } coefficients;
    AudioPoleFilterState *state;
    s32 first;
};

/* unbake evidence input: c3RydWN0IEF1ZGlvTG93UGFzc0ZpbHRlcjsKc3RydWN0IEF1ZGlvTG93UGFzc0ZpbHRlciB7CiAgICBzMTYgY3V0b2ZmOwogICAgczE2IGdhaW47CiAgICB1bmlvbiB7CiAgICAgICAgczE2IHRhcHNbMTZdOwogICAgICAgIHM2NCBhbGlnbm1lbnQ7CiAgICB9IGNvZWZmaWNpZW50czsKICAgIEF1ZGlvUG9sZUZpbHRlclN0YXRlICpzdGF0ZTsKICAgIHMzMiBmaXJzdDsKfTsK */

struct func_802B9474_S1;
struct func_802B9474_S1;
struct func_802B9474_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x30 - 0x18 - sizeof(s32)];
    s32 unk30;
    char pad30[0x3C - 0x30 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x40 - 0x3C - sizeof(s32)];
    s32 unk40;
    char pad40[0x44 - 0x40 - sizeof(s32)];
    s32 unk44;
};

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyQjk0NzRfUzE7CnN0cnVjdCBmdW5jXzgwMkI5NDc0X1MxIHsKICAgIGNoYXIgcGFkMFsweDE0XTsKICAgIHMzMiB1bmsxNDsKICAgIGNoYXIgcGFkMTRbMHgxOCAtIDB4MTQgLSBzaXplb2YoczMyKV07CiAgICBzMzIgdW5rMTg7CiAgICBjaGFyIHBhZDE4WzB4MzAgLSAweDE4IC0gc2l6ZW9mKHMzMildOwogICAgczMyIHVuazMwOwogICAgY2hhciBwYWQzMFsweDNDIC0gMHgzMCAtIHNpemVvZihzMzIpXTsKICAgIHMzMiB1bmszQzsKICAgIGNoYXIgcGFkM0NbMHg0MCAtIDB4M0MgLSBzaXplb2YoczMyKV07CiAgICBzMzIgdW5rNDA7CiAgICBjaGFyIHBhZDQwWzB4NDQgLSAweDQwIC0gc2l6ZW9mKHMzMildOwogICAgczMyIHVuazQ0Owp9Owo= */

struct func_802B95DC_S1;
struct func_802B95DC_S1;
struct func_802B95DC_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
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
    s32 unk30;
};

/* unbake evidence input: c3RydWN0IGZ1bmNfODAyQjk1RENfUzE7CnN0cnVjdCBmdW5jXzgwMkI5NURDX1MxIHsKICAgIGNoYXIgcGFkMFsweDE0XTsKICAgIHMzMiB1bmsxNDsKICAgIGNoYXIgcGFkMTRbMHgxOCAtIDB4MTQgLSBzaXplb2YoczMyKV07CiAgICBmMzIgdW5rMTg7CiAgICBjaGFyIHBhZDE4WzB4MUMgLSAweDE4IC0gc2l6ZW9mKGYzMildOwogICAgczMyIHVuazFDOwogICAgY2hhciBwYWQxQ1sweDIwIC0gMHgxQyAtIHNpemVvZihzMzIpXTsKICAgIHMzMiB1bmsyMDsKICAgIGNoYXIgcGFkMjBbMHgyNCAtIDB4MjAgLSBzaXplb2YoczMyKV07CiAgICBzMzIgdW5rMjQ7CiAgICBjaGFyIHBhZDI0WzB4MjggLSAweDI0IC0gc2l6ZW9mKHMzMildOwogICAgczMyIHVuazI4OwogICAgY2hhciBwYWQyOFsweDJDIC0gMHgyOCAtIHNpemVvZihzMzIpXTsKICAgIHMzMiB1bmsyQzsKICAgIGNoYXIgcGFkMkNbMHgzMCAtIDB4MkMgLSBzaXplb2YoczMyKV07CiAgICBzMzIgdW5rMzA7Cn07Cg== */

extern void func_802B468C_de(AudioLowPassFilter *lp);
extern void func_802B4A08_eu_x(void);
#endif
