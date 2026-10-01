#include "basetypes.h"

typedef struct PackedMatrixWords {
    s32 integer[8];
    s32 fraction[8];
} PackedMatrixWords;

typedef struct { f32 unk0; } func_80290A70_G1;
extern f32 D_800CA4B0;
typedef struct { f32 unk0; } func_80290A70_G2;
extern f32 D_800CA4B4;
typedef struct { f32 unk0; } func_80290A70_G3;
extern f32 D_800CA4B8;
extern char D_800D0EF8;
typedef struct { s32 unk0; } func_80290A70_G4;
extern s32 D_800D15D0;
extern volatile s32 D_800D15E0;
typedef struct { s32 unk0; } func_80290A70_G5;
extern s32 D_800D297C;
typedef struct { s32 unk0; } func_80290A70_G6;
extern s32 D_800D7068;
typedef struct { s32 unk0; } func_80290A70_G7;
extern s32 D_800E28D0;
extern char D_8011F5D0[];
extern s32 D_8011FE88[];
extern char D_801450C8;

extern void func_80235AD0(void *);
extern void func_8026D980(void);
extern void func_8026D9D0(void);
extern void func_8026DF30(s32, s32, s32, s32, s32);
extern void func_802702EC(f32 *, PackedMatrixWords *);
extern void func_80272CD0(f32 *, s32, f32, f32);
extern void func_80273A34(f32 *, f32);
extern void func_80273DDC(void *);
extern s32 func_8028B1F8(void *, s32);
extern s32 func_8028C174(void *, s32);
extern void func_80291FE8(void *, s32, s32, s32, s32, s32, f32, f32);

typedef struct func_80290A70_S1 func_80290A70_S1;
struct func_80290A70_S1 {
    char pad0[0x26DB0];
    f32 unk26DB0;
};

void func_80290A70(void *arg0) {
    f32 matrix[16];
    s32 object;
    s32 display;
    s32 minus_one;
    s32 *resource_root;
    char *matrix_root;
    f32 *values;

    resource_root = D_8011FE88;
    D_800D15D0 = 0;
    object = func_8028B1F8(resource_root, 0xE10);
    D_800D15E0 = 0;
    values = (f32 *)(&D_800D15E0 + 1);
    values[0] = D_800CA4B0;
    values[1] = D_800CA4B0;
    values[2] = D_800CA4B0;
    values[3] = D_800CA4B0;
    minus_one = -1;
    if (object != minus_one) {
        func_80235AD0(&D_801450C8);
        func_80272CD0(matrix, 0, -100.0f, -500.0f);
        func_80273A34(matrix, ((func_80290A70_S1 *)(arg0))->unk26DB0 * D_800CA4B4);
        func_80273DDC(matrix);
        matrix_root = D_8011F5D0;
        func_802702EC(matrix, (PackedMatrixWords *)(matrix_root + D_800D297C * 0x40));
        display = func_8028C174(resource_root, object);
        func_8026D980();
        func_8026DF30(display, (s32)(matrix_root + D_800D297C * 0x40), (s32)&D_800D0EF8, 0, minus_one);
        func_8026D9D0();
        func_80291FE8(arg0, 0, D_800D7068, D_800E28D0 / 2, 0xBE, 0xA, D_800CA4B8, (&D_800CA4B8)[1]);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C52F0_4 = 255.0f;
const float unbake_rodata_800C52F4_4 = 0.17453295f;
const float unbake_rodata_800C52F8_4 = 0.400000006f;
const float unbake_rodata_800C52FC_4 = 0.699999988f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA4B0_4 = 255.0f;
const float unbake_rodata_800CA4B4_4 = 0.17453295f;
const float unbake_rodata_800CA4B8_4 = 0.400000006f;
const float unbake_rodata_800CA4BC_4 = 0.699999988f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C53C0_4 = 255.0f;
const float unbake_rodata_800C53C4_4 = 0.17453295f;
const float unbake_rodata_800C53C8_4 = 0.400000006f;
const float unbake_rodata_800C53CC_4 = 0.699999988f;
#endif
