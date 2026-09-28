#include "basetypes.h"

typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

extern void *D_800D052C[];
extern Gfx *D_80110634;
extern s32 D_8011FAC0;

extern void func_8026D8F8(void);
extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern void func_80291BF8(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);
extern void func_80249E18(void *arg0, void *arg1);

void func_8021CBAC(void *arg0, void *arg1) {
    void *entry;
    f32 *rect;
    f32 x;
    f32 y;
    f32 left;
    f32 right;
    f32 top;
    f32 bottom;

    if ((*(s16 *)((char *)arg0 + 0x62E) != -1) &&
        (*(s16 *)((char *)arg0 + 0x5EA) != 0)) {
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xE3001201;
            cmd->words.w1 = 0x2000;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xE3000C00;
            cmd->words.w1 = 0x80000;
        }
        func_8026D8F8();

        entry = D_800D052C[*(s16 *)((char *)arg0 + 0x62E)];
        rect = (f32 *)((char *)arg1 + 0x29C);
        x = rect[0];
        y = rect[1];
        left = *(f32 *)((char *)entry + 0x44) * x + rect[2];
        right = *(f32 *)((char *)entry + 0x4C) * x + rect[2];
        top = *(f32 *)((char *)entry + 0x48) * y + rect[3];
        bottom = *(f32 *)((char *)entry + 0x50) * y + rect[3];
        func_80291BF8(&D_8011FAC0, (s32)left, (s32)right, (s32)top,
                      (s32)bottom, *(s32 *)((char *)arg1 + 0x120));

        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xD9FFFFFF;
            cmd->words.w1 = 0x10000;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB040004;
            cmd->words.w1 = 1;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB04000C;
            cmd->words.w1 = 1;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB040014;
            cmd->words.w1 = 0xFFFF;
        }
        {
            Gfx *cmd = D_80110634++;
            cmd->words.w0 = 0xDB04001C;
            cmd->words.w1 = 0xFFFF;
        }
        func_8026D980();
        func_80249E18((char *)arg0 + 0x2E8, arg1);
        func_8026D9D0();
    }
}
