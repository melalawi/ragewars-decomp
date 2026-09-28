/* _init_lpfilter, drafted from ultralib src/audio/drvrnew.c: derive the low-pass filter's gain and
   its sixteen coefficients from the configured cutoff. This object carries its own copies of the
   1/16384 and 16384.0 double constants, at D_800CC838 and D_800CC840, distinct from the copies the
   inlined body in alFxNew uses. */
#include "basetypes.h"

typedef short POLEF_STATE[4];

typedef struct {
    s16 fc;
    s16 fgain;
    union {
        s16 fccoef[16];
        long long force_aligned;
    } fcvec;
    POLEF_STATE *fstate;
    s32 first;
} ALLowPass;

extern const f64 D_800CC838; /* 1.0 / 16384 */
extern const f64 D_800CC840; /* 16384.0 */

void func_802B975C(ALLowPass *lp)
{
    s32 i, temp;
    s16 fc;
    f64 ffc, fcoef;

    temp = lp->fc * 16384;
    fc = temp >> 15;
    lp->fgain = 16384 - fc;

    lp->first = 1;
    for (i = 0; i < 8; i++)
        lp->fcvec.fccoef[i] = 0;

    lp->fcvec.fccoef[i++] = fc;
    fcoef = ffc = (f64)fc * D_800CC838;

    for (; i < 16; i++) {
        fcoef *= ffc;
        lp->fcvec.fccoef[i] = (s16)(fcoef * D_800CC840);
    }
}
