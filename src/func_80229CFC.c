#include "unbake_gbi.h"
/* Draws the marker over a player that is alive at 0x5E4: loads the player's matrix from its table at
   0x1640 (the first entry while func_802A33AC reports a shared view, otherwise the entry for the current
   view D_800D297C), sets the render and geometry modes, fills the five vertices of a green pyramid in
   D_801029F8 and emits them with its four triangles. Adapted from func_8021C674 with the pyramid, the
   colour and the matrix selection changed. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

typedef struct {
    s16 x;
    s16 y;
    s16 z;
    u16 flag;
    s16 s;
    s16 t;
    u8 r;
    u8 g;
    u8 b;
    u8 a;
} UnitVtx;

typedef struct {
    s32 m[16];
} UnitMtx;

typedef struct {
    char pad0[0x5E4];
    s32 alive;
    char pad5E8[0x1640 - 0x5E8];
    UnitMtx markers[2];
} Player;

extern s32 D_800D297C;
extern UnitVtx D_801029F8[];
extern Gfx *D_80110634;
extern s32 func_802A33AC(void);
extern void func_8026D8F8(void);
extern void func_8026925C(s32);
extern void func_80268CE0(s32);

void func_80229CFC(Player *player) {
    s32 green;
    s32 alpha;

    if (player->alive != 0) {
        if (func_802A33AC() != 0) gSPMatrix(D_80110634++, (u32) &player->markers[0], G_MTX_LOAD) else gSPMatrix(D_80110634++, (u32) &player->markers[D_800D297C], G_MTX_LOAD);
        gDPPipeSync(D_80110634++);
        func_8026D8F8();
        func_8026925C(0xE);
        func_80268CE0(0x1C);
        green = 200;
        alpha = 150;
        gSPGeometryMode(D_80110634++, G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | 0x80, 0);
        gSPGeometryMode(D_80110634++, 0, G_SHADE | G_SHADING_SMOOTH);
        D_801029F8[0].x = 0;
        D_801029F8[0].y = 0;
        D_801029F8[0].z = 0;
        D_801029F8[0].flag = 0;
        D_801029F8[0].s = 0;
        D_801029F8[0].t = 0;
        D_801029F8[0].r = 0;
        D_801029F8[0].g = green;
        D_801029F8[0].b = 0;
        D_801029F8[0].a = alpha;
        D_801029F8[1].x = 20;
        D_801029F8[1].y = 40;
        D_801029F8[1].z = 20;
        D_801029F8[1].flag = 0;
        D_801029F8[1].s = 0;
        D_801029F8[1].t = 0;
        D_801029F8[1].r = 0;
        D_801029F8[1].g = green;
        D_801029F8[1].b = 0;
        D_801029F8[1].a = alpha;
        D_801029F8[2].x = -20;
        D_801029F8[2].y = 40;
        D_801029F8[2].z = 20;
        D_801029F8[2].flag = 0;
        D_801029F8[2].s = 0;
        D_801029F8[2].t = 0;
        D_801029F8[2].r = 0;
        D_801029F8[2].g = green;
        D_801029F8[2].b = 0;
        D_801029F8[2].a = alpha;
        D_801029F8[3].x = -20;
        D_801029F8[3].y = 40;
        D_801029F8[3].z = -20;
        D_801029F8[3].flag = 0;
        D_801029F8[3].s = 0;
        D_801029F8[3].t = 0;
        D_801029F8[3].r = 0;
        D_801029F8[3].g = green;
        D_801029F8[3].b = 0;
        D_801029F8[3].a = alpha;
        D_801029F8[4].x = 20;
        D_801029F8[4].y = 40;
        D_801029F8[4].z = -20;
        D_801029F8[4].flag = 0;
        D_801029F8[4].s = 0;
        D_801029F8[4].t = 0;
        D_801029F8[4].r = 0;
        D_801029F8[4].g = green;
        D_801029F8[4].b = 0;
        D_801029F8[4].a = alpha;
        gSPVertex(D_80110634++, (u32) D_801029F8, 5, 0);
        gSP1Triangle(D_80110634++, 0, 1, 2, 0);
        gSP1Triangle(D_80110634++, 0, 1, 4, 0);
        gSP1Triangle(D_80110634++, 0, 2, 3, 0);
        gSP1Triangle(D_80110634++, 0, 3, 4, 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5350_4 = 50.0f;
const float unbake_rodata_800C5354_4 = 60.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA510_4 = 50.0f;
const float unbake_rodata_800CA514_4 = 60.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C54C0_D[] = {0x67, 0x72, 0x69, 0x64, 0x20, 0x73, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C54E4_4 = 3.40282347e+38f;
const float unbake_rodata_800C54E8_4 = 3.14159274f;
const float unbake_rodata_800C54EC_4 = 204.799988f;
const float unbake_rodata_800C54F0_4 = (-3.14159274f);
const float unbake_rodata_800C54F4_4 = 10430.0596f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5394_4 = 10.2399998f;
const float unbake_rodata_800C5398_4 = 1.0f;
const float unbake_rodata_800C539C_4 = 81.9199982f;
const float unbake_rodata_800C53A0_4 = 0.5f;
#endif
