#include "basetypes.h"

typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3i;

extern s32 D_8011FE88;
extern f32 D_800C7470;
extern s32 D_800D297C;
extern u8 D_801462E5;
extern s32 D_801468F4;
extern s32 D_800CE47C;
extern s32 D_800CE430[];
extern Gfx *D_80110634;

extern f32 func_8024D274(void *arg0);
extern void func_8028C6B0(void *arg0, void *arg1, void *arg2);
extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern void func_80249E18(void *arg0, void *arg1);
extern void func_8021C674(void *arg0, void *arg1);

void func_8021C9B4(void *arg0, void *arg1) {
    Vec3i pos;
    s32 value;
    Gfx *cmd;

    pos = *(Vec3i *)((char *)arg0 + 8);
    *(f32 *)&pos.y += *(f32 *)((char *)arg0 + 0x70);
    *(f32 *)&pos.y += func_8024D274(arg0) * *(&D_800C7470 + 1);
    func_8028C6B0(&D_8011FE88, &pos,
                  (char *)arg0 + (D_800D297C * 0x18 + 0x140));

    value = 0x66;
    if (D_801462E5 != 0) {
        if ((D_801468F4 != 0) &&
            (*(u8 *)((char *)*(void **)((char *)arg0 + 0x5D8) + 0x8F) != 0)) {
            value = D_800CE47C;
        } else {
            value = D_800CE430[*(s16 *)((char *)*(void **)((char *)arg0 + 0x18) + 0xC)];
            *(u8 *)((char *)arg0 + 3) =
                *(u8 *)((char *)*(void **)((char *)arg0 + 0x5D8) + 0x81);
        }
    }
    func_8028B250(&D_8011FE88, arg0, value,
                  *(s32 *)((char *)arg0 + 0x86C));

    cmd = D_80110634++;
    cmd->words.w0 = 0xE7000000;
    cmd->words.w1 = 0;
    cmd = D_80110634++;
    cmd->words.w0 = 0xE3000A01;
    cmd->words.w1 = 0x100000;
    cmd = D_80110634++;
    cmd->words.w0 = 0xD9FFFFFF;
    cmd->words.w1 = 0x10000;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDB040004;
    cmd->words.w1 = 2;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDB04000C;
    cmd->words.w1 = 2;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDB040014;
    cmd->words.w1 = 0xFFFE;
    cmd = D_80110634++;
    cmd->words.w0 = 0xDB04001C;
    cmd->words.w1 = 0xFFFE;

    func_80249E18(arg0, arg1);
    if (*(s32 *)((char *)arg0 + 0x1210) != 0) {
        func_8021C674(arg0, arg1);
    }
}
