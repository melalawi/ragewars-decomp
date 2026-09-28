/* alEnvmixerPull, drafted from ultralib src/audio/env.c: consume the envelope mixer's queued
   parameter updates that fall inside this frame (start, volume/pan/fx changes, stop, free),
   pulling a subframe before each and returning each update to the free list, then pull the
   remainder of the frame. The message switch uses the cartridge's table jtbl_800CC860. eqpower's
   address comes from a static inline helper at each use, so each use gets its own compiler
   temporary as under the library's -fforce-addr and loop motion hoists it after the constant 1;
   a user pointer variable was either hoisted in the wrong order or not at all. */
#include "basetypes.h"

typedef struct {
    unsigned int w0;
    unsigned int w1;
} Awords;

typedef union {
    Awords words;
    long long int force_union_align;
} Acmd;

typedef struct ALParam_s {
    struct ALParam_s *next;
    s32 delta;
    s16 type;
    union {
        f32 f;
        s32 i;
    } data;
    union {
        f32 f;
        s32 i;
    } moredata;
} ALParam;

typedef struct {
    struct ALParam_s *next;
    s32 delta;
    s16 type;
    s16 unity;
    f32 pitch;
    s16 volume;
    u8 pan;
    u8 fxMix;
    s32 samples;
    struct ALWaveTable_s *wave;
} ALStartParamAlt;

typedef struct {
    struct ALParam_s *next;
    s32 delta;
    s16 type;
    s16 unity;
    struct ALWaveTable_s *wave;
} ALStartParam;

typedef struct {
    char pad[0xD8];
    s32 offset;
} PVoice;

typedef struct {
    struct ALParam_s *next;
    s32 delta;
    s16 type;
    PVoice *pvoice;
} ALFreeParam;

typedef s32 (*ALSetParam)(void *, s32, void *);

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    void *handler;
    ALSetParam setParam;
    s16 inp;
    s16 outp;
    s32 type;
} ALFilter;

typedef struct ALEnvMixer_s {
    ALFilter filter;
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
    ALParam *ctrlList;
    ALParam *ctrlTail;
    ALFilter **sources;
    s32 motion;
} ALEnvMixer;

typedef struct {
    char drvr[1]; /* ALSynth, only its address is taken */
} ALGlobals;

extern ALGlobals *D_800D80A0;  /* alGlobals */
extern s16 D_800D8240[128];    /* eqpower */
extern char D_800CC850[];      /* "EX" */
extern char D_800CC854[];      /* "audio/env.c" */

extern void func_802BFD40(const char *, const char *, s32);  /* __assert */
extern Acmd *func_802B9D4C(void *filter, s16 *inp, s16 *outp, s32 outCount,
                           s32 sampleOffset, Acmd *p);       /* _pullSubFrame */
extern f32 func_802BA358(f32 ivol, s32 samples, s16 ratem, u16 ratel); /* _getVol */
extern void func_802B8D0C(void *drvr, PVoice *pvoice);       /* _freePVoice */
extern void func_802B8CF4(ALParam *param);                   /* __freeParam */

static inline s16 *_eqpower(void)
{
    return D_800D8240;
}

Acmd *func_802B9800(void *filter, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    ALEnvMixer *e = (ALEnvMixer *)filter;
    s16 inp;
    s32 lastOffset;
    s32 thisOffset = sampleOffset;
    s32 samples;
    s16 loutp = 0;
    s32 fVol;
    ALParam *thisParam;

    inp = 0; /* AL_RESAMPLER_OUT */

    while (e->ctrlList != 0) {
        lastOffset = thisOffset;
        thisOffset = e->ctrlList->delta;
        samples = thisOffset - lastOffset;
        if (samples > outCount)
            break;

        ((samples >= 0) ? ((void)0) : func_802BFD40(D_800CC850, D_800CC854, 103));
        ((samples <= 160) ? ((void)0) : func_802BFD40(D_800CC850, D_800CC854, 104));

        switch (e->ctrlList->type) {
          case 13: /* AL_FILTER_START_VOICE_ALT */
              {
                  ALStartParamAlt *param = (ALStartParamAlt *)e->ctrlList;
                  ALFilter *f = (ALFilter *)e;
                  s32 tmp;

                  if (param->unity) {
                      (*e->filter.setParam)(&e->filter, 8, 0);
                  }

                  (*e->filter.setParam)(&e->filter, 5, param->wave);
                  (*e->filter.setParam)(&e->filter, 9, 0);

                  e->first = 1;

                  e->delta = 0;
                  e->segEnd = param->samples;

                  tmp = ((s32)param->volume * (s32)param->volume) >> 15;
                  e->volume = (s16)tmp;
                  e->pan = param->pan;
                  e->dryamt = _eqpower()[param->fxMix];
                  e->wetamt = _eqpower()[128 - param->fxMix - 1];

                  if (param->samples) {
                      e->cvolL = 1;
                      e->cvolR = 1;
                  } else {
                      e->cvolL = (e->volume * _eqpower()[e->pan]) >> 15;
                      e->cvolR = (e->volume * _eqpower()[128 - e->pan - 1]) >> 15;
                  }

                  if (f->source) {
                      union {
                          f32 f;
                          s32 i;
                      } data;
                      data.f = param->pitch;
                      (*f->source->setParam)(f->source, 7, (void *)data.i);
                  }
              }
              break;

          case 16: /* AL_FILTER_SET_FXAMT */
          case 12: /* AL_FILTER_SET_PAN */
          case 11: /* AL_FILTER_SET_VOLUME */
              ptr = func_802B9D4C(e, &inp, &loutp, samples, sampleOffset, ptr);

              if (e->delta >= e->segEnd) {
                  e->ltgt = (e->volume * _eqpower()[e->pan]) >> 15;
                  e->rtgt = (e->volume * _eqpower()[128 - e->pan - 1]) >> 15;
                  e->delta = e->segEnd;
                  e->cvolL = e->ltgt;
                  e->cvolR = e->rtgt;
              } else {
                  e->cvolL = func_802BA358(e->cvolL, e->delta, e->lratm, e->lratl);
                  e->cvolR = func_802BA358(e->cvolR, e->delta, e->rratm, e->rratl);
              }

              if (e->cvolL == 0) e->cvolL = 1;
              if (e->cvolR == 0) e->cvolR = 1;

              if (e->ctrlList->type == 12)
                  e->pan = (s16)e->ctrlList->data.i;

              if (e->ctrlList->type == 11) {
                  e->delta = 0;

                  fVol = (e->ctrlList->data.i);
                  fVol = (fVol * fVol) >> 15;
                  e->volume = (s16)fVol;

                  e->segEnd = e->ctrlList->moredata.i;
              }

              if (e->ctrlList->type == 16) {
                  e->dryamt = _eqpower()[e->ctrlList->data.i];
                  e->wetamt = _eqpower()[128 - e->ctrlList->data.i - 1];
              }

              e->first = 1;
              break;

          case 14: /* AL_FILTER_START_VOICE */
              {
                  ALStartParam *p = (ALStartParam *)e->ctrlList;

                  if (p->unity) {
                      (*e->filter.setParam)(&e->filter, 8, 0);
                  }

                  (*e->filter.setParam)(&e->filter, 5, p->wave);
                  (*e->filter.setParam)(&e->filter, 9, 0);
              }
              break;

          case 15: /* AL_FILTER_STOP_VOICE */
              {
                  ptr = func_802B9D4C(e, &inp, &loutp, samples, sampleOffset, ptr);
                  (*e->filter.setParam)(&e->filter, 4, 0);
              }
              break;

          case 0: /* AL_FILTER_FREE_VOICE */
              {
                  void *drvr = &D_800D80A0->drvr;
                  ALFreeParam *param = (ALFreeParam *)e->ctrlList;
                  param->pvoice->offset = 0;
                  func_802B8D0C(drvr, (PVoice *)param->pvoice);
              }
              break;

          default:
              ptr = func_802B9D4C(e, &inp, &loutp, samples, sampleOffset, ptr);
              (*e->filter.setParam)(&e->filter, e->ctrlList->type, (void *)e->ctrlList->data.i);
              break;
        }
        loutp += (samples << 1);
        outCount -= samples;

        thisParam = e->ctrlList;
        e->ctrlList = e->ctrlList->next;
        if (e->ctrlList == 0)
            e->ctrlTail = 0;

        func_802B8CF4(thisParam);
    }

    ptr = func_802B9D4C(e, &inp, &loutp, outCount, sampleOffset, ptr);

    if (e->delta > e->segEnd)
        e->delta = e->segEnd;

    return ptr;
}
