typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern Gfx *D_80110634;
extern char D_44BDD0;
extern u32 D_800D15D4;
extern void func_80296FF8(void);
extern s32 func_8026925C(s32);

void func_8026AC38(void) {
    Gfx *cmd;

    func_80296FF8();

    cmd = D_80110634++;
    cmd->words.w0 = 0xFD900000;
    cmd->words.w1 = (u32)&D_44BDD0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF5900000;
    cmd->words.w1 = 0x07014050;
    cmd = D_80110634++;
    cmd->words.w0 = 0xE6000000;
    cmd->words.w1 = 0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF3000000;
    cmd->words.w1 = 0x070FF400;
    cmd = D_80110634++;
    cmd->words.w0 = 0xE7000000;
    cmd->words.w1 = 0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF5800400;
    cmd->words.w1 = 0x00014050;
    cmd = D_80110634++;
    cmd->words.w0 = 0xF2000000;
    cmd->words.w1 = 0x0007C07C;
    cmd = D_80110634++;
    cmd->words.w0 = 0xD7000002;
    cmd->words.w1 = 0x08000800;
    cmd = D_80110634++;
    cmd->words.w0 = 0xE3001001;
    cmd->words.w1 = 0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xD9FFFFFF;
    cmd->words.w1 = D_800D15D4 | 0x00260404;

    func_8026925C(0x1D);
}
