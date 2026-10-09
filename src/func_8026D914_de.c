#include "span_1000/code_8026AC38.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern s32 D_8010C560;
extern Gfx *D_8010C574;

void func_8026D914_de(s32 arg0) {
    if (D_8010C560 == 0) gDPSetColorDither(D_8010C574++, arg0) else gDPSetColorDither(D_8010C574++, G_CD_NOISE);
}
