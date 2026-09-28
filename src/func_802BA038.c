/* _getRate: approximate per-step volume scaling using the public ultralib log table and repeated squaring. */

#include "basetypes.h"
typedef struct 
{
  f64 v[8];
} LogTab;
extern const LogTab D_800CC8A8;
extern const f32 D_800CC8E8;
extern const f64 D_800CC8F0;
extern const f64 D_800CC8F8;
extern const f64 D_800CC900;
extern const f64 D_800CC908;
extern const f64 D_800CC910;
extern const f64 D_800CC918;
extern const f64 D_800CC920;
extern const f64 D_800CC928;
extern const f64 D_800CC930;
extern const f64 D_800CC938;
extern const f64 D_800CC940;
extern const f64 D_800CC948;
extern const f64 D_800CC950;
s16 func_802BA038(f64 vol, f64 tgt, s32 count, u16 *ratel)
{
  s16 s;
  f64 invn = D_800CC8E8 / ((f32) count);
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
  if (tgt < D_800CC8F0)
  {
    tgt = D_800CC8F0;
  }
  if (vol <= D_800CC8F8)
  {
    vol = D_800CC8F0;
  }
  {
    LogTab logtab = D_800CC8A8;
    f64 absvalue;
    s32 *eptr;
    i_invn = (s32) (invn * D_800CC900);
    tgt = tgt / vol;
    eptr = &ex;
    *eptr = 0;
    if (tgt == D_800CC908)
    {
      vol = tgt;
    }
    else
    {
      absvalue = __builtin_fabs(tgt);
      if (absvalue >= D_800CC910)
      {
        do
        {
          absvalue *= D_800CC918;
          ++(*eptr);
        }
        while (absvalue >= D_800CC910);
      }
      if (absvalue < D_800CC920)
      {
        do
        {
          absvalue += absvalue;
          --(*eptr);
        }
        while (absvalue < D_800CC920);
      }
      vol = absvalue;
      if (!(tgt > D_800CC928))
      {
        vol = -vol;
      }
    }
    indx = (s32) (vol * D_800CC930);
    absvalue = D_800CC938;
    eps = ((new_var = logtab.v[indx - 8]) + ex) * absvalue;
    eps /= D_800CC940;
    fs = eps + D_800CC948;
    a = D_800CC948;
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
    *ratel = (s16) ((a - ((f32) s)) * D_800CC950);
    return (s16) a;
  }
  else
  {
    a *= (a *= (a *= a));
    s = (s16) a;
    *ratel = (s16) ((a - ((f32) s)) * D_800CC950);
    return (s16) a;
  }
}
