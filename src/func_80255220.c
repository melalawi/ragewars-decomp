
#include "basetypes.h"
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, void *arg1, s32 arg2);
extern s32 D_800D2978;
typedef void (*FuncPtr)(s32, void *);
void func_80255220(void *arg0)
{
  void *sp10;
  char *new_var;
  for (;;)
  {
    func_802C0390(((char *) arg0) + 0x230, &sp10, 1);
    new_var = (char *) sp10;
    *((s32 *) (((char *) arg0) + 0x1448)) = D_800D2978;
    ((FuncPtr) (*((s32 *) (new_var + 0x14))))(*((s32 *) (((char *) sp10) + 0x18)), sp10);
    func_802C0510(*((void **) (((char *) sp10) + 0x20)), sp10, 1);
  }

}
