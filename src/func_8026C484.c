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
void func_80253610(void *, void *);
void func_802536F4(void *, void *);
s32 func_80254094(s32, void **, s32, void *, s32);
void func_8026BC60(void);
char * func_8028FD94(int *, int);
int func_8028FE08(int *, int, int);
s32 func_8028FE1C(s32, s32, s32, s32 *);
s32 **func_802518DC(); /* extern */
extern M2C_UNK D_26D7F4;
extern s32 D_80110624;
extern s32 D_80110640;
extern s32 **D_8011064C;
extern s32 D_801153D0;
extern s32 **D_801153D8[];
extern M2C_UNK D_801157D8;
extern M2C_UNK D_800C975C;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800C9770;                          /* unable to generate initializer: unknown type */
extern M2C_UNK D_800C9784;                          
typedef struct func_8026C484_S1 func_8026C484_S1;
typedef struct func_8026C484_S2 func_8026C484_S2;
struct func_8026C484_S1 {
    char unk0[1];
};
struct func_8026C484_S2 {
    s32 unk0;
    s32 unk4;
    s8* unk8;
    s32 unkC;
};

/* unable to generate initializer: unknown type */

void func_8026C484(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
        s32 *sp28;
        s32 sp2C;
        s32 **temp_v0;
        s32 **temp_v0_4;
        s32 temp_s0;
        s32 temp_s1;
        s32 temp_v0_2;
        s32 temp_v0_3;
        s32 temp_v1;
        s8 *temp_s1_2;
        func_8026C484_S2 *temp_v1_2;
        temp_v0 = func_802518DC(0, arg0, arg0, 0x18, 0, 0, NULL, &D_800C975C, 1);
        if (temp_v0 != NULL) {
                temp_s1 = func_8028FE08(*temp_v0, arg0, 1);
                func_802536F4(NULL, temp_v0);
                temp_v0_2 = func_80254094(0, (void **) &sp28, temp_s1, &D_800C9770, 1);
                if (temp_v0_2 != 0) {
                        if (*sp28 == 0) {
                        }
                        temp_v0_3 = *sp28;
                        if (temp_v0_3 == -1 && arg3 / temp_v0_3 == 0x80000000) {
                        }
                        temp_s0 = func_8028FE1C((s32) sp28, temp_s1, arg3 % temp_v0_3, &sp2C);
                        func_802536F4(NULL, (void *) temp_v0_2);
                        temp_v0_4 = func_802518DC(0, temp_s0, temp_s0, sp2C, 0, 0, &D_26D7F4, &D_800C9784, arg5);
                        if (temp_v0_4 != NULL) {
                                temp_s1_2 = func_8028FD94(*temp_v0_4, 0);
                                if (D_8011064C != temp_v0_4 || D_80110624 != arg4 || D_80110640 == 0x20) {
                                        func_8026BC60();
                                        if (D_801153D0 != 0x100) {
                                                func_80253610(NULL, temp_v0_4);
                                                D_801153D8[D_801153D0] = temp_v0_4;
                                                D_801153D0 += 1;
                                                goto block_11;
                                        }
                                } else {
                                        block_11:
                                        D_8011064C = temp_v0_4;

                                        D_80110624 = arg4;
                                        temp_v1 = D_80110640 * 0x10;
    do { D_80110640 += 1; temp_v1_2 = (void *) &((func_8026C484_S1 *) &D_801157D8)->unk0[temp_v1]; temp_v1_2->unk0 = arg1; temp_v1_2->unkC = 0; } while (0);
                                        temp_v1_2->unk4 = arg2;
                                        temp_v1_2->unk8 = temp_s1_2;
                                }
                                func_802536F4(NULL, temp_v0_4);
                        }
                }
        }
}
