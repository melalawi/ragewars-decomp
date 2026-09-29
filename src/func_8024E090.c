
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8024E090_S1 func_8024E090_S1;
typedef struct func_8024E090_S2 func_8024E090_S2;
struct func_8024E090_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024E090_S2 {
    s32 unk0;
    char pad0[0x4C - 0x0 - sizeof(s32)];
    s32 unk4C;
};

s32 func_8024E090(void *arg0)
{
  void *temp_a0;
  int new_var;
  temp_a0 = ((func_8024E090_S1 *)(arg0))->unk18;
  new_var = 1;
  if ((((func_8024E090_S2 *)(temp_a0))->unk0) != new_var)
  {
    return 0;
  }
  if (new_var)
  {
    return (((func_8024E090_S2 *)(temp_a0))->unk4C) & 0x200;
  }
}
