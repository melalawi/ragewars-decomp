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
extern u32 D_80154034;
typedef struct {
    u8 pad0[0x14];
    M2C_UNK **value;
} func_8043D2D0_S;
extern M2C_UNK D_800D7BB8;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BBC;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BC0;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BC4;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BC8;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BCC;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BD0;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BD4;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BD8;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BDC;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7BE0;                          /* unable to generate initializer: unknown type; const */
extern M2C_UNK D_800D7E14;                          /* unable to generate initializer: unknown type; const */

/* Selects the value associated with the current global mode and stores it in the object. */
s32 func_8043D2D0(func_8043D2D0_S *arg0) {
    switch (D_80154034) {
    default:
        arg0->value = &D_800D7E14;
        break;
    case 0:
        arg0->value = &D_800D7BB8;
        break;
    case 1:
        arg0->value = &D_800D7BBC;
        break;
    case 2:
        arg0->value = &D_800D7BC0;
        break;
    case 3:
        arg0->value = &D_800D7BC4;
        break;
    case 4:
        arg0->value = &D_800D7BC8;
        break;
    case 5:
        arg0->value = &D_800D7BCC;
        break;
    case 6:
        arg0->value = &D_800D7BD4;
        break;
    case 7:
        arg0->value = &D_800D7BD0;
        break;
    case 8:
        arg0->value = &D_800D7BD8;
        break;
    case 9:
        arg0->value = &D_800D7BDC;
        break;
    case 10:
        arg0->value = &D_800D7BE0;
        break;
    }
    return 0;
}
