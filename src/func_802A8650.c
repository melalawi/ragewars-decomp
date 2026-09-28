/* Draws one of the two gauges of the head-up panel, the first at hud->bars[0] and the second at
   hud->bars[1]: steps the gauge's scripted mover, walks its shown amount toward the gauge's target
   count by eight a frame up or four a frame down without passing it, fills the bar from x+80 to the
   right margin in the gauge's own colour at the options fade D_801462DE times 180/255, and draws the
   gauge's label at the bar's left edge. The first gauge also draws its two end caps, at the screen
   edges, unit width and one and a half times the panel scale. */
#include "basetypes.h"

typedef struct {
    s32 unk0;
    s32 *script;
    s32 state;
    s32 wait;
    f32 x;
    f32 y;
    char pad18[0x20];
    s32 fill;
    s32 label;
    char pad40[4];
    s32 target;
} Bar;

typedef struct {
    Bar bars[2];
} Hud;

typedef struct {
    char pad0[0x2A0];
    f32 height;
} Frame;

extern Frame *D_801450A8;
extern s32 D_800E28D0;
extern s32 D_800E28D4;
extern u8 D_801462DE;

extern s32 func_80245788(void);
extern s32 func_802934DC(void);
extern s32 func_8040C4F4(void);
extern void func_802AB9E4(void);
extern void func_802A8A94(void *mover);
extern void func_802ABA44(s32 x0, s32 y0, s32 x1, s32 y1, s32 red, s32 green, s32 blue, u8 alpha);
extern void func_802AA224(u8 alpha);
extern void func_802ABC18(s32 image, s32 frame, s16 x, s16 y, f32 scaleX, f32 scaleY, s32 which);
extern void func_802A94E8(void);
extern void func_802ABB58(f32 scaleX, f32 scaleY);
extern void func_802ABB2C(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1);
extern void func_802A9F18(s32 label, s32 x, s32 y, u8 alpha, s32 pad0, s32 pad1, f32 scaleX, f32 scaleY);

void func_802A8650(Hud *hud, s32 which) {
    Bar *bar;
    f32 scale;
    f32 wide;
    f32 target;
    f32 shift;
    s32 red;
    s32 green;
    s32 blue;
    s32 offset;
    s32 x;
    s32 y;
    s32 left;
    s32 right;
    s32 inset;
    u8 *fade;
    s32 value;

    if (func_80245788() != 0) {
        return;
    }
    if (func_802934DC() == 0) {
        return;
    }
    wide = func_8040C4F4() == 0 ? 0.75f : 1.0f;
    scale = D_801450A8->height / (f32) D_800E28D4;
    scale = scale * wide;
    switch (which) {
    case 1:
        bar = &hud->bars[0];
        target = (f32) hud->bars[0].target;
        red = 0x1D;
        green = 0x53;
        blue = 0xE2;
        offset = 0x1F;
        break;
    case 2:
        bar = &hud->bars[1];
        target = (f32) hud->bars[1].target;
        red = 0x8B;
        green = 0xB9;
        blue = 0x46;
        offset = 0x30;
        break;
    default:
        return;
    }
    x = (s32) bar->x;
    y = (s32) (bar->y + (f32) offset * scale);
    func_802AB9E4();
    func_802A8A94(bar);
    if (bar->state == 1) {
        value = bar->fill;
        if ((f32) value < target) {
            value += 8;
            bar->fill = value;
            if (target < (f32) value) {
                bar->fill = (s32) target;
            }
        } else if (target < (f32) value) {
            value -= 4;
            bar->fill = value;
            if ((f32) value < target) {
                bar->fill = (s32) target;
            }
        }
    }
    left = x + 0x50;
    inset = x - 0x70;
    right = inset + D_800E28D0;
    fade = &D_801462DE;
    func_802ABA44(left, (s32) ((f32) y + scale * 9.0f),
                  left + ((right - left) * bar->fill) / 100,
                  (s32) ((f32) y + scale * 15.0f), red, green, blue,
                  (u8) (*fade * 180 / 255));
    func_802AA224(*fade);
    if (which == 1) {
        shift = scale * 27.0f;
        func_802ABC18(0x202, 0, (s16) (x + 0x46), (s16) (s32) (bar->y + shift), 1.0f, scale * 1.5f, which);
        func_802ABC18(0x203, 0, (s16) (D_800E28D0 + x - 0x6D), (s16) (s32) (bar->y + shift), 1.0f, scale * 1.5f, which);
        func_802A94E8();
        func_802ABB58(0.4f, scale * 0.4f);
        func_802ABB2C(0xFF, 0xFF, 0xFF, 0xC8, 0xC8, 0xC8);
        func_802A9F18(hud->bars[0].label, left, y - 2, *fade, 0, 0, 1.0f, 1.0f);
    } else {
        func_802A94E8();
        func_802ABB58(0.4f, scale * 0.4f);
        func_802ABB2C(0xFF, 0xFF, 0xFF, 0xC8, 0xC8, 0xC8);
        func_802A9F18(hud->bars[1].label, left, y - 2, *fade, 0, 0, 1.0f, 1.0f);
    }
}
