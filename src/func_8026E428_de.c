#include "span_1000/code_8026D4F0.h"
#include "abi.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"

#include "types.h"

extern Gfx *D_8010C574;
extern char D_E0050;
extern char D_DCD10;
extern char D_800CBCC0;
extern char D_800CBCF0_de;

void func_8026E428_de(void) {
    Gfx *cmd;

    cmd = D_8010C574++;
    gDPFullSync(cmd);
    cmd = D_8010C574++;
    gDPHalf1(cmd, (u32) &D_E0050);
    cmd = D_8010C574++;
    gLoadUcode(cmd, &D_DCD10, 0x800);
    cmd = D_8010C574++;
    gSPDisplayList(cmd, (u32) &D_800CBCC0);
    cmd = D_8010C574++;
    gSPDisplayList(cmd, (u32) &D_800CBCF0_de);
}
