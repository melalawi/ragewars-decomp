#include "span_1000/code_8024B644.h"
#include "types.h"
extern char D_800C39E0_de;
extern void * *func_8025193C_de(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern s32 *func_8024BFD4_de(void *arg0, s8 arg1);
extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern s32 func_802484B0_de(void *arg0, s32 arg1, void *arg2);
extern void func_80253754_de(s32 arg0, s32 arg1);



s32 func_8024B7E4_de(void *arg0, s32 arg1)
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
      resource = func_8025193C_de(0, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkD0, 0, 0, 0, (&D_800C39E0_de) + 4, arg1);
    }
    else
    {
      resource = func_8025193C_de(0, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkC4, ((func_8024B7D4_S1 *)(arg0))->unkD0, 0, 0, 0, (&D_800C39E0_de) + 4, arg1);
    }
    if (resource == 0)
    {
      return result;
    }
    entry = func_8024BFD4_de(arg0, ((func_8024B7D4_S1 *)(arg0))->unk1);
    if (entry != 0)
    {
      value = *entry;
      result = func_802484B0_de(arg0, value, func_8028FDB4_de(*((void **) resource), 0));
      func_80253754_de(0, (s32) entry);
    }
    func_80253754_de(0, (s32) resource);
  }
  return result;
}
