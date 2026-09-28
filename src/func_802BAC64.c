/* alFxParamHdl, drafted from ultralib src/audio/reverb.c: set one parameter of one reverb delay
   section, selected by (paramID - 2) / 8 and % 8, and reinitialise its low-pass filter when the
   cutoff changes. The chorus rate and depth are evaluated in single precision against the
   cartridge's 1/1000 and 1/CONVERT constants, and the unsigned delay length is converted
   against the cartridge's own 2^32. */
#include "basetypes.h"

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct {
    s16 fc;
    s16 fgain;
} ALLowPass;

typedef struct {
    u32 input;
    u32 output;
    s16 ffcoef;
    s16 fbcoef;
    s16 gain;
    f32 rsinc;
    f32 rsval;
    s32 rsdelta;
    f32 rsgain;
    ALLowPass *lp;
    void *rs;
} ALDelay;

typedef struct {
    ALFilter filter;
    s16 *base;
    s16 *input;
    u32 length;
    ALDelay *delay;
    u8 section_count;
    void *paramHdl;
} ALFx;

typedef struct {
    char pad[0x44];
    s32 outputRate;
} ALSynth;

typedef struct {
    ALSynth drvr;
} ALGlobals;

extern ALGlobals *D_800D80A0;        /* alGlobals */
extern const float D_800CCA08;       /* 1/1000 */
extern const double D_800CCA10;      /* 2^32 */
extern const float D_800CCA18;       /* 1/CONVERT */
extern void func_802B975C(ALLowPass *); /* _init_lpfilter */

#define LENGTH (f->delay[s].output - f->delay[s].input)

s32 func_802BAC64(void *filter, s32 paramID, void *param)
{
    ALFx *f = (ALFx *)filter;
    s32 p = (paramID - 2) % 8;
    s32 s = (paramID - 2) / 8;
    s32 val = *(s32 *)param;

    switch (p) {
        case 0:
            f->delay[s].input = (u32)val & 0xFFFFFFF8;
            break;
        case 1:
            f->delay[s].output = (u32)val & 0xFFFFFFF8;
            break;
        case 3:
            f->delay[s].ffcoef = (s16)val;
            break;
        case 2:
            f->delay[s].fbcoef = (s16)val;
            break;
        case 4:
            f->delay[s].gain = (s16)val;
            break;
        case 5:
            f->delay[s].rsinc = (((f32)val * D_800CCA08) * 2.0f) / D_800D80A0->drvr.outputRate;
            break;
        case 6: {
            f32 fval = (f32)val;
            s32 length = LENGTH;
            double flength = length;

            if (length < 0)
                flength += D_800CCA10;
            f->delay[s].rsgain = fval * ((f32)flength * D_800CCA18);
            break;
        }
        case 7:
            if (f->delay[s].lp) {
                f->delay[s].lp->fc = (s16)val;
                func_802B975C(f->delay[s].lp);
            }
            break;
    }
    return 0;
}
