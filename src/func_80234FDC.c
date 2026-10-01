#include "shared/func_80234fdc_s1.h"
#include "shared/func_80234fdc_s2.h"
#include "shared/func_80234fdc_s5.h"
#include "shared/func_80234fdc_s4.h"
#include "shared/func_80234fdc_s6.h"
#include "shared/func_80234fdc_s3.h"
#include "shared/func_80234fdc_s7.h"
#include "shared/func_80234fdc_callback.h"
#include "shared/func_80234fdc_s8.h"
/* Updates the view and projection matrices and applies camera effects. */
#define NULL ((void *)0)


#ifndef M2C_MACROS_H
#define M2C_MACROS_H

/* Unknown types */
typedef s32 M2C_UNK;
typedef s8  M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;

/* Unknown field access, like `*(type_ptr) &expr->unk_offset` */

/* Bitwise (reinterpret) cast */
#define M2C_BITWISE(type, expr) ((type)(expr))

/* Unaligned reads */
#define M2C_LWL(expr) (expr)
#define M2C_FIRST3BYTES(expr) (expr)
#define M2C_UNALIGNED32(expr) (expr)

/* Unhandled instructions */
#define M2C_ERROR(desc) (0)
#define M2C_TRAP_IF(cond) (0)
#define M2C_BREAK() (0)
#define M2C_SYNC() (0)
#define M2C_DCACHE_CLEAN(addr) (0)
#define M2C_DCACHE_INVALIDATE(addr) (0)
#define M2C_DCACHE_CLEAN_INVALIDATE(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO(addr) (0)
#define M2C_DCACHE_BLOCK_SETZERO_LOCKED(addr) (0)
#define M2C_ICACHE_INVALIDATE(addr) (0)
#define M2C_PREFETCH(addr) (0)
#define M2C_PREFETCH_STORE(addr) (0)

#define GLUE_F64(a, b) (0.0)
#define MULT_HI(a, b) (0)
#define MULTU_HI(a, b) (0)
#define DMULT_HI(a, b) (0)
#define DMULTU_HI(a, b) (0)
#define CLZ(x) (0)
#define REVERSE_BITS(x) (0)
#define ROTATE_RIGHT(x, shift) (0)
#define ARM_RRX(x, carry) (0)
#define BSWAP32(x) (0)
#define BSWAP16(x) (0)
#define BSWAP16X2(x) (0)

/* Carry/overflow bits from partially-implemented instructions */
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)

/* Memcpy patterns */
#define M2C_MEMCPY_ALIGNED memcpy
#define M2C_MEMCPY_UNALIGNED memcpy
#define M2C_STRUCT_COPY memcpy

/* Sh2 control register loads/stores */
#define M2C_LOAD_SR() (0)
#define M2C_LOAD_GBR() (0)
#define M2C_LOAD_VBR() (0)
#define M2C_STORE_SR(a)
#define M2C_STORE_GBR(a)
#define M2C_STORE_VBR(a)

#define M2C_CMP_STR(a, b) (0)
#define M2C_TAS_B(a) (0)

#endif
/* The values func_80234FDC loads by address:
 * 0x800D2988 = 1.0 (float, D_800D2988 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800D2988: `swc1` at %lo(D_800D2988) in func_80213ED4.s)
 * 0x800C82FC = 1.0 (float, unnamed in this cartridge's tables)
 * 0x800C8300 = 0.5 (float, D_800C8300 in this cartridge's tables)
 * 0x800C8304 = 1.0 (float, D_800C8304 in this cartridge's tables)
 * 0x800C8308 = 0.8 (float, D_800C8308 in this cartridge's tables)
 * 0x800C830C = 0.5 (float, unnamed in this cartridge's tables)
 * 0x800C8310 = 1.0 (float, D_800C8310 in this cartridge's tables)
 * 0x800C8314 = 0.9 (float, unnamed in this cartridge's tables)
 * 0x800C8318 = 2.5 (float, D_800C8318 in this cartridge's tables)
 * 0x800C831C = 1.0 (float, D_800C831C in this cartridge's tables)
 * 0x800C8320 = 0.5 (float, D_800C8320 in this cartridge's tables)
 * 0x800C8324 = 0.104719765 (float, unnamed in this cartridge's tables)
 * 0x800C8328 = 1.0 (float, D_800C8328 in this cartridge's tables)
 * 0x800C832C = 0.06981318 (float, D_800C832C in this cartridge's tables)
 * 0x800C8330 = 0.16666667 (float, D_800C8330 in this cartridge's tables)
 * 0x800C8334 = 0.087266475 (float, unnamed in this cartridge's tables)
 * 0x800C8338 = 0.03490659 (float, D_800C8338 in this cartridge's tables)
 * 0x800C833C = 1.0 (float, D_800C833C in this cartridge's tables)
 * 0x800C8340 = 0.08 (float, D_800C8340 in this cartridge's tables)
 * 0x800C8344 = 10.0 (float, D_800C8344 in this cartridge's tables)
 * 0x800C8348 = 1.0 (float, D_800C8348 in this cartridge's tables)
 * 0x800C834C = 2147483600.0 (float, D_800C834C in this cartridge's tables)
 * 0x800C8350 = 45.0 (float, D_800C8350 in this cartridge's tables)
 * 0x800C8354 = 75.0 (float, unnamed in this cartridge's tables)
 * 0x800C8358 = 75.0 (float, D_800C8358 in this cartridge's tables)
 * 0x800C835C = 0.6666667 (float, unnamed in this cartridge's tables)
 * 0x800C8360 = 2.666666 (float, D_800C8360 in this cartridge's tables)
 * 0x800C8364 = 1.333333 (float, unnamed in this cartridge's tables)
 * 0x800C8368 = 0.017453294 (float, D_800C8368 in this cartridge's tables)
 * 0x800C836C = 1.2792794 (float, D_800C836C in this cartridge's tables)
 * 0x800C8370 = 1.0 (float, D_800C8370 in this cartridge's tables)
 * 0x800C8374 = 57.295776 (float, unnamed in this cartridge's tables)
 * 0x800C8378 = 0.95 (float, D_800C8378 in this cartridge's tables)
 * 0x800C837C = 16.0 (float, unnamed in this cartridge's tables)
 * 0x800C8380 = 1.0 (float, D_800C8380 in this cartridge's tables)
 * 0x800C8384 = -1.0 (float, D_800C8384 in this cartridge's tables)
 * 0x800C8388 = 0.010908309 (float, D_800C8388 in this cartridge's tables)
 * 0x800C838C = 0.008726647 (float, D_800C838C in this cartridge's tables)
 * 0x800C8390 = 128.0 (float, D_800C8390 in this cartridge's tables)
 * 0x800C8394 = 127.0 (float, unnamed in this cartridge's tables)
 * 0x800C8398 = 7168.0 (float, D_800C8398 in this cartridge's tables)
 * 0x800C839C = 0.09765625 (float, D_800C839C in this cartridge's tables)
 * 0x800C83A0 = 11.0 (float, D_800C83A0 in this cartridge's tables)
 * 0x800C83A4 = 5.0 (float, D_800C83A4 in this cartridge's tables)
 */
/* Bind each cartridge's callback table and view-matrix helper by its own symbol. */
#if defined(VERSION_US)
#define D_800D05C4 D_800CB294
#define func_802BB9D0 func_802B6830
#elif defined(VERSION_EU)
#define D_800D05C4 D_800CBF64
#define func_802BB9D0 func_802B6830
#elif defined(VERSION_EU_X)
#define D_800D05C4 D_800CC934
#elif defined(VERSION_DE)
#define D_800D05C4 D_800CB384
#define func_802BB9D0 func_802B6830
#endif
u32 func_802337C0(void *);
void func_80234DD0(char *);
int func_80245788(void);
void func_80245854(void *);
f32 func_80245990(void *);
float func_80245AC8(void);
void func_8026EFC8(f32 *, f32 *);
void func_8026F690(f32 *, f32 *, f32 *);
void func_8026F908(f32 *, f32 *, f32 *);
void func_8026FD0C(f32 *, void *);
void func_80272848(void *);
void func_80272898(f32 *);
void func_80272D20(void *, f32, f32, f32);
void func_8027302C(float *, float *);
void func_80273340(char *, float *);
void func_80273744(void *, f32);
void func_80273930(void *, f32);
void func_80273B08(void *, f32);
void func_802742B4(f32 *, f32 *);
f32 func_80274640(f32);
void func_802748E0(f32 *, f32, f32);
f32 func_80275E44(void *, f32, f32);
int func_802A33AC(void);
int func_802A33E8(void);
float func_802BB630(float);
void func_802BC06C(float *, u16 *, float, float, float, float, float);
float func_802BC200(float);
f32 func_802BC380(f32);
void func_80442A68(void *);
M2C_UNK func_802343B8();                        /* extern */
void func_802349B0(void *);                        /* extern */
M2C_UNK func_8023AFE0();                  /* extern */
void *func_802866F8();               /* extern */
M2C_UNK func_802BB9D0(f32 *, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */
extern M2C_UNK D_8011FE88;
extern void *D_80145060;
extern M2C_UNK D_801450C8;
extern s32 D_800D297C;
extern f32 D_800D2988;
extern volatile s32 D_800D2B40; /* FAKEMATCH: order the default state load before position capture. */
extern s32 D_800E28D0;
extern s32 D_800E28D4;                          /* unable to generate initializer: unknown type */
typedef Shared_func_80234FDC_S1 func_80234FDC_S1;
typedef Shared_func_80234FDC_S2 func_80234FDC_S2;
typedef Shared_func_80234FDC_S3 func_80234FDC_S3;
typedef Shared_func_80234FDC_S4 func_80234FDC_S4;
typedef Shared_func_80234FDC_S5 func_80234FDC_S5;
typedef Shared_func_80234FDC_S6 func_80234FDC_S6;
typedef Shared_func_80234FDC_S7 func_80234FDC_S7;
typedef Shared_func_80234FDC_S8 func_80234FDC_S8;







typedef Shared_Func_80234FDC_Callback Func_80234FDC_Callback;
extern Func_80234FDC_Callback D_800D05C4[];
extern func_80234FDC_S4 D_801450B8;


/* unable to generate initializer: unknown type; const */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x268, 0x26c, 0x270, 0x274, 0x278, 0x27c, 0x280, 0x284, 0x288, 0x298, 0x29c, 0x2a8, 0x2ac, 0x2b0, 0x2b4], gap at: 0x28c. */
/* Updates the actor view and projection matrices and applies camera effects. */
void func_80234FDC(func_80234FDC_S2 *arg0) {
    f32 sp28[16];
    f32 sp68[16];
    f32 spA8[16];
    f32 spE8[16];
    f32 sp128[16];
    f32 sp168[16];
    f32 sp1A8[16];
    f32 sp1E8[16];
    f32 sp228[16];
    M2C_UNK (*temp_v0)(s8 *);
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20_2;
    f32 div_stage; /* FAKEMATCH: separate projection quotient to affect float register reuse */
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f21_3;
    f32 var_f22_2;
    f32 temp_f22_3;
    f32 temp_f23;
    f32 initial_zoom; /* FAKEMATCH: split initial zoom from the later aspect ratio lifetime. */
    f32 temp_f23_3;
    f32 temp_f24;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f1;
    f32 var_f22;
    f32 var_f4;
    s32 temp_f5;
    s32 temp_v0_4;
    s32 captured_state; /* FAKEMATCH: keep the state capture separate from the earlier call result. */
    s32 var_v1_2;
    s8 *temp_s0;
    s8 *var_s1;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 var_v1_3;
    func_80234FDC_S8 *temp_s0_2;
    func_80234FDC_S6 *temp_s4;
    func_80234FDC_S1 *var_s5;
    func_80234FDC_S1 *var_v1;
    func_80234FDC_S5 *state; /* FAKEMATCH: keep later state pointer across calls. */

    var_v1 = D_80145060;
    while (var_v1 != NULL) {
        if (var_v1->unk5DC == arg0) {
            var_s5 = var_v1;
            goto actor_found;
        }
        var_v1 = var_v1->unk16E0;
    }
    var_s5 = NULL;
actor_found:
    arg0->unk18 = (f32) (arg0->unk18 + D_800D2988);
    func_802343B8(arg0);
    arg0->unk7C = 1;
    if (func_80245788() == 0) {
        temp_v0 = D_800D05C4[arg0->unk14].fn;
        if (temp_v0 != NULL) {
            temp_v0(arg0);
        }
    }
    temp_s4 = &((func_80234FDC_S3 *) arg0)->unk400[D_800D297C];
    func_802BB9D0(sp28, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f);
    if ((func_80245788() != 0) && (arg0 != &D_801450C8)) {
        func_80245854(arg0);
    }
    temp_f24 = arg0->unk5C;
    initial_zoom = arg0->unk60;
    func_802349B0(arg0);
    if (func_80245788() == 0) {
        func_802337C0(arg0->unkB8);
        func_802337C0(arg0->unkCC);
        func_802337C0(arg0->unkE0);
    }
    var_s1 = &arg0->unk160;
    func_80273340(var_s1, &arg0->unk128);
    func_8026EFC8(&arg0->unk1A0, (f32 *) var_s1);
    func_80273744(spA8, 3.1415927f);
    func_8026F690(sp68, spA8, (f32 *) var_s1);
    func_8026EFC8(spE8, sp68);
    func_8026F690(sp128, spE8, sp28);
    func_8027302C(&arg0->unk220, sp128);
    if ((var_s5 != NULL) && (var_s5->unk664 & 0x40) && (arg0->unk24 == 0) && (func_80245788() == 0)) {
        f32 temp_f20; /* FAKEMATCH: shorten complement scope */
        var_f1 = (((arg0->unk88 * 0.5f * (func_802BC200(arg0->unk90) + 1.0f)) + 0.8f) > 1.0f) ? 1.0f : ((arg0->unk88 * 0.5f * (func_802BC200(arg0->unk90) + 1.0f)) + 0.8f);
        arg0->unk80 = var_f1;
        var_f4 = (((arg0->unk8C * 0.5f * (func_802BC200(arg0->unk94) + 1.0f)) + 0.9f) > 1.0f) ? 1.0f : ((arg0->unk8C * 0.5f * (func_802BC200(arg0->unk94) + 1.0f)) + 0.9f);
        arg0->unk84 = var_f4;
        arg0->unk90 = (f32) (arg0->unk90 + (D_800D2988 * arg0->unk98));
        arg0->unk94 = (f32) (arg0->unk94 + (D_800D2988 * arg0->unk9C));
        var_f22 = var_s5->unk6C8 * 2.5f;
        var_f0 = 0.0f;
        if ((var_f22 < 0.0f) || (var_f0 = 1.0f, (var_f22 > 1.0f))) {
            var_f22 = var_f0;
        }
        func_802748E0(&arg0->unk88, 0.1f, 0.5f);
        func_802748E0(&arg0->unk8C, 0.05f, 0.5f);
        temp_f20 = 1.0f - var_f22;
        func_802748E0(&arg0->unk98, (var_f22 * 0.104719765f) + (temp_f20 * 0.06981318f), 0.16666667f);
        func_802748E0(&arg0->unk9C, (var_f22 * 0.087266475f) + (temp_f20 * 0.03490659f), 0.16666667f);
    } else {
        arg0->unk84 = 1.0f;
        arg0->unk80 = 1.0f;
    }
    temp_v0_2 = arg0->unk124;
    var_v1_2 = 0x32; /* FAKEMATCH: stage counter limit */
    if (temp_v0_2 != var_v1_2) {
        arg0->unk84 = (f32) (((f32) (var_v1_2 - temp_v0_2) * 0.08f) + 1.0f);
        temp_f2 = D_800D2988 * 10.0f;
        if (!(temp_f2 >= 2.1474836e9f)) {
            var_v1_2 = (s32) temp_f2;
        } else {
            var_v1_2 = (s32) (temp_f2 - 2.1474836e9f) | 0x80000000;
        }
        temp_v0_3 = arg0->unk124 + var_v1_2;
        var_v1_3 = temp_v0_3;
        arg0->unk124 = temp_v0_3;
        if ((u32) (var_v1_3 & 0xFFFF) >= 0x33U) {
            var_v1_3 = 0x32;
        }
        arg0->unk124 = var_v1_3;
    }
    if (func_80245788() != 0) {
        var_f22_2 = func_80245990(arg0);
    } else {
        temp_v0_4 = func_802A33AC();
        if ((temp_v0_4 == 1) && (func_802A33E8() == temp_v0_4)) {
            var_f22_2 = 45.0f;
        } else if (temp_f24 != 0.0f) {
            var_f22_2 = (temp_f24 * (initial_zoom - 75.0f)) + 75.0f;
        } else {
            var_f22_2 = 75.0f;
        }
    }
    if ((func_80245788() != 0) && (arg0 != &D_801450C8)) {
        temp_f23 = arg0->unk29C / arg0->unk2A0;
    } else if (D_801450B8.unk0 == 2) {
        temp_f23 = 0.6666667f;
        if (D_801450B8.unk122F == 0) {
            temp_f23 = 2.666666f;
        }
    } else {
        temp_f23 = 1.333333f;
    }
    var_f22_2 = var_f22_2 * 0.017453294f;
    temp_f21 = func_802BC200(var_f22_2);
    temp_f21_3 = temp_f21 / func_802BB630(var_f22_2);
    temp_f20_2 = temp_f21_3 * 1.2792794f;
    temp_f21_2 = (temp_f20_2 / temp_f23) / arg0->unk84;
    temp_f20_3 = temp_f20_2 / arg0->unk80;
    temp_f1 = 1.0f; /* FAKEMATCH: retain denominator constant in existing local */
    var_f22_2 = func_80274640(func_802BC380(temp_f1 / ((temp_f21_2 * temp_f21_2) + 1.0f)));
    var_f22_2 = var_f22_2 * 57.295776f; /* FAKEMATCH: add a use so the field-of-view pseudo wins f22. */
    temp_f0 = arg0->unk528;
    temp_f23 = temp_f20_3 / temp_f21_2;
    arg0->unk70 = temp_f23;
    arg0->unk6C = var_f22_2;
    arg0->unk74 = (f32) (temp_f0 * temp_f20_3);
    arg0->unk78 = (f32) (temp_f0 * temp_f21_2);
    if (func_80245788() != 0) {
        temp_f5 = (s32) func_80245AC8();
        if (temp_f5 > 0) {
            arg0->unk528 = (f32) temp_f5;
        }
    }
    func_802BC06C(sp168, &arg0->unk68, var_f22_2, temp_f23, 16.0f, arg0->unk528, 1.0f - (temp_f24 * 0.95f));
    func_80272D20(sp1A8, -1.0f, 1.0f, 1.0f);
    func_8026F908(sp68, sp128, (f32 *) sp168);
    temp_s0 = &arg0->unk1E0;
    func_8026F908((f32 *) temp_s0, sp68, sp1A8);
    func_80272898((f32 *) temp_s0);
    func_8026FD0C((f32 *) temp_s0, arg0->unk380[D_800D297C]);
    func_8027302C(sp1E8, sp128);
    state = &D_801450B8.state;
    if (state->unk0 == 4) {
        func_80273930(sp1E8, arg0->unk18 * 0.010908309f);
        func_80273B08(sp1E8, arg0->unk18 * 0.008726647f);
    }
    func_80272898(sp1E8);
    var_f0_2 = sp1E8[0] * 128.0f;
    if (!(var_f0_2 <= 127.0f)) {
        var_f0_2 = 127.0f;
    }
    temp_s4->unk8 = (s8) (s32) var_f0_2;
    var_f0_3 = sp1E8[4] * 128.0f;
    if (!(var_f0_3 <= 127.0f)) {
        var_f0_3 = 127.0f;
    }
    temp_s4->unk9 = (s8) (s32) var_f0_3;
    var_f0_4 = sp1E8[8] * 128.0f;
    if (!(var_f0_4 <= 127.0f)) {
        var_f0_4 = 127.0f;
    }
    temp_s4->unkA = (s8) (s32) var_f0_4;
    var_f0_5 = sp1E8[1] * 128.0f;
    if (!(var_f0_5 <= 127.0f)) {
        var_f0_5 = 127.0f;
    }
    temp_s4->unk18 = (s8) (s32) var_f0_5;
    var_f0_6 = sp1E8[5] * 128.0f;
    if (!(var_f0_6 <= 127.0f)) {
        var_f0_6 = 127.0f;
    }
    temp_s4->unk19 = (s8) (s32) var_f0_6;
    var_f0_7 = sp1E8[9] * 128.0f;
    if (!(var_f0_7 <= 127.0f)) {
        var_f0_7 = 127.0f;
    }
    temp_s4->unk1A = (s8) (s32) var_f0_7;
    temp_s4->unk0 = 0;
    temp_s4->unk1 = 0;
    temp_s4->unk2 = 0;
    temp_s4->unk3 = 0;
    temp_s4->unk4 = 0;
    temp_s4->unk5 = 0;
    temp_s4->unk6 = 0;
    temp_s4->unk7 = 0;
    temp_s4->unk10 = 0;
    temp_s4->unk11 = 0x80;
    temp_s4->unk12 = 0;
    temp_s4->unk13 = 0;
    temp_s4->unk14 = 0;
    temp_s4->unk15 = 0x80;
    temp_s4->unk16 = 0;
    temp_s4->unk17 = 0;
    func_80234DD0(arg0);
    func_802742B4(&arg0->unk150, &arg0->unkE54);
    func_80273744(&arg0->unkE94, arg0->unk138);
    if (D_801450B8.unk8 != 0) {
        func_802BC06C(sp168, &arg0->unk440, 47.5f, (f32) ((s32) D_800E28D0 / D_800E28D4), 16.0f, 7168.0f, 1.0f);
        func_80272848(sp128);
        func_8026F908(sp68, sp128, (f32 *) sp168);
        func_80272D20(sp1A8, -1.0f, 1.0f, 1.0f);
        func_8026F908(sp228, sp68, sp1A8);
        func_80272898(sp228);
        func_8026FD0C(sp228, arg0->unk448[D_800D297C]);
    }
    func_8023AFE0(&arg0->unk570, arg0);
    func_80442A68(arg0->unk554);
    if (func_80245788() != 0) {
        arg0->unk58 = func_802866F8(&D_8011FE88, &arg0->unk38);
    }
    captured_state = D_800D2B40; /* FAKEMATCH: sequence state capture before the position reads. */
    temp_s0_2 = *(func_80234FDC_S8 * volatile *)&arg0->unk58;
    temp_f21_3 = *(volatile f32 *)&arg0->unk38;
    temp_f23_3 = arg0->unk3C;
    temp_f20_4 = arg0->unk40;
    temp_f22_3 = arg0->unk44;
    arg0->unk64 = captured_state;
    if ((temp_s0_2 != NULL) && (func_80245788() == 0)) {
        temp_f1 = ((temp_f23_3 + temp_f22_3) - func_80275E44(temp_s0_2, temp_f21_3, temp_f20_4)) * 0.09765625f;
        if ((temp_f1 < 11.0f) && (temp_f1 > 5.0f)) {
            arg0->unk64 = (s32) temp_s0_2->unk1C;
        }
    }
    if (func_80245788() != 0) {
        arg0->unk64 = (s32) D_800D2B40;
    }
    if (arg0->unk5C > 0.0f) {
        arg0->unk64 = (s32) D_800D2B40;
    }
}
