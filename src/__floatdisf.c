/* __floatdisf, drafted from GCC 2.7.2.3 libgcc2.c section L_floatdisf (IEEE: DF_SIZE 53, SF_SIZE 24):
   converts a signed 64-bit integer to float through double, folding any bits below the double's
   precision into a sticky bit so the final rounding to float is correct. The compiler's
   __floatdisf calls reach it by this name. This object is built with
   -mfp32 (see [cartridge.toolchain].object_options), under which the unchanged reference section is byte-identical. The
   2^32 and 2^16 literals are the cartridge's own constants, so each unsigned conversion adds its
   2^32 explicitly. */
typedef int SItype;
typedef unsigned int USItype;
typedef long long DItype;
typedef unsigned long long UDItype;
typedef float SFtype;
typedef double DFtype;

#define WORD_SIZE 32
#define DI_SIZE 64
#define DF_SIZE 53
#define SF_SIZE 24
#define REP_BIT ((USItype) 1 << (DI_SIZE - DF_SIZE))

extern DFtype D_800CD370; /* 2^32, the high word's unsigned correction */
extern DFtype D_800CD378; /* 2^16, HIGH_HALFWORD_COEFF */
extern DFtype D_800CD380; /* 2^32, the low word's unsigned correction */

SFtype __floatdisf(DItype u)
{
  DFtype f, low;
  SItype negate = 0;

  if (u < 0)
    u = -u, negate = 1;

  if (u >= ((UDItype) 1 << DF_SIZE))
    {
      if ((USItype) u & (REP_BIT - 1))
        u |= REP_BIT;
    }
  f = (SItype) (u >> WORD_SIZE);
  if ((SItype) (u >> WORD_SIZE) < 0)
    f += D_800CD370;
  f *= D_800CD378;
  f *= D_800CD378;
  low = (SItype) u;
  if ((SItype) u < 0)
    low += D_800CD380;
  f += low;

  return (SFtype) (negate ? -f : f);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1940_4 = 0.5f;
const float unbake_rodata_800C1944_4 = 0.5f;
const float unbake_rodata_800C1948_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B00_4 = 0.5f;
const float unbake_rodata_800C6B04_4 = 0.5f;
const float unbake_rodata_800C6B08_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1CB0_4 = 0.5f;
const float unbake_rodata_800C1CB4_4 = 0.5f;
const float unbake_rodata_800C1CB8_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1CF0_4 = 0.5f;
const float unbake_rodata_800C1CF4_4 = 0.5f;
const float unbake_rodata_800C1CF8_4 = 0.5f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C19C0_28[] = {0x00201650U, 0x002015B4U, 0x002015BCU, 0x002015E4U, 0x002015F0U, 0x002015FCU, 0x00201604U, 0x00201628U, 0x00201638U, 0x00201648U};
#endif
