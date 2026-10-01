#ifdef NON_MATCHING
/* Searches connected navigation nodes for a usable movement target and updates actor path state. */
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
/* The values func_8020AF9C loads by address:
 * 0x800C6E44 = 307.19998 (float, unnamed in this cartridge's tables)
 * 0x800C6E48 = 307.19998 (float, D_800C6E48 in this cartridge's tables)
 * 0x800C6E4C = 61.44 (float, unnamed in this cartridge's tables)
 * 0x800C6E50 = -1.0 (float, D_800C6E50 in this cartridge's tables)
 * 0x800C6E54 = -1.0 (float, D_800C6E54 in this cartridge's tables)
 */
int func_8024DED0(void *);
s32 func_8024DF4C(void *);
int func_8024DF90(void *);
int func_8024E61C(void *);
void func_80271FD8(void *, void *, void *);
s32 func_80243A80(void *, s32, f32, s32, s32 *);    /* extern */
extern M2C_UNK D_80103FF0;
extern M2C_UNK D_80104050;
extern M2C_UNK D_80104070;
extern M2C_UNK D_801040D0;

#if defined(VERSION_US_REV1)
extern f32 D_800C6E44;
#define RW_307_A D_800C6E44
#elif defined(VERSION_US)
extern f32 D_800C1C84;
#define RW_307_A D_800C1C84
#elif defined(VERSION_EU)
extern f32 D_800C1FF4;
#define RW_307_A D_800C1FF4
#elif defined(VERSION_EU_X)
extern f32 D_800C2034;
#define RW_307_A D_800C2034
#else
extern f32 D_800C1D54;
#define RW_307_A D_800C1D54
#endif
#if defined(VERSION_US_REV1)
extern f32 D_800C6E48[];
#define RW_307_B D_800C6E48[0]
#define RW_RISE D_800C6E48[1]
#elif defined(VERSION_US)
extern f32 D_800C1C88[];
#define RW_307_B D_800C1C88[0]
#define RW_RISE D_800C1C88[1]
#elif defined(VERSION_EU)
extern f32 D_800C1FF8[];
#define RW_307_B D_800C1FF8[0]
#define RW_RISE D_800C1FF8[1]
#elif defined(VERSION_EU_X)
extern f32 D_800C2038[];
#define RW_307_B D_800C2038[0]
#define RW_RISE D_800C2038[1]
#elif defined(VERSION_DE)
extern f32 D_800C1D58[];
#define RW_307_B D_800C1D58[0]
#define RW_RISE D_800C1D58[1]
#endif



#if defined(VERSION_US_REV1)
extern f32 D_800C6E50;
#define RW_NEG_A D_800C6E50
#elif defined(VERSION_US)
extern f32 D_800C1C90;
#define RW_NEG_A D_800C1C90
#elif defined(VERSION_EU)
extern f32 D_800C2000;
#define RW_NEG_A D_800C2000
#elif defined(VERSION_EU_X)
extern f32 D_800C2040;
#define RW_NEG_A D_800C2040
#elif defined(VERSION_DE)
extern f32 D_800C1D60;
#define RW_NEG_A D_800C1D60
#endif

#if defined(VERSION_US_REV1)
extern f32 D_800C6E54;
#define RW_NEG_B D_800C6E54
#elif defined(VERSION_US)
extern f32 D_800C1C94;
#define RW_NEG_B D_800C1C94
#elif defined(VERSION_EU)
extern f32 D_800C2004;
#define RW_NEG_B D_800C2004
#elif defined(VERSION_EU_X)
extern f32 D_800C2044;
#define RW_NEG_B D_800C2044
#elif defined(VERSION_DE)
extern f32 D_800C1D64;
#define RW_NEG_B D_800C1D64
#endif

typedef struct func_8020AF9C_S1 func_8020AF9C_S1;
typedef struct func_8020AF9C_S2 func_8020AF9C_S2;
typedef struct func_8020AF9C_S3 func_8020AF9C_S3;
typedef struct func_8020AF9C_S4 func_8020AF9C_S4;
typedef struct func_8020AF9C_S5 func_8020AF9C_S5;
typedef struct func_8020AF9C_S6 func_8020AF9C_S6;
typedef struct func_8020AF9C_S7 func_8020AF9C_S7;
typedef struct func_8020AF9C_S8 func_8020AF9C_S8;
typedef struct func_8020AF9C_S9 func_8020AF9C_S9;
typedef struct func_8020AF9C_S10 func_8020AF9C_S10;
typedef struct func_8020AF9C_S11 func_8020AF9C_S11;
typedef struct func_8020AF9C_S12 func_8020AF9C_S12;
typedef struct func_8020AF9C_S13 func_8020AF9C_S13;
typedef struct func_8020AF9C_S14 func_8020AF9C_S14;
typedef struct func_8020AF9C_S15 func_8020AF9C_S15;
typedef struct func_8020AF9C_S16 func_8020AF9C_S16;
typedef struct func_8020AF9C_S17 func_8020AF9C_S17;
typedef struct func_8020AF9C_S18 func_8020AF9C_S18;
typedef struct func_8020AF9C_S19 func_8020AF9C_S19;
typedef struct func_8020AF9C_S20 func_8020AF9C_S20;
typedef struct func_8020AF9C_S21 func_8020AF9C_S21;
typedef struct func_8020AF9C_S22 func_8020AF9C_S22;
typedef struct func_8020AF9C_S23 func_8020AF9C_S23;
typedef struct func_8020AF9C_S24 func_8020AF9C_S24;
typedef struct func_8020AF9C_S25 func_8020AF9C_S25;
typedef struct func_8020AF9C_S26 func_8020AF9C_S26;
typedef struct func_8020AF9C_S27 func_8020AF9C_S27;
typedef struct func_8020AF9C_S28 func_8020AF9C_S28;
typedef struct func_8020AF9C_S29 func_8020AF9C_S29;
typedef struct func_8020AF9C_S30 func_8020AF9C_S30;
typedef struct func_8020AF9C_S31 func_8020AF9C_S31;
typedef struct func_8020AF9C_S32 func_8020AF9C_S32;
typedef union func_8020AF9C_S4_U0 { u8 v0; s32 v1; } func_8020AF9C_S4_U0;
struct func_8020AF9C_S1 {
    char pad0[0x4];
    s32 unk4;
};
struct func_8020AF9C_S2 {
    char pad0[0x4];
    s32 unk4;
};
typedef struct RW_RecordTable {
    s32 stride;
    s32 count;
    char records[1];
} RW_RecordTable;
struct func_8020AF9C_S3 {
    s32* unk0;
    char pad0[0x4];
    s32* unk8;
    s32 unkC;
};
struct func_8020AF9C_S4 {
    func_8020AF9C_S4_U0 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    u8 unk10;
    char pad10[0x27];
    s32 unk38;
    char pad38[0x14];
    u8 unk50;
    char pad50[0xAF];
    s32 unk100;
    char pad100[0x54C];
    s16 unk650;
    char pad650[0x7E];
    s32 unk6D0;
    char pad6D0[0xD7C];
    s32 unk1450;
    func_8020AF9C_S5 * unk1454;
};
struct func_8020AF9C_S5 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC];
    s32 unk14;
};
struct func_8020AF9C_S6 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC];
    s32 unk14;
};
struct func_8020AF9C_S7 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x4];
    s32 unk14;
};
struct func_8020AF9C_S8 {
    char unk0[1];
};
struct func_8020AF9C_S9 {
    char pad0[0xC];
    u16 unkC;
};
struct func_8020AF9C_S10 {
    char pad0[0x4];
    s32 unk4;
    s32 unk8;
};
struct func_8020AF9C_S11 {
    char unk0[1];
};
struct func_8020AF9C_S12 {
    u16 unk0;
    u16 unk2;
};
struct func_8020AF9C_S13 {
    char pad0[0x4];
    s32 unk4;
};
struct func_8020AF9C_S14 {
    char pad0[0x4];
    s32 unk4;
};
struct func_8020AF9C_S15 {
    char unk0[1];
};
struct func_8020AF9C_S16 {
    char unk0[1];
};
struct func_8020AF9C_S17 {
    char pad0[0xC];
    union { s32 word; struct { u16 high, low; } half; } flags;
};
struct func_8020AF9C_S18 {
    char pad0[0x4];
    u8 unk4;
};
struct func_8020AF9C_S19 {
    char unk0[1];
};
struct func_8020AF9C_S20 {
    s32 unk0;
    f32 unk4;
    s32 unk8;
};
struct func_8020AF9C_S21 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};
struct func_8020AF9C_S22 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};
struct func_8020AF9C_S23 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};
struct func_8020AF9C_S24 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};
struct func_8020AF9C_S25 {
    char pad0[0x10];
    s32 unk10;
};
struct func_8020AF9C_S26 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8020AF9C_S27 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8020AF9C_S28 {
    char unk0[1];
};
struct func_8020AF9C_S29 {
    s32 unk0;
    f32 unk4;
    s32 unk8;
};
struct func_8020AF9C_S30 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8020AF9C_S31 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8020AF9C_S32 {
    char pad0[0x4];
    s32 unk4;
    s32 unk8;
};

typedef struct { s32 word[4]; } RW_ActorQuad;
typedef struct { s32 word[3]; } RW_TargetVec3;

typedef struct RW_MoveProbe {
    s32 x;
    f32 y;
    s32 z;
    s32 reserved;
    s32 mask;
    s32 preset[6];
} RW_MoveProbe;

typedef struct func_8020AF9C_Stack {
    f32 sp218, sp21C, sp220;
    char pad224[4];
    RW_MoveProbe probe;
    char pad254[4];
    s32 sp258[20];
    s32 sp2A8, sp2AC;
    RW_MoveProbe *sp2B0;
    void *sp2B4;
    s32 *sp2B8;
} func_8020AF9C_Stack;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x2c0, 0x2c4, 0x2c8, 0x2cc, 0x2d0, 0x2d4, 0x2d8, 0x2dc, 0x2e0, 0x2e4, 0x2f0, 0x2f4, 0x300, 0x304], gap at: 0x2e8. */
/* Searches connected navigation nodes for a usable movement target and updates actor path state. */
void func_8020AF9C(func_8020AF9C_S3 *arg0, func_8020AF9C_S4 *arg1) {
    s32 sp18[64];
    s32 sp118[64];
    func_8020AF9C_Stack stack;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    M2C_UNK *var_v1_5;
    M2C_UNK *var_v1_6;
    f32 var_f1;
    f32 var_f20;
    f32 var_f21;
    f32 height_adjust;
    f32 var_f22;
    s32 *temp_a0;
    s32 *temp_a3;
    s32 *temp_v1_3;
    s32 *temp_v1_4;
    s32 *temp_v1_6;
    s32 *temp_v1_8;
    s32 *var_a0;
    /* FAKEMATCH: reuse the expired edge-index cursor for the node-table pointer. */
    s32 *var_a1;
    s32 *var_a0_3;
    s32 *var_v1;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s6;
    s32 temp_s7;
    /* FAKEMATCH: reuse the current edge endpoint for the collision trace mask. */
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a0_2;
    /* FAKEMATCH: compute the path mode flag before branching on the call. */
    /* FAKEMATCH: reuse the activation result for both selected node indices. */
    s32 activation_result;
    s32 is_fifteen;
    /* FAKEMATCH: retain signed movement mode for the path test. */
    s32 signed_mode;
    s32 var_a3;
    s32 var_fp;
    s32 var_s2;
    /* FAKEMATCH: keep both selected node indices in the same local allocation. */
    s32 var_t0;
    s32 var_v0_2;
    /* FAKEMATCH: stage the trace mask in each collision-preset branch. */
    s32 var_v1_2;
    u8 temp_a0_2;
    func_8020AF9C_S9 *temp_s0;
    func_8020AF9C_S17 *temp_s0_2;
    func_8020AF9C_S18 *temp_s4;
    func_8020AF9C_S10 *temp_v0_2;
    func_8020AF9C_S6 *temp_v1;
    func_8020AF9C_S32 *temp_v1_10;
    func_8020AF9C_S7 *temp_v1_2;
    func_8020AF9C_S12 *temp_v1_5;
    func_8020AF9C_S20 *temp_v1_7;
    func_8020AF9C_S29 *temp_v1_9;
    func_8020AF9C_S4 *var_a0_4;
    func_8020AF9C_S4 *var_a0_5;
    func_8020AF9C_S4 *var_v0;
    func_8020AF9C_S4 *var_v0_3;

    var_s2 = 0;
    var_a0 = sp118;
    var_v1 = sp18;
    do {
        *var_v1 = -1;
        *var_a0 = -1;
        var_a0 = &((func_8020AF9C_S1 *)(var_a0))->unk4;
        var_s2 += 1;
        var_v1 = &((func_8020AF9C_S2 *)(var_v1))->unk4;
    } while (var_s2 < 0x40);
    temp_a3 = arg0->unk0;
    stack.sp2AC = 0;
    temp_v0 = arg1->unk38;
    temp_s7 = temp_v0 & 0x2000;
    temp_s6 = temp_v0 & 0x1000;
    func_80271FD8(&stack.sp218, &((RW_RecordTable *)temp_a3)->records[arg1->unk1454->unk4 * ((RW_RecordTable *)temp_a3)->stride], &arg1->unk8);
    if ((temp_s7 != 0) || (temp_s6 != 0)) {
        var_f20 = (stack.sp218 * stack.sp218) + (stack.sp21C * stack.sp21C) + (stack.sp220 * stack.sp220);
    } else {
        var_f20 = (stack.sp218 * stack.sp218) + (stack.sp220 * stack.sp220);
    }
    var_f22 = stack.sp21C;
    var_f21 = var_f20;
    if (var_f22 < 0.0f) {
        var_f22 = -var_f22;
    }
    temp_v1 = arg1->unk1454;
    var_fp = temp_v1->unk4;
    if (arg1->unk1450 != 0) {
        if (temp_v1->unk14 != -1) {
            activation_result = func_8024E61C(arg1);
            signed_mode = arg1->unk650;
            is_fifteen = signed_mode == 0xF;
            var_a0_2 = 0;
            if (activation_result != 0) {
                var_a0_2 = arg1->unk6D0 == 0;
                goto block_14;
            }
            if (is_fifteen || (temp_s7 != 0)) {
block_14:
                if (var_a0_2 == 0) {
                    temp_v1_2 = arg1->unk1454;
                    activation_result = temp_v1_2->unk14;
                    if (activation_result == -1) {
                        activation_result = temp_v1_2->unkC;
                    }
                    temp_v1_3 = arg0->unk0;
                    temp_s0 = ((void *)&((RW_RecordTable *)temp_v1_3)->records[activation_result * ((RW_RecordTable *)temp_v1_3)->stride]);
                    func_80271FD8(&stack.sp218, temp_s0, &arg1->unk8);
                    if ((temp_s7 != 0) || (temp_s6 != 0) || (temp_s0->unkC & 0x200)) {
                        var_f20 = (stack.sp218 * stack.sp218) + (stack.sp21C * stack.sp21C) + (stack.sp220 * stack.sp220);
                    } else {
                        var_f20 = (stack.sp218 * stack.sp218) + (stack.sp220 * stack.sp220);
                    }
                    if (var_f20 < var_f21) {
                        if (stack.sp21C < 0.0f) {
                            if (-stack.sp21C < RW_307_A) {
                                goto block_27;
                            }
                        } else if (stack.sp21C < RW_307_B) {
block_27:
                            temp_v0_2 = arg1->unk1454;
                            temp_v0_2->unk8 = (s32) temp_v0_2->unk4;
                            arg1->unk1454->unk4 = activation_result;
                        }
                    }
                } else {
                    arg1->unk1454->unk14 = -1;
                    goto block_29;
                }
            } else {
                goto block_30;
            }
        } else {
            goto block_30;
        }
    } else {
block_29:
block_30:
        var_a3 = 0;
        var_t0 = 0;
        temp_t1 = arg1->unk1454->unk4;
        if (arg0->unkC > 0) {
            height_adjust = RW_RISE;
            var_a1 = sp118;
            var_a0_3 = sp18;
            do {
                temp_v1_4 = arg0->unk8;
                temp_v1_5 = ((void *)&((RW_RecordTable *)temp_v1_4)->records[var_a3 * ((RW_RecordTable *)temp_v1_4)->stride]);
                if (temp_v1_5->unk0 == temp_t1) {
                    var_t0 += 1;
                    *var_a0_3 = (s32) temp_v1_5->unk2;
                    *var_a1 = var_a3;
                    var_a1 = &((func_8020AF9C_S13 *)(var_a1))->unk4;
                    var_a0_3 = &((func_8020AF9C_S14 *)(var_a0_3))->unk4;
                }
                if (temp_v1_5->unk2 == temp_t1) {
                    var_t0 += 1;
                    *var_a0_3 = (s32) temp_v1_5->unk0;
                    *var_a1 = var_a3;
                    var_a1 = &((func_8020AF9C_S13 *)(var_a1))->unk4;
                    var_a0_3 = &((func_8020AF9C_S14 *)(var_a0_3))->unk4;
                }
                var_a3 += 1;
            } while (var_a3 < arg0->unkC);
        }
        var_s2 = 0;
        stack.sp2A8 = var_t0;
        if (var_t0 > 0) {
            stack.sp2B0 = &stack.probe;
            stack.sp2B4 = (void *)&arg1->unk50;
            stack.sp2B8 = &stack.sp2A8;
            var_v1_2 = 0 * 4;
            do {
                var_a1 = arg0->unk0;
                activation_result = sp18[var_s2];
                temp_a0 = arg0->unk8;
                temp_s0_2 = ((void *)&((RW_RecordTable *)var_a1)->records[activation_result * ((RW_RecordTable *)var_a1)->stride]);
                temp_s4 = ((void *)&((RW_RecordTable *)temp_a0)->records[sp118[var_s2] * ((RW_RecordTable *)temp_a0)->stride]);
                if (!(temp_s0_2->flags.word & 0x300000) || (temp_s6 != 0) || (temp_s7 != 0)) {
                    func_80271FD8(&stack.sp218, temp_s0_2, &arg1->unk8);
                    if ((temp_s7 != 0) || (temp_s6 != 0)) {
                        var_f20 = (stack.sp218 * stack.sp218) + (stack.sp21C * stack.sp21C) + (stack.sp220 * stack.sp220);
                    } else {
                        var_f20 = (stack.sp218 * stack.sp218) + (stack.sp220 * stack.sp220);
                    }
                    var_f1 = stack.sp21C;
                    if (var_f1 < 0.0f) {
                        var_f1 = -var_f1;
                    }
                    temp_a0_2 = temp_s4->unk4;
                    if ((temp_a0_2 == 3) || (temp_a0_2 == 0xA) || (temp_a0_2 == 5) || ((temp_s6 == 0) && (temp_s0_2->flags.half.high & 0x20))) {
                        if (var_f1 < var_f22) {
                            if (stack.sp2AC == 0) {
                                var_f21 = RW_NEG_A;
                                stack.sp2AC = 1;
                            }
                            if ((var_f20 < var_f21) || (var_f21 == RW_NEG_B)) {
                                temp_v1_6 = arg0->unk0;
                                temp_v1_7 = ((void *)&((RW_RecordTable *)temp_v1_6)->records[activation_result * ((RW_RecordTable *)temp_v1_6)->stride]);
                                *(RW_TargetVec3 *)&stack.probe.x = *(RW_TargetVec3 *)temp_v1_7;
                                stack.probe.y += height_adjust;
                                if ((arg1->unk0.v0 == 1) && (arg1->unk100 & 0x300000)) {
block_60:
                                    temp_t1 = 0x4000;
                                    *(func_8020AF9C_S22 *)&stack.probe.mask = *(func_8020AF9C_S22 *)&D_801040D0;
                                    goto block_60_done;
                                }
                                temp_s0_3 = func_8024DED0(arg1);
                                if (func_8024DF4C(arg1) == 0) {
                                    if (temp_s0_3 == 0) {
                                        goto block_60;
                                    }
                                    temp_t1 = 0x4000;
                                    *(func_8020AF9C_S21 *)&stack.probe.mask = *(func_8020AF9C_S21 *)&D_80104050;
                                } else if (func_8024DF90(arg1) == 0) {
                                    temp_t1 = 0x4000;
                                    *(func_8020AF9C_S23 *)&stack.probe.mask = *(func_8020AF9C_S23 *)&D_80104070;
                                } else {
                                    temp_t1 = 0x4000;
                                    *(func_8020AF9C_S24 *)&stack.probe.mask = *(func_8020AF9C_S24 *)&D_80103FF0;
                                }
block_60_done:
                                var_v0 = arg1;
                                var_v1_3 = stack.sp258;
                                stack.sp2B0->mask = temp_t1;
                                do {
                                    *(RW_ActorQuad *)var_v1_3 = *(RW_ActorQuad *)var_v0;
                                    var_v0 = (void *)&var_v0->unk10;
                                    var_v1_3 = &((func_8020AF9C_S26 *)(var_v1_3))->unk10;
                                } while (var_v0 != stack.sp2B4);
                                var_v0_2 = func_80243A80(arg1, stack.probe.x, stack.probe.y, stack.probe.z, &stack.probe.mask);
                                var_a0_4 = arg1;
                                var_v1_4 = stack.sp258;
                                do {
                                    *(RW_ActorQuad *)var_a0_4 = *(RW_ActorQuad *)var_v1_4;
                                    var_v1_4 = &((func_8020AF9C_S27 *)(var_v1_4))->unk10;
                                    var_a0_4 = (void *)&var_a0_4->unk10;
                                } while (var_v1_4 != stack.sp2B8);
                                goto block_86;
                            }
                        }
                    } else if (var_f20 < var_f21) {
                        temp_v1_8 = arg0->unk0;
                        temp_v1_9 = ((void *)&((RW_RecordTable *)temp_v1_8)->records[activation_result * ((RW_RecordTable *)temp_v1_8)->stride]);
                        *(RW_TargetVec3 *)&stack.probe.x = *(RW_TargetVec3 *)temp_v1_9;
                        stack.probe.y += height_adjust;
                        if ((arg1->unk0.v0 == 1) && (arg1->unk100 & 0x300000)) {
block_75:
                            temp_t1 = 0x4000;
                                    *(func_8020AF9C_S22 *)&stack.probe.mask = *(func_8020AF9C_S22 *)&D_801040D0;
                            goto block_75_done;
                        }
                        temp_s0_4 = func_8024DED0(arg1);
                        if (func_8024DF4C(arg1) == 0) {
                            if (temp_s0_4 == 0) {
                                goto block_75;
                            }
                            temp_t1 = 0x4000;
                                    *(func_8020AF9C_S21 *)&stack.probe.mask = *(func_8020AF9C_S21 *)&D_80104050;
                        } else if (func_8024DF90(arg1) == 0) {
                            temp_t1 = 0x4000;
                                    *(func_8020AF9C_S23 *)&stack.probe.mask = *(func_8020AF9C_S23 *)&D_80104070;
                        } else {
                            temp_t1 = 0x4000;
                                    *(func_8020AF9C_S24 *)&stack.probe.mask = *(func_8020AF9C_S24 *)&D_80103FF0;
                        }
block_75_done:
                        var_v0_3 = arg1;
                        var_v1_5 = stack.sp258;
                        stack.sp2B0->mask = temp_t1;
                        do {
                            *(RW_ActorQuad *)var_v1_5 = *(RW_ActorQuad *)var_v0_3;
                            var_v0_3 = (void *)&var_v0_3->unk10;
                            var_v1_5 = &((func_8020AF9C_S30 *)(var_v1_5))->unk10;
                        } while (var_v0_3 != stack.sp2B4);
                        var_v0_2 = func_80243A80(arg1, stack.probe.x, stack.probe.y, stack.probe.z, &stack.probe.mask);
                        var_a0_5 = arg1;
                        var_v1_6 = stack.sp258;
                        do {
                            *(RW_ActorQuad *)var_a0_5 = *(RW_ActorQuad *)var_v1_6;
                            var_v1_6 = &((func_8020AF9C_S31 *)(var_v1_6))->unk10;
                            var_a0_5 = (void *)&var_a0_5->unk10;
                        } while (var_v1_6 != stack.sp2B8);
block_86:
                        if (var_v0_2 == 0) {
                            var_f21 = var_f20;
                            var_fp = activation_result;
                        }
                    }
                }
                var_s2 += 1;
                var_v1_2 = var_s2 * 4;
            } while (var_s2 < stack.sp2A8);
        }
        temp_v1_10 = arg1->unk1454;
        temp_v0_3 = temp_v1_10->unk4;
        if (temp_v0_3 != var_fp) {
            temp_v1_10->unk8 = temp_v0_3;
        }
        arg1->unk1454->unk4 = var_fp;
    }
}

#endif
