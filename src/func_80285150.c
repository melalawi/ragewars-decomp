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
void func_80253CB0(s32, void **, void *);
void * func_80254420(s32, void *, s32);
void * func_802545A0(s32, s32, s32);
void * func_802C2490(void *, const void *, int);
M2C_UNK func_802B2590();    /* extern */
M2C_UNK func_802B2A10();    
typedef struct func_80285150_S1 func_80285150_S1;
typedef struct func_80285150_S2 func_80285150_S2;
typedef struct func_80285150_S3 func_80285150_S3;
typedef struct func_80285150_S4 func_80285150_S4;
struct func_80285150_S1 {
    void* unk0;
    s32 unk4;
};
struct func_80285150_S2 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    char pad8[0x6];
    s8 unk12;
};
struct func_80285150_S3 {
    char pad0[0x3];
    u8 unk3;
};
struct func_80285150_S4 {
    void* unk0;
    s32 unk4;
};

/* extern */

/* Unpack or copy a resource into an allocated buffer and install it. */
s32 func_80285150(void **arg0, s32 arg1) {
    s32 var_s0;
    u8 temp_v1;
    void **var_s1;
    func_80285150_S1 *temp_a2;
    func_80285150_S2 *temp_s0;
    func_80285150_S4 *temp_v0;

    temp_a2 = *arg0;
    temp_s0 = temp_a2->unk0;
    if ((temp_s0->unk0 & ~0xFF) == 0x524E4300) {
        if (arg1 != 0) {
            var_s1 = func_802545A0(0, (s32) arg0, temp_s0->unk4);
        } else {
            var_s1 = func_80254420(0, arg0, temp_s0->unk4);
        }
        if (var_s1 != NULL) {
            temp_v1 = (((func_80285150_S3 *)(temp_s0))->unk3);
            switch (temp_v1) {
            case 1:
                func_802B2590(&temp_s0->unk12, *var_s1, temp_s0->unk8, temp_s0->unk4);
                break;
            case 2:
                func_802B2A10(temp_s0, *var_s1, temp_s0->unk8, temp_s0->unk4);
                break;
            default:
                break;
            }
            var_s0 = 1;
        } else {
            var_s0 = 0;
        }
    } else if (arg1 == 0) {
        var_s1 = func_80254420(0, arg0, temp_a2->unk4);
        if (var_s1 != NULL) {
            temp_v0 = *arg0;
            var_s0 = 1;
            func_802C2490(*var_s1, temp_v0->unk0, temp_v0->unk4);
        } else {
            var_s0 = 0;
        }
    } else {
        var_s0 = 1;
        goto done;
    }
    func_80253CB0(0, arg0, var_s1);
done:
    return var_s0;
}
