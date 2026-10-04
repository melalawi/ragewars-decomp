#include "common/types.h"
#include "span_1000/code_802A776C.h"
#include "span_16E000/code_8044239C.h"
#include "types.h"
#include "n64sdk.h"
#include "n64sdk.h"
#include "gbi.h"








/* Draws a pulsing sprite for an active menu element: when the word at 0x1CC is set, it takes the frame at 0x1C8 folded back after 23, sets up drawing through func_802A84F8_de and func_8026925C_de, emits a yellow environment and primitive colour to the display list and draws sprite 0x67 at the owner's rectangle scaled to the screen through func_802AAC28_de. Adapted from func_8022C2B4_de. */
extern Gfx *D_8010C574;
extern s32 D_800DE880_de;
extern s32 D_800DE884_de;


extern void func_8026925C_de(s32);
extern void func_802AAC28_de(s32, s32, s16, s16, f32, f32, s32);

void func_80442BA8_de(MenuSpriteElement *e) {
    s32 frame;
    Gfx *gfx;
    Shared_HudView *o;
    f32 w;
    f32 h;

    if (e->active != 0) {
        if (e->frame < 0x18) {
            frame = e->frame;
        } else {
            frame = 0x2F - e->frame;
        }
        func_802A84F8_de();
        func_8026925C_de(0x15);
        o = e->owner;
        gfx = D_8010C574++;
        w = o->width;
        h = o->height;
        gDPSetEnvColor(gfx, 255, 0, 0, 255);
        gfx = D_8010C574++;
        gDPSetPrimColor(gfx, 0, 0, 224, 0, 0, 255);
        func_802AAC28_de(0x67, frame, e->owner->x, e->owner->y,
                      w / (f32)D_800DE880_de * 5.0f, h / (f32)D_800DE884_de * 4.0f, 1);
    }
}
