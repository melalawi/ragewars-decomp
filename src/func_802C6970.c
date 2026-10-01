/* __floatdidf, drafted from GCC 2.7.2.3 libgcc2.c section L_floatdidf: converts a signed 64-bit
   integer to double as its high word times 2^32 plus its unsigned low word. This object is built
   with -mfp32 (see the Makefile), under which the unchanged reference section is byte-identical.
   The 2^32 and 2^16 literals are the cartridge's own constants, so each unsigned conversion adds
   its 2^32. */
typedef int SItype;
typedef unsigned int USItype;
typedef long long DItype;
typedef double DFtype;

#define WORD_SIZE 32

extern DFtype D_800CD350; /* 2^32 */
extern DFtype D_800CD358; /* 2^16, HIGH_HALFWORD_COEFF */
extern DFtype D_800CD360; /* 2^32 */

DFtype func_802C6970(DItype u)
{
  DFtype d, low;
  SItype negate = 0;

  if (u < 0)
    u = -u, negate = 1;

  d = (SItype) (u >> WORD_SIZE);
  if ((SItype) (u >> WORD_SIZE) < 0)
    d += D_800CD350;
  d *= D_800CD358;
  d *= D_800CD358;
  low = (SItype) u;
  if ((SItype) u < 0)
    low += D_800CD360;
  d += low;

  return (negate ? -d : d);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C8020_8 = 4294967296.0;
const double unbake_rodata_800C8028_8 = 65536.0;
const double unbake_rodata_800C8030_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CD350_8 = 4294967296.0;
const double unbake_rodata_800CD358_8 = 65536.0;
const double unbake_rodata_800CD360_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C8CF0_8 = 4294967296.0;
const double unbake_rodata_800C8CF8_8 = 65536.0;
const double unbake_rodata_800C8D00_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C96C0_8 = 4294967296.0;
const double unbake_rodata_800C96C8_8 = 65536.0;
const double unbake_rodata_800C96D0_8 = 4294967296.0;
#elif defined(VERSION_DE)
const double unbake_rodata_800C8100_8 = 4294967296.0;
const double unbake_rodata_800C8108_8 = 65536.0;
const double unbake_rodata_800C8110_8 = 4294967296.0;
#endif
