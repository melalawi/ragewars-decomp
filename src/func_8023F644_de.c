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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCB40_20[] = {0x004339F8U, 0x004339F8U, 0x00433A94U, 0x00433A94U, 0x00433A7CU, 0x00433A6CU, 0x00433ABCU, 0x004339F8U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1BE0_20[] = {0x0042FED8U, 0x0042FFD0U, 0x00430064U, 0x0042FF50U, 0x0042FDE4U, 0x00430104U, 0x0042FD78U, 0x00430104U};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E4104_10[] = {0x80, 0x0D, 0x23, 0xF0, 0x80, 0x0D, 0x88, 0x1C, 0x80, 0x0D, 0xC7, 0x78, 0x80, 0x0E, 0x05, 0x34};
const unsigned char unbake_rodata_800E4114_10[] = {0x80, 0x0D, 0x24, 0x08, 0x80, 0x0D, 0x88, 0x38, 0x80, 0x0D, 0xC7, 0x90, 0x80, 0x0E, 0x05, 0x4C};
const unsigned char unbake_rodata_800E4124_10[] = {0x80, 0x0D, 0x24, 0x20, 0x80, 0x0D, 0x88, 0x54, 0x80, 0x0D, 0xC7, 0xA8, 0x80, 0x0E, 0x05, 0x64};
const unsigned char unbake_rodata_800E4134_10[] = {0x80, 0x0D, 0x24, 0x38, 0x80, 0x0D, 0x88, 0x70, 0x80, 0x0D, 0xC7, 0xC0, 0x80, 0x0E, 0x05, 0x7C};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DE81C_C[] = {0x80, 0x0D, 0x1A, 0x50, 0x80, 0x0D, 0x6E, 0x60, 0x80, 0x0D, 0xB1, 0x78};
const unsigned char unbake_rodata_800DE828_3C[] = {0x80, 0x0D, 0x1A, 0x54, 0x80, 0x0D, 0x6E, 0x64, 0x80, 0x0D, 0xB1, 0x7C, 0x80, 0x0D, 0x1A, 0x58, 0x80, 0x0D, 0x6E, 0x68, 0x80, 0x0D, 0xB1, 0x80, 0x80, 0x0D, 0x1A, 0x5C, 0x80, 0x0D, 0x6E, 0x6C, 0x80, 0x0D, 0xB1, 0x84, 0x80, 0x0D, 0x1A, 0x60, 0x80, 0x0D, 0x6E, 0x70, 0x80, 0x0D, 0xB1, 0x88, 0x80, 0x0D, 0x1A, 0x64, 0x80, 0x0D, 0x6E, 0x74, 0x80, 0x0D, 0xB1, 0x8C};
const unsigned char unbake_rodata_800DE864_18[] = {0x80, 0x0D, 0x1A, 0x68, 0x80, 0x0D, 0x6E, 0x78, 0x80, 0x0D, 0xB1, 0x90, 0x80, 0x0D, 0x1A, 0x6C, 0x80, 0x0D, 0x6E, 0x7C, 0x80, 0x0D, 0xB1, 0x94};
const unsigned char unbake_rodata_800DE87C_C[] = {0x80, 0x0D, 0x1A, 0x70, 0x80, 0x0D, 0x6E, 0x80, 0x80, 0x0D, 0xB1, 0x98};
const unsigned char unbake_rodata_800DE888_6C[] = {0x80, 0x0D, 0x1A, 0x74, 0x80, 0x0D, 0x6E, 0x84, 0x80, 0x0D, 0xB1, 0x9C, 0x80, 0x0D, 0x1A, 0x78, 0x80, 0x0D, 0x6E, 0x88, 0x80, 0x0D, 0xB1, 0xA0, 0x80, 0x0D, 0x1A, 0x84, 0x80, 0x0D, 0x6E, 0x98, 0x80, 0x0D, 0xB1, 0xAC, 0x80, 0x0D, 0x1A, 0x90, 0x80, 0x0D, 0x6E, 0xA8, 0x80, 0x0D, 0xB1, 0xB8, 0x80, 0x0D, 0x1A, 0x9C, 0x80, 0x0D, 0x6E, 0xB8, 0x80, 0x0D, 0xB1, 0xC4, 0x80, 0x0D, 0x1A, 0xA8, 0x80, 0x0D, 0x6E, 0xC8, 0x80, 0x0D, 0xB1, 0xD0, 0x80, 0x0D, 0x1A, 0xB0, 0x80, 0x0D, 0x6E, 0xD4, 0x80, 0x0D, 0xB1, 0xD8, 0x80, 0x0D, 0x1A, 0xB4, 0x80, 0x0D, 0x6E, 0xD8, 0x80, 0x0D, 0xB1, 0xDC, 0x80, 0x0D, 0x1A, 0xB8, 0x80, 0x0D, 0x6E, 0xDC, 0x80, 0x0D, 0xB1, 0xE0};
#elif defined(VERSION_DE)
const float unbake_rodata_800DD360_4 = 1.0f;
const float unbake_rodata_800DD364_4 = 2.14748365e+09f;
const float unbake_rodata_800DD368_4 = 2.14748365e+09f;
const float unbake_rodata_800DD36C_4 = 2.14748365e+09f;
const float unbake_rodata_800DD370_4 = 2.14748365e+09f;
const float unbake_rodata_800DD374_4 = 2.14748365e+09f;
const float unbake_rodata_800DD378_4 = 2.14748365e+09f;
const float unbake_rodata_800DD37C_4 = 2.14748365e+09f;
const float unbake_rodata_800DD380_4 = 2.14748365e+09f;
const float unbake_rodata_800DD384_4 = 2.14748365e+09f;
const float unbake_rodata_800DD388_4 = 2.14748365e+09f;
const float unbake_rodata_800DD38C_4 = 2.14748365e+09f;
const float unbake_rodata_800DD390_4 = 2.14748365e+09f;
const float unbake_rodata_800DD394_4 = 2.14748365e+09f;
const float unbake_rodata_800DD398_4 = 2.14748365e+09f;
const float unbake_rodata_800DD39C_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3A0_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3A4_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3A8_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3AC_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3B0_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3B4_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3B8_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3BC_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3C0_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3C4_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3C8_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3CC_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3D0_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3D4_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3D8_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3DC_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3E0_4 = 2.14748365e+09f;
const float unbake_rodata_800DD3E4_4 = 1.0f;
#endif
