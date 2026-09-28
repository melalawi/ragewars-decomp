/* Draws one view of the game world: after the per-frame setup (func_802909D0) it runs the world, player,
 * effect, particle, object and translucent passes for the view in order, skipping the player and effect
 * passes in the alternate HUD mode (func_80245788) and running the extra passes only when func_802934DC
 * allows; when debug flag 0x200 is set it then clears the view's rectangle at 0x29C..0x2A8 to the far
 * depth with a fill-rectangle command. */
#include "basetypes.h"

typedef struct {
    struct {
        u32 w0;
        u32 w1;
    } words;
} Gfx;

extern Gfx *D_80110634;
extern char D_80145040;
extern char D_8013BA80;
extern s32 D_801462C8;
extern void func_802909D0(void);
extern void func_80289054(char *, char *);
extern s32 func_80245788(void);
extern void func_80228774(void *, char *);
extern s32 func_802934DC(void);
extern void func_8022A274(void *, char *);
extern void func_8028B004(char *, char *);
extern void func_802A6170(void *, char *);
extern void func_802905D4(char *, char *);
extern void func_80286424(char *, char *);
extern void func_80228934(void *, char *);
extern void func_8023B3E8(char *, char *);
extern void func_8028B13C(char *, char *);
extern void func_802A577C(void *, char *);
extern void func_80238D20(char *);
extern void func_8022A2FC(void *, char *);
extern void func_8026925C(s32);

#define GFX(a, b)                        \
    {                                    \
        Gfx *_g = (Gfx *)(D_80110634++); \
        _g->words.w0 = (a);              \
        _g->words.w1 = (u32)(b);         \
    }

#define _SHIFTL(v, s, w) ((u32)(((u32)(v) & ((0x01 << (w)) - 1)) << (s)))

void func_802362D8(char *view, char *world) {
    f32 right;

    func_802909D0();
    func_80289054(world, view);
    if (func_80245788() == 0) {
        func_80228774(&D_80145040, view);
    }
    if (func_802934DC() != 0) {
        func_8022A274(&D_80145040, view);
    }
    func_8028B004(world, view);
    func_802A6170(&D_8013BA80, view);
    if (func_80245788() == 0) {
        func_802905D4(world + 0x11778, view);
    }
    func_80286424(world, view);
    func_80228934(&D_80145040, view);
    func_8023B3E8(view + 0x570, view);
    func_8028B13C(world, view);
    func_802A577C(&D_8013BA80, view);
    func_80238D20(view);
    if (func_80245788() == 0 && func_802934DC() != 0) {
        func_8022A2FC(&D_80145040, view);
    }
    if (D_801462C8 & 0x200) {
        GFX(0xE7000000, 0);
        GFX(0xE3000A01, 0);
        GFX(0xF9000000, -1);
        GFX(0xEE000000, -1);
        GFX(0xE2001D00, 4);
        func_8026925C(0x16);
        {
            Gfx *_g;

            right = *(f32 *)(view + 0x2A4) + *(f32 *)(view + 0x29C);
            _g = (Gfx *)(D_80110634++);
            _g->words.w0 = _SHIFTL(0xF6, 24, 8) |
                           _SHIFTL(right, 14, 10) |
                           _SHIFTL(*(f32 *)(view + 0x2A8) + *(f32 *)(view + 0x2A0), 2, 10);
            _g->words.w1 = _SHIFTL(*(f32 *)(view + 0x2A4), 14, 10) | _SHIFTL(*(f32 *)(view + 0x2A8), 2, 10);
        }
    }
}
