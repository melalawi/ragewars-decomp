#include "basetypes.h"
extern char D_800C8AD0;
extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 *func_8024BFC4(void *arg0, s8 arg1);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern s32 func_802484A0(void *arg0, s32 arg1, void *arg2);
extern void func_802536F4(s32 arg0, s32 arg1);
typedef struct func_8024B7D4_S1 func_8024B7D4_S1;
struct func_8024B7D4_S1 {
    char pad0[0x1];
    s8 unk1;
    char pad1[0xC4 - 0x1 - sizeof(s8)];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
};

s32 func_8024B7D4(void *arg0, s32 arg1)
{
  void *resource;
  s32 *entry;
  s32 value;
  s32 result;
  result = 0;
  if ((((func_8024B7D4_S1 *)(arg0))->unk100) & 0x40000)
  {
    if (resource)
    {
      resource = func_802518DC(0, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkD0, 0, 0, 0, (&D_800C8AD0) + 4, arg1);
    }
    else
    {
      resource = func_802518DC(0, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkD0, 0, 0, 0, (&D_800C8AD0) + 4, arg1);
    }
    if (resource == 0)
    {
      return result;
    }
    entry = func_8024BFC4(arg0, ((func_8024B7D4_S1 *)(arg0))->unk1);
    if (entry != 0)
    {
      value = *entry;
      result = func_802484A0(arg0, value, func_8028FD94(*((void **) resource), 0));
      func_802536F4(0, (s32) entry);
    }
    func_802536F4(0, (s32) resource);
  }
  return result;
}
