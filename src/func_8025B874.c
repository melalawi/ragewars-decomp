
#include "basetypes.h"
extern void func_802B7FD0(void *arg0, s16 arg1);
extern s32 func_802B76F0(void *arg0);
typedef struct func_8025B874_S1 func_8025B874_S1;
struct func_8025B874_S1 {
    char pad0[0x84];
    char unk84;
};

s32 func_8025B874(s32 arg0, s16 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  void *temp_s0;
  int new_var;
  temp_v0 = (arg1 * 0xCC) + arg0;
  temp_v0 = temp_v0 + 4;
  new_var = 2;
  temp_v1 = *((s32 *) (temp_v0 + 0xB0));
  temp_s0 = &((func_8025B874_S1 *)(temp_v1))->unk84;
  func_802B7FD0(temp_s0, *((s16 *) (((char *) (temp_v1 + ((*((s32 *) (temp_v0 + 0))) * new_var))) + 0xDC)));
  func_802B76F0(temp_s0);
}
