#include "span_1000/code_802A8A94.h"
#include "types.h"
#include "gfx.h"
#include "gbi.h"
#include "common/unused.h"
/* Draws a text string in the current font style D_801376F8: when centring, measures it through func_804422F0_de at the style size scaled by the language-dependent factors for D_80147150, shrinks the scale so it fits 44 pixels inside the screen width D_800DE880_de and shifts x left by half the width; then sets the environment colour from the style with the given alpha and the primitive colour from the style, and draws the string through func_802A88F0_de, first as a shadow when requested. */




extern s32 D_800DE880_de;
extern Gfx *D_8010C574;
extern f32 func_804422F0_de(s32 text, f32 size, f32 spacing);
extern void func_802A88F0_de(s32 text, f32 x, f32 y, f32 width, f32 height, s32 shadow, s32 alpha, s32 language);

void func_802A8F28_de(s32 text, s32 x, s32 y, s32 alpha, s32 centred, s32 shadow, f32 scaleX, f32 scaleY) {
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

    style = &D_801376F8;
    if (centred) {
        switch (D_80147150) {
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
        switch (D_80147150) {
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
        width = func_804422F0_de(text, size, spacing);
        limit = D_800DE880_de - 0x2C;
        if (limit < width) {
            ratio = limit / width;
            scaleX *= ratio;
            width *= ratio;
        }
        x -= (s32)(width * 0.5f);
    }
    gDPPipeSync(D_8010C574++);
    gDPSetEnvColor(D_8010C574++, (u32)((style->envR)), (u32)((style->envG)), (u32)((style->envB)), (u32)((alpha)));
    gDPSetPrimColor(D_8010C574++, 0, 0, (u32)((style->primR)), (u32)((style->primG)), (u32)((style->primB)), 255);
    fx = x;
    w = style->width * scaleX;
    h = style->height * scaleY;
    language = D_80147150;
    fy = y;
    if (shadow) {
        func_802A88F0_de(text, fx, fy, w, h, 1, alpha, language);
    }
    func_802A88F0_de(text, fx, fy, w, h, 0, alpha, language);
}
