typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern s32 D_80110620;
extern Gfx *D_80110634;

void func_8026D914(s32 arg0) {
    if (D_80110620 == 0) {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3001801;
        cmd->words.w1 = arg0;
    } else {
        Gfx *cmd = D_80110634++;
        cmd->words.w0 = 0xE3001801;
        cmd->words.w1 = 0x80;
    }
}
