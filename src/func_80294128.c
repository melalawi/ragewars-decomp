
#include "basetypes.h"
extern void func_802938E8(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void func_80294128(s32 arg0)
{
  s32 five;
  u32 bits;
  five = 5;
  bits = 0x41600000;
  func_802938E8(arg0, (double) bits, five, five);
}
