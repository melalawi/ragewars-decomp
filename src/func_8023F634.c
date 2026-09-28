
#include "basetypes.h"
void func_8023F634(void *arg0, f32 *arg1)
{
  char *new_var;
  f32 temp;
  f32 value;
  s32 *new_var2;
  f32 bound;
  new_var2 = *((s32 **) (((char *) arg0) + 0x40));
  arg1[0] = *((f32 *) (((char *) arg0) + 0xC));
  *((s32 *) (((char *) arg1) + 0x2C)) = (*new_var2) & 0x400;
  temp = *((f32 *) (((char *) arg0) + 0x14));
  arg1[1] = temp;
  new_var = ((char *) arg0) + 0x10;
  arg1[2] = temp + (*((f32 *) new_var));
  arg1[4] = (*((f32 *) (((char *) arg0) + 0x48))) + arg1[1];
  arg1[3] = (*((f32 *) (((char *) arg0) + 0x48))) + arg1[2];
  arg1[6] = (*((f32 *) (((char *) arg0) + 0x54))) + arg1[1];
  arg1[5] = (*((f32 *) (((char *) arg0) + 0x54))) + arg1[2];
  value = *((f32 *) (((char *) arg0) + 0x50));
  bound = *((f32 *) (((char *) arg0) + 0x44));
  if (!(value <= bound))
  {
    value = bound;
  }
  arg1[7] = value - arg1[0];
  value = *((f32 *) (((char *) arg0) + 0x50));
  bound = *((f32 *) (((char *) arg0) + 0x44));
  if (!(bound <= value))
  {
    value = bound;
  }
  arg1[9] = value + arg1[0];
  value = *((f32 *) (((char *) arg0) + 0x58));
  bound = *((f32 *) (((char *) arg0) + 0x4C));
  if (!(value <= bound))
  {
    value = bound;
  }
  arg1[8] = value - arg1[0];
  value = *((f32 *) (((char *) arg0) + 0x58));
  bound = *((f32 *) (((char *) arg0) + 0x4C));
  if (!(bound <= value))
  {
    value = bound;
  }
  arg1[10] = value + arg1[0];
}
