
#include "basetypes.h"
extern f32 D_800D2988;
extern void func_80279764(void *arg0, void *arg1);
void func_802A6ED0(void *arg0)
{
  void *node;
  char *new_var;
  void *next;
  f32 value;
  s32 count;
  node = *((void **) (((char *) arg0) + 0x7594));
  if (node != 0)
  {
    do
    {
      value = (*((f32 *) (((char *) node) + 8)) = (*((f32 *) (((char *) node) + 8))) - D_800D2988);
      next = *((void **) (((char *) node) + 4));
      if (value <= 0.0f)
      {
        value += *((f32 *) (((char *) node) + 0xC));
        *((f32 *) (((char *) node) + 8)) = value;
        if (value < 0.0f)
        {
          *((f32 *) (((char *) node) + 8)) = 0.0f;
        }
        (*((void (**)(void *)) (((char *) node) + 0x18)))(node);
        count = (*((s32 *) ((new_var = (char *) node) + 0x10))) - 1;
        *((s32 *) (((char *) node) + 0x10)) = count;
        if (count <= 0)
        {
          func_80279764(((char *) arg0) + 0x7588, node);
        }
      }
      node = next;
    }
    while (node != 0);
  }
}
