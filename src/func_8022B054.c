
#include "basetypes.h"
typedef struct 
{
  s32 x;
  s32 y;
  s32 z;
} Vec3;
extern unsigned int func_802227D0(void *arg0, void *arg1, s32 arg2);
typedef struct func_8022B054_S1 func_8022B054_S1;
struct func_8022B054_S1 {
    char pad0[0x16C4];
    Vec3 unk16C4;
};

void func_8022B054(void *arg0, Vec3 *arg1)
{
  void *new_var;
  ((func_8022B054_S1 *)(arg0))->unk16C4 = *arg1;
  new_var = arg0;
  func_802227D0(new_var, new_var, 0x11);
}
