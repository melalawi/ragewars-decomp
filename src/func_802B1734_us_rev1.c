#include "span_1000/code_802B033C.h"
#include "types.h"

extern s32 func_802AE5AC_us_rev1(s32);
extern s32 D_8014D3E8;
s32 func_802B1734_us_rev1(u32 arg0)
{
  s32 result;
  result = 0;
  func_802AE5AC_us_rev1((arg0 >> 8) & 0xFF);
  if (D_8014D3E8 == 0)
  {
    func_802AE5AC_us_rev1(arg0 & 0xFF);
    result = D_8014D3E8 == 0;
  }
  return result;
}
