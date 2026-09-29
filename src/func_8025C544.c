
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_8025C544_S1 func_8025C544_S1;
struct func_8025C544_S1 {
    char unk0;
    char pad0[0xB0 - 0x0 - sizeof(char)];
    s32 unkB0;
};

void func_8025C544(void *arg0, s32 arg1)
{
  s8 *new_var;
  int new_var2;
  s32 temp_s0;
  void *temp_s0_2;
  temp_s0 = ((func_8025C544_S1 *)(arg0))->unkB0;
  temp_s0_2 = temp_s0 + 0x84;
  new_var2 = 2;
  new_var = &((func_8025C544_S1 *)(arg0))->unk0;
  func_802B7FD0(temp_s0_2, *((s16 *) (((s8 *) (temp_s0 + ((*((s32 *) new_var)) * new_var2))) + 0xDC)));
  func_802B7F00(temp_s0_2, arg1 & 0xFF);
}
