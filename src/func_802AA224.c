/* Emits the render-state display-list prologue for a flat colour pass: pipeline sync, one-cycle
   mode, the two combiner/mode presets through func_80268CE0 and func_8026925C, the environment
   colour from the argument with full alpha bits, texture enable and the texture-filter, colour-dither
   and alpha-dither mode words, the alpha dither chosen by D_800E28D8. Written with the house
   Gfx-packet idiom used by func_8021CBAC. */
#include "basetypes.h"

typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

extern Gfx *D_80110634;
extern s32 D_800E28D8;

extern void func_80268CE0(s32 arg0);
extern void func_8026925C(s32 arg0);

void func_802AA224(s32 color) {
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE7000000;
        cmd->words.w1 = 0;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3000A01;
        cmd->words.w1 = 0x100000;
    }
    func_80268CE0(0x1B);
    func_8026925C(0x19);
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xFB000000;
        cmd->words.w1 = color | ~0xFF;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xD7000002;
        cmd->words.w1 = 0x80008000;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3001001;
        cmd->words.w1 = 0;
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3000C00;
        cmd->words.w1 = 0;
    }
    if (D_800E28D8 == 0) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3001201;
        cmd->words.w1 = 0;
    } else {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3001201;
        cmd->words.w1 = 0x2000;
    }
}
