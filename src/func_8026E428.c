#include "unbake_gbi.h"
#include "basetypes.h"
#include "n64sdk.h"

#include "basetypes.h"

extern Gfx *D_80110634;
extern char D_E0050;
extern char D_DCD10;
extern char D_800D0F10;
extern char D_800D0F40;

void func_8026E428(void) {
    Gfx *cmd;

    cmd = D_80110634++;
    gDPFullSync(cmd);
    cmd = D_80110634++;
    gDPHalf1(cmd, (u32) &D_E0050);
    cmd = D_80110634++;
    cmd->words.w0 = 0xDD0007FF;
    cmd->words.w1 = (u32) &D_DCD10;
    cmd = D_80110634++;
    gSPDisplayList(cmd, (u32) &D_800D0F10);
    cmd = D_80110634++;
    gSPDisplayList(cmd, (u32) &D_800D0F40);
}
