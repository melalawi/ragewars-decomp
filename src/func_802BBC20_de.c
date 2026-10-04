#include "common/types.h"
#include "span_1000/code_802C0384.h"
#include "types.h"

s32 func_802BC36C_de(s32 *, s32);
extern s32 D_800D5268_de;
extern void *D_800D5270;


void func_802BBC20_de(void)
{
  void *temp_s0;
  s32 *new_var2;
  s8 *new_var;
  int new_var3;
  temp_s0 = func_802BCF30_de();
  ((func_8025E58C_S1 *)(new_var = (s8 *) D_800D5270))->unk10 = (new_var3 = 2);
  new_var2 = &D_800D5268_de;
  func_802BC36C_de(new_var2, new_var3);
  func_802BCF50_de(temp_s0);
}
