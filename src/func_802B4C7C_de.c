#include "span_1000/code_802B4730.h"
#include "span_1000/code_802B4730.h"
#include "abi.h"
#include "audio_callbacks.h"
#include "common/unused.h"
#include "types.h"

/* _pullSubFrame, drafted from ultralib src/audio/env.c: when the envelope mixer is playing, pull
   its source and append the buffer, volume and envelope-mixer commands for one subframe,
   recomputing the ramp targets and rates on the first pull after a change. */
extern s16 D_800D4210[128]; /* eqpower */
#if defined(VERSION_DE)
extern char D_800C7600[]; /* Resident "EX" assertion expression. */
#elif defined(VERSION_EU)
extern char D_800C81F0[]; /* Resident "EX" assertion expression. */
#elif defined(VERSION_EU_X)
extern char D_800C8BC0[]; /* Resident "EX" assertion expression. */
#elif defined(VERSION_US)
extern char D_800C7520[]; /* Resident "EX" assertion expression. */
#else
extern char D_800CC850[]; /* Resident "EX" assertion expression. */
#endif
extern char D_800C7604[]; /* "audio/env.c" */

extern void func_802BAC50_de(const char *, const char *, s32); /* __assert */
extern unsigned int func_802BBBC0_de(void *); /* osVirtualToPhysical */
  /* _getRate */

Acmd *func_802B4C7C_de(void *filter, s16 *inp, s16 *outp, s32 outCount, s32 sampleOffset, Acmd *p)
{
    Acmd *ptr = p;
    struct ALEnvMixer_s *e = (struct ALEnvMixer_s *)filter;
    ALFilter_s14_2 *source = e->filter.source;

    if (e->motion != 1 || !outCount)
        return ptr;

#if defined(VERSION_DE)
    ((source) ? ((void)0) : func_802BAC50_de(D_800C7600, D_800C7604, 366));
#elif defined(VERSION_EU)
    ((source) ? ((void)0) : func_802BAC50_de(D_800C81F0, D_800C7604, 366));
#elif defined(VERSION_EU_X)
    ((source) ? ((void)0) : func_802BAC50_de(D_800C8BC0, D_800C7604, 366));
#elif defined(VERSION_US)
    ((source) ? ((void)0) : func_802BAC50_de(D_800C7520, D_800C7604, 366));
#else
    ((source) ? ((void)0) : func_802BAC50_de(D_800CC850, D_800C7604, 366));
#endif

    ptr = (*source->handler)(source, inp, outCount, sampleOffset, p);

    aSetBuffer(ptr++, 0x00, *inp, 1088 + *outp, outCount << 1);
    aSetBuffer(ptr++, 0x08, 1408 + *outp, 1728 + *outp, 2048 + *outp);

    if (e->first) {
        e->first = 0;

        e->ltgt = (e->volume * D_800D4210[e->pan]) >> 15;
        e->lratm = func_802B4F68_de((f64)e->cvolL, (f64)e->ltgt, e->segEnd, &(e->lratl));
        e->rtgt = (e->volume * D_800D4210[128 - e->pan - 1]) >> 15;
        e->rratm = func_802B4F68_de((f64)e->cvolR, (f64)e->rtgt, e->segEnd, &(e->rratl));

        aSetVolume(ptr++, 0x02 | 0x04, e->cvolL, 0, 0);
        aSetVolume(ptr++, 0x00 | 0x04, e->cvolR, 0, 0);
        aSetVolume(ptr++, 0x02 | 0x00, e->ltgt, e->lratm, e->lratl);
        aSetVolume(ptr++, 0x00 | 0x00, e->rtgt, e->rratm, e->rratl);
        aSetVolume(ptr++, 0x08, e->dryamt, 0, e->wetamt);
        aEnvMixer(ptr++, 0x01 | 0x08, func_802BBBC0_de(e->state));
    }
    else
        aEnvMixer(ptr++, 0x00 | 0x08, func_802BBBC0_de(e->state));

    *inp += (outCount << 1);
    e->delta += outCount;

    return ptr;
}

/* _getRate: approximate per-step volume scaling using the public ultralib log table and repeated squaring. */

extern const LogTab D_800C7658_de;
extern const f32 D_800C7698_de;
extern const f64 D_800C76A0_de;
extern const f64 D_800C76B0_de;
extern const f64 D_800C76C0_de;
extern const f64 D_800C76C8_de;
extern const f64 D_800C76D0_de;
extern const f64 D_800C76D8_de;
extern const f64 D_800C76E0_de;
extern const f64 D_800C76E8_de;
extern const f64 D_800C76F0_de;
extern const f64 D_800C76F8_de;
extern const f64 D_800C7700_de;
s16 func_802B4F68_de(f64 vol, f64 tgt, s32 count, u16 *ratel)
{
  s16 s;
  f64 invn = D_800C7698_de / ((f32) count);
  f64 eps;
  f64 a;
  f64 fs;
  f64 new_var;
  f64 mant;
  s32 i_invn;
  s32 ex;
  s32 indx;
  if (count == 0)
  {
    if (tgt >= vol)
    {
      *ratel = 0xffff;
      return 0x7fff;
    }
    else
    {
      *ratel = 0;
      return 0;
    }
  }
  if (tgt < D_800C76A0_de)
  {
    tgt = D_800C76A0_de;
  }
  if (vol <= (0.0))
  {
    vol = D_800C76A0_de;
  }
  {
    LogTab logtab = D_800C7658_de;
    f64 absvalue;
    s32 *eptr;
    i_invn = (s32) (invn * D_800C76B0_de);
    tgt = tgt / vol;
    eptr = &ex;
    *eptr = 0;
    if (tgt == (0.0))
    {
      vol = tgt;
    }
    else
    {
      absvalue = __builtin_fabs(tgt);
      if (absvalue >= D_800C76C0_de)
      {
        do
        {
          absvalue *= D_800C76C8_de;
          ++(*eptr);
        }
        while (absvalue >= D_800C76C0_de);
      }
      if (absvalue < D_800C76D0_de)
      {
        do
        {
          absvalue += absvalue;
          --(*eptr);
        }
        while (absvalue < D_800C76D0_de);
      }
      vol = absvalue;
      if (!(tgt > D_800C76D8_de))
      {
        vol = -vol;
      }
    }
    indx = (s32) (vol * D_800C76E0_de);
    absvalue = D_800C76E8_de;
    eps = ((new_var = logtab.v[indx - 8]) + ex) * absvalue;
    eps /= D_800C76F0_de;
    fs = eps + D_800C76F8_de;
    a = D_800C76F8_de;
    while (i_invn)
    {
      if (i_invn & 1)
      {
        a = a * fs;
      }
      fs *= fs;
      i_invn >>= 1;
    }

  }
  if (vol)
  {
    a *= (a *= (a *= a));
    s = (s16) a;
    *ratel = (s16) ((a - ((f32) s)) * D_800C7700_de);
    return (s16) a;
  }
  else
  {
    a *= (a *= (a *= a));
    s = (s16) a;
    *ratel = (s16) ((a - ((f32) s)) * D_800C7700_de);
    return (s16) a;
  }
}

/* alEnvmixerParam, drafted from ultralib src/audio/env.c: apply one parameter to the envelope
   mixer, appending an update to the control list, resetting or starting the filter, setting its
   source, and otherwise passing the parameter down to the source. The parameter identifiers are
   the cartridge's own 1, 3, 4 and 9. */
s32 func_802B51B8_de(void *filter, s32 paramID, void *param)
{
    ALFilter_s *f = (ALFilter_s *)filter;
    ALEnvMixer *e = (ALEnvMixer *)filter;

    switch (paramID) {

      case (3):
          if (e->ctrlTail) {
              e->ctrlTail->next = (ALParam_s *)param;
          } else {
              e->ctrlList = (ALParam_s *)param;
          }
          e->ctrlTail = (ALParam_s *)param;

          break;

      case (4):
          e->first = 1;
          e->motion = 0;
          e->volume = 1;
          if (f->source)
              (*f->source->setParam)(f->source, 4, param);
          break;

      case (9):
          e->motion = 1;
          if (f->source)
              (*f->source->setParam)(f->source, 9, param);
          break;

      case (1):
          f->source = (ALFilter_s *)param;
          break;

      default:
          if (f->source)
              (*f->source->setParam)(f->source, paramID, param);
    }
    return 0;
}

f32 func_802B5288_de(f32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    f32 base;
    f32 result;
    s32 n;
    s32 i;

    n = arg1 >> 3;
    i = 0;
    if (n == 0) {
        return arg0;
    }

    base = (f32)(arg2 << 16);
    base += (f32)(arg3 & 0xFFFF);
    base *= D_800C7708_de;
    result = D_800C770C_de;
    do {
        if (n & 1) {
            result *= base;
        }
        n >>= 1;
        i++;
        if (n == 0) {
            break;
        }
        base *= base;
    } while (i < 0x20);

    return arg0 * result;
}

extern const f64 D_800C7710_de;
extern const f64 D_800C7718_de;
extern const f64 D_800C7720_de;
extern const f64 D_800C7728_de;
extern const f64 D_800C7730_de;

f64 func_802B5300_de(f64 arg0, s32 *arg2) {
    f64 value;

    *arg2 = 0;
    if (arg0 == D_800C7710_de) {
        return arg0;
    }
    value = __builtin_fabs(arg0);
    if (D_800C7718_de <= value) {
        do {
            value *= D_800C7720_de;
            *arg2 += 1;
        } while (D_800C7718_de <= value);
    }
    if (value < D_800C7728_de) {
        do {
            value += value;
            *arg2 -= 1;
        } while (value < D_800C7728_de);
    }
    if (!(D_800C7730_de < arg0)) {
        value = -value;
    }
    return value;
}

f64 func_802B53B4_de(f64 arg0, s32 arg1) {
    if (arg1 != 0) {
        arg0 = arg0 * (f64)(1 << arg1);
    }
    return arg0;
}
