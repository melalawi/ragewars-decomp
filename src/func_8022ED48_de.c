#include "span_1000/code_8022E120.h"
#include "types.h"


extern s32 D_800C9AEC_de;
void func_8022ED48_de(Actor_func_8022ED48_de *arg0)
{
  s32 temp_v0;
  temp_v0 = arg0->flags & 0xFF7FFFFF;
  arg0->flags = temp_v0;
  arg0->unk_0x001C = 0;
  arg0->unk_0x0020 = 0;
  arg0->unk_0x0024 = 0;
  arg0->unk_0x11D8 = 0.0f;
  arg0->flags = temp_v0 | 0x01000000;
  arg0->unk_0x11FC = 0;
  arg0->flags = temp_v0 | 0x01000000;
  if (arg0->unk_0x13B4 == (&D_800C9AEC_de))
  {
    arg0->unk_0x086C = 0x5E24;
    return;
  }
  arg0->unk_0x086C = 1;
}
