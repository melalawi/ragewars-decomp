#include "unbake_gbi.h"
/* Draws a sprite with the standard 2D state: resets the render-state cache, selects render mode
   0xC through func_804170B4 and combine mode 5 through func_80416D74, emits the other-mode word
   0xE3000C00 and the texture enable (each only when its cached state changes, preceded by one
   pipeline sync), and unless drawing is suppressed (D_80153F60) sets vertex mode 9 and draws
   through func_80415D10 with the same arguments. */
#include "basetypes.h"

#include "basetypes.h"
#include "n64sdk.h"

extern Gfx *D_80110634;
extern s32 D_800E32E0;
extern s32 D_800E32E4;
extern s32 D_800E32C4;
extern s32 D_800E32D0;
extern s32 D_80153F60;

extern void func_804170B4(s32 mode);
extern void func_80416D74(s32 mode);
extern void func_80416F4C(s32 mode);
extern void func_80415D10(f32 x, f32 y, f32 z, f32 a3, s32 a4, s32 a5, s32 a6, s32 a7);

static inline void sync(void) {
    Gfx *cmd;

    if (D_800E32E4 == 0) {
        D_800E32E4 = 1;
        cmd = D_80110634++;
        gDPPipeSync(cmd);
    }
}

static inline void emit(unsigned int w0, unsigned int w1) {
    Gfx *cmd;

    cmd = D_80110634++;
    cmd->words.w0 = w0;
    cmd->words.w1 = w1;
}

void func_80418E60(f32 x, f32 y, s32 unused, f32 z, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8) {
    D_800E32E0 = 0;
    D_800E32E4 = 0;
    func_804170B4(0xC);
    func_80416D74(5);
    if (D_800E32C4 != 7) {
        D_800E32C4 = 7;
        sync();
        emit(0xE3000C00, 0);
    }
    if (D_800E32D0 != 0xE) {
        D_800E32D0 = 0xE;
        sync();
        emit(0xD7000000, 0x80008000);
    }
    if (D_80153F60 == 0) {
        func_80416F4C(9);
        func_80415D10(x, y, z, a4, a5, a6, a7, a8);
    }
}
