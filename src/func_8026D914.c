#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"

extern s32 D_80110620;
extern Gfx *D_80110634;

void func_8026D914(s32 arg0) {
    if (D_80110620 == 0) gDPSetColorDither(D_80110634++, arg0) else gDPSetColorDither(D_80110634++, G_CD_NOISE);
}
