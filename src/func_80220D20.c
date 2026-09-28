/* Regenerates a player's health at 0x5E4 toward the cap from func_8022ABF0: under flag 4 at 0x122C it adds D_800D2988 times gFastRegen's rate and mirrors the result to 0x174 and 0x45C, otherwise, while the flag byte at D_801462E5 is set, the speed at 0x18's 0x24 meets D_800C78B8's threshold, the health is nonzero and the word 0x60F past that flag byte does not hold it back, it adds the speed scaled by D_800C78BC, D_800D2988 and D_800C78C0's rate. */

#include "basetypes.h"

typedef struct { u8 pad[0x24]; f32 speed; } Body;
typedef struct { u8 pad[0x8F]; u8 flag; } Ctrl;
typedef struct {
    u8 pad0[0x18]; Body *body;
    u8 pad1[0x174 - 0x1C]; s32 unk174;
    u8 pad2[0x45C - 0x178]; s32 unk45C;
    u8 pad3[0x5D8 - 0x460]; Ctrl *ctrl;
    u8 pad4[0x5E4 - 0x5DC]; s32 health;
    u8 pad5[0x122C - 0x5E8]; u32 flags;
} Player;

struct RegenRate { f32 unk0; f32 unk4; };

extern f32 D_800D2988;
extern struct RegenRate gFastRegen;
extern f32 D_800C78B8;
extern f32 D_800C78BC;
extern struct RegenRate D_800C78C0;
extern u8 D_801462E5;
extern s32 func_8022ABF0(Player *p);

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void func_80220D20(Player *p) {
    f32 f0;
    f32 f20;
    f32 cur;
    s32 cap;
    s32 val;
    u8 *regen;

    if ((p->flags & 4) && p->health > 0) {
        cap = func_8022ABF0(p);
        f20 = p->health + D_800D2988 * gFastRegen.unk4;
        f0 = cap;
        if (!(f0 <= f20)) {
            f0 = f20;
        }
        val = f0;
        p->health = val; p->unk174 = val; p->unk45C = p->health;
        return;
    }
    regen = &D_801462E5;
    f20 = p->body->speed;
    if (*regen == 0) return;
    if (f20 < D_800C78B8) return;
    cur = p->health;
    if (cur == 0.0f) return;
    if (p->ctrl->flag != 0 && *(s32 *)(regen + 0x60F) != 0) return;
    f20 = cur + (s32)(f20 * D_800C78BC) * (D_800D2988 * D_800C78C0.unk0);
    p->health = MIN(f20, func_8022ABF0(p));
}
