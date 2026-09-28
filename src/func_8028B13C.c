typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern Gfx *D_80110634;
extern void func_8026D980(void);
extern void func_80282304(s32 arg0, s32 arg1);
extern void func_8026D9D0(void);

void func_8028B13C(s32 arg0, s32 arg1) {
    Gfx *cmd;

    cmd = D_80110634++;
    cmd->words.w0 = 0xDB040004;
    cmd->words.w1 = 1;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDB04000C;
    cmd->words.w1 = 1;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDB040014;
    cmd->words.w1 = 0xFFFF;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDB04001C;
    cmd->words.w1 = 0xFFFF;
    func_8026D980();
    func_80282304(arg0 + 0x1B08, arg1);
    func_8026D9D0();
}
