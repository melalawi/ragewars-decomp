#include "span_1000/code_80219480.h"
#include "span_1000/types.h"
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
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

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
s32 func_80216BF4_de(void *, void *, void *);













/* Checks whether the player's current weapon can lock onto the target. */
s32 func_8021CD94_de(func_8021CD70_S1 *arg0, func_8021CD70_S2 *arg1) {
    s16 temp_a1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s16 shielded;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_4;
    func_8021CD70_S3 *temp_a1_2;
    func_8021CD70_S4 *temp_a1_3;
    func_8021CD70_S4 *temp_v0;

    temp_a1 = arg0->unk62E;
    if (temp_a1 == 0x12) {
        if (arg1->unk100 & 0x300000) {
            if (arg1->unk18->unk14 & 0x20) {
                temp_v1 = arg1->unk1A4;
                if ((temp_v1 != 0x26) && (temp_v1 != temp_a1) && (arg1->unk174 != 0)) {
                    temp_v0 = arg1->unk5DC;
                    if (temp_v0 == NULL) {
                        var_v0 = 0;
                    } else {
                        var_v0 = temp_v0->unk564 != 0;
                    }
                    if (var_v0 != 0) {
                        return 0;
                    }
                    goto block_25;
                }
                /* Duplicate return node #35. Try simplifying control flow for better match */
                return 0;
            }
            goto block_34;
        }
        temp_a1_2 = arg1->unk18;
        if (temp_a1_2->unk0 == 1) {
            if ((temp_a1_2->unk14 & 0x2400) == 0) {
                goto block_34;
            }
            temp_v1_2 = arg1->unk1A4;
            if (((temp_v1_2 == 0x21) || (temp_v1_2 == 0x34) ||
                 (temp_v1_2 == 0x3C) || (temp_v1_2 == 0x3D)) ||
                (arg1->unk174 == 0)) {
                goto block_34;
            }
            goto block_25;
        }
        goto block_19;
    }
block_19:
    temp_v1_3 = arg1->unk18->unk0;
    if (temp_v1_3 == 4) goto block_24;
    if (temp_v1_3 < 5) return 0;
    if (temp_v1_3 == 7) goto block_34;
    if (temp_v1_3 == 11) goto block_27;
    return 0;
block_24:
    do {
        if (arg1->unk174 == 0) goto block_34;
    } while (0);
block_25:
    return func_80216BF4_de(arg0, &arg0->unk170, arg1) == 0;
block_27:
    temp_v1_4 = arg1->unk1A4;
    var_a0 = 0;
    if (temp_v1_4 == 0x26) goto block_33;
    if (temp_v1_4 == 0x12) goto block_33;
    if (arg1->unk174 == 0) goto block_33;
    var_v0_2 = 0;
    temp_a1_3 = arg1->unk5DC;
    if (temp_a1_3 != NULL) {
        /* FAKEMATCH: keep the shield predicate in a named flag for register selection. */
        shielded = temp_a1_3->unk564 != 0;
        var_v0_2 = shielded;
    }
    if (var_v0_2 == 0) var_a0 = 1;
block_33:
    return var_a0;
block_34:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5118_B[] = {0x67, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x65, 0x74, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA2D8_B[] = {0x67, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x65, 0x74, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C4E58_4 = 51.1999969f;
const float unbake_rodata_800C4E5C_4 = 1024.0f;
const float unbake_rodata_800C4E60_4 = 204.799988f;
const float unbake_rodata_800C4E64_4 = 0.00122070312f;
const float unbake_rodata_800C4E68_4 = 0.859999955f;
const float unbake_rodata_800C4E6C_4 = 0.899999976f;
const float unbake_rodata_800C4E70_4 = 0.0399999991f;
const float unbake_rodata_800C4E74_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4E20_4 = 4.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E9C_4 = 65536.0f;
#endif
