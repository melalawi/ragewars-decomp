#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "span_C76B0/data.h"
#include "types.h"

extern u8 D_8014221E;


extern s32 D_800DE880_de;
extern s32 D_800DE884_de;
void func_802A9234_de(u8 arg0);
void func_802AAC28_de(s32 arg0, s32 arg1, s16 arg2, s16 arg3, f32 arg4, f32 arg5, s32 arg6);



void func_8022C2B4_de(void *arg0, char *arg1)
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
  func_802A9234_de(D_8014221E);
  x = ((func_80219490_S2 *)(arg1))->unk29C;
  ax = x * D_800C2D30_de;
  y = ((func_80219490_S2 *)(arg1))->unk2A0;
  ay = y * D_800C2D30_de;
  sx = x / ((f32) D_800DE880_de);
  bx = sx * D_800C2D34_de;
  sy = y / ((f32) D_800DE884_de);
  by = sy * D_800C2D34_de;
  screenX = ((((func_80219490_S2 *)(arg1))->unk2A4) + ax) - bx;
  screenY = ((((func_80219490_S2 *)(arg1))->unk2A8) + ay) - by;
  func_802AAC28_de(0x1FB, 0, (s16) ((s32) (((((func_80219490_S2 *)(arg1))->unk2A4) + ax) - bx)), (s16) ((s32) screenY), sx, sy, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C60_4 = 0.5f;
const float unbake_rodata_800C2C64_4 = 32.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E20_4 = 0.5f;
const float unbake_rodata_800C7E24_4 = 32.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FD4_4 = 0.5f;
const float unbake_rodata_800C2FD8_4 = 32.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3014_4 = 0.5f;
const float unbake_rodata_800C3018_4 = 32.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D30_4 = 0.5f;
const float unbake_rodata_800C2D34_4 = 32.0f;
#endif
