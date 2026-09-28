
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8024B64C(void *arg0, unsigned int arg1)
{
  *((s16 *) (((s8 *) arg0) + 0x10A)) = arg1;
  *((s8 *) (((s8 *) arg0) + 0x10E)) = 0;
  if ((*((s16 *) (((s8 *) arg0) + 0x108))) != arg1)
  {
    *((s8 *) (((s8 *) arg0) + 0x10F)) = 1;
  }
}
