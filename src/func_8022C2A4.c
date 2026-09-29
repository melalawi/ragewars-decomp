
#include "basetypes.h"
extern u8 D_801462DE;
extern f32 D_800C7E20;
extern f32 D_800C7E24;
extern s32 D_800E28D0;
extern s32 D_800E28D4;
void func_802AA224(u8 arg0);
void func_802ABC18(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);
typedef struct func_8022C2A4_S1 func_8022C2A4_S1;
struct func_8022C2A4_S1 {
    char pad0[0x29C];
    f32 unk29C;
    char pad29C[0x2A0 - 0x29C - sizeof(f32)];
    f32 unk2A0;
    char pad2A0[0x2A4 - 0x2A0 - sizeof(f32)];
    f32 unk2A4;
    char pad2A4[0x2A8 - 0x2A4 - sizeof(f32)];
    f32 unk2A8;
};

void func_8022C2A4(void *arg0, char *arg1)
{
  f32 x;
  f32 y;
  f32 ax;
  f32 ay;
  f32 sx;
  f32 sy;
  f32 bx;
  f32 by;
  f32 screenX;
  f32 screenY;
  func_802AA224(D_801462DE);
  x = ((func_8022C2A4_S1 *)(arg1))->unk29C;
  ax = x * D_800C7E20;
  y = ((func_8022C2A4_S1 *)(arg1))->unk2A0;
  ay = y * D_800C7E20;
  sx = x / ((f32) D_800E28D0);
  bx = sx * D_800C7E24;
  sy = y / ((f32) D_800E28D4);
  by = sy * D_800C7E24;
  screenX = ((((func_8022C2A4_S1 *)(arg1))->unk2A4) + ax) - bx;
  screenY = ((((func_8022C2A4_S1 *)(arg1))->unk2A8) + ay) - by;
  func_802ABC18(0x1FB, 0, (s16) ((s32) (((((func_8022C2A4_S1 *)(arg1))->unk2A4) + ax) - bx)), (s16) ((s32) screenY), sx, sy, 1);
}
