#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8020AF9C.h"
#include "types.h"




extern f32 D_800C1D90_de;

extern struct {s32 *unk0;} D_801372A4;
extern s32 func_802744D4_de(void);





void func_8020CA10_de(void *arg0, s32 arg1)
{
  char *entry;
  u16 flags;
  char *new_var;
  s32 *base;
  ((func_8020CA10_S1 *)(arg0))->unk4 = D_800C1D8C_de;
  ((func_8020CA10_S1 *)(arg0))->unk0 = arg1;
  ((func_8020CA10_S1 *)(arg0))->unk8 = -1;
  ((func_8020CA10_S1 *)(arg0))->unkC = 0;
  ((func_8020CA10_S1 *)(arg0))->unk10 = 0;
  base = D_801372A4.unk0;
  new_var = (char *)base + ((arg1 * (*base)) + 8);
  entry = new_var;
  flags = ((func_8020CA10_S2 *)(entry))->unkC;
  if (flags & 2)
  {
    ((func_8020CA10_S1 *)(arg0))->unk14 = D_800C1D90_de;
  }
  ((func_8020CA10_S1 *)(arg0))->unk34 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk38 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk3C = 0;
  ((func_8020CA10_S1 *)(arg0))->unk40 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk44 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk48 = 0;
  ((func_8020CA10_S1 *)(arg0))->unk4C = 0;
  flags = ((func_8020CA10_S2 *)(entry))->unkC;
  if (flags & 0x40)
  {
    ((func_8020CA10_S1 *)(arg0))->unk38 = (func_802744D4_de() % 5) + 5;
  }
  flags = ((func_8020CA10_S2 *)(entry))->unkC;
  if (flags & 0x80)
  {
    ((func_8020CA10_S1 *)(arg0))->unk3C = (func_802744D4_de() % 5) + 5;
  }
}
