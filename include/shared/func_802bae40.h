#ifndef UNBAKE_FUNC_802BAE40_H
#define UNBAKE_FUNC_802BAE40_H
#include "basetypes.h"

struct ALDelay;
typedef struct ALDelay ALDelay;
typedef struct ALFilter_s ALFilter;
typedef struct ALFx ALFx;
typedef struct ALResampler_s ALResampler;

struct ALFilter_s;

struct ALFx;

struct ALResampler_s;









struct ALDelay {
    u32 input;
    u32 output;
    s16 ffcoef;
    s16 fbcoef;
    s16 gain;
    f32 rsinc;
    f32 rsval;
    s32 rsdelta;
    f32 rsgain;
    void *lp;
    ALResampler *rs;
};
struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
};
struct ALFx {
    ALFilter filter;
    s16 *base;
    s16 *input;
    u32 length;
    ALDelay *delay;
    u8 section_count;
    void *paramHdl;
};
struct ALResampler_s {
    ALFilter filter;
    void *state;
    f32 ratio;
    s32 upitch;
    f32 delta;
    s32 first;
};
#endif
