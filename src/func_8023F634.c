
#include "basetypes.h"
typedef struct func_8023F634_S1 func_8023F634_S1;
typedef struct func_8023F634_S2 func_8023F634_S2;
struct func_8023F634_S1 {
    char pad0[0xC];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    char unk10;
    char pad10[0x14 - 0x10 - sizeof(char)];
    f32 unk14;
    char pad14[0x40 - 0x14 - sizeof(f32)];
    s32* unk40;
    char pad40[0x44 - 0x40 - sizeof(s32*)];
    f32 unk44;
    char pad44[0x48 - 0x44 - sizeof(f32)];
    f32 unk48;
    char pad48[0x4C - 0x48 - sizeof(f32)];
    f32 unk4C;
    char pad4C[0x50 - 0x4C - sizeof(f32)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
};
struct func_8023F634_S2 {
    char pad0[0x2C];
    s32 unk2C;
};

void func_8023F634(void *arg0, f32 *arg1)
{
  char *new_var;
  f32 temp;
  f32 value;
  s32 *new_var2;
  f32 bound;
  new_var2 = ((func_8023F634_S1 *)(arg0))->unk40;
  arg1[0] = ((func_8023F634_S1 *)(arg0))->unkC;
  ((func_8023F634_S2 *)(arg1))->unk2C = (*new_var2) & 0x400;
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
