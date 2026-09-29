
#include "basetypes.h"
typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
} Triple;
extern void func_80232734(void *arg0, s32 arg1, s32 arg2);
typedef struct func_80267D80_S1 func_80267D80_S1;
typedef struct func_80267D80_S2 func_80267D80_S2;
struct func_80267D80_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80267D80_S2 {
    char pad0[0x774];
    Triple unk774;
};

void func_80267D80(s32 arg0, void *arg1, s32 arg2, Triple arg3, s32 arg6)
{
  s32 t6 = arg6;
  void *temp = ((func_80267D80_S1 *)(arg1))->unk1D8;
  ((func_80267D80_S2 *)(temp))->unk774 = arg3;
 do { } while (0);
  func_80232734(arg1, (s32) ((char *)arg1 + 0x170), t6);
}
