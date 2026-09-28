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
