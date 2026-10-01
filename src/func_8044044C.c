/* Draws a menu option as a highlighted box or as text, with state-dependent opacity. */
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
/* The values func_8044044C loads by address:
 * 0x800E24AC = 255.0 (float, D_800E24AC in this cartridge's tables)
 */
u32 func_80265370(void);
int func_802934DC(void);
void func_802AA224(s32);
void func_802AB9E4(void);
s32 func_802ABC18(s32, s32, s16, s16, f32, f32, s32);
M2C_UNK func_802A8DD4(); /* extern */
typedef struct {
    u8 enabled;
    char pad1[0x5AF - 1];
    s32 active;
} __attribute__((packed)) MenuState;
extern MenuState D_801462E5;
extern s32 D_800E5E70;

typedef struct func_8044044C_S1 func_8044044C_S1;
typedef struct func_8044044C_S2 func_8044044C_S2;
typedef struct func_8044044C_S3 func_8044044C_S3;
typedef struct func_8044044C_S4 func_8044044C_S4;
typedef struct func_8044044C_S5 func_8044044C_S5;
struct func_8044044C_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x8];
    s32 unk14;
};
struct func_8044044C_S2 {
    char pad0[0x30];
    f32 unk30;
    f32 unk34;
    char pad34[0x4];
    s32 unk3C;
};
struct func_8044044C_S3 {
    s32 unk0;
};
struct func_8044044C_S4 {
    char pad0[0x4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
    f32 unk10;
    s32 unk14;
    char pad14[0x4];
    s32 unk1C;
};
struct func_8044044C_S5 {
    char pad0[0x16];
    s16 unk16;
    char pad16[0x6];
    s16 unk1E;
};

void func_8044044C(func_8044044C_S1 *arg0, func_8044044C_S4 *arg1, s32 arg2, func_8044044C_S2 *arg3) {
    s32 var_v1;
    f32 right;
    f32 bottom;
    s32 *active;

    if (((func_802934DC() != 0) && (arg0->unk8 & 0x40000000)) || ((D_801462E5.enabled != 0) && (arg0->unk8 < 0) && (func_80265370() == 0x400000))) {
        arg3->unk3C = 1;
        if (D_800E5E70 != 3) {
            D_800E5E70 = 3;
        }
        func_802AB9E4();
        right = (f32)arg1->unk14 + (f32)arg1->unk4 * arg1->unkC;
        bottom = (f32)arg1->unk1C + (f32)arg1->unk8 * arg1->unk10;
        active = &D_801462E5.active;
        if (*active != 0) {
            if (D_801462E5.enabled == 0) {
                var_v1 = 0x80;
            } else if (arg0->unk8 < 0) {
                var_v1 = 0xFF;
            } else {
                var_v1 = 0xC0;
            }
        } else {
            var_v1 = 0x80;
        }
        func_802A8DD4(arg1->unk14, arg1->unk1C, (s32)right, (s32)bottom, 1, 0, 0, 0, 0, var_v1);
        return;
    }
    if (D_800E5E70 != 3) {
        D_800E5E70 = 3;
        func_802AA224((s32) (arg3->unk30 * (arg3->unk34 * 255.0f)));
    }
    func_802ABC18(arg0->unk14, 0, (((func_8044044C_S5 *)(arg1))->unk16), (((func_8044044C_S5 *)(arg1))->unk1E), arg1->unkC, arg1->unk10, 1);
}
