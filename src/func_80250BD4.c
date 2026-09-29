
#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
typedef struct func_80250BD4_S1 func_80250BD4_S1;
struct func_80250BD4_S1 {
    char pad0[0x20];
    s32* unk20;
};

void func_80250BD4(void *arg0, s32 **arg1)
{
  s32 new_var;
  new_var = *(*arg1);
  func_80253E04(0, arg1, func_80278530(new_var, *(((func_80250BD4_S1 *)(arg0))->unk20), arg0 + 0xB8, (s32) (arg0 + 0x28), 0, arg0));
}
