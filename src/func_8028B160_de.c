#include "span_1000/code_8026D4F0.h"
#include "span_1000/code_80286050.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_8010C574;

extern void func_80282330_de(s32 arg0, s32 arg1);


void func_8028B160_de(s32 arg0, s32 arg1) {
    Gfx *cmd;

    cmd = D_8010C574++;
    gSPMoveWord(cmd, G_MW_CLIP, 4, 1);
    cmd = D_8010C574++;
    gSPMoveWord(cmd, G_MW_CLIP, 12, 1);
    cmd = D_8010C574++;
    gSPMoveWord(cmd, G_MW_CLIP, 20, 0xFFFF);
    cmd = D_8010C574++;
    gSPMoveWord(cmd, G_MW_CLIP, 28, 0xFFFF);
    func_8026D980_de();
    func_80282330_de(arg0 + 0x1B08, arg1);
    func_8026D9D0_de();
}
