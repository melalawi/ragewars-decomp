typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern Gfx *D_80110634;
extern s32 D_8014D3D0;
extern s32 func_802ABDAC(void);

void func_802A9700(void) {
    Gfx *cmd;
    s32 v0;

    v0 = func_802ABDAC();
    if (v0 != 0) {
        D_8014D3D0 = 1;
        cmd = D_80110634++;
        cmd->words.w0 = 0xFD900000;
        cmd->words.w1 = (u32) v0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF5900100;
        cmd->words.w1 = 0x0700C040;
        cmd = D_80110634++;
        cmd->words.w0 = 0xE6000000;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF3000000;
        cmd->words.w1 = 0x0701F800;
        cmd = D_80110634++;
        cmd->words.w0 = 0xE7000000;
        cmd->words.w1 = 0;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF5800300;
        cmd->words.w1 = 0xC040;
        cmd = D_80110634++;
        cmd->words.w0 = 0xF2000000;
        cmd->words.w1 = 0x0003C01C;
    }
}
