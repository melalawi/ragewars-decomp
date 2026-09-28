typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

extern Gfx *D_80110634;
extern s32 D_8011FAC0;
extern s32 D_800E28D8;
extern f32 D_800C73C0;
extern s32 D_800CE72C;
extern s32 D_800D297C;
extern char D_800D0EE0;

extern void func_8026D8F8(void);
extern void func_8026D914(s32 arg0);
extern void func_8026E378(s32 arg0, s32 arg1);
extern void func_8026D980(void);
extern void func_80291BF8(void *arg0, s32 arg1, s32 arg2, s32 arg3,
                          s32 arg4, s32 arg5);
extern void func_80272D20(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80273B08(void *arg0, f32 arg1);
extern void func_80273930(void *arg0, f32 arg1);
extern void func_802734B8(char *object, f32 x, f32 y, f32 z);
extern void func_80273DDC(void *object);
extern void func_8027302C(f32 *arg0, f32 *arg1);
extern void func_80273618(void *arg0, s32 arg1, f32 arg2, f32 arg3);
extern void func_802702EC(void *arg0, void *arg1);
extern void func_80272908(void *arg0, void *arg1, void *arg2);
extern void func_8026DF30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8026D9D0(void);

void func_80219490(char *object, char *camera) {
    f32 first[16];
    f32 second[16];
    s32 output[4];
    Gfx *command;
    f32 x;
    f32 y;
    f32 z;
    f32 w;
    char *matrix;

    func_8026D8F8();
    if (*(s32 *)(object + 8) == 0 || *(s32 *)(object + 0xB4) == 0) {
        return;
    }

    func_8026D914(0xC0);
    func_8026E378(1, 0x20);

    command = D_80110634++;
    command->words.w0 = 0xE3000C00;
    command->words.w1 = 0x00080000;
    command = D_80110634++;
    command->words.w0 = 0xE3001201;
    command->words.w1 = 0x2000;
    func_8026D980();

    x = *(f32 *)(camera + 0x2A4);
    y = *(f32 *)(camera + 0x2A8);
    z = *(f32 *)(camera + 0x2A0) + y;
    w = *(f32 *)(camera + 0x29C) + x;
    func_80291BF8(&D_8011FAC0, (s32)x, (s32)w, (s32)y, (s32)z, 0);

    func_80272D20(first, *(s32 *)(object + 0x90),
                   *(s32 *)(object + 0x94), *(s32 *)(object + 0x98));
    func_80273B08(first, *(f32 *)(object + 0xA0));
    func_80273930(first, *(f32 *)(object + 0x9C));
    func_802734B8((char *)first, *(f32 *)(object + 0xA8),
                   *(f32 *)(object + 0xAC), *(f32 *)(object + 0xB0));
    func_80273DDC(first);

    matrix = (char *)second;
    func_8027302C(second, first);
    if (D_800E28D8 == 2) {
        func_80273618(matrix, D_800CE72C, D_800C73C0, D_800C73C0);
    }
    {
        s32 offset = (D_800D297C << 6) + 0x10;
        func_802702EC(matrix, object + offset);
    }
    func_80272908(first, object + 0xA8, output);
    {
        s32 offset = (D_800D297C << 6) + 0x10;
        func_8026DF30(*(s32 *)(object + 8), (s32)(object + offset),
                       (s32)&D_800D0EE0, 0, -1);
    }
    func_8026D9D0();
    func_8026D914(0);
    func_8026E378(0, 0x20);
}
