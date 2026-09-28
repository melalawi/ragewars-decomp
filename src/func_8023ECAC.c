
#include "basetypes.h"
extern s32 D_8011FE88;
extern void *func_8028B2D4(void *, u16 *);
void func_8023ECAC(void *arg0, u16 *arg1)
{
  char *o = (char *) arg0;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_v0;
  void *temp_v0;
  temp_v1 = *((s32 *) (o + 0x3C));
  if (temp_v1 & 0x1000)
  {
    *((s32 *) (o + 0x3C)) = temp_v1 & (~0x2000);
  }
  temp_v1_2 = *((s32 *) (o + 0x3C));
  *((s32 *) (o + 0x3C)) = temp_v1_2 & 0xFFFC7FFF;
  if (temp_v1_2 & 0x7000)
  {
    temp_v0 = func_8028B2D4(&D_8011FE88, arg1);
    if (temp_v0 != 0)
    {
      if ((*((s32 *) (((char *) temp_v0) + 0x44))) & 0x400000)
      {
        ;
        *((s32 *) (o + 0x3C)) = (*((s32 *) (o + 0x3C))) | 0x8000;
      }
      else
        if ((*((u16 *) (((char *) temp_v0) + 0x52))) & 0x80)
      {
        var_v0 = (*((s32 *) (o + 0x3C))) | 0x10000;
        *((s32 *) (o + 0x3C)) = var_v0;
      }
    }
  }
}
