#include "span_1000/code_802B99C8.h"
#include "types.h"
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
