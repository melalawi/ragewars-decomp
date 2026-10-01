#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"

extern Gfx *D_80110634;
extern void func_8026D980(void);
extern void func_80282304(s32 arg0, s32 arg1);
extern void func_8026D9D0(void);

void func_8028B13C(s32 arg0, s32 arg1) {
    Gfx *cmd;

    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 4, 1);
    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 12, 1);
    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 20, 0xFFFF);
    cmd = D_80110634++;
    gSPMoveWord(cmd, G_MW_CLIP, 28, 0xFFFF);
    func_8026D980();
    func_80282304(arg0 + 0x1B08, arg1);
    func_8026D9D0();
}
