#include "span_1000/code_8027230C.h"
#include "span_C76B0/data.h"
#include "types.h"


extern f32 func_802B7130_de(f32);
extern f32 func_802B6560_de(f32);
void func_80272E3C_de(f32 *m, f32 x, f32 y, f32 z)
{
  f32 zero;
  f32 ax = func_802B7130_de(x);
  f32 bx = func_802B6560_de(x);
  f32 ay = func_802B7130_de(y);
  f32 by = func_802B6560_de(y);
  int new_var;
  f32 az = func_802B7130_de(z);
  f32 bz = func_802B6560_de(z);
  new_var = 0;
  m[new_var] = by * bz;
  m[1] = by * az;
  m[2] = -ay;
  zero = 0.0f;
  m[14] = zero;
  m[13] = zero;
  m[12] = zero;
  m[11] = zero;
  m[7] = zero;
  m[3] = zero;
  m[4] = ((ax * ay) * bz) - (bx * az);
  m[5] = ((ax * ay) * az) + (bx * bz);
  m[6] = ax * by;
  m[8] = ((bx * ay) * bz) + (ax * az);
  m[9] = ((bx * ay) * az) - (ax * bz);
  m[10] = bx * by;
  m[15] = D_800C48DC_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C480C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99CC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B8C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BCC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48DC_4 = 1.0f;
#endif
