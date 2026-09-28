/* Draws the scrolling text lines from the current line index, fading each in with alpha sixteen times its distance below the top edge (capped at 255) and spacing lines ten 222ths of the screen height apart until past the bottom; the top edge is a zero-valued local, which keeps 0.0f in one saved register as the cartridge does. */
#include "basetypes.h"

extern void func_802A94E8(void);
extern void func_802A97F0(void);
extern void func_802ABB2C(s32, s32, s32, s32, s32, s32);
extern void func_802ABB58(f32, f32);
extern void func_802ABB6C(char *, f32, f32, f32, f32, s32, s32, s32);
extern s32 D_8011FAB0;
extern f32 D_8014AD78;
extern s32 D_8014D3D0;
extern char **D_800D7E40;
extern s32 D_800E28D0, D_800E28D4;

void func_80290E4C(void) {
    s32 line;
    f32 y;
    char *text;
    f32 fade;
    s32 alpha;
    f32 top;

    top = 0.0f;
    line = D_8011FAB0;
    y = D_8014AD78;
    func_802A94E8();
    func_802A97F0();
    func_802ABB58(1.0f, 1.0f);
    do {
        text = D_800D7E40[line];
        if (text != 0) {
            fade = top;
            if (!(y < top)) {
                if (!(16.0f < y)) {
                    if (!(y < top)) {
                        fade = y * 16.0f;
                    }
                } else {
                    fade = 256.0f;
                }
            }
            if (fade > 255.0f) {
                fade = 255.0f;
            }
            alpha = fade;
            func_802ABB2C(0xFF, 0xFF, 0xFF, alpha, alpha, alpha);
            if (y >= top) {
                func_802ABB6C(text, (f32)(D_800E28D0 * 14 / 284), (f32)(s32)y,
                              D_800E28D0 * 0.0028169013f, D_800E28D4 * 0.0045045046f, 1, alpha,
                              D_8014D3D0);
            }
            line++;
        }
        y += D_800E28D4 * 0.045045048f;
    } while (y <= D_800E28D4);
}
