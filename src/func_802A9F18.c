/* Draws a text string in the current font style D_8013B7B8: when centring, measures it through func_80442460 at the style size scaled by the language-dependent factors for D_8014D3D0, shrinks the scale so it fits 44 pixels inside the screen width D_800E28D0 and shifts x left by half the width; then sets the environment colour from the style with the given alpha and the primitive colour from the style, and draws the string through func_802A98E0, first as a shadow when requested. */
#include "basetypes.h"

typedef struct {
    u32 w0;
    u32 w1;
} Gfx;

typedef struct {
    char pad0[0xA0];
    s32 envR;
    s32 envG;
    s32 envB;
    s32 primR;
    s32 primG;
    s32 primB;
    f32 width;
    f32 height;
} FontStyle;

#define SHIFTL(v, s, w) (((u32)(v) & ((1 << (w)) - 1)) << (s))

extern FontStyle D_8013B7B8;
extern s32 D_8014D3D0;
extern s32 D_800E28D0;
extern Gfx *D_80110634;
extern f32 func_80442460(s32 text, f32 size, f32 spacing);
extern void func_802A98E0(s32 text, f32 x, f32 y, f32 width, f32 height, s32 shadow, s32 alpha, s32 language);

void func_802A9F18(s32 text, s32 x, s32 y, s32 alpha, s32 centred, s32 shadow, f32 scaleX, f32 scaleY) {
    FontStyle *style;
    f32 sizeFactor;
    f32 spacing;
    f32 size;
    f32 width;
    f32 limit;
    f32 ratio;
    f32 fx;
    f32 fy;
    f32 w;
    f32 h;
    s32 language;

    style = &D_8013B7B8;
    if (centred) {
        switch (D_8014D3D0) {
        case 0:
            sizeFactor = 24.0f;
            break;
        case 1:
            sizeFactor = 12.0f;
            break;
        case 3:
            sizeFactor = 6.0f;
            break;
        case 4:
        case 5:
            sizeFactor = 16.0f;
            break;
        case 2:
        case 6:
            sizeFactor = 8.0f;
            break;
        default:
            sizeFactor = 1.0f;
            break;
        }
        size = style->width * scaleX * sizeFactor;
        switch (D_8014D3D0) {
        case 0:
            spacing = 24.0f;
            break;
        case 1:
            spacing = 12.0f;
            break;
        case 3:
            spacing = 6.0f;
            break;
        case 4:
        case 5:
            spacing = 16.0f;
            break;
        case 2:
        case 6:
            spacing = 8.0f;
            break;
        default:
            spacing = 1.0f;
            break;
        }
        width = func_80442460(text, size, spacing);
        limit = D_800E28D0 - 0x2C;
        if (limit < width) {
            ratio = limit / width;
            scaleX *= ratio;
            width *= ratio;
        }
        x -= (s32)(width * 0.5f);
    }
    {
        Gfx *g = D_80110634++;

        g->w0 = 0xE7000000;
        g->w1 = 0;
    }
    {
        Gfx *g = D_80110634++;

        g->w0 = 0xFB000000;
        g->w1 = SHIFTL(style->envR, 24, 8) | SHIFTL(style->envG, 16, 8) | SHIFTL(style->envB, 8, 8) | SHIFTL(alpha, 0, 8);
    }
    {
        Gfx *g = D_80110634++;

        g->w0 = 0xFA000000;
        g->w1 = SHIFTL(style->primR, 24, 8) | SHIFTL(style->primG, 16, 8) | SHIFTL(style->primB, 8, 8) | SHIFTL(0xFF, 0, 8);
    }
    fx = x;
    w = style->width * scaleX;
    h = style->height * scaleY;
    language = D_8014D3D0;
    fy = y;
    if (shadow) {
        func_802A98E0(text, fx, fy, w, h, 1, alpha, language);
    }
    func_802A98E0(text, fx, fy, w, h, 0, alpha, language);
}
