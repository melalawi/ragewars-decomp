
#include "basetypes.h"
typedef struct 
{
  s32 a;
  s32 b;
  s32 c;
} Triple;
extern void func_80232734(void *arg0, s32 arg1, s32 arg2);
void func_80267D80(s32 arg0, void *arg1, s32 arg2, Triple arg3, s32 arg6)
{
  s32 t6 = arg6;
  void *temp = *((void **) (((char *) arg1) + 0x1D8));
  *((Triple *) (((char *) temp) + 0x774)) = arg3;
 do { } while (0);
  func_80232734(arg1, (s32) (((char *) arg1) + 0x170), t6);
}
