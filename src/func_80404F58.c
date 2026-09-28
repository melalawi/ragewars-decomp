/* Loads a page-aligned resource into the selected device slot and reports the result. */

#include "basetypes.h"
typedef struct 
{
  s8 pad0[0x68];
} Device;
extern s32 D_801534F0[];
extern s32 D_80153500[];
extern Device D_80153510[];
extern s8 D_8010FBB8;
extern char D_800E0D00[];
extern s32 *func_802533DC(s32, s32, s32, void *);
extern void func_802537D8(s32, s32 *);
extern void func_802538A8(s32);
extern void func_8025470C(s32);
extern s32 func_8025471C(void);
extern void func_80263760(void);
extern void func_8026451C(s32);
extern void func_8026456C(void);
extern void func_802C2490(s32, s32, s32);
extern s32 func_80448740(Device *, s32, s32, s32, s32, s32);
s32 func_80404F58(s32 slot, s32 arg1, s32 arg2, s32 length)
{
  s32 size;
  s32 *buf;
  s32 zero;
  s32 one;
  s32 addr;
  s32 result;
  size = (length + 0xFF) & (~0xFF);
  one = 1;
  zero = 0;
  if (D_801534F0[slot] != 3)
  {
    return -2;
  }
  if (func_8025471C() == 0)
  {
    func_8025470C(one);
  }
  buf = func_802533DC(0, size, 0x23, D_800E0D00);
  addr = *buf;
  func_8026451C(1);
  func_80263760();
  result = D_80153500[slot];
  D_8010FBB8 = 2;
  if (result == 0)
  {
    result = func_80448740(&D_80153510[slot], arg1, zero, zero, size, addr);
    if (result != zero)
    {
      result = -1;
    }
    if (result == 0)
    {
      func_802C2490(arg2, addr, length);
    }
  }
  func_8026456C();
  func_802538A8(zero);
  if (buf != ((void *) 0))
  {
    func_802537D8(0, buf);
  }
  return result;
}
