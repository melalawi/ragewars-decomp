/* Tests target visibility against range and horizontal and vertical angles; volatile zero accesses and identical normalization branches preserve scheduling and register allocation. */

#include "basetypes.h"
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
} Vec3f;
typedef struct 
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Quat;
typedef struct 
{
  f32 m[16];
} Matrix;
typedef struct 
{
  char pad0[8];
  Vec3f position;
  char pad14[0x70 - 0x14];
  f32 eye;
} Actor;
extern f32 func_8024D274(Actor *);
extern void func_80271FD8(Vec3f *, Vec3f *, Vec3f *);
extern f32 func_802BC380(f32);
extern void func_8024795C(Quat *, Actor *);
extern void func_802742B4(Quat *, Matrix *);
extern void func_80272908(Matrix *, Vec3f *, Vec3f *);
extern void func_802720EC(Vec3f *);
extern f32 func_80274640(f32);
s32 func_80214310(Actor *viewer, Actor *target, f32 range, f32 across, f32 up)
{
  Vec3f from;
  Vec3f to;
  Vec3f dir;
  Vec3f ahead;
  Vec3f forward;
  Vec3f flatDir;
  Vec3f flatForward;
  Vec3f pitchDir;
  Vec3f pitchForward;
  Quat rotation;
  Matrix matrix;
  f32 distance;
  f32 dirLength;
  f32 forwardLength;
  f32 angle;
  f32 zero;
  from = viewer->position;
  from.y += viewer->eye;
  from.y += func_8024D274(viewer) * 0.9f;
  to = target->position;
  to.y += target->eye;
  to.y += func_8024D274(target) * 0.9f;
  func_80271FD8(&dir, &to, &from);
  distance = func_802BC380(((dir.x * dir.x) + (dir.y * dir.y)) + (dir.z * dir.z));
  if (range < distance)
  {
    return 0;
  }
  func_8024795C(&rotation, viewer);
  func_802742B4(&rotation, &matrix);
  ahead.x = 0.0f;
  ahead.y = 0.0f;
  ahead.z = distance;
  func_80272908(&matrix, &ahead, &forward);
  across *= 0.5f;
  up *= 0.5f;
  flatDir.x = dir.x;
  flatDir.y = 0.0f;
  zero = *((volatile f32 *) (&flatDir.y));
  flatDir.z = dir.z;
  dirLength = func_802BC380((flatDir.x * flatDir.x) + (flatDir.z * flatDir.z));
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
  forwardLength = func_802BC380((flatForward.x * flatForward.x) + (flatForward.z * flatForward.z));
  if (forwardLength != zero)
  {
    flatForward.x /= forwardLength;
    flatForward.z /= forwardLength;
  }
  angle = func_80274640(((flatDir.x * flatForward.x) + (flatDir.y * flatForward.y)) + (flatDir.z * flatForward.z));
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
  func_802720EC(&pitchDir);
  *((volatile f32 *) (&pitchForward.x)) = 0.0f;
  pitchForward.z = forwardLength;
  pitchForward.y = forward.y;
  func_802720EC(&pitchForward);
  angle = func_80274640(((pitchDir.x * pitchForward.x) + (pitchDir.y * pitchForward.y)) + (pitchDir.z * pitchForward.z));
  if (up < ((angle < 0.0f) ? (-angle) : (angle)))
  {
    return 0;
  }
  return 1;
}
