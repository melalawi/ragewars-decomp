#include "common/types.h"
#include "span_1000/code_80212D78.h"
#include "span_1000/types.h"
#include "types.h"
/* Tests target visibility against range and horizontal and vertical angles; volatile zero accesses and identical normalization branches preserve scheduling and register allocation. */





extern f32 func_8024D284_de(Actor_func_80214310_de *);
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_802B72B0_de(f32);
extern void func_8024796C_de(Vector4f *, Actor_func_80214310_de *);
extern void func_80274244_de(Vector4f *, Matrix *);
extern void func_80272898_de(Matrix *, Vec3 *, Vec3 *);
extern void func_8027207C_de(Vec3 *);
extern f32 func_802745D0_de(f32);
s32 func_80214310_de(Actor_func_80214310_de *viewer, Actor_func_80214310_de *target, f32 range, f32 across, f32 up)
{
  Vec3 from;
  Vec3 to;
  Vec3 dir;
  Vec3 ahead;
  Vec3 forward;
  Vec3 flatDir;
  Vec3 flatForward;
  Vec3 pitchDir;
  Vec3 pitchForward;
  Vector4f rotation;
  Matrix matrix;
  f32 distance;
  f32 dirLength;
  f32 forwardLength;
  f32 angle;
  f32 zero;
  from = viewer->position;
  from.y += viewer->eye;
  from.y += func_8024D284_de(viewer) * 0.9f;
  to = target->position;
  to.y += target->eye;
  to.y += func_8024D284_de(target) * 0.9f;
  func_80271F68_de(&dir, &to, &from);
  distance = func_802B72B0_de(((dir.x * dir.x) + (dir.y * dir.y)) + (dir.z * dir.z));
  if (range < distance)
  {
    return 0;
  }
  func_8024796C_de(&rotation, viewer);
  func_80274244_de(&rotation, &matrix);
  ahead.x = 0.0f;
  ahead.y = 0.0f;
  ahead.z = distance;
  func_80272898_de(&matrix, &ahead, &forward);
  across *= 0.5f;
  up *= 0.5f;
  flatDir.x = dir.x;
  flatDir.y = 0.0f;
  zero = *((volatile f32 *) (&flatDir.y));
  flatDir.z = dir.z;
  dirLength = func_802B72B0_de((flatDir.x * flatDir.x) + (flatDir.z * flatDir.z));
  if (dirLength != zero)
  {
    if (across)
    {
      flatDir.x /= dirLength;
      flatDir.z /= dirLength;
    }
    else
    {
      flatDir.x /= dirLength;
      flatDir.z /= dirLength;
    }
  }
  flatForward.x = forward.x;
  flatForward.y = zero;
  flatForward.z = forward.z;
  forwardLength = func_802B72B0_de((flatForward.x * flatForward.x) + (flatForward.z * flatForward.z));
  if (forwardLength != zero)
  {
    flatForward.x /= forwardLength;
    flatForward.z /= forwardLength;
  }
  angle = func_802745D0_de(((flatDir.x * flatForward.x) + (flatDir.y * flatForward.y)) + (flatDir.z * flatForward.z));
  if (angle < zero)
  {
    angle = -angle;
  }
  if (across < angle)
  {
    return 0;
  }
  *((volatile f32 *) (&pitchDir.x)) = 0.0f;
  pitchDir.z = dirLength;
  pitchDir.y = dir.y;
  func_8027207C_de(&pitchDir);
  *((volatile f32 *) (&pitchForward.x)) = 0.0f;
  pitchForward.z = forwardLength;
  pitchForward.y = forward.y;
  func_8027207C_de(&pitchForward);
  angle = func_802745D0_de(((pitchDir.x * pitchForward.x) + (pitchDir.y * pitchForward.y)) + (pitchDir.z * pitchForward.z));
  if (up < ((angle < 0.0f) ? (-angle) : (angle)))
  {
    return 0;
  }
  return 1;
}
