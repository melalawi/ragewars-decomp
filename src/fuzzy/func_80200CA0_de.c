#include "common/types_1dc8418c21db.h"
#include "resident_event_handler.h"
#include "span_1000/code_80200400.h"
#include "types.h"
void func_80200CA0_de(s32 arg0, s32 arg1)
{
  s32 temp_s0;
  unsigned char new_var;
  s32 temp_s2;
  new_var = arg1 & 0xFF;
  if (1)
  {
    arg0++;
    arg0--;
    temp_s0 = arg0 & (~3);
  }
  temp_s2 = ((~arg0) & 3) * 8;
  func_80200568_de(temp_s0, (func_802005A0_de(temp_s0) & (~(0xFF << temp_s2))) | (new_var << temp_s2));
}
