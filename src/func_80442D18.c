#include "basetypes.h"
#include "n64sdk.h"
#include "unbake_gbi.h"
#include "shared/menu_sprite.h"

/* Draws a pulsing sprite for an active menu element: when the word at 0x1CC is set, it takes the frame at 0x1C8 folded back after 23, sets up drawing through func_802A94E8 and func_8026925C, emits a yellow environment and primitive colour to the display list and draws sprite 0x67 at the owner's rectangle scaled to the screen through func_802ABC18. Adapted from func_8022C2A4. */
extern Gfx *D_80110634;
extern s32 D_800E28D0;
extern s32 D_800E28D4;

extern void func_802A94E8(void);
extern void func_8026925C(s32);
extern void func_802ABC18(s32, s32, s16, s16, f32, f32, s32);

void func_80442D18(MenuSpriteElement *e) {
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
        func_802A94E8();
        func_8026925C(0x15);
        o = e->owner;
        gfx = D_80110634++;
        w = o->width;
        h = o->height;
        gDPSetEnvColor(gfx, 255, 0, 0, 255);
        gfx = D_80110634++;
        gDPSetPrimColor(gfx, 0, 0, 224, 0, 0, 255);
        func_802ABC18(0x67, frame, e->owner->x, e->owner->y,
                      w / (f32)D_800E28D0 * 5.0f, h / (f32)D_800E28D4 * 4.0f, 1);
    }
}
