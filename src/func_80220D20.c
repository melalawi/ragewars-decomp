/* Regenerates a player's health at 0x5E4 toward the cap from func_8022ABF0: under flag 4 at 0x122C it adds D_800D2988 times gFastRegen's rate and mirrors the result to 0x174 and 0x45C, otherwise, while the flag byte at D_801462E5 is set, the speed at 0x18's 0x24 meets D_800C78B8's threshold, the health is nonzero and the word 0x60F past that flag byte does not hold it back, it adds the speed scaled by D_800C78BC, D_800D2988 and D_800C78C0's rate. */

#include "basetypes.h"
#include "shared/player.h"
typedef SharedPlayer Player;

typedef struct Body { u8 pad[0x24]; f32 speed; } Body;
typedef struct Ctrl { u8 pad[0x8F]; u8 flag; } Ctrl;

struct RegenRate { f32 unk0; f32 unk4; };

extern f32 D_800D2988;
extern struct RegenRate gFastRegen;
extern f32 D_800C78B8;
extern f32 D_800C78BC;
extern struct RegenRate D_800C78C0;
typedef struct { u8 enabled; u8 reserved[2]; u8 session; } MultiplayerOptions;
typedef struct { u8 reserved[0x60C]; s32 paused; } SessionState;
extern MultiplayerOptions D_801462E5;
extern s32 func_8022ABF0(Player *p);

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void func_80220D20(Player *p) {
    f32 f0;
    f32 f20;
    f32 cur;
    s32 cap;
    s32 val;
    MultiplayerOptions *regen;

    if ((p->views122C.view122C_1.flags & 4) && p->views5E4.view5E4_2.health > 0) {
        cap = func_8022ABF0(p);
        f20 = p->views5E4.view5E4_2.health + D_800D2988 * gFastRegen.unk4;
        f0 = cap;
        if (!(f0 <= f20)) {
            f0 = f20;
        }
        val = f0;
        p->views5E4.view5E4_2.health = val; p->views1C.view174_17.unk174 = val; p->views1C.view45C_31.unk45C = p->views5E4.view5E4_2.health;
        return;
    }
    regen = &D_801462E5;
    f20 = p->views18.view18_3.body->speed;
    if (regen->enabled == 0) return;
    if (f20 < D_800C78B8) return;
    cur = p->views5E4.view5E4_2.health;
    if (cur == 0.0f) return;
    if (p->views5D8.view5D8_4.ctrl->flag != 0 && ((SessionState *)&regen->session)->paused != 0) return;
    f20 = cur + (s32)(f20 * D_800C78BC) * (D_800D2988 * D_800C78C0.unk0);
    p->views5E4.view5E4_2.health = MIN(f20, func_8022ABF0(p));
}
