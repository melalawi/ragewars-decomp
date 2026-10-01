#include "shared/gfx.h"
#include "shared/renderswitches.h"
/* Clips a textured screen rectangle to the viewport and emits the matching render commands. */
#define NULL ((void *)0)
/* The values func_80417BA0 loads by address:
 * 0x800E1430 = 1.0 (float, D_800E1430 in this cartridge's tables)
 */
void func_802A2898(s32 *, s32 *, s32 *, s32 *);
void func_80416D74(int);
void func_80416F4C(s32);
void func_804170B4(s32);
void func_804192F8(s32, s32, s32, s32, f32, f32, f32, f32);
void func_80415D10(f32, f32, f32, f32, u32, u32, u32, u32); /* extern */
void func_80418224(s32, s32, s32, s32, f32, f32, f32, f32); /* extern */
typedef Shared_Gfx Gfx;
extern Gfx *D_80110634;
typedef Shared_RenderSwitches RenderSwitches;
extern RenderSwitches D_80153F60;
extern s32 D_80153F68;
extern s32 D_800E32B0;
extern s32 D_800E32BC;
extern s32 D_800E32C4;
extern s32 D_800E32D0;
extern u32 D_800E32DC;
extern s32 D_800E32E0;
extern s32 D_800E32E4;

static inline void emit(u32 w0, u32 w1) {
    Gfx *cmd = D_80110634++;
    cmd->words_w0 = w0;
    cmd->words_w1 = w1;
}

/* Clips a textured screen region and emits the render commands for its visible area. */
void func_80417BA0(f32 arg0, f32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, u32 arg9) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f20;
    f32 var_f21;
    f32 var_f22;
    f32 var_f23;
    f32 var_f24;
    f32 var_f25;
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Gfx *temp_a0_3;
    Gfx *temp_a1;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_6;
    Gfx *var_v1;
    s32 temp_v1_5;
    s32 mode13; /* FAKEMATCH: retain the default render mode for dispatch. */
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    var_f25 = arg3;
    var_f24 = arg4;
    var_f20 = arg5;
    var_f21 = arg6;
    var_f22 = arg7;
    var_f23 = arg8;
    if ((D_80153F60.depth == 0) || (D_80153F60.enable == 0)) {
        D_800E32E0 = 0;
        D_800E32E4 = 0;
        func_804170B4(0xC);
        func_80416D74(5);
        if (D_800E32C4 != 7) {
            D_800E32C4 = 7;
            if (D_800E32E4 == 0) {
                D_800E32E4 = 1;
                emit(0xE7000000, 0);
            }
            emit(0xE3000C00, 0);
        }
        if (D_800E32D0 != 0xE) {
            D_800E32D0 = 0xE;
            if (D_800E32E4 == 0) {
                D_800E32E4 = 1;
                emit(0xE7000000, 0);
            }
            emit(0xD7000000, 0x80008000);
        }
        if (D_80153F60.filter == 0) {
            func_80416F4C(9);
            func_80415D10(arg0, arg1, var_f25, var_f24, arg9, arg9, arg9, arg9);
        }
    } else if (D_80153F60.filter == 0) {
        D_800E32E4 = 0;
        func_804170B4(0xC);
        mode13 = 0xD;
        var_a0 = mode13;
        if (D_80153F68 == 0) {
            var_a0 = 0xE;
        }
        if (var_a0 != D_800E32D0) {
            D_800E32D0 = var_a0;
            if (D_800E32E4 == 0) {
                D_800E32E4 = 1;
                emit(0xE7000000, 0);
            }
            if (var_a0 == mode13) {
                emit(0xD7000002, 0x80008000);
            } else if (var_a0 == 0xE) {
                emit(0xD7000000, 0x80008000);
            }
        }
        if (arg9 != D_800E32DC) {
            D_800E32DC = arg9;
            temp_v1_5 = ((arg9 >> 0x10) << 0x18) | ((arg9 & 0xFF00) << 8) | ((arg9 & 0xFF) << 8);
            emit(0xFB000000, temp_v1_5);
            emit(0xFA000000, (s32) (temp_v1_5 | (arg9 >> 0x18)));
        }
        if (D_800E32C4 != 7) {
            D_800E32C4 = 7;
            if (D_800E32E4 == 0) {
                D_800E32E4 = 1;
                emit(0xE7000000, 0);
            }
            emit(0xE3000C00, 0);
        }
        var_a0_2 = 2;
        if (D_800E32BC != 0) {
            var_a0_2 = 1;
        }
        func_80416D74(var_a0_2);
        var_s0 = (s32) arg0;
        var_s1 = (s32) arg1;
        D_800E32E0 = 0x13;
        var_s2 = (s32) ((arg0 + var_f25) - 1.0f);
        var_s3 = (s32) ((arg1 + var_f24) - 1.0f);
        if (var_s2 < var_s0) {
            temp_f0 = (f32) var_s0;
            var_s0 = var_s2;
            var_s2 = (s32) temp_f0;
            temp_f0_2 = var_f20;
            var_f20 = var_f22;
            var_f22 = temp_f0_2;
            var_f25 = -var_f25;
        }
        if (var_s3 < var_s1) {
            temp_f0_3 = (f32) var_s1;
            var_s1 = var_s3;
            var_s3 = (s32) temp_f0_3;
            temp_f0_4 = var_f21;
            var_f21 = var_f23;
            var_f23 = temp_f0_4;
            var_f24 = -var_f24;
        }
        func_802A2898(&sp20, &sp24, &sp28, &sp2C);
        if ((sp28 < var_s2) || (var_s0 < sp20) || (sp2C < var_s3) || (var_s1 < sp24)) {
            if ((sp28 >= var_s0) && (sp2C >= var_s1) && (var_s2 >= sp20) && (var_s3 >= sp24)) {
                if (var_s1 < sp24) {
                    temp_f1 = var_f23 - var_f21;
                    { /* FAKEMATCH: keep the clipping product distinct from its input delta to reproduce register allocation. */
                        f32 clip_product = ((f32) (sp24 - var_s1) / var_f24) * temp_f1;
                        temp_f1 = clip_product;
                    }
                    var_s1 = sp24;
                    var_f24 = (f32) ((var_s3 - var_s1) + 1);
                    var_f21 += temp_f1;
                }
                if (sp2C < var_s3) {
                    temp_f1 = var_f23 - var_f21;
                    { /* FAKEMATCH: keep the clipping product distinct from its input delta to reproduce register allocation. */
                        f32 clip_product = ((f32) (sp2C - var_s1) / var_f24) * temp_f1;
                        temp_f1 = clip_product;
                    }
                    var_s3 = sp2C;
                    var_f23 = var_f21 + temp_f1;
                }
                if (var_s0 < sp20) {
                    temp_f1_2 = var_f22 - var_f20;
                    { /* FAKEMATCH: keep the clipping product distinct from its input delta to reproduce register allocation. */
                        f32 clip_product = ((f32) (sp20 - var_s0) / var_f25) * temp_f1_2;
                        temp_f1_2 = clip_product;
                    }
                    var_s0 = sp20;
                    var_f25 = (f32) ((var_s2 - var_s0) + 1);
                    var_f20 += temp_f1_2;
                }
                if (sp28 < var_s2) {
                    temp_f1_2 = var_f22 - var_f20;
                    { /* FAKEMATCH: keep the clipping product distinct from its input delta to reproduce register allocation. */
                        f32 clip_product = ((f32) (sp28 - var_s0) / var_f25) * temp_f1_2;
                        temp_f1_2 = clip_product;
                    }
                    var_s2 = sp28;
                    var_f22 = var_f20 + temp_f1_2;
                }
                goto block_51;
            }
        } else {
block_51:
            if ((var_f22 < var_f20) || (var_f23 < var_f21) || (D_800E32B0 != 0)) {
                func_80418224(var_s0, var_s1, var_s2, var_s3, var_f20, var_f21, var_f22, var_f23);
            } else {
                func_804192F8(var_s0, var_s1, var_s2, var_s3, var_f20, var_f21, var_f22, var_f23);
            }
        }
    }
}
