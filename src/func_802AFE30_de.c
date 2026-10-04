#include "common/types.h"
#include "span_1000/code_802B3A80.h"
#include "types.h"

extern char D_800C7430_de[];



f32 func_802AFE30_de(s32 arg0)
{
  f32 result;
  f32 base;
  s32 n;
  int new_var;
  new_var = 0;
  result = *((f32 *) (D_800C7430_de + new_var));
  base = ((func_802077F4_S2 *)(D_800C7430_de))->unk4;
  n = arg0;
  if (n < 0)
  {
    base = (0.999422550201416f);
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
