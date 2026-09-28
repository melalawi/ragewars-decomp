#include "basetypes.h"

typedef struct {
    struct {
        u32 w0;
        u32 w1;
    } words;
} Gfx;

extern Gfx *D_80110634;
extern void func_802AA224(s32);
extern void func_80218F9C(s32 arg0, s32 arg1, s32 arg2);

void func_80218F08(s32 arg0, s32 arg1, s32 arg2) {
    Gfx *cmd;

    func_802AA224(0xFF);
    cmd = D_80110634++;
    cmd->words.w0 = 0xE3001201;
    cmd->words.w1 = 0x2000;
    func_80218F9C(arg0, arg1, arg2);
}
