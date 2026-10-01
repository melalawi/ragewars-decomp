#include "../include/shared/func80243a80actor.h"
#include "../include/shared/func80243a80global.h"
#include "../include/shared/func80243a80state.h"
#include "../include/shared/func80243a80collision.h"
#include "../include/shared/func80243a80frame.h"
#include "../include/shared/func80243a80vec3.h"
#include "../include/shared/func80243a80bits.h"
/* Moves an actor through collision queries and resolves its position and contact state. */
#define NULL ((void *)0)
/*
 * This header contains macros emitted by m2c in "valid syntax" mode,
 * which can be enabled by passing `--valid-syntax` on the command line.
 *
 * In this mode, unhandled types and expressions are emitted as macros so
 * that the output is compilable without human intervention.
 */

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
/* The values func_80243A80 loads by address:
 * 0x800C8880 = -0.45 (float, D_800C8880 in this cartridge's tables)
 * 0x800C8884 = -0.7071 (float, unnamed in this cartridge's tables)
 * 0x800C8888 = 204.79999 (float, D_800C8888 in this cartridge's tables)
 * 0x800C888C = 1.0 (float, unnamed in this cartridge's tables)
 * 0x800C8890 = 51.199997 (float, D_800C8890 in this cartridge's tables)
 * 0x800C8894 = 1.024 (float, D_800C8894 in this cartridge's tables)
 * 0x800C8898 = 51.199997 (float, D_800C8898 in this cartridge's tables)
 */
typedef Shared_Func80243A80Actor Func80243A80Actor;
typedef Shared_Func80243A80Global Func80243A80Global;
typedef Shared_Func80243A80State Func80243A80State;
typedef Shared_Func80243A80Collision Func80243A80Collision;
s32 func_8023D148(char *);
void func_8023E44C(void *);
void func_8023E680(void *, f32, f32, f32, f32);
void func_8023E6DC(void *, void *);
void func_8023E828(void *);
void func_8023EBC4(void *);
void func_8023EBEC(void *, void *);
void func_8023EC44(void *, void *);
void func_8023ECAC(void *, u16 *);
f32 func_802417B4(f32 *);
f32 func_8024D274(void *);
f32 func_8024D388(void *);
f32 func_8024E410(void *);
f32 func_8024E454(void *);
f32 func_80274004(f32, f32);
void func_802748E0(f32 *, f32, f32);
f32 func_802752CC(void *, f32, f32);
f32 func_80275E44(void *, f32, f32);
void * func_8028C02C(void *, void *);
float func_802BB630(float);
float func_802BC200(float);
M2C_UNK func_8023CFD0();                     /* extern */
s32 func_8023D370();                         /* extern */
extern Func80243A80Global *D_80103FCC;
extern M2C_UNK D_80103FD0;
extern Func80243A80State D_801040F0;
extern M2C_UNK D_80104170;
extern M2C_UNK D_801041D0;
extern M2C_UNK D_80104338;
extern s32 D_800D0650;
extern s32 D_800D0654;
#if defined(VERSION_US_REV1)
extern float D_800C8880;
#elif defined(VERSION_US)
#define D_800C8880 D_800C36C0
extern float D_800C36C0;
#elif defined(VERSION_EU_X)
#define D_800C8880 D_800C3A80
extern float D_800C3A80;
#elif defined(VERSION_DE)
#define D_800C8880 D_800C3790
extern float D_800C3790;
#endif

#if defined(VERSION_US_REV1)
extern float D_800C8884;
#elif defined(VERSION_US)
#define D_800C8884 D_800C36C4
extern float D_800C36C4;
#elif defined(VERSION_EU_X)
#define D_800C8884 D_800C3A84
extern float D_800C3A84;
#elif defined(VERSION_DE)
#define D_800C8884 D_800C3794
extern float D_800C3794;
#endif

#if defined(VERSION_US_REV1)
extern float D_800C8888;
#elif defined(VERSION_US)
#define D_800C8888 D_800C36C8
extern float D_800C36C8;
#elif defined(VERSION_EU_X)
#define D_800C8888 D_800C3A88
extern float D_800C3A88;
#elif defined(VERSION_DE)
#define D_800C8888 D_800C3798
extern float D_800C3798;
#endif

#if defined(VERSION_US_REV1)
extern float D_800C8890;
#elif defined(VERSION_US)
#define D_800C8890 D_800C36D0
extern float D_800C36D0;
#elif defined(VERSION_EU_X)
#define D_800C8890 D_800C3A90
extern float D_800C3A90;
#elif defined(VERSION_DE)
#define D_800C8890 D_800C37A0
extern float D_800C37A0;
#endif

#if defined(VERSION_US_REV1)
extern float D_800C8894;
#elif defined(VERSION_US)
#define D_800C8894 D_800C36D4
extern float D_800C36D4;
#elif defined(VERSION_EU_X)
#define D_800C8894 D_800C3A94
extern float D_800C3A94;
#elif defined(VERSION_DE)
#define D_800C8894 D_800C37A4
extern float D_800C37A4;
#endif

#if defined(VERSION_US_REV1)
extern float D_800C8898;
#elif defined(VERSION_US)
#define D_800C8898 D_800C36D8
extern float D_800C36D8;
#elif defined(VERSION_EU_X)
#define D_800C8898 D_800C3A98
extern float D_800C3A98;
#elif defined(VERSION_DE)
#define D_800C8898 D_800C37A8
extern float D_800C37A8;
#endif

#if defined(VERSION_US_REV1)
extern float D_800C888C;
#elif defined(VERSION_US)
#define D_800C888C D_800C36CC
extern float D_800C36CC;
#elif defined(VERSION_EU_X)
#define D_800C888C D_800C3A8C
extern float D_800C3A8C;
#elif defined(VERSION_DE)
#define D_800C888C D_800C379C
extern float D_800C379C;
#endif

#if defined(VERSION_US_REV1)
extern s32 D_800D0650;
#elif defined(VERSION_US)
#define D_800D0650 D_800CB320
extern s32 D_800CB320;
#elif defined(VERSION_EU_X)
#define D_800D0650 D_800CC9C0
extern s32 D_800CC9C0;
#elif defined(VERSION_DE)
#define D_800D0650 D_800CB410
extern s32 D_800CB410;
#endif

#if defined(VERSION_US_REV1)
extern s32 D_800D0654;
#elif defined(VERSION_US)
#define D_800D0654 D_800CB324
extern s32 D_800CB324;
#elif defined(VERSION_EU_X)
#define D_800D0654 D_800CC9C4
extern s32 D_800CC9C4;
#elif defined(VERSION_DE)
#define D_800D0654 D_800CB414
extern s32 D_800CB414;
#endif

#if defined(VERSION_US_REV1)
extern M2C_UNK D_801041D0;
#elif defined(VERSION_US)
#define D_801041D0 D_800FE1D0
extern M2C_UNK D_800FE1D0;
#elif defined(VERSION_EU_X)
#define D_801041D0 D_8010A1D0
extern M2C_UNK D_8010A1D0;
#elif defined(VERSION_DE)
#define D_801041D0 D_801001D0
extern M2C_UNK D_801001D0;
#endif

/* Moves an actor through collision queries and updates its contact flags and resolved position. */
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x2d0, 0x2d4, 0x2d8, 0x2dc, 0x2e0, 0x2e4, 0x2e8, 0x2f8, 0x2fc, 0x300, 0x304], gap at: 0x2ec. */
typedef Shared_Func80243A80Frame Func80243A80Frame;

typedef Shared_Func80243A80Vec3 Func80243A80Vec3;
typedef Shared_Func80243A80Bits Func80243A80Bits;
s32 func_80243A80(Func80243A80Actor *arg0, Func80243A80Vec3 pos, u32 *arg4) {
    Func80243A80Frame frame;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 var_f2;
    s32 temp_v0;
    s32 temp_v1_3;
    s32 var_a1; /* FAKEMATCH: reuse the earlier flag local for the query loop. */
    s32 var_a1_3;
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u16 *temp_s0;
    u32 temp_a0;
    u32 temp_v1;
    u32 temp_v1_2;
    u32 var_v0_2;
    u32 loopMask; /* FAKEMATCH: keep the collision-query mask live across calls. */
    f32 dropDistance; /* FAKEMATCH: preserve the displacement across the query call. */
    Func80243A80Actor *attachedActor; /* FAKEMATCH: retain the selected actor across flag writes. */
    s32 collisionOne; /* FAKEMATCH: keep the collision kind across loop calls. */
    f32 hitY; /* FAKEMATCH: keep the hit elevation for the landing update. */
    f32 actorY; /* FAKEMATCH: stage actor elevation before hit elevation. */
    f32 savedY; /* FAKEMATCH: stage source elevation before displacement load. */

    func_8023EBC4(&frame.sp18);
    __builtin_memcpy(&D_80103FCC->x, &arg0->room, 12);
    arg0->flags = (u32) (arg0->flags & ~0x18);
    frame.sp18 = arg0;
    var_a1 = 0;
    if (arg0->type == 1) {
        var_a1 = (u32) var_a1 < (arg0->status & 0x300000);
    }
    frame.sp1C = var_a1;
    temp_f22 = func_8024E454(arg0);
    temp_f21 = func_8024D388(arg0);
    temp_f20 = func_8024D274(arg0);
    func_8023E680(&frame.sp18, temp_f22, temp_f21, temp_f20, func_8024E410(arg0));
    *(Func80243A80Vec3 *)&frame.sp5C = *(Func80243A80Vec3 *)&arg0->x;
    __builtin_memcpy(&frame.sp68, &pos, 12);
    __builtin_memcpy(&frame.sp8C, &arg0->room, 12);
    frame.spC4 = arg0->collision;
    var_v1 = 0;
    if ((*arg4 & 0x200) && (arg0->velY <= 0.0f)) {
        var_v1 = 1;
    }
    frame.sp3C = var_v1;
    frame.sp38 = ((u32) *arg4 >> 1) & 1;
    frame.sp40 = (((u32) arg0->flags >> 2) ^ 1) & 1;
    frame.sp44 = 1;
    frame.sp54 = arg0->flags;
    frame.sp34 = frame.sp28 * D_800C8880;
    frame.sp50 = ((u32) *arg4 >> 0x13) & 1;
    frame.sp58 = arg4;
    func_8023CFD0(&frame.sp18);
    if ((frame.sp3C != 0) && (frame.sp54 & 7) && !(frame.sp54 & 0x2000)) {
        __builtin_memcpy(&frame.sp210, &arg0->contactX, 12);
        frame.sp1E0 = arg0->x;
        frame.sp1E4 = arg0->groundY;
        frame.sp1E8 = arg0->z;
        func_8023E6DC(&frame.sp18, &frame.sp1C8);
    }
    if ((frame.sp1C != 0) || (frame.sp5C != frame.sp68) || (frame.sp60 != frame.sp6C) || (var_v0 = 0, (frame.sp64 != frame.sp70))) {
        var_v1_2 = ++D_800D0650;
        if (var_v1_2 < D_800D0654) {
            var_v1_2 = D_800D0654;
        }
        D_800D0654 = var_v1_2;
        if ((arg4 != &D_80104338) && (arg4 != &D_801041D0) && (arg4 != &D_80103FD0) && (arg4 != &D_80104170)) {
            arg0->attached = NULL;
            frame.sp54 &= ~0x7B;
        }
        frame.sp54 &= ~0x80;
        if (arg0->type == 1) {
            frame.sp2C8 = arg0->angle;
        } else {
            frame.sp2C8 = 0.0f;
        }
        temp_f22_2 = func_802BC200(frame.sp2C8);
        temp_f0 = func_802BB630(frame.sp2C8);
        frame.sp54 &= ~0x2000;
        temp_v1 = *arg4;
        if (temp_v1 & 4) {
            var_s0 = 1;
        } else if (temp_v1 & 0x800) {
            var_s0 = 3;
        } else {
            if (arg0->type == 1) var_s0 = 4;
            else var_s0 = 1;
        }
        var_v1_3 = var_s0;
        if (var_s0 >= 3) {
            var_v1_3 = 2;
        }
        frame.sp48 = var_v1_3;
        var_v1_4 = var_s0 + 1;
        if (var_v1_4 >= 4) {
            var_v1_4 = 3;
        }
        frame.sp4C = var_v1_4;
        func_8023E828(&frame.sp18);
        var_s3 = 0;
        loopMask = 0x80000;
        collisionOne = 1;
loop_34:
        if (*arg4 & loopMask) {
            frame.spC4 = func_8028C02C(frame.spC4, &frame.sp68);
        }
        temp_v0 = func_8023D148((s8 *) &frame.sp18);
        var_a1 = 0;
        if (temp_v0 != 0) {
            if (frame.spC8 != collisionOne) {
                if (frame.spC8 == 4) {
                    if (((frame.sp110 * -temp_f22_2) + (frame.sp118 * -temp_f0)) < D_800C8884) {
                        frame.sp54 |= 0x80;
                        func_8023EBEC(&frame.sp18, &frame.spC8);
                    }
                } else {
                    goto block_42;
                }
            } else {
                frame.sp38 = 0;
block_42:
                frame.sp54 &= ~0x80;
            }
            func_8023E44C(&frame.sp18);
            var_s3 += 1;
            var_a1 = func_8023D370(&frame.sp18);
            __builtin_memcpy(&frame.sp5C, &frame.sp198, 12);
            __builtin_memcpy(&frame.sp68, &frame.sp1B0, 12);
            __builtin_memcpy(&frame.sp8C, &frame.sp1BC, 12);
        } else {
            __builtin_memcpy(&frame.sp5C, &frame.sp68, 12);
        }
        var_s0 -= 1;
        if (var_a1 == 0) {
        } else if (var_s0 != 0) {
            goto loop_34;
        }
        __builtin_memcpy(&arg0->x, &frame.sp5C, 12);
        __builtin_memcpy(&arg0->room, &frame.sp8C, 12);
        frame.sp54 &= ~4;
        if (*arg4 & 0x40000) {
            __builtin_memcpy(&frame.sp68, &frame.sp5C, 12);
            frame.sp44 = 0;
            frame.sp48 = 0;
            frame.sp4C = 0;
            savedY = frame.sp6C;
            dropDistance = D_800C8888;
            frame.sp6C = savedY - dropDistance;
            __builtin_memcpy(&frame.sp2A8, &D_801040F0, sizeof(D_801040F0));
            frame.sp58 = &frame.sp2A8;
            temp_v1_2 = frame.sp2A8 & 0xFFE7FFF7;
            frame.sp2A8 = temp_v1_2;
            frame.sp2A8 = temp_v1_2 | (*arg4 & 0x180008);
            frame.sp50 = 0;
            func_8023E828(&frame.sp18);
            arg0->contactX = 0.0f;
            arg0->contactZ = 0.0f;
            arg0->contactBits = D_800C888C;
            arg0->groundY = (f32) (arg0->y - dropDistance);
loop_49:
            if (func_8023D148((s8 *) &frame.sp18) != 0) {
                if (frame.spD0 == 7) {
                    frame.sp3C = 0;
                }
                func_8023D370(&frame.sp18);
                var_a1_3 = 0;
                arg0->groundY = frame.sp19C;
                __builtin_memcpy(&arg0->contactX, &frame.sp110, 12);
                actorY = arg0->y;
                hitY = frame.sp19C;
                var_f2 = actorY - hitY;
                if ((frame.sp3C != 0) && (var_f2 < D_800C8890)) {
                    frame.sp3C = 0;
                    arg0->velY = 0.0f;
                    var_f2 = arg0->velY;
                    arg0->y = hitY;
                }
                if ((arg0->velY <= 0.0f) && (var_f2 < D_800C8894)) {
                    if (frame.spC8 == 5) {
                        frame.sp54 |= 0x2004;
                        func_8023EC44(&frame.sp18, &frame.spC8);
                        var_a1_3 = 1;
                        *frame.sp58 &= ~8;
                    } else {
                        if (frame.spC8 < 5) goto no_attach;
                        if (frame.spC8 >= 0xA) goto no_attach;
                        if (frame.spC8 < 7) goto no_attach;
                        if (frame.sp11C->type != 1) goto no_attach;
                        attachedActor = frame.sp11C;
                        arg0->attached = attachedActor;
                        temp_v1_3 = attachedActor->flags;
                        attachedActor->flags = (s32) (temp_v1_3 | 0x20);
                        if (frame.sp1C != 0) {
                            attachedActor->flags = (s32) (temp_v1_3 | 0x60);
                        }
                        var_v0_2 = (frame.sp54 & ~3) | 2;
                        goto attach_done;
no_attach:
                        var_v0_2 = frame.sp54 | 4;
attach_done:
                        frame.sp54 = var_v0_2;
                    }
                }
                if (var_a1_3 != 0) {
                    __builtin_memcpy(&frame.sp5C, &frame.sp198, 12);
                    goto block_71;
                }
            } else {
                var_a1_3 = 0;
block_71:
                if (var_a1_3 == 0) {

                } else {
                    goto loop_49;
                }
            }
        }
        temp_a0 = frame.sp54;
        frame.sp54 = temp_a0 & ~0x100;
        if ((frame.sp38 != 0) || (temp_a0 & 0x80)) {
            __builtin_memcpy(&frame.sp5C, &arg0->x, 12);
            __builtin_memcpy(&frame.sp68, &arg0->x, 12);
            frame.sp44 = 0;
            frame.sp48 = 0;
            frame.sp4C = 0;
            frame.sp58 = &D_801040F0.flags;
            frame.sp68 -= temp_f22_2 * D_800C8898;
            frame.sp70 -= temp_f0 * D_800C8898;
            func_8023E828(&frame.sp18);
            if ((func_8023D148((s8 *) &frame.sp18) != 0) && (frame.spC8 == 4)) {
                if (frame.sp38 != 0) {
                    func_8023D370(&frame.sp18);
                    arg0->x = frame.sp198;
                    arg0->z = frame.sp1A0;
                    frame.sp54 |= 0x100;
                    func_8023EBEC(&frame.sp18, &frame.spC8);
                    if (arg0->type == 1) {
                        func_802748E0(&frame.sp2C8, frame.sp2C8 - func_80274004(frame.sp2C8, func_802417B4((f32 *) &frame.spC8)), 0.9f);
                        arg0->angle = frame.sp2C8;
                    }
                }
            } else {
                frame.sp54 &= ~0x80;
            }
        }
        if (*arg4 & 0x80000) {
            temp_s0 = func_8028C02C(frame.spC4, &arg0->x);
            frame.sp54 &= ~0x5000;
            if ((temp_s0 != NULL) && ((((Func80243A80Collision *)temp_s0)->flags & 0x41) == 0x41) && (func_80275E44(temp_s0, arg0->x, arg0->z) <= arg0->y)) {
                temp_f0_2 = func_802752CC(temp_s0, arg0->x, arg0->z);
                if (arg0->y <= temp_f0_2) {
                    frame.sp54 |= 0x4000;
                }
                temp_f0_2 += frame.sp34;
                if (arg0->y <= temp_f0_2) {
                    frame.sp54 |= 0x1000;
                }
                func_8023ECAC(&frame.sp18, temp_s0);
            }
            arg0->collision = temp_s0;
        }
        arg0->flags = frame.sp54;
        return var_s3;
    }
    return 0;
}
