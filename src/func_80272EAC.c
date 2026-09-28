
#include "basetypes.h"
extern f32 D_800C99CC;
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
void func_80272EAC(f32 *m, f32 x, f32 y, f32 z)
{
  f32 zero;
  f32 ax = func_802BC200(x);
  f32 bx = func_802BB630(x);
  f32 ay = func_802BC200(y);
  f32 by = func_802BB630(y);
  int new_var;
  f32 az = func_802BC200(z);
  f32 bz = func_802BB630(z);
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
  m[15] = D_800C99CC;
}
