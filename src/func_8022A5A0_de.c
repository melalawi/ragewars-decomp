#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"

typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;



s32 func_8022A5A0_de(void *arg0, unsigned int arg1)
{
  return (arg1 - (((func_80203E78_S1 *)(arg0))->unk4)) / 5864;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5410_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA6B0_40[] = {0x00297FF4U, 0x0029802CU, 0x00297F3CU, 0x00297F3CU, 0x00297FD4U, 0x00297FD4U, 0x00297FD4U, 0x00297FD4U, 0x00297F3CU, 0x00297F3CU, 0x00297F3CU, 0x00297F3CU, 0x00297F3CU, 0x00297F3CU, 0x00298050U, 0x00298064U};
const unsigned int unbake_rodata_800CA6F0_40[] = {0x00298248U, 0x00298280U, 0x002982D4U, 0x002982D4U, 0x00298228U, 0x00298228U, 0x00298228U, 0x00298228U, 0x002982D4U, 0x002982D4U, 0x002982D4U, 0x002982D4U, 0x002982D4U, 0x002982D4U, 0x002982A4U, 0x002982BCU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C5618_1C[] = {0x0028F820U, 0x0028F7C8U, 0x0028F75CU, 0x0028F820U, 0x0028F820U, 0x0028F7C8U, 0x0028F7C8U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C55EC_4 = 3.40282347e+38f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C546C_4 = 9.99999997e-07f;
const float unbake_rodata_800C5470_4 = 15.0f;
const float unbake_rodata_800C5474_4 = 0.899999976f;
#endif
