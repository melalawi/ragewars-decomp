/* cosf, drafted from ultralib src/gu/cosf.c: reduce |x| by multiples of pi around pi/2 in double
   precision and evaluate the odd polynomial, negating for an odd multiple; anything beyond 2^28
   returns zero. This library carries no NaN test and takes |x| with abs.s (__builtin_fabs, where
   the reference's ABS macro compiles to a compare and branch); P, rpi, pihi, pilo and zero are the
   cartridge's tables, and the 0.5 of the reduction and ROUND, ROUND's 0.0 and the 0.5 subtracted
   from n are its own constants. */
typedef union {
    struct {
        unsigned int hi;
        unsigned int lo;
    } word;
    double d;
} du;

typedef union {
    unsigned int i;
    float f;
} fu;

extern const du D_800CCA60[5];  /* P */
extern const du D_800CCA88;     /* rpi */
extern const du D_800CCA90;     /* pihi */
extern const du D_800CCA98;     /* pilo */
extern const fu D_800CCAA0;     /* zero */
extern const double D_800CCAA8; /* 0.5 */
extern const double D_800CCAB0; /* 0.0 */
extern const double D_800CCAB8; /* 0.5 */

float func_802BB630(float x)
{
    float absx;
    double dx, xsq, poly;
    double dn;
    int n;
    double result;
    int ix, xpt;

    ix = *(int *)&x;
    xpt = (ix >> 22);
    xpt &= 0x1ff;

    if (xpt < 0x136) {
        absx = __builtin_fabs(x);

        dx = absx;

        dn = dx * D_800CCA88.d + D_800CCAA8;
        n = (dn >= D_800CCAB0) ? (int)(dn + D_800CCAA8) : (int)(dn - D_800CCAA8);
        dn = n;

        dn -= D_800CCAB8;

        dx = dx - dn * D_800CCA90.d;
        dx = dx - dn * D_800CCA98.d;

        xsq = dx * dx;

        {
            const du *P = D_800CCA60;

            poly = ((P[4].d * xsq + P[3].d) * xsq + P[2].d) * xsq + P[1].d;
        }

        result = dx + (dx * xsq) * poly;

        if ((n & 1) == 0)
            return (float)result;

        return -(float)result;
    }

    return D_800CCAA0.f;
}
