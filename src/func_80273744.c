
#include "basetypes.h"
extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);
extern f32 D_800C99E8[];
void func_80273744(void *arg0, f32 arg1)
{
  char *m = (char *) arg0;
  f32 sin_v;
  f32 cos_v;
  f32 zero;
  f32 identity;
  zero = 0;
  sin_v = func_802BC200(arg1);
  identity = D_800C99E8[1];
  *((f32 *) (m + 0x20)) = sin_v;
  *((f32 *) (m + 0x4)) = zero;
  *((f32 *) (m + 0x8)) = -sin_v;
  *((f32 *) (m + 0x10)) = zero;
  *((f32 *) (m + 0x18)) = zero;
  *((f32 *) (m + 0x24)) = zero;
  *((f32 *) (m + 0x38)) = zero;
  *((f32 *) (m + 0x34)) = zero;
  *((f32 *) (m + 0x30)) = zero;
  *((f32 *) (m + 0x2C)) = zero;
  *((f32 *) (m + 0x1C)) = zero;
  *((f32 *) (m + 0xC)) = zero;
  *((f32 *) (m + 0x3C)) = identity;
  *((f32 *) (m + 0x14)) = identity;
  cos_v = func_802BB630(arg1);
  *((f32 *) (m + 0x28)) = cos_v;
  *((f32 *) (m + 0x0)) = cos_v;
}
