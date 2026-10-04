#ifndef UNBAKE_SPAN_1000_CODE_802B8D4C_H
#define UNBAKE_SPAN_1000_CODE_802B8D4C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct AudioLowPassFilter;
typedef struct AudioLowPassFilter AudioLowPassFilter;

struct func_802B9474_S1;
typedef struct func_802B9474_S1 func_802B9474_S1;

struct func_802B95DC_S1;
typedef struct func_802B95DC_S1 func_802B95DC_S1;

typedef signed short AudioPoleFilterState[4];
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
extern void func_802B468C_de(AudioLowPassFilter *lp);
extern void func_802B4A08_eu_x(void);
#endif
