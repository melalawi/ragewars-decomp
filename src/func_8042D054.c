#include "basetypes.h"

/* Shows the model preview of the screen D_800E53C0 when its model id at 0x32C is set: shows item
   0x268 of the screen window with alpha 0xAF and D_800D752C at 0x38, then sets up the view at 0x20
   of the screen through func_80439D3C with mode 0, a uniform D_800E1B2C scale and the offset
   (0, OFFSET_Y, D_800E1B38), through func_80439DC0 with a zero vector, through func_80439E10
   with (0, D_800E1B30, 0), and loads the model through func_80439E60. */

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

struct Item {
    char pad[0x10];
    u8 alpha;
    char pad11[0x38 - 0x11];
    s32 image;
};

struct Screen {
    char pad[0x20];
    char view[0xE0 - 0x20];
    void *window;
    char padE4[0x32C - 0xE4];
    s32 model;
};

extern struct Screen *D_800E53C0;
extern s32 D_800D752C;
extern f32 D_800E1B2C;
extern f32 D_800E1B30;
static inline f32 read_float(f32 *value) {
    return *value;
}

extern struct Item *func_8040ECB0(void *, s32);
extern void func_8040E958(struct Item *, s32);
extern void func_80439D3C(void *, s32, Vec3, Vec3);
extern void func_80439DC0(void *, Vec3);
extern void func_80439E10(void *, Vec3);
extern void func_80439E60(void *, s32);

void func_8042D054(void) {
    struct Item *item;
    Vec3 scale;
    Vec3 offset;
    Vec3 angle;
    Vec3 position;

    if (D_800E53C0->model != -1) {
        item = func_8040ECB0(D_800E53C0->window, 0x268);
        func_8040E958(item, 1);
        item->alpha = 0xAF;
        item->image = D_800D752C;
        scale.x = D_800E1B2C;
        scale.y = D_800E1B2C;
        scale.z = D_800E1B2C;
        angle.x = 0;
        angle.y = 0;
        angle.z = 0;
        position.x = 0;
        position.y = D_800E1B30;
        position.z = 0;
        offset.x = 0;
        offset.y = read_float(&D_800E1B30 + 1);
        offset.z = read_float(&D_800E1B30 + 2);
        func_80439D3C(D_800E53C0->view, 0, scale, offset);
        func_80439DC0(D_800E53C0->view, angle);
        func_80439E10(D_800E53C0->view, position);
        func_80439E60(D_800E53C0->view, D_800E53C0->model);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D21AC_4[] = {0x80, 0x0C, 0xF6, 0x74};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D752C_4[] = {0x80, 0x0D, 0x49, 0xF4};
#endif
