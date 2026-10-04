#include "span_1000/code_8023940C.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_8010C574;
extern s32 D_800CD72C;

void func_8023942C_de(u32 arg0) {
    Gfx *cmd;
    u32 offset;

    offset = (D_800CD72C << 6) + 0x448;
    gSPMatrix(D_8010C574++, arg0 + offset, G_MTX_LOAD | G_MTX_PROJECTION);
}
