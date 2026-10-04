#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "span_C76B0/data.h"
#include "types.h"




























/* Regenerates a player's health at 0x5E4 toward the cap from func_8022AC00_de: under flag 4 at 0x122C it adds D_800D2988 times gFastRegen's rate and mirrors the result to 0x174 and 0x45C, otherwise, while the flag byte at D_801462E5 is set, the speed at 0x18's 0x24 meets D_800C78B8's threshold, the health is nonzero and the word 0x60F past that flag byte does not hold it back, it adds the speed scaled by D_800C78BC, D_800D2988 and D_800C78C0's rate. */








extern f32 D_800CD738;
extern struct D_800C7470_Pair D_800C27C0_de;


extern struct D_800C7470_Pair D_800C27D0_de;


extern MultiplayerOptions D_801462E5;
extern s32 func_8022AC00_de(SharedPlayer_func_80220D44_de *p);

#define MIN(a, b) ((a) < (b) ? (a) : (b))

void func_80220D44_de(SharedPlayer_func_80220D44_de *p) {
    f32 f0;
    f32 f20;
    f32 cur;
    s32 cap;
    s32 val;
    MultiplayerOptions *regen;

    if ((p->views122C.view122C_1.flags & 4) && p->views5E4.view5E4_2.health > 0) {
        cap = func_8022AC00_de(p);
        f20 = p->views5E4.view5E4_2.health + D_800CD738 * D_800C27C0_de.second;
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
    if (f20 < D_800C27C8_de) return;
    cur = p->views5E4.view5E4_2.health;
    if (cur == 0.0f) return;
    if (p->views5D8.view5D8_4.ctrl->flag != 0 && ((SessionState *)&regen->session)->paused != 0) return;
    f20 = cur + (s32)(f20 * D_800C27CC_de) * (D_800CD738 * D_800C27D0_de.first);
    p->views5E4.view5E4_2.health = MIN(f20, func_8022AC00_de(p));
}
