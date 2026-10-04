#include "span_1000/code_8021762C.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_8010C574;
extern void func_802A9234_de(s32);
extern void func_80218F9C_de(s32 arg0, s32 arg1, s32 arg2);

void func_80218F08_de(s32 arg0, s32 arg1, s32 arg2) {
    Gfx *cmd;

    func_802A9234_de(0xFF);
    gDPSetTextureFilter(D_8010C574++, G_TF_BILERP);
    func_80218F9C_de(arg0, arg1, arg2);
}
