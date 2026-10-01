/* Cycles the video mode within the memory budget and chooses dimensions large enough for both active buffers. */

typedef struct 
{
  int width;
  int height;
  int rest[5];
} Mode;
extern int D_80000300;
extern int D_800E28D8;
extern int D_800E28DC;
extern int D_800E28E4;
extern int D_800E28F0[];
extern Mode D_800E28F8[2][5];
extern int D_800E28D0;
extern int D_800E28D4;
extern int func_80265370(void);
void func_8040C11C(void)
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

  mode = (int *) (&D_800E28F8[region][D_800E28D8]);
  memory = func_80265370();
  budget = 0xF660;
  if (memory != 0x400000)
  {
    budget = 0x2A300;
  }
  if (!D_800E28E4)
  {
    D_800E28D8 = (D_800E28D8 + 1) % D_800E28F0[region];
    while ((mode[0] * mode[1]) > budget)
    {
      D_800E28D8 = (D_800E28D8 + 1) % D_800E28F0[region];
    }

  }
  else
  {
    D_800E28E4 = 0;
  }
  memory = D_800E28F8[region][D_800E28DC].width;
  w = D_800E28F8[region][D_800E28D8].width;
  if (w < memory)
  {
    w = D_800E28F8[region][D_800E28DC].width;
  }
  D_800E28D0 = w;
  h = D_800E28F8[region][D_800E28D8].height;
  if (h < D_800E28F8[region][D_800E28DC].height)
  {
    h = D_800E28F8[region][D_800E28DC].height;
  }
  D_800E28D4 = h;
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
