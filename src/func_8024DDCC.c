
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024DDCC_S1 func_8024DDCC_S1;
typedef struct func_8024DDCC_S2 func_8024DDCC_S2;
struct func_8024DDCC_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024DDCC_S2 {
    s32 unk0;
    char pad0[0x14 - 0x0 - sizeof(s32)];
    s32 unk14;
};

s32 func_8024DDCC(void *arg0)
{
  s32 temp_a0;
  void *temp_v1;
  temp_v1 = ((func_8024DDCC_S1 *)(arg0))->unk18;
  temp_a0 = ((func_8024DDCC_S2 *)(temp_v1))->unk0;
  if ((temp_a0 == 1) || (temp_a0 == 4))
  {
    if (temp_v1)
    {
      return (((func_8024DDCC_S2 *)(temp_v1))->unk14) & 0x80;
    }
    else
    {
      return (((func_8024DDCC_S2 *)(temp_v1))->unk14) & 0x80;
    }
  }
  return 0;
}
