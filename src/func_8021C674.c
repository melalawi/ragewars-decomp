/* Draws a player's marker when it is enabled at 0x1214: loads the player's matrix for the current view
   D_800D297C from its table at 0x1500, sets the render and geometry modes, fills the eight vertices of
   a red prism in D_80102A58 (alpha 150 on the upper and 100 on the lower corners), emits them with the
   eight triangles joining them, and passes the same colour and alphas to func_802A6488 with the
   matrix from the table at 0x1580 when 0x147C is set. */
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
    char pad0[0x1214];
    s32 marker;
    char pad1218[0x147C - 0x1218];
    s32 second;
    char pad1480[0x1500 - 0x1480];
    Mtx views[2];
    Mtx markers[2];
} Player;

extern s32 D_800D297C;
extern Vtx D_80102A58[];
extern Gfx *D_80110634;
extern void func_8026D8F8(void);
extern void func_8026925C(s32);
extern void func_80268CE0(s32);
extern void func_802A6488(Mtx *, s32, s32, s32);

void func_8021C674(Player *player) {
    s32 red;
    s32 low;
    s32 high;

    if (player->marker != 0) {
        {
            Gfx *cmd = D_80110634++;
            cmd->w1 = (u32) &player->views[D_800D297C];
            cmd->w0 = 0xDA380003;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0xE7000000;
            cmd->w1 = 0;
        }
        func_8026D8F8();
        func_8026925C(0xE);
        func_80268CE0(0x1C);
        red = 200;
        low = 100;
        high = 150;
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
        D_80102A58[0].x = 0;
        D_80102A58[0].y = 1;
        D_80102A58[0].z = 0;
        D_80102A58[0].flag = 0;
        D_80102A58[0].s = 0;
        D_80102A58[0].t = 0;
        D_80102A58[0].r = red;
        D_80102A58[0].g = 0;
        D_80102A58[0].b = 0;
        D_80102A58[0].a = high;
        D_80102A58[1].x = 1;
        D_80102A58[1].y = 0;
        D_80102A58[1].z = 0;
        D_80102A58[1].flag = 0;
        D_80102A58[1].s = 0;
        D_80102A58[1].t = 0;
        D_80102A58[1].r = red;
        D_80102A58[1].g = 0;
        D_80102A58[1].b = 0;
        D_80102A58[1].a = high;
        D_80102A58[2].x = 0;
        D_80102A58[2].y = -1;
        D_80102A58[2].z = 0;
        D_80102A58[2].flag = 0;
        D_80102A58[2].s = 0;
        D_80102A58[2].t = 0;
        D_80102A58[2].r = red;
        D_80102A58[2].g = 0;
        D_80102A58[2].b = 0;
        D_80102A58[2].a = low;
        D_80102A58[3].x = -1;
        D_80102A58[3].y = -1;
        D_80102A58[3].z = 0;
        D_80102A58[3].flag = 0;
        D_80102A58[3].s = 0;
        D_80102A58[3].t = 0;
        D_80102A58[3].r = red;
        D_80102A58[3].g = 0;
        D_80102A58[3].b = 0;
        D_80102A58[3].a = low;
        D_80102A58[4].x = 0;
        D_80102A58[4].y = 1;
        D_80102A58[4].z = -1;
        D_80102A58[4].flag = 0;
        D_80102A58[4].s = 0;
        D_80102A58[4].t = 0;
        D_80102A58[4].r = red;
        D_80102A58[4].g = 0;
        D_80102A58[4].b = 0;
        D_80102A58[4].a = high;
        D_80102A58[5].x = 1;
        D_80102A58[5].y = 0;
        D_80102A58[5].z = -1;
        D_80102A58[5].flag = 0;
        D_80102A58[5].s = 0;
        D_80102A58[5].t = 0;
        D_80102A58[5].r = red;
        D_80102A58[5].g = 0;
        D_80102A58[5].b = 0;
        D_80102A58[5].a = high;
        D_80102A58[6].x = 0;
        D_80102A58[6].y = -1;
        D_80102A58[6].z = -1;
        D_80102A58[6].flag = 0;
        D_80102A58[6].s = 0;
        D_80102A58[6].t = 0;
        D_80102A58[6].r = red;
        D_80102A58[6].g = 0;
        D_80102A58[6].b = 0;
        D_80102A58[6].a = low;
        D_80102A58[7].x = -1;
        D_80102A58[7].y = -1;
        D_80102A58[7].z = -1;
        D_80102A58[7].flag = 0;
        D_80102A58[7].s = 0;
        D_80102A58[7].t = 0;
        D_80102A58[7].r = red;
        D_80102A58[7].g = 0;
        D_80102A58[7].b = 0;
        D_80102A58[7].a = low;
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x01008010;
            cmd->w1 = (u32) D_80102A58;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05000208;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x0502080A;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x0502040A;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05040A0C;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x0504060C;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05060C0E;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x0506000E;
            cmd->w1 = 0;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->w0 = 0x05000E08;
            cmd->w1 = 0;
        }
        if (player->second != 0) {
            func_802A6488(&player->markers[D_800D297C], red, low, high);
        }
    }
}
