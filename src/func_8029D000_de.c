#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8029BBA0.h"
#include "types.h"

/* Re-orthonormalises the rotation rows of a matrix: normalises the first and second rows (a zero length is left to divide by zero), rebuilds the third row as their cross product and the second as the cross product of the third and first, and writes the three rows back. */





extern f32 func_802B72B0_de(f32);

static inline f32 safe_sqrt(f32 x) {
    if (x <= 0.0f) {
        return 0.0f;
    }
    return func_802B72B0_de(x);
}

static inline void normalize(Vec3 *v) {
    f32 scale;

    scale = 1.0f / safe_sqrt(v->x * v->x + v->y * v->y + v->z * v->z);
    v->x *= scale;
    v->y *= scale;
    v->z *= scale;
}

static inline Vec3 cross(Vec3 *a, Vec3 *b) {
    Vec3 r;

    r.x = a->y * b->z - a->z * b->y;
    r.y = a->z * b->x - a->x * b->z;
    r.z = a->x * b->y - a->y * b->x;
    return r;
}

void func_8029D000_de(Plane_func_802965B0_de *m) {
    Vec3 x;
    Vec3 y;
    Vec3 z;

    x.x = m[0].normal.x;
    x.y = m[0].normal.y;
    x.z = m[0].normal.z;
    y.x = m[1].normal.x;
    y.y = m[1].normal.y;
    y.z = m[1].normal.z;
    normalize(&x);
    normalize(&y);
    z = cross(&x, &y);
    y = cross(&z, &x);
    {
        Vec3 *p = &x;

        m[0].normal.x = p->x;
        m[0].normal.y = p->y;
        m[0].normal.z = p->z;
    }
    m[1].normal.x = y.x;
    m[1].normal.y = y.y;
    m[1].normal.z = y.z;
    m[2].normal.x = z.x;
    m[2].normal.y = z.y;
    m[2].normal.z = z.z;
}

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
