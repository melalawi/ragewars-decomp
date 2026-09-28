/* Draws the marker over a player that is alive at 0x5E4: loads the player's matrix from its table at
   0x1640 (the first entry while func_802A33AC reports a shared view, otherwise the entry for the current
   view D_800D297C), sets the render and geometry modes, fills the five vertices of a green pyramid in
   D_801029F8 and emits them with its four triangles. Adapted from func_8021C674 with the pyramid, the
   colour and the matrix selection changed. */
#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

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
} Vtx;

typedef struct {
    s32 m[16];
} Mtx;

typedef struct {
    char pad0[0x5E4];
    s32 alive;
    char pad5E8[0x1640 - 0x5E8];
    Mtx markers[2];
} Player;

extern s32 D_800D297C;
extern Vtx D_801029F8[];
extern Gfx *D_80110634;
extern s32 func_802A33AC(void);
extern void func_8026D8F8(void);
extern void func_8026925C(s32);
extern void func_80268CE0(s32);

void func_80229CFC(Player *player) {
    s32 green;
    s32 alpha;

    if (player->alive != 0) {
        if (func_802A33AC() != 0) {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0xDA380003;
            cmd->w1 = (u32) &player->markers[0];
        } else {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0xDA380003;
            cmd->w1 = (u32) &player->markers[D_800D297C];
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0xE7000000;
            cmd->w1 = 0;
        }
        func_8026D8F8();
        func_8026925C(0xE);
        func_80268CE0(0x1C);
        green = 200;
        alpha = 150;
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0xD9F8FB7F;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0xD9FFFFFF;
            cmd->w1 = 0x200004;
        }
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
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x0100500A;
            cmd->w1 = (u32) D_801029F8;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05000204;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05000208;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05000406;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05000608;
            cmd->w1 = 0;
        }
    }
}
