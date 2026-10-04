#include "span_16E000/code_8041BC50.h"
#include "types.h"

/* Builds screen state D_800E3518 under a parent window: allocates its 0x2C bytes, keeps the parent,
   opens windows 0x3C3 (shown), 0x3C9, 0x3C4 and 0x3C5 (hidden) at 0x4 to 0x10, clears the words at
   0x14 and 0x18, resets through func_8040C428_de(0) and func_802A2394_de, sets D_800E28C8 to -1 and
   D_80146D70 to 0, releases the resources of D_8011FAC0 and of its block at 0x3C8, clears the
   word at 0x1C and returns zero. */

#if defined(VERSION_DE)
#define VALUE_3C3 0x3BE
#define VALUE_3C9 0x3C3
#define VALUE_3C4 0x3BD
#define VALUE_3C5 0x3BF
#elif defined(VERSION_EU_X)
#define VALUE_3C3 0x3CC
#define VALUE_3C9 0x3CD
#define VALUE_3C4 0x3C6
#define VALUE_3C5 0x3C8
#else
#define VALUE_3C3 0x3C3
#define VALUE_3C9 0x3C9
#define VALUE_3C4 0x3C4
#define VALUE_3C5 0x3C5
#endif



extern struct Screen_func_8041C2AC_de *D_800DF4C8;
extern s32 D_800DE878;
extern s32 D_80142CB0;
extern char D_8011BA00[];
extern struct Screen_func_8041C2AC_de *func_8025305C_de(s32);
extern void *func_8040EC30_de(void *, s32);
extern void func_8040E8D8_de(void *, s32);
extern void func_8040C428_de(s32);
extern void func_802A2394_de(void);
extern void func_80293334_de(void *, s32, s32);
extern void func_80286AA8_de(void *, s32, s32);

s32 func_8041C2AC_de(void *parent) {
    void *window;
    char *resources;

    D_800DF4C8 = func_8025305C_de(0x2C);
    D_800DF4C8->parent = parent;
    window = func_8040EC30_de(parent, VALUE_3C3);
    D_800DF4C8->windows[0] = window;
    func_8040E8D8_de(window, 1);
    window = func_8040EC30_de(parent, VALUE_3C9);
    D_800DF4C8->windows[1] = window;
    func_8040E8D8_de(window, 0);
    window = func_8040EC30_de(parent, VALUE_3C4);
    D_800DF4C8->windows[2] = window;
    func_8040E8D8_de(window, 0);
    window = func_8040EC30_de(parent, VALUE_3C5);
    D_800DF4C8->windows[3] = window;
    func_8040E8D8_de(window, 0);
    D_800DF4C8->selection = 0;
    D_800DF4C8->scroll = 0;
    func_8040C428_de(0);
    func_802A2394_de();
    D_800DE878 = -1;
    D_80142CB0 = 0;
    resources = D_8011BA00;
    func_80293334_de(resources, 0, 0);
    func_80286AA8_de(resources + 0x3C8, 0, 0);
    D_800DF4C8->state = 0;
    return 0;
}
