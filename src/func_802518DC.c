#ifdef NON_MATCHING
/* Looks up or requests a resource, returning its loaded data when available. */
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
void * func_80251448(s32, s32);
void * func_80252714(s32, void *, s32);
void func_80254A70(s32, s32);
s32 func_80254B2C(s32, u32, s32, u32);
void func_80254C10(s32, void *);
void func_80254E28(s32, void *);
void * func_80254E70(s32, s32);
s32 func_80255110(s32 *, void *);
s32 func_80255CB4(void *, s32);
void func_80255E78(void *, s32);
void func_80255F58(void *, s32);
void func_8025631C(void *, void *, s32, void *);
void func_802563F4(void *, void *, s32, void *, void *, s32, s32);
s32 func_802C0390(void *, void **, s32);
s32 func_802C0510(void *, s32, s32);
s32 func_802C2020();                             /* extern */
M2C_UNK func_802C2040();                         /* extern */
extern M2C_UNK D_80104570;
extern M2C_UNK D_8010510C;
extern M2C_UNK D_80105140;
extern s32 D_8010515C;
extern s32 D_80105180;
extern s32 D_8010517C;
extern s32 D_80105190;
extern s32 D_80105194;
extern M2C_UNK D_801051B8;
extern s32 D_8010A248;

typedef struct func_802518DC_S1 func_802518DC_S1;
typedef struct func_802518DC_S2 func_802518DC_S2;
typedef struct func_802518DC_S3 func_802518DC_S3;
typedef struct func_802518DC_S4 func_802518DC_S4;
typedef struct func_802518DC_S5 func_802518DC_S5;
typedef struct func_802518DC_S6 func_802518DC_S6;
typedef struct func_802518DC_S7 func_802518DC_S7;
typedef struct func_802518DC_S8 func_802518DC_S8;
typedef struct func_802518DC_S9 func_802518DC_S9;
struct func_802518DC_S1 {
    s32 unk0;
    void* unk4;
    char pad4[0x4];
    void* unkC;
};
struct func_802518DC_S2 {
    void** unk0;
    s32 unk4;
    u32 unk8;
    u32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
};
struct func_802518DC_S3 {
    char pad0[0x8];
    s32 unk8;
    s32 unkC;
};
struct func_802518DC_S4 {
    char pad0[0x10];
    s32 unk10;
};
struct func_802518DC_S5 {
    s32 unk0;
};
struct func_802518DC_S6 {
    char pad0[0x8];
    s32 unk8;
    u32 unkC;
    char padC[0x14];
    void* unk24;
};
struct func_802518DC_S7 {
    s32 unk0;
    u32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_802518DC_S8 {
    char pad0[0x14];
    s8 unk14;
    char pad14[0x1F];
    s8 unk34;
};
struct func_802518DC_S9 {
    char pad0[0x8];
    s32 unk8;
    s32 unkC;
};
typedef struct {
    char pad0[0x940];
    struct {
        func_802518DC_S6 *active;
        char pad4[0x58];
        s32 mask;
    } requests;
} func_802518DC_Manager;
extern func_802518DC_Manager D_801047E0;

void **func_802518DC(s32 arg0, u32 arg1, void *arg2, u32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    func_802518DC_S2 *sp20;
    func_802518DC_S2 **out;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s4;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    /* FAKEMATCH: Reuse the dead active-request flag for the allocation result. */
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    u32 var_s2;
    void ***temp_v0;
    void **temp_a1;
    void **temp_a1_2;
    void **temp_v0_7;
    void **var_s0;
    void *temp_v0_3;
    func_802518DC_S1 *var_v1;
    func_802518DC_S6 *var_v1_2;

    var_s2 = arg3;
    /* FAKEMATCH: Retain the caller's request mode across the lock calls. */
    temp_s4 = arg8;
    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390(&D_80105140, NULL, 1);
    } else {
        func_802C2040(temp_a0);
    }
    var_v1 = D_80105194 + (((((arg1 << 5) ^ (arg1 >> 1) ^ (arg1 >> 9) ^ (arg1 >> 0x11)) & D_80105190) * 0x10));
    out = &sp20;
    if (var_v1->unk0 != arg1) {
        goto hash_not_initial;
    }
    sp20 = var_v1->unk4;
    goto hash_done;
hash_found:
    *out = var_v1->unk4;
    goto hash_done;
hash_not_initial:
    sp20 = NULL;
    if (var_v1 == NULL) {
        goto hash_done;
    }
hash_loop:
    if (var_v1->unk0 == arg1) {
        goto hash_found;
    }
    var_v1 = var_v1->unkC;
    if (var_v1 != NULL) {
        goto hash_loop;
    }
hash_done:
    if ((sp20 != NULL) && (var_s2 >= (u32) sp20->unkC)) {
        temp_a1 = sp20->unk0;
        (((func_802518DC_S3 *)(temp_a1))->unk8) = (s32) ((((func_802518DC_S3 *)(temp_a1))->unk8) + 1);
        (((func_802518DC_S3 *)(temp_a1))->unkC) = (s32) ((((func_802518DC_S3 *)(temp_a1))->unkC) | 0x100);
        temp_a1_2 = sp20->unk0;
        (((func_802518DC_S4 *)(temp_a1_2))->unk10) = (s32) D_80105180;
        func_80255F58(&D_80104570, (s32) temp_a1_2);
        temp_v0_2 = func_802C2020();
        temp_v1_2 = D_8010515C - 1;
        D_8010515C = temp_v1_2;
        if (temp_v1_2 != 0) {
            func_802C2040(temp_v0_2);
            func_802C0510(&D_80105140, 0, 1);
        } else {
            func_802C2040(temp_v0_2);
        }
        return sp20->unk0;
    }
    temp_s4 |= D_8010517C;
    var_a0 = 0;
    if (temp_s4 == 0) {
        var_v1_2 = D_801047E0.requests.active;
        while (var_v1_2 != NULL) {
            if (var_v1_2->unk8 == arg1 && (u32) var_v1_2->unkC >= var_s2) {
                var_a0 = 1;
                break;
            }
            var_v1_2 = var_v1_2->unk24;
        }
        if (temp_s4 == 0 && var_a0 != 0) {
            goto block_66;
        }
    }
block_25:
    temp_v0_3 = func_80254E70(0, arg4);
    sp20 = temp_v0_3;
    if (temp_v0_3 != NULL) {
        if (arg6 != 0) {
            var_s1 = (arg4 & 0x1C) | 0x22;
        } else {
            var_s1 = arg4;
        }
        sp20->unk4 = 0;
        var_s0 = func_80251448(0, var_s1);
        if (var_s0 != NULL) {
            (((func_802518DC_S7 *)(var_s0))->unk8) = (s32) ((((func_802518DC_S7 *)(var_s0))->unk8) + 1);
            (((func_802518DC_S7 *)(var_s0))->unkC) = (s32) ((((func_802518DC_S7 *)(var_s0))->unkC) | 0x100);
            var_a0 = func_80254B2C(0, var_s2, ((u32) var_s1 >> 5) & 1, (u32) var_s1);
            (((func_802518DC_S7 *)(var_s0))->unk0) = var_a0;
            if (var_a0 != 0) {
                (((func_802518DC_S7 *)(var_s0))->unk4) = var_s2;
                (((func_802518DC_S7 *)(var_s0))->unkC) = (s32) ((((func_802518DC_S7 *)(var_s0))->unkC) | var_s1);
                func_80254C10(0, var_s0);
            } else {
                temp_v0_5 = (((func_802518DC_S7 *)(var_s0))->unk8) - 1;
                (((func_802518DC_S7 *)(var_s0))->unk8) = temp_v0_5;
                if (temp_v0_5 == 0) {
                    (((func_802518DC_S7 *)(var_s0))->unkC) = (s32) ((((func_802518DC_S7 *)(var_s0))->unkC) & ~0x100);
                }
                func_80254A70(0, (s32) var_s0);
                var_s0 = NULL;
            }
        }
        sp20->unk0 = var_s0;
        if (var_s0 != NULL) {
            if (var_s2 & 1) {
                var_s2 += 1;
            }
            sp20->unk8 = arg1;
            sp20->unkC = var_s2;
            sp20->unk14 = arg6;
            sp20->unk1C = arg4;
            sp20->unk18 = arg5;
            func_80255E78(&D_8010510C, (s32) sp20);
            func_80255CB4(&((func_802518DC_S8 *)(&D_8010510C))->unk14, (s32) sp20);
            if (temp_s4 != 0) {
                if (arg6 != 0) {
                    sp20->unk10 = (s32) (sp20->unk10 | 4);
                }
                temp_v0_6 = func_802C2020();
                temp_v1_3 = D_8010515C - 1;
                D_8010515C = temp_v1_3;
                if (temp_v1_3 != 0) {
                    func_802C2040(temp_v0_6);
                    func_802C0510(&((func_802518DC_S8 *)(&D_8010510C))->unk34, 0, 1);
                } else {
                    func_802C2040(temp_v0_6);
                }
                func_8025631C(&D_801051B8, arg2, (s32) var_s2, *sp20->unk0);
                if (arg6 != 0) {
                    func_80255110(&D_8010A248, sp20);
                }
                temp_a0_2 = func_802C2020();
                temp_v1_4 = D_8010515C + 1;
                D_8010515C = temp_v1_4;
                if (temp_v1_4 != 1) {
                    func_802C2040(temp_a0_2);
                    func_802C0390(&D_80105140, NULL, 1);
                } else {
                    func_802C2040(temp_a0_2);
                }
                if (arg6 != 0) {
                    sp20->unk10 = (s32) (sp20->unk10 & ~4);
                }
                temp_v0 = func_80252714(0, sp20, 0);
                if ((temp_v0 != NULL) && (temp_v0 != sp20)) {
                    temp_v0_7 = *temp_v0;
                    (((func_802518DC_S9 *)(temp_v0_7))->unk8) = (s32) ((((func_802518DC_S9 *)(temp_v0_7))->unk8) + 1);
                    (((func_802518DC_S9 *)(temp_v0_7))->unkC) = (s32) ((((func_802518DC_S9 *)(temp_v0_7))->unkC) | 0x100);
                }
                temp_v0_8 = func_802C2020();
                temp_v1_5 = D_8010515C - 1;
                D_8010515C = temp_v1_5;
                if (temp_v1_5 != 0) {
                    func_802C2040(temp_v0_8);
                    func_802C0510(&D_80105140, 0, 1);
                } else {
                    func_802C2040(temp_v0_8);
                }
                if (temp_v0 != NULL) {
                    return *temp_v0;
                }
                /* Duplicate return node #69. Try simplifying control flow for better match */
                return NULL;
            }
            temp_a0_3 = sp20->unk10;
            sp20->unk10 = (s32) (temp_a0_3 | 2);
            if (arg6 != 0) {
                sp20->unk10 = (s32) (temp_a0_3 | 0xE);
            }
            temp_v0_9 = func_802C2020(temp_a0_3);
            temp_v1_6 = D_8010515C - 1;
            D_8010515C = temp_v1_6;
            if (temp_v1_6 != 0) {
                func_802C2040(temp_v0_9);
                func_802C0510(&((func_802518DC_S8 *)(&D_8010510C))->unk34, 0, 1);
            } else {
                func_802C2040(temp_v0_9);
            }
            func_802563F4(&D_801051B8, arg2, (s32) var_s2, *sp20->unk0, &D_801047E0, (s32) sp20, 0);
            return NULL;
        }
        func_80254E28(0, sp20);
        goto block_66;
    }
block_66:
    temp_v0_10 = func_802C2020();
    temp_v1_7 = D_8010515C - 1;
    D_8010515C = temp_v1_7;
    if (temp_v1_7 != 0) {
        func_802C2040(temp_v0_10);
        func_802C0510(&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_v0_10);
    }
    return NULL;
}

#endif
