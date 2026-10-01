#ifdef NON_MATCHING
/* Updates actor movement and blends position and contact-plane corrections. */
#if defined(VERSION_US)
#define D_800D0644 D_800CB314
#define D_800C8724 D_800C3564
#define D_800C8728 D_800C3568
#define D_800C872C D_800C356C
#define D_800C8730 D_800C3570
#define D_800C8734 D_800C3574
#define D_800C8738 D_800C3578
#define D_800C8760 D_800C35A0
#define D_800C8764 D_800C35A4
#define D_800C8768 D_800C35A8
#define D_800C876C D_800C35AC
#define D_800C8770 D_800C35B0
#define D_800C8774 D_800C35B4
#define D_800C8778 D_800C35B8
#define D_800C877C D_800C35BC
#elif defined(VERSION_EU)
#define D_800D0644 D_800CBFE4
#define D_800C8724 D_800C38E4
#define D_800C8728 D_800C38E8
#define D_800C872C D_800C38EC
#define D_800C8730 D_800C38F0
#define D_800C8734 D_800C38F4
#define D_800C8738 D_800C38F8
#define D_800C8760 D_800C3920
#define D_800C8764 D_800C3924
#define D_800C8768 D_800C3928
#define D_800C876C D_800C392C
#define D_800C8770 D_800C3930
#define D_800C8774 D_800C3934
#define D_800C8778 D_800C3938
#define D_800C877C D_800C393C
#elif defined(VERSION_EU_X)
#define D_800D0644 D_800CC9B4
#define D_800C8724 D_800C3924
#define D_800C8728 D_800C3928
#define D_800C872C D_800C392C
#define D_800C8730 D_800C3930
#define D_800C8734 D_800C3934
#define D_800C8738 D_800C3938
#define D_800C8760 D_800C3960
#define D_800C8764 D_800C3964
#define D_800C8768 D_800C3968
#define D_800C876C D_800C396C
#define D_800C8770 D_800C3970
#define D_800C8774 D_800C3974
#define D_800C8778 D_800C3978
#define D_800C877C D_800C397C
#elif defined(VERSION_DE)
#define D_800D0644 D_800CB404
#define D_800C8724 D_800C3634
#define D_800C8728 D_800C3638
#define D_800C872C D_800C363C
#define D_800C8730 D_800C3640
#define D_800C8734 D_800C3644
#define D_800C8738 D_800C3648
#define D_800C8760 D_800C3670
#define D_800C8764 D_800C3674
#define D_800C8768 D_800C3678
#define D_800C876C D_800C367C
#define D_800C8770 D_800C3680
#define D_800C8774 D_800C3684
#define D_800C8778 D_800C3688
#define D_800C877C D_800C368C
#endif

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
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
/* The values func_8023D370 loads by address:
 * 0x800D0644 = 0.02 (float, unnamed in this cartridge's tables; not a literal: a variable, its value in the image, since D_800D0640: func_8023E6DC.c names it and does not declare it const)
 * 0x800C8724 = 10.24 (float, D_800C8724 in this cartridge's tables)
 * 0x800C8728 = 30.72 (float, D_800C8728 in this cartridge's tables)
 * 0x800C872C = 0.2048 (float, D_800C872C in this cartridge's tables)
 * 0x800C8730 = 1.0 (float, D_800C8730 in this cartridge's tables)
 * 0x800C8734 = 4.096 (float, D_800C8734 in this cartridge's tables)
 * 0x800C8738 = 1.0485761 (float, D_800C8738 in this cartridge's tables)
 * 0x800C8760 = 1.0 (float, D_800C8760 in this cartridge's tables)
 * 0x800C8764 = 1.0 (float, D_800C8764 in this cartridge's tables)
 * 0x800C8768 = 1.0 (float, D_800C8768 in this cartridge's tables)
 * 0x800C876C = 1.0 (float, D_800C876C in this cartridge's tables)
 * 0x800C8770 = 1.0 (float, D_800C8770 in this cartridge's tables)
 * 0x800C8774 = 1.0 (float, D_800C8774 in this cartridge's tables)
 * 0x800C8778 = 1.0 (float, D_800C8778 in this cartridge's tables)
 * 0x800D0640 = 0.02 (float, D_800D0640 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800D0640: func_8023E6DC.c names it and does not declare it const)
 * 0x800C877C = 10.24 (float, D_800C877C in this cartridge's tables)
 */
void func_8023EC44(void *, void *);
void func_80271FA4(void *, void *, void *);
void func_8027200C(void *, void *, f32);
void func_80272038(void *, f32, void *, void *);
void func_802720EC(f32 *);
void * func_802721F0(void *, void *, void *, f32);
void * func_80272284(void *, void *, void *);
M2C_UNK func_8027246C();    /* extern */
extern f32 D_800D0640, D_800D0644;                          /* unable to generate initializer: unknown type */

extern f32 D_800C8760, D_800C8764, D_800C8768, D_800C876C, D_800C8770, D_800C8774, D_800C8778;
extern f32 D_800C8724, D_800C8728, D_800C872C, D_800C8734, D_800C8738, D_800C877C, D_800C8730;

typedef struct { s32 x; f32 y; s32 z; } Position;
typedef struct { f32 x, y, z; } Velocity;
typedef struct { f32 height; s32 other[2]; } Contact;
typedef struct { char pad0[0xC]; f32 limit; } Plane;
typedef union ActorState {
    struct {
    char pad0[0x24]; s32 f24;
    char pad28[4]; s32 f2C; volatile s32 f30; /* FAKEMATCH: preserve the repeated motion-counter reads and their ordering. */ s32 f34, f38, f3C;
    Plane *plane;
    Position pos44, pos50;
    Velocity vel;
    char pad68[0xC]; Position normal;
    f32 f80;
    char pad84[0x2C]; s32 fB0; f32 fB4; s32 fB8;
    char padBC[8]; s32 fC4; char padC8[4]; Contact contacts[3]; char padF0[8];
    Position surface;
    char pad104[0x78]; f32 f17C;
    Position pos180;
    char pad18C[0xC]; Position pos198, pos1A4;
    };
    /* FAKEMATCH: this overlay preserves the actor-relative contact-scan base and displacement. */
    Contact contactScan[36];
} ActorState;
typedef Position Vec3;

/* Updates the actor movement state and blends position and contact-plane corrections. */
s32 func_8023D370(ActorState *arg0) {
    Vec3 sp10, sp20, sp30, sp40, sp50, sp60, sp70;
    M2C_UNK *temp_s1_2;
    M2C_UNK *var_s0;
    f32 scaleBase;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f0;
    f32 var_f1;
    s32 temp_a0;
    s32 loopCount; /* FAKEMATCH: separate contact-loop bound lifetime. */
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_s0;
    void *temp_s0_2;
    Plane *temp_s1;
    Contact *var_a0;
    void *var_a0_2;
    void *var_a1;
    void *var_s1;
    void *var_s2;

    temp_s1 = arg0->plane;
    var_v0 = 0;
    if (arg0->fB0 != 0) {
        func_802720EC(&arg0->surface);
        temp_f0 = D_800D0644 * D_800C8724;
        arg0->pos198 = arg0->pos50;
        arg0->pos1A4 = arg0->normal;
        temp_f2 = arg0->f80;
        if ((temp_f0 <= temp_f2) && (arg0->fB8 != 7)) {
            temp_f1 = arg0->f17C - (temp_f0 / temp_f2);
            arg0->f17C = temp_f1;
            func_80272038(&arg0->pos180, temp_f1, &arg0->pos44, &arg0->pos50);
        }
        if (arg0->f24 != 0) {
            var_v1 = 1;
            if (arg0->fB0 == 3) {
                temp_a0 = arg0->fC4;
                var_f1 = arg0->contacts[0].height;
                if (var_v1 < temp_a0) {
                    loopCount = temp_a0;
                    var_a0 = &arg0->contactScan[1];
                    do {
                        var_f0 = var_a0[17].height;
                        if (!(var_f1 <= var_f0)) {
                            var_f0 = var_f1;
                        }
                        var_f1 = var_f0;
                        var_v1 += 1;
                        var_a0 += 1;
                    } while (var_v1 < loopCount);
                }
                temp_f2_2 = var_f1 - arg0->pos44.y;
                if ((temp_f2_2 > 0.0f) && (temp_f2_2 <= D_800C8728)) {
                    arg0->pos180 = arg0->pos44;
                    arg0->pos198 = arg0->pos50;
                    arg0->pos1A4 = arg0->normal;
                    temp_f2_3 = temp_f2_2 + D_800C872C;
                    arg0->f17C = 0.0f;
                    arg0->pos180.y = (f32) (arg0->pos180.y + temp_f2_3);
                    arg0->pos198.y = (f32) (arg0->pos198.y + temp_f2_3);
                    var_v0 = 1;
                    goto final_return;
                }
                goto block_14;
            }
        }
block_14:
        if (arg0->fB8 == 6) {
            var_v0_2 = 2;
            if (arg0->f24 == 0) {
                var_v0_2 = 3;
            }
            arg0->fB8 = var_v0_2;
        }
        if ((arg0->fB8 == 3) && (temp_s1->limit < D_800C8730) && (arg0->f80 < D_800C8734)) {
            /* FAKEMATCH: volatile reads preserve the original velocity load order. */
            temp_f0_2 = *(volatile f32 *)&arg0->vel.x;
            temp_f1_2 = *(volatile f32 *)&arg0->vel.z;
            var_v0_3 = 1;
            if (!(((temp_f0_2 * temp_f0_2) + (temp_f1_2 * temp_f1_2)) < D_800C8738)) {
                var_v0_3 = 2;
            }
            arg0->fB8 = var_v0_3;
        }
        temp_v1 = arg0->fB0;
        if (temp_v1 < 3) {
            if (temp_v1 <= 0) goto decrement_f30;
            temp_v0 = arg0->f34;
            if (temp_v0 != 0) {
                arg0->f34 = (s32) (temp_v0 - 1);
                goto block_30;
            }
            goto block_31;
        }
decrement_f30:
        temp_v0_2 = arg0->f30;
        if (temp_v0_2 != 0) {
            arg0->f30 = (s32) (temp_v0_2 - 1);
        }
block_30:
        if (arg0->f34 == 0) {
block_31:
            arg0->vel.y = 0.0f;
        }
        var_s5 = 0;
        if ((arg0->f30 != 0) || (arg0->vel.x = arg0->vel.z = 0.0f, (arg0->f30 != 0)) || (arg0->f34 != 0)) {
            var_s5 = 1;
        }
        temp_v0_3 = arg0->fB8;
        switch (temp_v0_3) {
        case 7:
            if (arg0->f2C != 0) {
                arg0->pos1A4 = arg0->normal;
            }
            if (var_s5 != 0) {
                arg0->pos198 = arg0->pos50;
            }
            if (arg0->f38 != 0) {
                if (arg0->fB0 == 5) {
                    arg0->f3C = (s32) (arg0->f3C ^ 0x1000);
                    func_8023EC44(arg0, &arg0->fB0);
                }
                if (arg0->fB0 == 6) {
                    arg0->f3C = (s32) (arg0->f3C ^ 0x4000);
                    func_8023EC44(arg0, &arg0->fB0);
                }
            }
            goto block_70;
        case 1:
        case 8:
            if (arg0->f2C != 0) {
                arg0->pos1A4.x = 0;
                arg0->pos1A4.y = 0;
                arg0->pos1A4.z = 0;
            }
            if (var_s5 != 0) {
                arg0->pos198 = arg0->pos180;
                goto final_zero;
            }
        default:
            var_v0 = 0;
            goto final_zero;
        case 3:
            if (arg0->f2C != 0) {
                func_802721F0(&sp70, &arg0->normal, &arg0->surface, temp_s1->limit);
                arg0->pos1A4 = sp70;
                temp_a0_2 = (void *)(&arg0->pos1A4);
                temp_f1 = arg0->fB4;
                temp_f0 = D_800C8760;
                func_8027200C(temp_a0_2, temp_a0_2, temp_f0 - temp_f1);
            }
            if (var_s5 != 0) {
                temp_f0 = arg0->f17C;
                scaleBase = D_800C8764;
                func_8027200C(&sp10, &arg0->vel, scaleBase - temp_f0);
                var_s0 = &sp20;
                func_802721F0(var_s0, &sp10, &arg0->surface, temp_s1->limit);
                func_8027200C(var_s0, var_s0, scaleBase - arg0->fB4);
                var_a0_2 = (void *)(&arg0->pos198);
                var_a1 = (void *)(&arg0->pos180);
                goto block_69;
            }
            goto block_70;
        case 2:
            if (arg0->f2C != 0) {
                func_80272284(&sp70, &arg0->normal, &arg0->surface);
                arg0->pos1A4 = sp70;
                temp_a0_3 = (void *)(&arg0->pos1A4);
                temp_f1 = arg0->fB4;
                temp_f0 = D_800C8768;
                func_8027200C(temp_a0_3, temp_a0_3, temp_f0 - temp_f1);
            }
            if (var_s5 != 0) {
                temp_f0 = arg0->f17C;
                scaleBase = D_800C876C;
                func_8027200C(&sp10, &arg0->vel, scaleBase - temp_f0);
                var_s2 = (void *)(&arg0->surface);
                var_s0 = &sp30;
                func_80272284(var_s0, &sp10, var_s2);
                goto block_67;
            }
            goto block_70;
        case 4:
            if (arg0->f2C != 0) {
                func_8027246C(&sp70, &arg0->normal, &arg0->surface);
                arg0->pos1A4 = sp70;
            }
            if (var_s5 != 0) {
                temp_f1 = arg0->f17C;
                temp_f0 = D_800C8770;
                func_8027200C(&sp10, &arg0->vel, temp_f0 - temp_f1);
                var_s2 = (void *)(&arg0->surface);
                var_s0 = &sp30;
                func_8027246C(var_s0, &sp10, var_s2);
                var_s1 = (void *)(&arg0->pos198);
                goto block_68;
            }
            goto block_70;
        case 5:
            if (arg0->f2C != 0) {
                temp_s1_2 = (M2C_UNK *)(&arg0->normal);
                temp_s0 = (void *)(&arg0->surface);
                func_80272284(&sp40, temp_s1_2, temp_s0);
                func_8027246C(&sp50, temp_s1_2, temp_s0);
                temp_s0_2 = (void *)(&arg0->pos1A4);
                func_80272038(temp_s0_2, 0.25f, &sp40, &sp50);
                temp_f1 = arg0->fB4;
                temp_f0 = D_800C8774;
                func_8027200C(temp_s0_2, temp_s0_2, temp_f0 - temp_f1);
            }
            if (var_s5 != 0) {
                temp_f0 = arg0->f17C;
                scaleBase = D_800C8778;
                func_8027200C(&sp10, &arg0->vel, scaleBase - temp_f0);
                var_s2 = (void *)(&arg0->surface);
                /* FAKEMATCH: this scope keeps the blend-output address after both projection calls. */
                do {
                    func_80272284(&sp40, &sp10, var_s2);
                    func_8027246C(&sp50, &sp10, var_s2);
                } while (0);
                var_s0 = &sp30;
                func_80272038(var_s0, 0.25f, &sp40, &sp50);
                goto block_67;
            }
            goto block_70;
        }
block_67:
        func_8027200C(var_s0, var_s0, scaleBase - arg0->fB4);
        var_s1 = (void *)(&arg0->pos198);
block_68:
        func_80271FA4(var_s1, &arg0->pos180, var_s0);
        var_s0 = &sp60;
        func_8027200C(var_s0, var_s2, D_800D0640 * D_800C877C);
        var_a0_2 = var_s1;
        var_a1 = var_a0_2;
block_69:
        func_80271FA4(var_a0_2, var_a1, var_s0);
block_70:
        var_v0 = 1;
        goto final_return;
    }
final_zero:
    var_v0 = 0;
final_return:
    return var_v0;
}

#endif
