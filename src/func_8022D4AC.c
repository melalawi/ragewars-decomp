
#include "basetypes.h"
extern void func_8044A4C0(void *);
extern void func_802636D0(void *arg0);
extern f32 D_800C7EAC;
extern f32 D_800C7EB0;
void func_8022D4AC(void *arg0)
{
  f32 new_var;
  new_var = *((f32 *) (((char *) arg0) + 0x658));
  if (D_800C7EAC < new_var)
  {
    *((s32 *) (((char *) arg0) + 0x13C8)) = 1;
    *((s32 *) (((char *) arg0) + 0x1238)) = -1;
    *((s32 *) (((char *) arg0) + 0x1230)) = 0;
    *((s32 *) (((char *) arg0) + 0x122C)) = (*((s32 *) (((char *) arg0) + 0x122C))) & (~0x20);
    func_8044A4C0(arg0);
    *((f32 *) (((char *) arg0) + 0x50)) = D_800C7EB0;
    *((f32 *) (((char *) arg0) + 0x54)) = D_800C7EB0;
    *((f32 *) (((char *) arg0) + 0x58)) = D_800C7EB0;
    return;
  }
  func_802636D0(((char *) arg0) + 0x688);
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x1454)))) + 0x23C)) = 0;
  *((s32 *) (((char *) (*((void **) (((char *) arg0) + 0x1454)))) + 0x240)) = 0;
}
