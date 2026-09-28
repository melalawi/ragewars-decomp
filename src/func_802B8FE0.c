/* alFxNew, drafted from ultralib src/audio/drvrnew.c: initialise the effect filter, pick the
   parameter table for the configured effect type, allocate the delay line and its sections, and
   give each section its optional resampler and low-pass filter. init_lpfilter's body is written
   out where the library's -O3 inlined it, against this function's own cartridge constants (a
   static inline helper kept 16384.0 in the inner loop instead of hoisting it into f20); the
   parameter tables are the cartridge's D_800D80B0..D_800D8218 and the unsigned length
   conversion is written out in GCC's order. */
#include "basetypes.h"

typedef short POLEF_STATE[4];

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    void *setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct ALResampler_s {
    ALFilter filter;
    void *state;
    f32 ratio;
    s32 upitch;
    f32 delta;
    s32 first;
    void *ctrlList;
    void *ctrlTail;
    s32 motion;
} ALResampler;

typedef struct {
    s16 fc;
    s16 fgain;
    union {
        s16 fccoef[16];
        long long force_aligned;
    } fcvec;
    POLEF_STATE *fstate;
    s32 first;
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
    ALResampler *rs;
} ALDelay;

typedef struct {
    struct ALFilter_s filter;
    s16 *base;
    s16 *input;
    u32 length;
    ALDelay *delay;
    u8 section_count;
    void *paramHdl;
} ALFx;

typedef struct {
    s32 maxVVoices;
    s32 maxPVoices;
    s32 maxUpdates;
    s32 maxFXbusses;
    void *dmaproc;
    void *heap;
    s32 outputRate;
    u8 fxType;
    s32 *params;
} ALSynConfig;

extern void func_802BA4B0(void *f, void *h, void *s, s32 type);        /* alFilterNew */
extern void *func_802B5410(void *file, s32 line, void *hp, s32 num, s32 size); /* alHeapDBAlloc */

extern char D_2BB1A8; /* alFxParam */
extern char D_2BA8C0; /* alFxPull */
extern char D_2BAC64; /* alFxParamHdl */

extern s32 D_800D80B0[]; /* SMALLROOM_PARAMS */
extern s32 D_800D8118[]; /* BIGROOM_PARAMS */
extern s32 D_800D81A0[]; /* ECHO_PARAMS */
extern s32 D_800D81C8[]; /* CHORUS_PARAMS */
extern s32 D_800D81F0[]; /* FLANGE_PARAMS */
extern s32 D_800D8218[]; /* NULL_PARAMS */

extern const f64 D_800CC808; /* 16384.0 */
extern const f32 D_800CC810; /* 1 / 1000 */
extern const f64 D_800CC818; /* 2^32 */
extern const f32 D_800CC820; /* 1 / 173123.404906676 */
extern const f32 D_800CC824; /* 1.0f */
extern const f64 D_800CC828; /* 1.0 / 16384 */

void func_802B8FE0(ALFx *r, ALSynConfig *c, void *hp)
{
    u16 i, j, k;
    s32 *param = 0;
    ALFilter *f = (ALFilter *)r;
    ALDelay *d;

    func_802BA4B0(f, 0, &D_2BB1A8, 5);
    f->handler = &D_2BA8C0;
    r->paramHdl = &D_2BAC64;

    switch (c->fxType) {
      case 1: param = D_800D80B0; break;
      case 2: param = D_800D8118; break;
      case 5: param = D_800D81A0; break;
      case 3: param = D_800D81C8; break;
      case 4: param = D_800D81F0; break;
      case 6: param = c->params; break;
      default: param = D_800D8218; break;
    }

    j = 0;

    r->section_count = param[j++];
    r->length = param[j++];

    r->delay = func_802B5410(0, 0, hp, r->section_count, sizeof(ALDelay));
    r->base = func_802B5410(0, 0, hp, r->length, sizeof(s16));
    r->input = r->base;

    for (k = 0; k < r->length; k++)
        r->base[k] = 0;

    for (i = 0; i < r->section_count; i++) {
        d = &r->delay[i];
        d->input = param[j++];
        d->output = param[j++];
        d->fbcoef = param[j++];
        d->ffcoef = param[j++];
        d->gain = param[j++];

        if (param[j]) {
            s32 length;
            f64 flength;
            f32 rsinc;
            f32 depth;

            rsinc = (f32)param[j++] * D_800CC810;
            d->rsinc = (rsinc + rsinc) / c->outputRate;

            depth = (f32)param[j++];
            length = d->output - d->input;
            flength = length;
            if (length < 0)
                flength += D_800CC818;
            d->rsgain = depth * ((f32)flength * D_800CC820);
            d->rsval = D_800CC824;
            d->rsdelta = 0;
            d->rs = func_802B5410(0, 0, hp, 1, sizeof(ALResampler));
            d->rs->state = func_802B5410(0, 0, hp, 1, 32);
            d->rs->delta = 0;
            d->rs->first = 1;
        } else {
            d->rs = 0;
            j++;
            j++;
        }

        if (param[j]) {
            d->lp = func_802B5410(0, 0, hp, 1, sizeof(ALLowPass));
            d->lp->fstate = func_802B5410(0, 0, hp, 1, sizeof(POLEF_STATE));
            d->lp->fc = param[j++];
            {
                ALLowPass *lp = d->lp;
                s32 n, temp;
                s16 fc;
                f64 ffc, fcoef;

                temp = lp->fc * 16384;
                fc = temp >> 15;
                lp->fgain = 16384 - fc;

                lp->first = 1;
                for (n = 0; n < 8; n++)
                    lp->fcvec.fccoef[n] = 0;

                lp->fcvec.fccoef[n++] = fc;
                fcoef = ffc = (f64)fc * D_800CC828;

                for (; n < 16; n++) {
                    fcoef *= ffc;
                    lp->fcvec.fccoef[n] = (s16)(fcoef * D_800CC808);
                }
            }
        } else {
            d->lp = 0;
            j++;
        }
    }
}
