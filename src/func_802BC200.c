/* sinf, drafted from ultralib src/gu/sinf.c in the single-precision form this library carries: x,
   its square, the polynomial, the quotient and the result are floats, only the polynomial is
   evaluated in double, and anything beyond 2^28 returns zero. P, rpi, pihi, pilo and zero are the
   cartridge's tables, and the two 0.5 literals of ROUND are its own constants. */
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

extern const du D_800CCB20[5]; /* P */
extern const du D_800CCB48;    /* rpi */
extern const du D_800CCB50;    /* pihi */
extern const du D_800CCB58;    /* pilo */
extern const fu D_800CCB60;    /* zero */
extern const float D_800CCB64; /* 0.5 */
extern const float D_800CCB68; /* 0.5 */

float func_802BC200(float x)
{
    float dx, xsq, poly;
    float dn;
    int n;
    float result;
    int ix, xpt;

    ix = *(int *)&x;
    xpt = (ix >> 22);
    xpt &= 0x1ff;

    if (xpt < 0xff) {
        dx = x;

        if (xpt >= 0xe6) {
            const du *P = D_800CCB20;

            xsq = dx * dx;

            poly = ((P[4].d * xsq + P[3].d) * xsq + P[2].d) * xsq + P[1].d;

            result = dx + (dx * xsq) * poly;

            return result;
        }

        return x;
    }

    if (xpt < 0x136) {
        dx = x;

        dn = dx * D_800CCB48.d;

        n = (dn >= 0.0f) ? (int)(dn + D_800CCB64) : (int)(dn - D_800CCB68);
        dn = n;

        dx = dx - dn * D_800CCB50.d;
        dx = dx - dn * D_800CCB58.d;

        xsq = dx * dx;

        {
            const du *P = D_800CCB20;

            poly = ((P[4].d * xsq + P[3].d) * xsq + P[2].d) * xsq + P[1].d;
        }

        result = dx + (dx * xsq) * poly;

        if ((n & 1) == 0) {
            return result;
        }

        return -result;
    }

    return D_800CCB60.f;
}
