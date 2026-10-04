#include "common/types.h"
#include "span_1000/code_8023ECAC.h"
#include "types.h"






void func_8023F644_de(void *arg0, f32 *arg1)
{
  char *new_var;
  f32 temp;
  f32 value;
  s32 *new_var2;
  f32 bound;
  new_var2 = ((func_8023F634_S1 *)(arg0))->unk40;
  arg1[0] = ((func_8023F634_S1 *)(arg0))->unkC;
  ((func_80205314_S2 *)(arg1))->unk2C = (*new_var2) & 0x400;
  temp = ((func_8023F634_S1 *)(arg0))->unk14;
  arg1[1] = temp;
  new_var = &((func_8023F634_S1 *)(arg0))->unk10;
  arg1[2] = temp + (*((f32 *) new_var));
  arg1[4] = (((func_8023F634_S1 *)(arg0))->unk48) + arg1[1];
  arg1[3] = (((func_8023F634_S1 *)(arg0))->unk48) + arg1[2];
  arg1[6] = (((func_8023F634_S1 *)(arg0))->unk54) + arg1[1];
  arg1[5] = (((func_8023F634_S1 *)(arg0))->unk54) + arg1[2];
  value = ((func_8023F634_S1 *)(arg0))->unk50;
  bound = ((func_8023F634_S1 *)(arg0))->unk44;
  if (!(value <= bound))
  {
    value = bound;
  }
  arg1[7] = value - arg1[0];
  value = ((func_8023F634_S1 *)(arg0))->unk50;
  bound = ((func_8023F634_S1 *)(arg0))->unk44;
  if (!(bound <= value))
  {
    value = bound;
  }
  arg1[9] = value + arg1[0];
  value = ((func_8023F634_S1 *)(arg0))->unk58;
  bound = ((func_8023F634_S1 *)(arg0))->unk4C;
  if (!(value <= bound))
  {
    value = bound;
  }
  arg1[8] = value - arg1[0];
  value = ((func_8023F634_S1 *)(arg0))->unk58;
  bound = ((func_8023F634_S1 *)(arg0))->unk4C;
  if (!(bound <= value))
  {
    value = bound;
  }
  arg1[10] = value + arg1[0];
}
