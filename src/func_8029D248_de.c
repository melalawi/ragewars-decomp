#include "common/types.h"
#include "span_1000/code_8029D984.h"
#include "span_C76B0/data.h"
#include "types.h"



s32 func_8029D248_de(f32 *out, f32 *input)
{
  struct Shape_typemap_165 copy[4];
  f32 *m;
  f32 determinant;
  f32 absoluteDeterminant;
  f32 reciprocal;
  f32 negativeReciprocal;
  f32 m5;
  f32 m10;
  f32 m6;
  f32 m9;
  f32 m4;
  f32 m8;
  f32 minor0;
  f32 affineOne;
  s32 result;
  m = input;
  if (input == out)
  {
    struct Shape_typemap_165 *dst = copy;
    struct Shape_typemap_165 *src = (struct Shape_typemap_165 *) out;
    struct Shape_typemap_165 *end = src + 4;
    do
    {
      *dst = *src;
      src++;
      dst++;
    }
    while (src != end);
    m = (f32 *) copy;
  }
  m5 = m[5];
  m10 = m[10];
  m6 = m[6];
  m9 = m[9];
  minor0 = (m5 * m10) - (m6 * m9);
  m4 = m[4];
  m8 = m[8];
  determinant = ((m[0] * minor0) - (m[1] * ((m4 * m10) - (m6 * m8)))) + (m[2] * ((m4 * m9) - (m5 * m8)));
  reciprocal = determinant;
  absoluteDeterminant = reciprocal;
  if (!(reciprocal >= 0.0f))
  {
    absoluteDeterminant = -determinant;
  }
  result = 1;
  if (!(absoluteDeterminant < (9.999999747378752e-05f)))
  {
    affineOne = D_800C5B00_de;
    reciprocal = affineOne / determinant;
    out[0] = reciprocal * minor0;
    negativeReciprocal = -reciprocal;
    out[1] = negativeReciprocal * ((m[1] * m[10]) - (m[2] * m[9]));
    out[2] = reciprocal * ((m[1] * m[6]) - (m[2] * m[5]));
    out[3] = 0.0f;
    out[4] = negativeReciprocal * ((m[4] * m[10]) - (m[6] * m[8]));
    out[5] = reciprocal * ((m[0] * m[10]) - (m[2] * m[8]));
    out[6] = negativeReciprocal * ((m[0] * m[6]) - (m[2] * m[4]));
    out[7] = 0.0f;
    out[8] = reciprocal * ((m[4] * m[9]) - (m[5] * m[8]));
    out[9] = negativeReciprocal * ((m[0] * m[9]) - (m[1] * m[8]));
    out[10] = reciprocal * ((m[0] * m[5]) - (m[1] * m[4]));
    out[11] = 0.0f;
    out[12] = -(((m[12] * out[0]) + (m[13] * out[4])) + (m[14] * out[8]));
    out[13] = -(((m[12] * out[1]) + (m[13] * out[5])) + (m[14] * out[9]));
    out[14] = -(((m[12] * out[2]) + (m[13] * out[6])) + (m[14] * out[10]));
    result = 0;
    out[15] = affineOne;
  }
  return result;
}
