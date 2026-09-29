
#include "basetypes.h"
extern char D_800CC680[];
extern f32 D_800CC688;
typedef struct func_802B4F00_S1 func_802B4F00_S1;
struct func_802B4F00_S1 {
    char pad0[0x4];
    f32 unk4;
};

f32 func_802B4F00(s32 arg0)
{
  f32 result;
  f32 base;
  s32 n;
  int new_var;
  new_var = 0;
  result = *((f32 *) (D_800CC680 + new_var));
  base = ((func_802B4F00_S1 *)(D_800CC680))->unk4;
  n = arg0;
  if (n < 0)
  {
    base = D_800CC688;
    n = -n;
  }
  if (n != 0)
  {
    do
    {
      if (n & 1)
      {
        result *= base;
      }
      n >>= 1;
      base *= base;
    }
    while (n != 0);
  }
  return result;
}
