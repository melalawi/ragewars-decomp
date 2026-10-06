#include "span_1000/code_802B53FC.h"
#include "span_C76B0/data.h"
#include "types.h"
#include "common/unused.h"

extern ALGlobals_func_802B5B94_de *D_800D4070;        /* alGlobals */

       /* 1/1000 */
extern const double D_800C77C0_de;      /* 2^32 */
extern const float D_800C77C8_de;       /* 1/CONVERT */

#define LENGTH (f->delay[s].output - f->delay[s].input)

s32 func_802B5B94_de(void *filter, s32 paramID, void *param)
{
    ALFx_func_802B5B94_de *f = (ALFx_func_802B5B94_de *)filter;
    s32 p = (paramID - 2) % 8;
    s32 s = (paramID - 2) / 8;
    s32 val = *(s32 *)param;

    switch (p) {
        case 0:
            f->delay[s].input = (u32)val & 0xFFFFFFF8;
            break;
        case 1:
            f->delay[s].output = (u32)val & 0xFFFFFFF8;
            break;
        case 3:
            f->delay[s].ffcoef = (s16)val;
            break;
        case 2:
            f->delay[s].fbcoef = (s16)val;
            break;
        case 4:
            f->delay[s].gain = (s16)val;
            break;
        case 5:
            f->delay[s].rsinc = (((f32)val * D_800C77B8_de) * 2.0f) / D_800D4070->drvr.unk44;
            break;
        case 6: {
            f32 fval = (f32)val;
            s32 length = LENGTH;
            double flength = length;

            if (length < 0)
                flength += D_800C77C0_de;
            f->delay[s].rsgain = fval * ((f32)flength * D_800C77C8_de);
            break;
        }
        case 7:
            if (f->delay[s].lp) {
                f->delay[s].lp->mode = (s16)val;
                func_802B468C_de(f->delay[s].lp);
            }
            break;
    }
    return 0;
}
