
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
extern f32 D_800CB030;
void func_802A6A14(void *arg0, s32 arg1)
{
  *((f32 *) (((s8 *) arg0) + 0x14)) = (f32) D_800CB030;
  *((s32 *) (((s8 *) arg0) + 0)) = arg1;
  *((s32 *) (((s8 *) arg0) + 4)) = 0;
  *((s32 *) (((s8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x24)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x34)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x38)) = 0;
  *((s32 *) (((s8 *) arg0) + 0x3C)) = 0;
}
