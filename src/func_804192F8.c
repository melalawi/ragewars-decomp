/* Draws the current texture D_800E32A4 over the screen rectangle (left, top)-(right, bottom) mapping
   the normalised texture window (u0, v0)-(u1, v1): skips an empty texture or rectangle, scales the
   window by the texture size into 5.10 fixed point to get the start coordinates and per-pixel
   steps, and emits the texture rectangle command with its two half commands. */
#include "basetypes.h"

typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

typedef struct {
    char pad0[4];
    s16 width;
    s16 height;
} Texture;

extern Gfx *D_80110634;
extern Texture *D_800E32A4;

void func_804192F8(s32 left, s32 top, s32 right, s32 bottom, f32 u0, f32 v0, f32 u1, f32 v1) {
    f32 scaleU;
    f32 scaleV;
    s32 dsdx;
    s32 dtdy;
    s32 startS;
    s32 startT;

    if (D_800E32A4->width == 0 || D_800E32A4->height == 0 || left == right || top == bottom) {
        return;
    }
    scaleU = D_800E32A4->width << 10;
    dsdx = (s32)((u1 - u0) * scaleU) / (right - left + 1);
    scaleV = D_800E32A4->height << 10;
    dtdy = (s32)((v1 - v0) * scaleV) / (bottom - top + 1);
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE4000000 | ((((right + 1) * 4) & 0xFFF) << 12) | (((bottom + 1) * 4) & 0xFFF);
        cmd->words.w1 = (((left * 4) & 0xFFF) << 12) | ((top * 4) & 0xFFF);
    }
    startS = u0 * scaleU;
    startT = v0 * scaleV;
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE1000000;
        cmd->words.w1 = ((startS >> 5) << 16) | ((startT >> 5) & 0xFFFF);
    }
    {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xF1000000;
        cmd->words.w1 = (dsdx << 16) | (dtdy & 0xFFFF);
    }
}
