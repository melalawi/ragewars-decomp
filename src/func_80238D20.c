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

typedef struct { Gfx * unk0; } func_80238D20_G1;
extern Gfx *D_80110634;
extern volatile s32 D_801315A4;
typedef struct { s32 unk0; } func_80238D20_G2;
extern s32 D_800E28D0;
typedef struct { f32 unk0; } func_80238D20_G3;
extern f32 D_800C8604;
extern void func_802AA224(s32);
extern s32 func_8026925C(s32);
extern void func_80272A80(void *, void *, Vector3f *);
extern void func_80238660(void *, f32, f32, f32, s32, s32);

typedef struct func_80238D20_S1 func_80238D20_S1;
typedef struct func_80238D20_S2 func_80238D20_S2;
typedef struct func_80238D20_S3 func_80238D20_S3;
struct func_80238D20_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x1E0 - 0x8 - sizeof(s32)];
    char unk1E0;
};
struct func_80238D20_S2 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5C - 0x8 - sizeof(char)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32* unk118;
    char pad118[0x198 - 0x118 - sizeof(s32*)];
    f32 unk198;
    char pad198[0x1F4 - 0x198 - sizeof(f32)];
    s32 unk1F4;
};
struct func_80238D20_S3 {
    char pad0[0x4];
    s32 unk4;
};

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

    mask = 8 << ((func_80238D20_S1 *)(arg0))->unk8;
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
            if ((((func_80238D20_S2 *)(node))->unk5C & mask) &&
                (*((func_80238D20_S2 *)(node))->unk118 & state_mask)) {
                func_80272A80(&((func_80238D20_S1 *)(arg0))->unk1E0, &((func_80238D20_S2 *)(node))->unk8, &value);
                half = (f32)(D_800E28D0 / 2);
                *x = value.x * half + half;
                *y = value.y *
                         (f32)(-(&D_800E28D0)[1] / 2) +
                     (f32)((&D_800E28D0)[1] / 2);
                func_80238660(arg0, screen_x, screen_y,
                              ((func_80238D20_S2 *)(node))->unk198 * D_800C8604,
                              0, 0);
            }
            node = ((func_80238D20_S2 *)(node))->unk1F4;
        } while (node != 0);
    }
}
