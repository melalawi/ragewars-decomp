typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern Gfx *D_80110634;
extern s32 D_800D297C;

void func_8023941C(u32 arg0) {
    Gfx *cmd;
    u32 offset;

    offset = (D_800D297C << 6) + 0x448;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDA380007;
    cmd->words.w1 = arg0 + offset;
}
