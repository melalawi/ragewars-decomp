#include "span_16E000/code_8040BBC0.h"
#include "span_C76B0/data.h"
/* Cycles the video mode within the memory budget and chooses dimensions large enough for both active buffers. */


extern int D_80000300;
extern int D_800DE888_de;
extern int D_800DE88C;
extern int D_800DE894;

extern Mode_func_8040C09C_de D_800DE8A8[2][5];
extern int D_800DE880_de;
extern int D_800DE884_de;
extern int func_80265350_de(void);
void func_8040C09C_de(void)
{
  int region = 0;
  int budget;
  int memory;
  int w;
  int h;
  int *mode;
  switch (D_80000300)
  {
    case 0:

    case 2:
      region = 1;
      break;

    case 1:
      break;

  }

  mode = (int *) (&D_800DE8A8[region][D_800DE888_de]);
  memory = func_80265350_de();
  budget = 0xF660;
  if (memory != 0x400000)
  {
    budget = 0x2A300;
  }
  if (!D_800DE894)
  {
    D_800DE888_de = (D_800DE888_de + 1) % D_800DE8A0[region];
    while ((mode[0] * mode[1]) > budget)
    {
      D_800DE888_de = (D_800DE888_de + 1) % D_800DE8A0[region];
    }

  }
  else
  {
    D_800DE894 = 0;
  }
  memory = D_800DE8A8[region][D_800DE88C].width;
  w = D_800DE8A8[region][D_800DE888_de].width;
  if (w < memory)
  {
    w = D_800DE8A8[region][D_800DE88C].width;
  }
  D_800DE880_de = w;
  h = D_800DE8A8[region][D_800DE888_de].height;
  if (h < D_800DE8A8[region][D_800DE88C].height)
  {
    h = D_800DE8A8[region][D_800DE88C].height;
  }
  D_800DE884_de = h;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DD550_8[] = {0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E28F0_8[] = {0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EEF10_8[] = {0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA0D0_8[] = {0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DE8A0_8[] = {0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03};
#endif
