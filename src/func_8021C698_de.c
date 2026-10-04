#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "span_1000/code_8026D4F0.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Draws a player's marker when it is enabled at 0x1214: loads the player's matrix for the current view
   D_800D297C from its table at 0x1500, sets the render and geometry modes, fills the eight vertices of
   a red prism in D_80102A58 (alpha 150 on the upper and 100 on the lower corners), emits them with the
   eight triangles joining them, and passes the same colour and alphas to func_802A5498_de with the
   matrix from the table at 0x1580 when 0x147C is set. */








extern s32 D_800CD72C;
extern UnitVtx D_800FEA58[];
extern Gfx *D_8010C574;

extern void func_8026925C_de(s32);
extern void func_80268CE0_de(s32);
extern void func_802A5498_de(UnitMtx *, s32, s32, s32);

void func_8021C698_de(Player_func_8021C698_de *player) {
    s32 red;
    s32 low;
    s32 high;

    if (player->marker != 0) {
        gSPMatrix(D_8010C574++, (u32) &player->views[D_800CD72C], G_MTX_LOAD);
        gDPPipeSync(D_8010C574++);
        func_8026D8F8_de();
        func_8026925C_de(0xE);
        func_80268CE0_de(0x1C);
        red = 200;
        low = 100;
        high = 150;
        gSPGeometryMode(D_8010C574++, G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | 0x80, 0);
        gSPGeometryMode(D_8010C574++, 0, G_SHADE | G_SHADING_SMOOTH);
        D_800FEA58[0].x = 0;
        D_800FEA58[0].y = 1;
        D_800FEA58[0].z = 0;
        D_800FEA58[0].flag = 0;
        D_800FEA58[0].s = 0;
        D_800FEA58[0].t = 0;
        D_800FEA58[0].r = red;
        D_800FEA58[0].g = 0;
        D_800FEA58[0].b = 0;
        D_800FEA58[0].a = high;
        D_800FEA58[1].x = 1;
        D_800FEA58[1].y = 0;
        D_800FEA58[1].z = 0;
        D_800FEA58[1].flag = 0;
        D_800FEA58[1].s = 0;
        D_800FEA58[1].t = 0;
        D_800FEA58[1].r = red;
        D_800FEA58[1].g = 0;
        D_800FEA58[1].b = 0;
        D_800FEA58[1].a = high;
        D_800FEA58[2].x = 0;
        D_800FEA58[2].y = -1;
        D_800FEA58[2].z = 0;
        D_800FEA58[2].flag = 0;
        D_800FEA58[2].s = 0;
        D_800FEA58[2].t = 0;
        D_800FEA58[2].r = red;
        D_800FEA58[2].g = 0;
        D_800FEA58[2].b = 0;
        D_800FEA58[2].a = low;
        D_800FEA58[3].x = -1;
        D_800FEA58[3].y = -1;
        D_800FEA58[3].z = 0;
        D_800FEA58[3].flag = 0;
        D_800FEA58[3].s = 0;
        D_800FEA58[3].t = 0;
        D_800FEA58[3].r = red;
        D_800FEA58[3].g = 0;
        D_800FEA58[3].b = 0;
        D_800FEA58[3].a = low;
        D_800FEA58[4].x = 0;
        D_800FEA58[4].y = 1;
        D_800FEA58[4].z = -1;
        D_800FEA58[4].flag = 0;
        D_800FEA58[4].s = 0;
        D_800FEA58[4].t = 0;
        D_800FEA58[4].r = red;
        D_800FEA58[4].g = 0;
        D_800FEA58[4].b = 0;
        D_800FEA58[4].a = high;
        D_800FEA58[5].x = 1;
        D_800FEA58[5].y = 0;
        D_800FEA58[5].z = -1;
        D_800FEA58[5].flag = 0;
        D_800FEA58[5].s = 0;
        D_800FEA58[5].t = 0;
        D_800FEA58[5].r = red;
        D_800FEA58[5].g = 0;
        D_800FEA58[5].b = 0;
        D_800FEA58[5].a = high;
        D_800FEA58[6].x = 0;
        D_800FEA58[6].y = -1;
        D_800FEA58[6].z = -1;
        D_800FEA58[6].flag = 0;
        D_800FEA58[6].s = 0;
        D_800FEA58[6].t = 0;
        D_800FEA58[6].r = red;
        D_800FEA58[6].g = 0;
        D_800FEA58[6].b = 0;
        D_800FEA58[6].a = low;
        D_800FEA58[7].x = -1;
        D_800FEA58[7].y = -1;
        D_800FEA58[7].z = -1;
        D_800FEA58[7].flag = 0;
        D_800FEA58[7].s = 0;
        D_800FEA58[7].t = 0;
        D_800FEA58[7].r = red;
        D_800FEA58[7].g = 0;
        D_800FEA58[7].b = 0;
        D_800FEA58[7].a = low;
        gSPVertex(D_8010C574++, (u32) D_800FEA58, 8, 0);
        gSP1Triangle(D_8010C574++, 0, 1, 4, 0);
        gSP1Triangle(D_8010C574++, 1, 4, 5, 0);
        gSP1Triangle(D_8010C574++, 1, 2, 5, 0);
        gSP1Triangle(D_8010C574++, 2, 5, 6, 0);
        gSP1Triangle(D_8010C574++, 2, 3, 6, 0);
        gSP1Triangle(D_8010C574++, 3, 6, 7, 0);
        gSP1Triangle(D_8010C574++, 3, 0, 7, 0);
        gSP1Triangle(D_8010C574++, 0, 7, 4, 0);
        if (player->second != 0) {
            func_802A5498_de(&player->markers[D_800CD72C], red, low, high);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C502C_4 = (-2.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA1EC_4 = (-2.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C4DFC_4 = 7.0f;
const float unbake_rodata_800C4E00_4 = 102.399994f;
const float unbake_rodata_800C4E04_4 = 1.0f;
const float unbake_rodata_800C4E08_4 = 153.599991f;
const float unbake_rodata_800C4E0C_4 = 1024.0f;
const float unbake_rodata_800C4E10_4 = 204.799988f;
const float unbake_rodata_800C4E14_4 = 0.00122070312f;
const float unbake_rodata_800C4E18_4 = 0.859999955f;
const float unbake_rodata_800C4E1C_4 = 1.0f;
const float unbake_rodata_800C4E20_4 = 0.0399999991f;
const float unbake_rodata_800C4E24_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4DE8_8 = 4294967296.0;
const float unbake_rodata_800C4DF0_4 = 0.00392156886f;
const float unbake_rodata_800C4DF4_4 = 1.0f;
const double unbake_rodata_800C4DF8_8 = 4294967296.0;
const float unbake_rodata_800C4E00_4 = 255.0f;
const float unbake_rodata_800C4E04_4 = 5.0f;
const float unbake_rodata_800C4E08_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E68_4 = 16.0f;
const float unbake_rodata_800C4E6C_4 = 0.000492125982f;
const float unbake_rodata_800C4E70_4 = 1.0f;
const float unbake_rodata_800C4E74_4 = 0.000492125982f;
const float unbake_rodata_800C4E78_4 = 0.00100000005f;
const float unbake_rodata_800C4E7C_4 = 1.0f;
const float unbake_rodata_800C4E80_4 = 47.5f;
const float unbake_rodata_800C4E84_4 = 0.25f;
const float unbake_rodata_800C4E88_4 = 0.0210526325f;
#endif
