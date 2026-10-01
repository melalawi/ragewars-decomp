typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern f32 D_800CB140;
extern Gfx *D_80110634;
extern s32 D_8013B878[2];
extern s32 D_8014D3D0;

extern s32 func_802ABDAC(void);
extern void func_80268CE0(s32 arg0);
extern s32 func_8026925C(s32);
extern void func_802ABB2C(s32 arg0, s32 arg1, s32 arg2, s32 arg3,
                         s32 arg4, s32 arg5);
extern void func_802ABB58(f32 arg0, f32 arg1);

void func_802A94E8(void) {
    s32 texture;
    u32 pipe_sync;

    texture = func_802ABDAC();
    if (texture != 0) {
        pipe_sync = 0xE7000000;

        {
            Gfx *cmd;
            cmd = D_80110634++;
            cmd->words.w0 = pipe_sync;
            cmd->words.w1 = 0;
            cmd = D_80110634++;
            cmd->words.w0 = 0xE3000A01;
            cmd->words.w1 = 0x00100000;
        }

        func_80268CE0(0x1A);
        func_8026925C(0x15);

        D_8014D3D0 = 0;
        {
        Gfx *cmd;
        cmd = D_80110634++;
        cmd->words.w0 = 0xD7000002;
        cmd->words.w1 = 0x80008000;
        cmd = D_80110634++;
        cmd->words.w0 = 0xE3001001;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xE3000C00;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xE3001201;
        cmd->words.w1 = 0x2000;
        cmd = D_80110634++;
        cmd->words.w0 = 0xFD900000;
        cmd->words.w1 = (u32)texture;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF5900000;
        cmd->words.w1 = 0x07000000;
        cmd = D_80110634++;
        cmd->words.w0 = 0xE6000000;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF3000000;
        cmd->words.w1 = 0x0708F800;
        cmd = D_80110634++;
        cmd->words.w0 = pipe_sync;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF5800400;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF2000000;
        cmd->words.w1 = 0x0005C05C;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF5800000;
        cmd->words.w1 = 0x01000000;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF2000000;
        cmd->words.w1 = 0x0103C03C;
        }

        func_802ABB2C(0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C);
        func_802ABB58(D_800CB140, D_800CB140);
        D_8013B878[0] = 2;
        D_8013B878[1] = 2;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5EE0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB140_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6250_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6290_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5FB0_4 = 1.0f;
#endif
