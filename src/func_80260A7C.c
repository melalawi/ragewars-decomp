#include "../include/shared/func_80260a7c_s1.h"
#include "../include/shared/encoderange.h"
/* Quantizes a float into a range's bit width and writes the value into the packed bit words at an address. */

typedef Shared_func_80260A7C_S1 func_80260A7C_S1;

typedef Shared_EncodeRange EncodeRange;
inline static void write_bits(u32 arg2, u32 arg0, u32 arg1)
{
  u32 temp_a0;
  s32 temp_v0;
  s32 temp_v0_2;
  u32 temp_a1;
  u32 temp_a2;
  u32 temp_shift;
  u32 var_a2;
  u32 var_a3;
  u32 var_v1;
  func_80260A7C_S1 *words;
  temp_a1 = (1 << arg1) - 1;
  var_v1 = temp_a1;
  temp_v0 = arg0 & 0x1F;
  temp_shift = temp_v0;
  temp_a2 = arg2 & temp_a1;
  if (temp_v0 == 0)
  {
    var_a3 = temp_a2;
    temp_a1 = 0;
    var_a2 = 0;
  }
  else
  {
    var_v1 = temp_a1 << temp_shift;
    temp_v0_2 = 0x20 - temp_shift;
    temp_a1 >>= temp_v0_2;
    var_a3 = temp_a2 << temp_shift;
    var_a2 = temp_a2 >> temp_v0_2;
  }
  temp_a0 = (arg0 & 0xF0000000) | (((u32) (arg0 & 0x0FFFFFE0)) >> 3);
  words = (func_80260A7C_S1 *) temp_a0;
  words->first = (words->first & (~var_v1)) | var_a3;
  words->second = (words->second & (~temp_a1)) | var_a2;
}

void func_80260A7C(s32 arg0, EncodeRange range, f32 arg4)
{
  f32 arg4_2;
  f32 temp_f1;
  s32 temp_f2;
  s32 var_a0;
  arg4_2 = arg4;
  temp_f1 = (arg4_2 - range.base) / range.scale * (f32) ((1 << range.width) - 1) + 0.5f;
  if (temp_f1 >= 0.0f)
  {
    var_a0 = (s32) temp_f1;
  }
  else
  {
    temp_f2 = (s32) temp_f1;
    var_a0 = 1;
    if ((f32) temp_f2 == temp_f1)
    {
      var_a0 = 0;
    }
    if (range.width)
    {
      var_a0 = temp_f2 - var_a0;
    }
    else
    {
      var_a0 = temp_f2 - var_a0;
    }
  }
  write_bits(var_a0, arg0, range.width);
}
