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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C77F8_8 = (-0.16666659550427756);
const double unbake_rodata_800C7800_8 = 0.0083330662460821547;
const double unbake_rodata_800C7808_8 = (-0.00019809602901937949);
const double unbake_rodata_800C7810_8 = 2.6057806379680372e-06;
const double unbake_rodata_800C7818_8 = 0.31830988618379069;
const double unbake_rodata_800C7820_8 = 3.1415926218032837;
const double unbake_rodata_800C7828_8 = 3.1786509547056392e-08;
const float unbake_rodata_800C7830_4 = 0.0f;
const float unbake_rodata_800C7834_4 = 0.5f;
const float unbake_rodata_800C7838_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CCB28_8 = (-0.16666659550427756);
const double unbake_rodata_800CCB30_8 = 0.0083330662460821547;
const double unbake_rodata_800CCB38_8 = (-0.00019809602901937949);
const double unbake_rodata_800CCB40_8 = 2.6057806379680372e-06;
const double unbake_rodata_800CCB48_8 = 0.31830988618379069;
const double unbake_rodata_800CCB50_8 = 3.1415926218032837;
const double unbake_rodata_800CCB58_8 = 3.1786509547056392e-08;
const float unbake_rodata_800CCB60_4 = 0.0f;
const float unbake_rodata_800CCB64_4 = 0.5f;
const float unbake_rodata_800CCB68_4 = 0.5f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C84C8_8 = (-0.16666659550427756);
const double unbake_rodata_800C84D0_8 = 0.0083330662460821547;
const double unbake_rodata_800C84D8_8 = (-0.00019809602901937949);
const double unbake_rodata_800C84E0_8 = 2.6057806379680372e-06;
const double unbake_rodata_800C84E8_8 = 0.31830988618379069;
const double unbake_rodata_800C84F0_8 = 3.1415926218032837;
const double unbake_rodata_800C84F8_8 = 3.1786509547056392e-08;
const float unbake_rodata_800C8500_4 = 0.0f;
const float unbake_rodata_800C8504_4 = 0.5f;
const float unbake_rodata_800C8508_4 = 0.5f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C78D8_8 = (-0.16666659550427756);
const double unbake_rodata_800C78E0_8 = 0.0083330662460821547;
const double unbake_rodata_800C78E8_8 = (-0.00019809602901937949);
const double unbake_rodata_800C78F0_8 = 2.6057806379680372e-06;
const double unbake_rodata_800C78F8_8 = 0.31830988618379069;
const double unbake_rodata_800C7900_8 = 3.1415926218032837;
const double unbake_rodata_800C7908_8 = 3.1786509547056392e-08;
const float unbake_rodata_800C7910_4 = 0.0f;
const float unbake_rodata_800C7914_4 = 0.5f;
const float unbake_rodata_800C7918_4 = 0.5f;
#endif
