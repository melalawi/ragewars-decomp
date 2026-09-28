/* _pullSubFrame, drafted from ultralib src/audio/env.c: when the envelope mixer is playing, pull
   its source and append the buffer, volume and envelope-mixer commands for one subframe,
   recomputing the ramp targets and rates on the first pull after a change. */
#include "basetypes.h"

typedef struct {
    unsigned int w0;
    unsigned int w1;
} Awords;

typedef union {
    Awords words;
    long long int force_union_align;
} Acmd;

#define _SHIFTL(v, s, w) ((unsigned int)(((unsigned int)(v) & ((0x01 << (w)) - 1)) << (s)))

#define aSetBuffer(pkt, f, i, o, c)                                     \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(8, 24, 8) | _SHIFTL(f, 16, 8) |         \
                        _SHIFTL(i, 0, 16));                             \
        _a->words.w1 = _SHIFTL(o, 16, 16) | _SHIFTL(c, 0, 16);          \
    }

#define aSetVolume(pkt, f, v, t, r)                                     \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = (_SHIFTL(9, 24, 8) | _SHIFTL(f, 16, 16) |        \
                        _SHIFTL(v, 0, 16));                             \
        _a->words.w1 = _SHIFTL(t, 16, 16) | _SHIFTL(r, 0, 16);          \
    }

#define aEnvMixer(pkt, f, s)                                            \
    {                                                                   \
        Acmd *_a = (Acmd *)pkt;                                         \
        _a->words.w0 = _SHIFTL(3, 24, 8) | _SHIFTL(f, 16, 8);           \
        _a->words.w1 = (unsigned int)(s);                               \
    }

typedef Acmd *(*ALCmdHandler)(void *, s16 *, s32, s32, Acmd *);

typedef struct ALFilter_s {
    struct ALFilter_s *source;
    ALCmdHandler handler;
    void *setParam;
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
    void *ctrlList;
    void *ctrlTail;
    ALFilter **sources;
    s32 motion;
} ALEnvMixer;

extern s16 D_800D8240[128];    /* eqpower */
extern char D_800CC850[];      /* "EX" */
extern char D_800CC854[];      /* "audio/env.c" */

extern void func_802BFD40(const char *, const char *, s32);          /* __assert */
extern unsigned int func_802C0CB0(void *);                           /* osVirtualToPhysical */
extern s16 func_802BA038(f64 vol, f64 tgt, s32 count, u16 *ratel);  /* _getRate */

Acmd *func_802B9D4C(void *filter, s16 *inp, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    ALEnvMixer *e = (ALEnvMixer *)filter;
    ALFilter *source = e->filter.source;

    if (e->motion != 1 || !outCount)
        return ptr;

    ((source) ? ((void)0) : func_802BFD40(D_800CC850, D_800CC854, 366));

    ptr = (*source->handler)(source, inp, outCount, sampleOffset, p);

    aSetBuffer(ptr++, 0x00, *inp, 1088 + *outp, outCount << 1);
    aSetBuffer(ptr++, 0x08, 1408 + *outp, 1728 + *outp, 2048 + *outp);

    if (e->first) {
        e->first = 0;

        e->ltgt = (e->volume * D_800D8240[e->pan]) >> 15;
        e->lratm = func_802BA038((f64)e->cvolL, (f64)e->ltgt, e->segEnd, &(e->lratl));
        e->rtgt = (e->volume * D_800D8240[128 - e->pan - 1]) >> 15;
        e->rratm = func_802BA038((f64)e->cvolR, (f64)e->rtgt, e->segEnd, &(e->rratl));

        aSetVolume(ptr++, 0x02 | 0x04, e->cvolL, 0, 0);
        aSetVolume(ptr++, 0x00 | 0x04, e->cvolR, 0, 0);
        aSetVolume(ptr++, 0x02 | 0x00, e->ltgt, e->lratm, e->lratl);
        aSetVolume(ptr++, 0x00 | 0x00, e->rtgt, e->rratm, e->rratl);
        aSetVolume(ptr++, 0x08, e->dryamt, 0, e->wetamt);
        aEnvMixer(ptr++, 0x01 | 0x08, func_802C0CB0(e->state));
    }
    else
        aEnvMixer(ptr++, 0x00 | 0x08, func_802C0CB0(e->state));

    *inp += (outCount << 1);
    e->delta += outCount;

    return ptr;
}
