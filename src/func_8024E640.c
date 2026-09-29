
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024E640_S1 func_8024E640_S1;
struct func_8024E640_S1 {
    u8 unk0;
    char pad0[0xC - 0x0 - sizeof(u8)];
    f32 unkC;
    char padC[0x40 - 0xC - sizeof(f32)];
    f32 unk40;
};

f32 func_8024E640(void *arg0)
{
  if ((((func_8024E640_S1 *)(arg0))->unk0) != 1)
  {
    if (arg0)
    {
      return ((func_8024E640_S1 *)(arg0))->unkC;
    }
    else
    {
      return ((func_8024E640_S1 *)(arg0))->unkC;
    }
  }
  return ((func_8024E640_S1 *)(arg0))->unk40;
}
