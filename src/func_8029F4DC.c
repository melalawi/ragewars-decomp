
#include "basetypes.h"
typedef struct Vector3
{
  f32 x;
  f32 y;
  f32 z;
} Vector3;
extern f32 func_802BC380(f32);
void func_8029F4DC(Vector3 *arg0)
{
  f32 sum;
  sum = ((arg0->x * arg0->x) + (arg0->y * arg0->y)) + (arg0->z * arg0->z);
  if (!((((arg0->x * arg0->x) + (arg0->y * arg0->y)) + (arg0->z * arg0->z)) <= 0.0f))
  {
    sum = arg0->z;
    func_802BC380(((arg0->x * arg0->x) + (arg0->y * arg0->y)) + (sum * sum));
  }
}
