#ifdef NON_MATCHING
/* Measures a text widget and computes its content bounds. */
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
/* The values func_8043F69C loads by address:
 * 0x800E2458 = 1.0 (float, D_800E2458 in this cartridge's tables)
 * 0x800E2478 = 0.10810811 (float, D_800E2478 in this cartridge's tables)
 * 0x800E28D4 = 3.36e-43 (float, D_800E28D4 in this cartridge's tables)
 * 0x800E247C = 0.5 (float, unnamed in this cartridge's tables)
 * 0x800E2480 = 0.0045045046 (float, D_800E2480 in this cartridge's tables)
 * 0x800E2484 = 0.0045045046 (float, unnamed in this cartridge's tables)
 * 0x800E2488 = 0.0035211267 (float, D_800E2488 in this cartridge's tables)
 * 0x800E28D0 = 4.48e-43 (float, D_800E28D0 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800E28D0: `sw` at %lo(D_800E28D0) in func_8040BC30.s)
 * 0x800E248C = 0.0045045046 (float, unnamed in this cartridge's tables)
 */
u32 func_80265370(void);
int func_802934DC(void);
void func_802AB940(s32, s32, s32 *, s32 *);
u8 *func_8043F290(void *);
f32 func_80442460(u8 *, f32, f32);
char * func_80442BC8(char *);
extern u8 D_801462E5;
extern s32 D_800E28D4;
extern M2C_UNK D_800E28D0;                          /* unable to generate initializer: unknown type */
#if defined(VERSION_US_REV1)
extern f32 D_800E2458;
extern f32 D_800E2478;
extern f32 D_800E247C;
extern f32 D_800E2480;
extern f32 D_800E2484;
extern f32 D_800E2488;
extern f32 D_800E248C;
#elif defined(VERSION_US)
#define D_800E2458 D_800DD0D8
extern f32 D_800DD0D8;
#define D_800E2478 D_800DD0F8
extern f32 D_800DD0F8;
#define D_800E247C D_800DD0FC
extern f32 D_800DD0FC;
#define D_800E2480 D_800DD100
extern f32 D_800DD100;
#define D_800E2484 D_800DD104
extern f32 D_800DD104;
#define D_800E2488 D_800DD108
extern f32 D_800DD108;
#define D_800E248C D_800DD10C
extern f32 D_800DD10C;
#elif defined(VERSION_EU)
#define D_800E2458 D_800EEAA8
extern f32 D_800EEAA8;
#define D_800E2478 D_800EEAC8
extern f32 D_800EEAC8;
#define D_800E247C D_800EEACC
extern f32 D_800EEACC;
#define D_800E2480 D_800EEAD0
extern f32 D_800EEAD0;
#define D_800E2484 D_800EEAD4
extern f32 D_800EEAD4;
#define D_800E2488 D_800EEAD8
extern f32 D_800EEAD8;
#define D_800E248C D_800EEADC
extern f32 D_800EEADC;
#elif defined(VERSION_DE)
#define D_800E2458 D_800DE428
extern f32 D_800DE428;
#define D_800E2478 D_800DE448
extern f32 D_800DE448;
#define D_800E247C D_800DE44C
extern f32 D_800DE44C;
#define D_800E2480 D_800DE450
extern f32 D_800DE450;
#define D_800E2484 D_800DE454
extern f32 D_800DE454;
#define D_800E2488 D_800DE458
extern f32 D_800DE458;
#define D_800E248C D_800DE45C
extern f32 D_800DE45C;
#endif
typedef struct { s32 kind; f32 width, height; s32 rest[4]; } Font;
extern Font D_800E5E74[];
#if defined(VERSION_EU)
extern u8 D_80152789;
#endif                          
typedef struct func_8043F69C_S1 func_8043F69C_S1;
typedef struct func_8043F69C_S2 func_8043F69C_S2;
typedef struct func_8043F69C_S3 func_8043F69C_S3;
typedef struct func_8043F69C_S4 func_8043F69C_S4;
typedef struct func_8043F69C_S5 func_8043F69C_S5;
typedef struct func_8043F69C_S6 func_8043F69C_S6;
typedef struct func_8043F69C_S7 func_8043F69C_S7;
typedef struct func_8043F69C_S8 func_8043F69C_S8;
typedef struct func_8043F69C_S9 func_8043F69C_S9;
typedef struct func_8043F69C_S10 func_8043F69C_S10;
typedef struct func_8043F69C_S11 func_8043F69C_S11;
typedef struct func_8043F69C_S12 func_8043F69C_S12;
typedef struct func_8043F69C_S13 func_8043F69C_S13;
typedef struct func_8043F69C_S14 func_8043F69C_S14;
typedef struct func_8043F69C_S15 func_8043F69C_S15;
typedef struct func_8043F69C_S16 func_8043F69C_S16;
typedef struct func_8043F69C_S17 func_8043F69C_S17;
typedef struct func_8043F69C_S18 func_8043F69C_S18;
typedef struct func_8043F69C_S19 func_8043F69C_S19;
typedef struct func_8043F69C_S20 func_8043F69C_S20;
typedef struct func_8043F69C_S21 func_8043F69C_S21;
typedef struct func_8043F69C_S22 func_8043F69C_S22;
typedef struct func_8043F69C_S23 func_8043F69C_S23;
typedef union func_8043F69C_S3_U4 { s32 v0; s8 v1; } func_8043F69C_S3_U4;
struct func_8043F69C_S1 {
    char pad0[0x4];
    s16 unk4;
    char pad4[0x2];
    s32 unk8;
    s16 unkC;
    s16 unkE;
    char padE[0x4];
    void* unk14;
    char pad14[0xC];
    void* unk24;
};
struct func_8043F69C_S2 {
    char pad0[0x44];
    s8* unk44;
};
struct func_8043F69C_S3 {
    char pad0[0x4];
    func_8043F69C_S3_U4 unk4;
    s32 unk8;
    f32 unkC;
    f32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};
struct func_8043F69C_S4 {
    char unk0[1];
};
struct func_8043F69C_S5 {
    s32 unk0;
    f32 unk4;
    f32 unk8;
};
struct func_8043F69C_S6 {
    u8* unk0;
};
struct func_8043F69C_S7 {
    char pad0[0x1];
    s8 unk1;
};
struct func_8043F69C_S8 {
    s32 unk0;
    s32 unk4;
};
struct func_8043F69C_S9 {
    char pad0[0x4];
    f32 unk4;
    f32 unk8;
};
struct func_8043F69C_S10 {
    char pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
};
struct func_8043F69C_S11 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_8043F69C_S12 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_8043F69C_S13 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8043F69C_S14 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8043F69C_S15 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_8043F69C_S16 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_8043F69C_S17 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8043F69C_S18 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8043F69C_S19 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_8043F69C_S20 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};
struct func_8043F69C_S21 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8043F69C_S22 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    M2C_UNK unk10;
};
struct func_8043F69C_S23 {
    char pad0[0x24];
    s32 unk24;
    s32 unk28;
};

/* unable to generate initializer: unknown type */

typedef struct { s32 value; s16 mode, reserved; s32 flags, fieldC, field10; void *text; s32 field18, spacing, field20, field24; } Text;
typedef struct { s32 field0, width, height, rest[6]; } Metrics;
#if defined(VERSION_EU)
#define TEXT_CONTENT(widget) ((u8 **)(widget)->text)[language]
#else
#define TEXT_CONTENT(widget) ((u8 **)(widget)->text)[0]
#endif
/* Measures a text widget and computes its content bounds. */
void func_8043F69C(Text *arg0, Metrics *arg1) {
    Text current;
    Metrics first, second, third;
    M2C_UNK sp3C;
    M2C_UNK sp40;
    M2C_UNK sp64;
    M2C_UNK sp68;
    M2C_UNK sp8C;
    M2C_UNK sp90;
    M2C_UNK sp10;
    s16 sp14;
    s32 sp24;
    s32 sp38;
    s32 sp60;
    s32 sp88;
    M2C_UNK *var_v0_10;
    M2C_UNK *var_v0_12;
    M2C_UNK *var_v0_8;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_5;
    M2C_UNK *var_v1_7;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f3;
    s16 temp_v1;
    s32 *var_v0_11;
    s32 *var_v0_7;
    s32 *var_v0_9;
    s32 *var_v1_2;
    s32 *var_v1_4;
    s32 *var_v1_6;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v1_8;
    func_8043F69C_S10 *temp_v0;
    u8 *var_v0_3;
    u8 *var_v0_4;
    u32 temp_v1_2;
    u32 temp_v1_3;
    u8 var_v1;
    Font *temp_s1;
    Font *temp_s1_2;
    func_8043F69C_S23 *temp_v0_2;

    u32 language;

    temp_v0 = (func_8043F69C_S10 *)func_80442BC8((((func_8043F69C_S2 *)(((func_8043F69C_S1 *)(arg0))->unk24))->unk44));
    (((func_8043F69C_S3 *)(arg1))->unk10) = D_800E2458;
    (((func_8043F69C_S3 *)(arg1))->unkC) = D_800E2458;
    temp_v1 = (((func_8043F69C_S1 *)(arg0))->unk4);
    switch (temp_v1) {
    case 0:
    case 5:
        var_a0 = 0;
        switch ((u32)arg0->flags & 0x3FE0) {
        case 0x20: var_a0 = 0; break;
        case 0x40: var_a0 = 1; break;
        case 0x80: var_a0 = 2; break;
        case 0x100: var_a0 = 3; break;
        case 0x200: var_a0 = 4; break;
        case 0x400: var_a0 = 5; break;
        case 0x800: var_a0 = 6; break;
        case 0x1000: var_a0 = 7; break;
        case 0x2000: var_a0 = 8; break;
        default: var_a0 = 0; break;
        }
#if defined(VERSION_EU)
        language = D_80152789;
        temp_s1 = &D_800E5E74[var_a0 + language * 9];
#else
        temp_s1 = &D_800E5E74[var_a0];
#endif
        if (temp_s1->kind == 0) {
            temp_f20 = temp_s1->width;
            if ((((func_8043F69C_S1 *)(arg0))->unk4) == 5) {
                var_v0_3 = func_8043F290(arg0);
            } else {
                var_v0_3 = TEXT_CONTENT(arg0);
            }
            var_f0 = func_80442460((u8 *) var_v0_3, temp_f20, temp_f20);
        } else {
            var_s0 = 0;
            if ((((func_8043F69C_S1 *)(arg0))->unk4) == 5) {
                var_v0_4 = func_8043F290(arg0);
            } else {
                var_v0_4 = TEXT_CONTENT(arg0);
            }
            while (var_v0_4 != NULL && *var_v0_4 != 0 && *var_v0_4 != '\n') {
                var_v0_4++;
                var_s0++;
            }
            var_f0 = (f32) var_s0 * temp_s1->width;
        }
        (((func_8043F69C_S3 *)(arg1))->unk4.v0) = (s32) var_f0;
        if (arg0->flags & 0x08000000) {
            var_f0_2 = (f32) D_800E28D4 * D_800E2478;
        } else if ((temp_s1->kind == 2) && (D_800E28D4 >= 0xDF)) {
            var_f0_2 = (temp_s1->height + D_800E247C) * (f32) D_800E28D4 * D_800E2480;
        } else {
            var_f0_2 = temp_s1->height * (f32) D_800E28D4 * D_800E2480;
        }
        arg1->height = (s32) var_f0_2;
        (((func_8043F69C_S3 *)(arg1))->unk4.v0) = (s32) (((((func_8043F69C_S3 *)(arg1))->unk4.v0) * (((func_8043F69C_S8 *)(&D_800E28D0))->unk0)) / 284);
        break;
    case 4:
        var_a0_2 = 0;
        switch ((u32)arg0->flags & 0x3FE0) {
        case 0x20: var_a0_2 = 0; break;
        case 0x40: var_a0_2 = 1; break;
        case 0x80: var_a0_2 = 2; break;
        case 0x100: var_a0_2 = 3; break;
        case 0x200: var_a0_2 = 4; break;
        case 0x400: var_a0_2 = 5; break;
        case 0x800: var_a0_2 = 6; break;
        case 0x1000: var_a0_2 = 7; break;
        case 0x2000: var_a0_2 = 8; break;
        default: var_a0_2 = 0; break;
        }
#if defined(VERSION_EU)
        language = D_80152789;
        temp_s1_2 = &D_800E5E74[var_a0_2 + language * 9];
#else
        temp_s1_2 = &D_800E5E74[var_a0_2];
#endif
        (((func_8043F69C_S3 *)(arg1))->unk4.v0) = (s32) temp_s1_2->width;
        (((func_8043F69C_S3 *)(arg1))->unk8) = (s32) (temp_s1_2->height * (f32) D_800E28D4 * D_800E2484);
        break;
    case 1:
        if (((func_802934DC() != 0) && ((((func_8043F69C_S1 *)(arg0))->unk8) & 0x40000000)) || ((D_801462E5 != 0) && ((((func_8043F69C_S1 *)(arg0))->unk8) < 0) && (func_80265370() == 0x400000))) {
            (((func_8043F69C_S3 *)(arg1))->unk4.v0) = 0x11C;
            (((func_8043F69C_S3 *)(arg1))->unk8) = 0xDE;
        } else {
            func_802AB940((s32) (((func_8043F69C_S1 *)(arg0))->unk14), 0, &((func_8043F69C_S3 *)(arg1))->unk4.v0, &((func_8043F69C_S3 *)(arg1))->unk8);
        }
        if (((((func_8043F69C_S1 *)(arg0))->unk8) & 0x10000000) && (temp_f3 = (f32) (((func_8043F69C_S3 *)(arg1))->unk4.v0), (temp_f3 != 0.0f)) && (temp_f2 = (f32) (((func_8043F69C_S3 *)(arg1))->unk8), (temp_f2 != 0.0f))) {
            var_f3 = temp_v0->unk29C / temp_f3;
            var_f0_4 = temp_v0->unk2A0 / temp_f2;
        } else {
            var_f3 = (f32) (((func_8043F69C_S8 *)(&D_800E28D0))->unk0) * D_800E2488;
            var_f0_4 = (f32) D_800E28D4 * D_800E248C;
        }
        (((func_8043F69C_S3 *)(arg1))->unkC) = var_f3;
        (((func_8043F69C_S3 *)(arg1))->unk10) = var_f0_4;
        break;
    case 2:
        first = *arg1;
        current = *arg0;
        current.mode = 0;
        func_8043F69C(&current, &first);
        second = *arg1;
        current = *arg0;
        current.mode = 1;
        current.text = NULL;
        func_8043F69C(&current, &second);
        third = *arg1;
        current = *arg0;
        current.mode = 1;
        current.text = NULL;
        func_8043F69C(&current, &third);
        var_v1_8 = second.width + third.width;
        if (var_v1_8 < first.width) {
            var_v1_8 = first.width;
        }
        (((func_8043F69C_S3 *)(arg1))->unk4.v0) = var_v1_8;
        (((func_8043F69C_S3 *)(arg1))->unk8) = first.height + second.height + ((third.height - second.height) / 2);
        break;
    case 3:
        temp_v0_2 = (func_8043F69C_S23 *)(((func_8043F69C_S1 *)(arg0))->unk14);
        (((func_8043F69C_S3 *)(arg1))->unk4.v0) = (s32) (((f32) temp_v0_2->unk24 * temp_v0->unk29C) / (f32) (((func_8043F69C_S8 *)(&D_800E28D0))->unk0));
        (((func_8043F69C_S3 *)(arg1))->unk8) = (s32) (((f32) temp_v0_2->unk28 * temp_v0->unk2A0) / (f32) D_800E28D4);
        break;
    default:
        (((func_8043F69C_S3 *)(arg1))->unk4.v0) = 1;
        (((func_8043F69C_S3 *)(arg1))->unk8) = 1;
        break;
    }
    temp_a0 = (((func_8043F69C_S1 *)(arg0))->unk8);
    temp_f1 = (f32) (((((func_8043F69C_S1 *)(arg0))->unkC) * (((func_8043F69C_S8 *)(&D_800E28D0))->unk0)) / 284);
    if (!(temp_a0 & 0x8000)) {
        if (temp_a0 & 0x4000) {
            (((func_8043F69C_S3 *)(arg1))->unk14) = (s32) ((f32) (((func_8043F69C_S3 *)(arg1))->unk18) + temp_f1);
        } else {
            (((func_8043F69C_S3 *)(arg1))->unk14) = (s32) temp_f1;
        }
    }
    (((func_8043F69C_S3 *)(arg1))->unk18) = (s32) ((f32) (((func_8043F69C_S3 *)(arg1))->unk14) + ((f32) (((func_8043F69C_S3 *)(arg1))->unk4.v0) * (((func_8043F69C_S3 *)(arg1))->unkC)));
    temp_a0_2 = (((func_8043F69C_S1 *)(arg0))->unk8);
    temp_f1_2 = (f32) (((((func_8043F69C_S1 *)(arg0))->unkE) * D_800E28D4) / 222);
    if (!(temp_a0_2 & 0x20000)) {
        if (temp_a0_2 & 0x10000) {
            (((func_8043F69C_S3 *)(arg1))->unk1C) = (s32) ((f32) (((func_8043F69C_S3 *)(arg1))->unk20) + temp_f1_2);
        } else {
            (((func_8043F69C_S3 *)(arg1))->unk1C) = (s32) temp_f1_2;
        }
    }
    (((func_8043F69C_S3 *)(arg1))->unk20) = (s32) ((f32) (((func_8043F69C_S3 *)(arg1))->unk1C) + ((f32) (((func_8043F69C_S3 *)(arg1))->unk8) * (((func_8043F69C_S3 *)(arg1))->unk10)));
}

#endif
