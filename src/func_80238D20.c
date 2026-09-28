typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vector3f;

extern Gfx *D_80110634;
extern volatile s32 D_801315A4;
extern s32 D_800E28D0;
extern f32 D_800C8604;
extern void func_802AA224(s32);
extern s32 func_8026925C(s32);
extern void func_80272A80(void *, void *, Vector3f *);
extern void func_80238660(void *, f32, f32, f32, s32, s32);

void func_80238D20(void *arg0) {
    Vector3f value;
    f32 screen_x;
    f32 screen_y;
    f32 half;
    f32 *x;
    f32 *y;
    volatile Gfx *cmd;
    s32 mask;
    s32 state_mask;
    s32 node;

    mask = 8 << *(s32 *)((char *)arg0 + 8);
    func_802AA224(0x64);
    func_8026925C(0x1A);
    cmd = D_80110634++;
    cmd->words.w0 = 0xE3001201;
    cmd->words.w1 = 0x2000;
    node = D_801315A4;
    if (node != 0) {
        state_mask = 0x80000;
        x = &screen_x;
        y = &screen_y;
        do {
            if ((*(s32 *)((char *)node + 0x5C) & mask) &&
                (**(s32 **)((char *)node + 0x118) & state_mask)) {
                func_80272A80((char *)arg0 + 0x1E0, (char *)node + 8, &value);
                half = (f32)(D_800E28D0 / 2);
                *x = value.x * half + half;
                *y = value.y *
                         (f32)(-*(s32 *)((char *)&D_800E28D0 + 4) / 2) +
                     (f32)(*(s32 *)((char *)&D_800E28D0 + 4) / 2);
                func_80238660(arg0, screen_x, screen_y,
                              *(f32 *)((char *)node + 0x198) * D_800C8604,
                              0, 0);
            }
            node = *(s32 *)((char *)node + 0x1F4);
        } while (node != 0);
    }
}
