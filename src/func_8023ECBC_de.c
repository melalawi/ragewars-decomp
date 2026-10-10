#include "shared/world.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8023D370.h"
#include "types.h"


extern void *func_8028B2F8_de(void *, u16 *);





void func_8023ECBC_de(void *arg0, u16 *arg1)
{
  char *o = (char *) arg0;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_v0;
  void *temp_v0;
  temp_v1 = ((func_8023EBEC_S1 *)(o))->unk3C;
  if (temp_v1 & 0x1000)
  {
    ((func_8023EBEC_S1 *)(o))->unk3C = temp_v1 & (~0x2000);
  }
  temp_v1_2 = ((func_8023EBEC_S1 *)(o))->unk3C;
  ((func_8023EBEC_S1 *)(o))->unk3C = temp_v1_2 & 0xFFFC7FFF;
  if (temp_v1_2 & 0x7000)
  {
    temp_v0 = func_8028B2F8_de(&D_8011FE88, arg1);
    if (temp_v0 != 0)
    {
      if ((((func_8023ECAC_S2 *)(temp_v0))->unk44) & 0x400000)
      {
        ;
        ((func_8023EBEC_S1 *)(o))->unk3C = (((func_8023EBEC_S1 *)(o))->unk3C) | 0x8000;
      }
      else
        if ((((func_8023ECAC_S2 *)(temp_v0))->unk52) & 0x80)
      {
        var_v0 = (((func_8023EBEC_S1 *)(o))->unk3C) | 0x10000;
        ((func_8023EBEC_S1 *)(o))->unk3C = var_v0;
      }
    }
  }
}
