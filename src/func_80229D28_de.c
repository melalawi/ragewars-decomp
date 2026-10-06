#include "span_1000/code_80225D10.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "abi.h"
#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "gfx.h"
#include "span_1000/code_802192C0.h"
#include "types.h"
#include "gbi.h"
/* Draws the marker over a player that is alive at 0x5E4: loads the player's matrix from its table at
   0x1640 (the first entry while func_802A23B4_de reports a shared view, otherwise the entry for the current
   view D_800CD72C), sets the render and geometry modes, fills the five vertices of a green pyramid in
   D_800FE9F8 and emits them with its four triangles. Adapted from func_8021C698_de with the pyramid, the
   colour and the matrix selection changed. */

#include "n64sdk.h"







extern s32 D_800CD72C;
extern struct UnitVtx D_800FE9F8[];
extern Gfx *D_8010C574;
extern s32 func_802A23B4_de(void);
extern void func_8026D8F8_de(void);
extern void func_8026925C_de(s32);
extern void func_80268CE0_de(s32);

void func_80229D28_de(Player16C0 *player) {
    s32 green;
    s32 alpha;

    if (player->alive != 0) {
        if (func_802A23B4_de() != 0) {
            gSPMatrix(D_8010C574++, (u32) &player->markers[0], G_MTX_LOAD);
        } else {
            gSPMatrix(D_8010C574++, (u32) &player->markers[D_800CD72C], G_MTX_LOAD);
        }
        gDPPipeSync(D_8010C574++);
        func_8026D8F8_de();
        func_8026925C_de(0xE);
        func_80268CE0_de(0x1C);
        green = 200;
        alpha = 150;
        gSPGeometryMode(D_8010C574++, G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | 0x80, 0);
        gSPGeometryMode(D_8010C574++, 0, G_SHADE | G_SHADING_SMOOTH);
        D_800FE9F8[0].x = 0;
        D_800FE9F8[0].y = 0;
        D_800FE9F8[0].z = 0;
        D_800FE9F8[0].flag = 0;
        D_800FE9F8[0].s = 0;
        D_800FE9F8[0].t = 0;
        D_800FE9F8[0].r = 0;
        D_800FE9F8[0].g = green;
        D_800FE9F8[0].b = 0;
        D_800FE9F8[0].a = alpha;
        D_800FE9F8[1].x = 20;
        D_800FE9F8[1].y = 40;
        D_800FE9F8[1].z = 20;
        D_800FE9F8[1].flag = 0;
        D_800FE9F8[1].s = 0;
        D_800FE9F8[1].t = 0;
        D_800FE9F8[1].r = 0;
        D_800FE9F8[1].g = green;
        D_800FE9F8[1].b = 0;
        D_800FE9F8[1].a = alpha;
        D_800FE9F8[2].x = -20;
        D_800FE9F8[2].y = 40;
        D_800FE9F8[2].z = 20;
        D_800FE9F8[2].flag = 0;
        D_800FE9F8[2].s = 0;
        D_800FE9F8[2].t = 0;
        D_800FE9F8[2].r = 0;
        D_800FE9F8[2].g = green;
        D_800FE9F8[2].b = 0;
        D_800FE9F8[2].a = alpha;
        D_800FE9F8[3].x = -20;
        D_800FE9F8[3].y = 40;
        D_800FE9F8[3].z = -20;
        D_800FE9F8[3].flag = 0;
        D_800FE9F8[3].s = 0;
        D_800FE9F8[3].t = 0;
        D_800FE9F8[3].r = 0;
        D_800FE9F8[3].g = green;
        D_800FE9F8[3].b = 0;
        D_800FE9F8[3].a = alpha;
        D_800FE9F8[4].x = 20;
        D_800FE9F8[4].y = 40;
        D_800FE9F8[4].z = -20;
        D_800FE9F8[4].flag = 0;
        D_800FE9F8[4].s = 0;
        D_800FE9F8[4].t = 0;
        D_800FE9F8[4].r = 0;
        D_800FE9F8[4].g = green;
        D_800FE9F8[4].b = 0;
        D_800FE9F8[4].a = alpha;
        gSPVertex(D_8010C574++, (u32) D_800FE9F8, 5, 0);
        gSP1Triangle(D_8010C574++, 0, 1, 2, 0);
        gSP1Triangle(D_8010C574++, 0, 1, 4, 0);
        gSP1Triangle(D_8010C574++, 0, 2, 3, 0);
        gSP1Triangle(D_8010C574++, 0, 3, 4, 0);
    }
}

