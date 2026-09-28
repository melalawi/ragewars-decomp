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
