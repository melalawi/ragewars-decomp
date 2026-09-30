/* Updates an effect actor's orientation, size, collision response, and nearby actor interactions. */
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
/* The values func_8027B790 loads by address:
 * 0x800D2988 = 1.0 (float, D_800D2988 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800D2988: `swc1` at %lo(D_800D2988) in func_80213ED4.s)
 * 0x800C9CE8 = 0.25 (float, D_800C9CE8 in this cartridge's tables)
 * 0x800C9CEC = 1.4142135 (float, D_800C9CEC in this cartridge's tables)
 * 0x800C9CF0 = 0.5 (float, D_800C9CF0 in this cartridge's tables)
 * 0x800C9CF4 = 32.0 (float, D_800C9CF4 in this cartridge's tables)
 * 0x800C9CF8 = 6.0 (float, D_800C9CF8 in this cartridge's tables)
 * 0x800C9CFC = 32.0 (float, unnamed in this cartridge's tables)
 * 0x800C9D00 = 0.017453294 (float, D_800C9D00 in this cartridge's tables)
 * 0x800D2990 = 1.0 (float, D_800D2990 in this cartridge's tables; not a literal: a variable, its value in the image, since D_800D2990: `swc1` at %lo(D_800D2990) in func_80294608.s)
 * 0x800C9D04 = 0.06666667 (float, unnamed in this cartridge's tables)
 * 0x800C9D08 = 10.24 (float, D_800C9D08 in this cartridge's tables)
 * 0x800C9D0C = 4096.0 (float, unnamed in this cartridge's tables)
 * 0x800C9D10 = 400.0 (float, D_800C9D10 in this cartridge's tables)
 * 0x800C9D14 = 4096.0 (float, D_800C9D14 in this cartridge's tables)
 * 0x800C9D18 = 400.0 (float, D_800C9D18 in this cartridge's tables)
 * 0x800C9D1C = 10.24 (float, unnamed in this cartridge's tables)
 * 0x800C9D20 = 0.5 (float, D_800C9D20 in this cartridge's tables)
 * 0x800C9D24 = 0.001 (float, D_800C9D24 in this cartridge's tables)
 */
f32 func_8024D274(void *);
void func_80271FD8(void *, void *, void *);
void func_802720EC(f32 *);
f32 func_8027272C(f32 *, f32 *);
s32 func_80274544(void);
void func_8027B498(void *);
void func_8027C324(void *);
void func_8027C5A0(void *);
void func_8027C808(void *);
void func_8027CA7C(void *);
void func_80282E6C(void *, void *);
void func_80283E2C(void *);
void func_80283F34(void *);
s32 func_80284408(void *);
void func_80284544(void *, void *);
s32 func_80243A80(void *, f32, f32, f32, void *);   /* extern */
#if defined(VERSION_US)
#define func_8027ADBC func_8027AD3C
#endif
M2C_UNK func_8027ADBC();                      /* extern */
M2C_UNK func_8027CCD0();                      /* extern */
M2C_UNK func_8027D47C();                      /* extern */
M2C_UNK func_80284200();                      
typedef struct func_8027B790_S1 func_8027B790_S1;
typedef struct func_8027B790_S2 func_8027B790_S2;
typedef struct func_8027B790_S3 func_8027B790_S3;
typedef struct func_8027B790_S4 func_8027B790_S4;
typedef struct func_8027B790_S5 func_8027B790_S5;
typedef struct func_8027B790_S6 func_8027B790_S6;
typedef struct func_8027B790_S7 func_8027B790_S7;
typedef struct func_8027B790_S8 func_8027B790_S8;
typedef struct func_8027B790_S9 func_8027B790_S9;
typedef struct func_8027B790_Point {
    f32 x;
    f32 y;
    f32 z;
} func_8027B790_Point;
typedef union func_8027B790_Sample {
    func_8027B790_Point xyz;
    struct { u32 x, y, z; } bits;
} func_8027B790_Sample;
typedef union func_8027B790_S1_U8 { f32 v0; s8 v1; u8 v2; } func_8027B790_S1_U8;
typedef union func_8027B790_PositionView {
    func_8027B790_Point xyz;
    struct { func_8027B790_S1_U8 x; f32 y; f32 z; } components;
} func_8027B790_PositionView;
typedef union func_8027B790_S1_U174 { f32 v0; u8 v1; } func_8027B790_S1_U174;
struct func_8027B790_S1 {
    char pad0[0x4];
    u16 unk4;
    char pad4[0x2];
    func_8027B790_PositionView position;
    s32 unk14;
    char pad14[0x4];
    func_8027B790_Point velocity;
    char pad24[0x10];
    s32 unk38;
    char pad38[0x20];
    s32 unk5C;
    char pad5C[0xB8];
    func_8027B790_S5 * unk118;
    char pad118[0x10];
    void* unk12C;
    char pad12C[0x4];
    u8* unk134;
    char pad134[0x8];
    f32 unk140;
    f32 unk144;
    f32 unk148;
    s16 unk14C;
    char pad14C[0x2];
    f32 unk150;
    f32 unk154;
    f32 unk158;
    f32 unk15C;
    f32 unk160;
    f32 unk164;
    func_8027B790_Point previousPosition;
    func_8027B790_S1_U174 unk174;
    char pad174[0x4];
    f32 unk17C;
    f32 unk180;
    f32 unk184;
    f32 unk188;
    f32 unk18C;
    f32 unk190;
    f32 unk194;
    char pad194[0x1C];
    s32 unk1B4;
    char pad1B4[0x1];
    s8 unk1B9;
    char pad1B9[0x2];
    f32 unk1BC;
    char pad1BC[0x10];
    s8 unk1D0;
    s8 unk1D1;
};
struct func_8027B790_S2 {
    u8 unk0;
    char pad0[0xFF];
    s32 unk100;
    char pad100[0xD4];
    void* unk1D8;
};
struct func_8027B790_S3 {
    char pad0[0x122C];
    s32 unk122C;
};
struct func_8027B790_S4 {
    char pad0[0x100];
    u32 unk100;
    char pad100[0x6C];
    s32 unk170;
    s32 unk174;
    char pad174[0x2C];
    s8 unk1A4;
};
struct func_8027B790_S5 {
    s32 unk0;
    char pad0[0xC];
    s16 unk10;
};
struct func_8027B790_S6 {
    char pad0[0xD8];
    func_8027B790_Point velocity;
};
struct func_8027B790_S7 {
    char pad0[0x8];
    func_8027B790_Sample point;
    char pad10[0x16CC];
    void* unk16E0;
};
struct func_8027B790_S8 {
    u8* unk0;
    char pad0[0x4];
    u8 unk8;
    char pad8[0x7F];
    s32 unk88;
    char pad88[0x4];
    u8 unk90;
    char pad90[0xB];
    s32 unk9C;
    u8 unkA0;
    char padA0[0x13];
    s32 unkB4;
    u8 unkB8;
    char padB8[0xB];
    s32 unkC4;
    u8 unkC8;
};
struct func_8027B790_S9 {
    s32 unk0;
};
typedef struct func_8027B790_EffectGlobals {
    s32 collisionFlag;
    char pad4[0x24];
    func_8027B790_S9 effectFlag;
} func_8027B790_EffectGlobals;
typedef struct func_8027B790_Bounds {
    f32 minX, minY, minZ;
    f32 maxX, maxY, maxZ;
} func_8027B790_Bounds;

/* extern */
extern func_8027B790_S6 *D_80103FCC;
extern func_8027B790_S8 D_801041F0;
#if defined(VERSION_US_REV1)
extern s32 D_801042A0;
#define RW_EFFECT_MODE D_801042A0
#elif defined(VERSION_US)
extern s32 D_800FE2A0;
#define RW_EFFECT_MODE D_800FE2A0
#elif defined(VERSION_EU)
extern s32 D_801102A0;
#define RW_EFFECT_MODE D_801102A0
#elif defined(VERSION_EU_MUL)
extern s32 D_8010A2A0;
#define RW_EFFECT_MODE D_8010A2A0
#endif
extern s32 D_801042A4;
#if defined(VERSION_US_REV1)
extern func_8027B790_S9 D_801042B4;
#define RW_EFFECT_FLAG D_801042B4
#elif defined(VERSION_US)
extern func_8027B790_S9 D_800FE2B4;
#define RW_EFFECT_FLAG D_800FE2B4
#elif defined(VERSION_EU)
extern func_8027B790_S9 D_801102B4;
#define RW_EFFECT_FLAG D_801102B4
#elif defined(VERSION_EU_MUL)
extern func_8027B790_S9 D_8010A2B4;
#define RW_EFFECT_FLAG D_8010A2B4
#endif
extern func_8027B790_EffectGlobals D_8010428C;
extern M2C_UNK D_80121990;
extern void *D_80145060;
extern f32 D_800D2988;
extern f32 D_800D2990;
#if defined(VERSION_US_REV1)
extern f32 D_800C9CE8;
#define RW_QUARTER D_800C9CE8
#elif defined(VERSION_US)
extern f32 D_800C4B28;
#define RW_QUARTER D_800C4B28
#elif defined(VERSION_EU)
extern f32 D_800C4EA8;
#define RW_QUARTER D_800C4EA8
#elif defined(VERSION_EU_MUL)
extern f32 D_800C4EE8;
#define RW_QUARTER D_800C4EE8
#endif
#if defined(VERSION_US_REV1)
extern const f32 D_800C9D24;
#define RW_C15 D_800C9D24
#elif defined(VERSION_US)
extern const f32 D_800C4B64;
#define RW_C15 D_800C4B64
#elif defined(VERSION_EU)
extern const f32 D_800C4EE4;
#define RW_C15 D_800C4EE4
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F24;
#define RW_C15 D_800C4F24
#endif
#if defined(VERSION_US_REV1)
extern const f32 D_800C9CF0;
#define RW_C2 D_800C9CF0
#elif defined(VERSION_US)
extern const f32 D_800C4B30;
#define RW_C2 D_800C4B30
#elif defined(VERSION_EU)
extern const f32 D_800C4EB0;
#define RW_C2 D_800C4EB0
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4EF0;
#define RW_C2 D_800C4EF0
#endif
#if defined(VERSION_US_REV1)
extern const f32 D_800C9CEC;
#define RW_C1 D_800C9CEC
#elif defined(VERSION_US)
extern const f32 D_800C4B2C;
#define RW_C1 D_800C4B2C
#elif defined(VERSION_EU)
extern const f32 D_800C4EAC;
#define RW_C1 D_800C4EAC
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4EEC;
#define RW_C1 D_800C4EEC
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9CF4;
#define RW_C3 D_800C9CF4
#elif defined(VERSION_US)
extern const f32 D_800C4B34;
#define RW_C3 D_800C4B34
#elif defined(VERSION_EU)
extern const f32 D_800C4EB4;
#define RW_C3 D_800C4EB4
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4EF4;
#define RW_C3 D_800C4EF4
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9CF8;
#define RW_C4 D_800C9CF8
#elif defined(VERSION_US)
extern const f32 D_800C4B38;
#define RW_C4 D_800C4B38
#elif defined(VERSION_EU)
extern const f32 D_800C4EB8;
#define RW_C4 D_800C4EB8
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4EF8;
#define RW_C4 D_800C4EF8
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9CFC;
#define RW_C5 D_800C9CFC
#elif defined(VERSION_US)
extern const f32 D_800C4B3C;
#define RW_C5 D_800C4B3C
#elif defined(VERSION_EU)
extern const f32 D_800C4EBC;
#define RW_C5 D_800C4EBC
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4EFC;
#define RW_C5 D_800C4EFC
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9D00;
#define RW_C6 D_800C9D00
#elif defined(VERSION_US)
extern const f32 D_800C4B40;
#define RW_C6 D_800C4B40
#elif defined(VERSION_EU)
extern const f32 D_800C4EC0;
#define RW_C6 D_800C4EC0
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F00;
#define RW_C6 D_800C4F00
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9D04;
#define RW_C7 D_800C9D04
#elif defined(VERSION_US)
extern const f32 D_800C4B44;
#define RW_C7 D_800C4B44
#elif defined(VERSION_EU)
extern const f32 D_800C4EC4;
#define RW_C7 D_800C4EC4
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F04;
#define RW_C7 D_800C4F04
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9D08;
#define RW_C8 D_800C9D08
#elif defined(VERSION_US)
extern const f32 D_800C4B48;
#define RW_C8 D_800C4B48
#elif defined(VERSION_EU)
extern const f32 D_800C4EC8;
#define RW_C8 D_800C4EC8
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F08;
#define RW_C8 D_800C4F08
#endif


#if defined(VERSION_US_REV1)
extern const f32 D_800C9D10;
#define RW_C10 D_800C9D10
#elif defined(VERSION_US)
extern const f32 D_800C4B50;
#define RW_C10 D_800C4B50
#elif defined(VERSION_EU)
extern const f32 D_800C4ED0;
#define RW_C10 D_800C4ED0
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F10;
#define RW_C10 D_800C4F10
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9D14;
#define RW_C11 D_800C9D14
#elif defined(VERSION_US)
extern const f32 D_800C4B54;
#define RW_C11 D_800C4B54
#elif defined(VERSION_EU)
extern const f32 D_800C4ED4;
#define RW_C11 D_800C4ED4
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F14;
#define RW_C11 D_800C4F14
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9D18;
#define RW_C12 D_800C9D18
#elif defined(VERSION_US)
extern const f32 D_800C4B58;
#define RW_C12 D_800C4B58
#elif defined(VERSION_EU)
extern const f32 D_800C4ED8;
#define RW_C12 D_800C4ED8
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F18;
#define RW_C12 D_800C4F18
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9D1C;
#define RW_C13 D_800C9D1C
#elif defined(VERSION_US)
extern const f32 D_800C4B5C;
#define RW_C13 D_800C4B5C
#elif defined(VERSION_EU)
extern const f32 D_800C4EDC;
#define RW_C13 D_800C4EDC
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F1C;
#define RW_C13 D_800C4F1C
#endif

#if defined(VERSION_US_REV1)
extern const f32 D_800C9D20;
#define RW_C14 D_800C9D20
#elif defined(VERSION_US)
extern const f32 D_800C4B60;
#define RW_C14 D_800C4B60
#elif defined(VERSION_EU)
extern const f32 D_800C4EE0;
#define RW_C14 D_800C4EE0
#elif defined(VERSION_EU_MUL)
extern const f32 D_800C4F20;
#define RW_C14 D_800C4F20
#endif

#if defined(VERSION_US_REV1)
extern f32 D_800C9D0C;
#define RW_C9 D_800C9D0C
#elif defined(VERSION_US)
extern f32 D_800C4B4C;
#define RW_C9 D_800C4B4C
#elif defined(VERSION_EU)
extern f32 D_800C4ECC;
#define RW_C9 D_800C4ECC
#elif defined(VERSION_EU_MUL)
extern f32 D_800C4F0C;
#define RW_C9 D_800C4F0C
#endif

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x48, 0x4c, 0x50, 0x60, 0x64, 0x68, 0x6c], gap at: 0x54. */
void func_8027B790(func_8027B790_S1 *arg0) {
    func_8027B790_Bounds bounds;
    f32 sizeLimit;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4; /* FAKEMATCH: recycle the second clamp input for the third clamp to match allocation priority. */
    f32 temp_f1_6;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2; /* FAKEMATCH: recycle the dead scale temporary to match allocation priority. */
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 var_f0;
    f32 var_f0_3;
    f32 var_f0_5;
    f32 var_f2;
    f32 var_f3;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 temp_v1;
    s32 expectedId;
    s32 temp_v1_2;
    u32 temp_v1_3;
    func_8027B790_S4 *temp_a1;
    func_8027B790_S2 *temp_a0;
    func_8027B790_S3 *temp_v0;
    void *var_a0_2;
    void *var_a1;
    void *var_a2;
    func_8027B790_S7 *var_s0_2;
    func_8027B790_S9 *effectFlag;

    temp_a0 = arg0->unk12C;
    temp_f22 = D_800D2988;
    if (!(arg0->unk140 < 0.0f)) {
        if ((temp_a0 != NULL) && (temp_a0->unk0 == 1) && (temp_a0->unk100 & 0x300000)) {
            temp_v0 = temp_a0->unk1D8;
            if ((temp_v0 != NULL) && (temp_v0->unk122C & 0x2000)) {
                D_800D2988 = temp_f22 * RW_QUARTER;
            }
        }
        temp_f1 = arg0->unk158;
        var_f2 = arg0->unk154 * temp_f1;
        temp_f0 = arg0->unk150 * temp_f1;
        if (!(temp_f0 <= var_f2)) {
            var_f2 = temp_f0;
        }
        if (!(var_f2 <= temp_f1)) {
            temp_f1 = var_f2;
        }
        var_f2 = temp_f1 * RW_C1;
        temp_f1 = var_f2 * RW_C2;
        bounds.minX = arg0->position.components.x.v0 - temp_f1;
        bounds.maxX = arg0->position.components.x.v0 + temp_f1;
        bounds.minY = arg0->position.components.y - temp_f1;
        bounds.maxY = arg0->position.components.y + var_f2;
        bounds.minZ = arg0->position.components.z - temp_f1;
        bounds.maxZ = arg0->position.components.z + temp_f1;
        if (arg0->unk5C & 0x20000) {
            arg0->unk140 = 0.0f;
            arg0->unk14C = (s16) (s32) (arg0->unk148 * RW_C3);
            temp_f1_2 = (f32) arg0->unk1D1 - (D_800D2988 * RW_C4);
            *(volatile s8 *)&arg0->unk1D1 = (s8) (temp_f1_2 < 0.0f ? 0 : (s32) temp_f1_2); /* FAKEMATCH: retain one ordered lifetime store. */
        }
        if (arg0->unk5C & 0x10000) {
            temp_v1 = arg0->unk4;
            temp_a1 = arg0->unk134;
            if (temp_v1 == 0x2D) goto block_22;
            if (temp_v1 < 0x2E) {
                expectedId = 0xB;
            } else {
                if (temp_v1 == 0x4F) goto block_22;
                expectedId = 0x41E;
            }
            var_a0 = 0;
            if (temp_v1 == expectedId) goto block_after_reset;
block_reset:
            arg0->unk140 = 0.0f;
            arg0->unk14C = (s16) (s32) (arg0->unk148 * RW_C5);
block_22:
            var_a0 = 0;
block_after_reset:
            temp_v1_2 = arg0->unk4;
            var_s0 = var_a0; /* FAKEMATCH: preserve the switch flag copy. */
            if (temp_v1_2 == 0x56) goto block_48;
            if (temp_v1_2 < 0x57) {
                if (temp_v1_2 == 0xB) goto block_11;
                if (temp_v1_2 < 0xC) {
                    if (temp_v1_2 == 2) goto block_48;
                    if (temp_v1_2 == 4) goto block_4;
                    goto block_66;
                }
                if (temp_v1_2 == 0x2D) goto block_64;
                if (temp_v1_2 < 0x2E) {
                    if (temp_v1_2 == 0xF) goto block_48;
                    var_a0 = 0;
                var_s0 = var_a0; /* FAKEMATCH: retain the default flag copy. */
                goto block_66;
                }
                if (temp_v1_2 == 0x4F) goto block_64;
                var_a0 = 0;
                var_s0 = var_a0; /* FAKEMATCH: retain the default flag copy. */
                goto block_66;
            }
            if (temp_v1_2 == 0x12A) goto block_47;
            if (temp_v1_2 < 0x12B) {
                if ((temp_v1_2 == 0x111) || (temp_v1_2 == 0x126)) goto block_48;
                var_a0 = 0;
                var_s0 = var_a0; /* FAKEMATCH: retain the default flag copy. */
                goto block_66;
            }
            if (temp_v1_2 == 0x3F5) goto block_48;
            if (temp_v1_2 < 0x3F6) {
                if (temp_v1_2 == 0x132) goto block_47;
                var_a0 = 0;
                var_s0 = var_a0; /* FAKEMATCH: retain the default flag copy. */
                goto block_66;
            }
            if (temp_v1_2 == 0x41E) {
                var_a0 = 0;
                goto block_after_switch;
            }
            var_a0 = 0;
                var_s0 = var_a0; /* FAKEMATCH: retain the default flag copy. */
                goto block_66;
block_47:
            var_v0_4 = temp_a1->unk174;
            var_a0 = 0;
            goto block_62;
block_48:
            if (arg0->unk5C & 0x04000000) {
                var_a0 = 1;
            } else {
                temp_v1_3 = temp_a1->unk100;
                if (!(temp_v1_3 & 0x100)) {
                    var_a0 = 1;
                    var_s0 = 0;
                    goto block_after_switch;
                }
                if (temp_v1_3 & 0x300000) {
                    var_a0 = ((f32)temp_a1->unk174 <= 0.0f) ? 1 : 0;
                } else {
                    var_a0 = temp_a1->unk170 & 0x20;
                }
            }
            var_s0 = 0;
            goto block_after_switch;
block_11:
            var_a0 = 0;
            temp_v1_2 = temp_a1->unk1A4;
            var_v0_3 = 0x21;
            goto block_58;
block_4:
            var_a0 = 0;
            temp_v1_2 = temp_a1->unk1A4;
            var_v0_3 = 0x20;
block_58:
            if (temp_v1_2 != var_v0_3) {
                var_s0 = 1;
            } else {
                var_v0_4 = temp_a1->unk100 & 0x100;
                goto block_62;
            }
            goto block_after_switch;
block_62:
            if (var_v0_4 == 0) var_s0 = 1;
            goto block_after_switch;
block_64:
            var_a0 = 0;
            var_s0 = (((u32) temp_a1->unk100 >> 8) ^ 1) & 1;
            goto block_after_switch;
block_66:
            arg0->unk5C = (s32) (arg0->unk5C & 0xFFFEFFFF);
block_after_switch:
            if ((var_a0 != 0) || (var_s0 != 0)) {
                arg0->unk1D0 = -7;
                arg0->unk140 = 0.0f;
                arg0->unk5C = (s32) ((arg0->unk5C & 0xFFFCFFFF) | 0x40000);
                temp_f0_2 = (f32) (func_80274544() % 360) * RW_C6;
                arg0->velocity.y = 0.0f;
                arg0->unk188 = temp_f0_2;
                if (arg0->unk5C & 0x04000000) {
                    arg0->velocity.x = (f32) -arg0->unk174.v0;
                    arg0->velocity.z = (f32) -arg0->unk17C;
                } else {
                    arg0->velocity.x = 0.0f;
                    arg0->velocity.z = 0.0f;
                }
                arg0->unk14 = 0;
                arg0->unk1B4 = (s32) (arg0->unk1B4 & ~0x4000);
                if (var_s0 != 0) {
                    arg0->unk14C = 1;
                }
            }
        }
        if (arg0->unk5C & 0x40000) {
            if ((func_80243A80(arg0, arg0->position.components.x.v0, arg0->position.components.y, arg0->position.components.z, &arg0->unk1B4) != 0) && (D_801042A4 != 0)) {
                arg0->unk1D0 = -3;
            }
            if (arg0->unk38 & 0x1000) {
                var_v0_5 = arg0->unk5C | 4;
            } else {
                var_v0_5 = arg0->unk5C & ~4;
            }
            arg0->unk5C = var_v0_5;
        }
        arg0->previousPosition = arg0->position.xyz;
        arg0->unk144 = (f32) (arg0->unk144 + (D_800D2988 * arg0->unk148 * (D_800D2990 * RW_C7)));
        if (arg0->unk118->unk0 & 0x1000) {
            temp_f3 = D_800D2988 * RW_C8;
            arg0->unk150 = (f32) (arg0->unk150 + (temp_f3 * arg0->unk15C));
            arg0->unk154 = (f32) (arg0->unk154 + (temp_f3 * arg0->unk160));
            arg0->unk158 = (f32) (arg0->unk158 + (D_800D2988 * arg0->unk164));
            sizeLimit = RW_C9;
            temp_f1_3 = arg0->unk150;
            var_f3 = sizeLimit;
            if (!(temp_f1_3 > sizeLimit)) {
                var_f3 = temp_f1_3;
            }
            temp_f1_4 = arg0->unk154;
            var_f0 = sizeLimit;
            arg0->unk150 = var_f3;
            if (!(temp_f1_4 > sizeLimit)) {
                var_f0 = temp_f1_4;
            }
            *(volatile f32 *)&arg0->unk154 = var_f0; /* FAKEMATCH: order second clamp store before third clamp. */
            var_f0 = RW_C10;
            temp_f1_4 = arg0->unk158;
            if (!(temp_f1_4 > var_f0)) {
                var_f0 = temp_f1_4;
            }
            arg0->unk158 = var_f0;
            goto block_101;
        }
        temp_f2 = arg0->unk150;
        var_f0_3 = temp_f2 * arg0->unk15C;
        if (var_f0_3 > RW_C11) {
            var_f0_3 = RW_C11;
        }
        temp_f3_2 = arg0->unk154;
        arg0->unk150 = (f32) (temp_f2 + ((var_f0_3 - temp_f2) * D_800D2988));
        temp_f2 = temp_f3_2 * arg0->unk160;
        if (temp_f2 > RW_C11) {
            temp_f2 = RW_C11;
        }
        temp_f2_2 = arg0->unk158;
        var_f0_5 = temp_f2_2 * arg0->unk164;
        arg0->unk154 = (f32) (temp_f3_2 + ((temp_f2 - temp_f3_2) * D_800D2988));
        if (var_f0_5 > RW_C12) {
            var_f0_5 = RW_C12;
        }
        temp_f3_3 = temp_f2_2 + ((var_f0_5 - temp_f2_2) * D_800D2988);
        arg0->unk158 = temp_f3_3;
        if ((arg0->unk150 < 0.0f) || (arg0->unk154 < 0.0f) || (temp_f3_3 < 0.0f)) {
            func_80283F34(arg0);
            func_80284544(&D_80121990, arg0);
            func_80284408(arg0);
        } else {
block_101:
            arg0->unk180 = (f32) (arg0->unk180 + (arg0->unk18C * D_800D2988));
            arg0->unk184 = (f32) (arg0->unk184 + (arg0->unk190 * D_800D2988));
            arg0->unk188 = (f32) (arg0->unk188 + (arg0->unk194 * D_800D2988));
            D_80103FCC->velocity = arg0->velocity;
            func_80283E2C(arg0);
            temp_f20 = (f32) arg0->unk118->unk10;
            if (!(temp_f20 <= 0.0f)) {
                temp_f20 = temp_f20 * RW_C13;
                temp_f20 *= temp_f20;
                var_s0_2 = D_80145060;
                if (var_s0_2 != NULL) {
                    do {
                        func_8027B790_Sample sample;
                        u32 sampleX, sampleY, sampleZ; /* FAKEMATCH: copy sample words through real union fields to keep its address inside the loop. */
                        sampleX = var_s0_2->point.bits.x;
                        sampleY = var_s0_2->point.bits.y;
                        sampleZ = var_s0_2->point.bits.z;
                        sample.bits.x = sampleX;
                        sample.bits.y = sampleY;
                        sample.bits.z = sampleZ;
                        var_s2 = 0;
                        if (arg0->unk4 != 0x40F) {
                            sample.xyz.y += func_8024D274(var_s0_2) * RW_C14;
                        }
                        if (func_8027272C(&arg0->position.components.x.v1, (f32 *)&sample) < temp_f20) {
                            func_80282E6C(arg0, var_s0_2);
                            if (arg0->unk4 == 0x40F) {
                                var_s2 = 1;
                            }
                        }
                        if (var_s2 != 0) {
                            var_s0_2 = NULL;
                        } else {
                            var_s0_2 = var_s0_2->unk16E0;
                        }
                    } while (var_s0_2 != NULL);
                }
            }
            func_8027ADBC(arg0);
            temp_f2_3 = arg0->unk1BC;
            if (((temp_f2_3 != 0.0f) && ((arg0->position.components.y != 0.0f) || !(temp_f2_3 < 0.0f))) || (temp_f1_6 = arg0->velocity.x, temp_f2_4 = arg0->velocity.y, temp_f0_3 = arg0->velocity.z, !(((temp_f1_6 * temp_f1_6) + (temp_f2_4 * temp_f2_4) + (temp_f0_3 * temp_f0_3)) < RW_C15))) {
                if (!(arg0->unk5C & 0x72000)) {
                    temp_a0_2 = func_80243A80(arg0, arg0->position.components.x.v0, arg0->position.components.y, arg0->position.components.z, &arg0->unk1B4);
                    if (arg0->unk38 & 0x1000) {
                        var_v0_6 = arg0->unk5C | 4;
                    } else {
                        var_v0_6 = arg0->unk5C & ~4;
                    }
                    arg0->unk5C = var_v0_6;
                    if ((arg0->unk4 == 0x68) && (D_801041F0.unk0 != NULL)) {
                        arg0->unk134 = D_801041F0.unk0;
                    }
                    if (temp_a0_2 != 0) {
                        if (D_801041F0.unk0 != NULL) {
                            func_80271FD8(&arg0->unk174.v1, &arg0->position.components.x.v1, &D_801041F0.unk8);
                        } else if (D_801041F0.unk88 != 0) {
                            func_80271FD8(&arg0->unk174.v1, &arg0->position.components.x.v1, &D_801041F0.unk90);
                        } else if (D_801041F0.unk9C != 0) {
                            func_80271FD8(&arg0->unk174.v1, &arg0->position.components.x.v1, &D_801041F0.unkA0);
                        } else if (D_801041F0.unkB4 != 0) {
                            func_80271FD8(&arg0->unk174.v1, &arg0->position.components.x.v1, &D_801041F0.unkB8);
                            if (arg0->unk1D0 == -7) arg0->unk1D0 = -3;
                        } else if (D_801041F0.unkC4 != 0) {
                            func_80271FD8(&arg0->unk174.v1, &arg0->position.components.x.v1, &D_801041F0.unkC8);
                        }
                        func_802720EC(&arg0->unk174.v0);
                    }
                    func_8027B498(arg0);
                    effectFlag = &D_8010428C.effectFlag;
                    if (effectFlag->unk0 != 0) {
                        func_8027C5A0(arg0);
                    }
                    if (arg0->unk5C & 0x100) {
                        if (D_8010428C.collisionFlag != 0) {
                            if (!(arg0->unk118->unk0 & 0x10000000)) {
                                func_8027C324(arg0);
                            }
                            if (arg0->unk118->unk0 & 0x800) {
                                arg0->unk1B9 = 1;
                            }
                        }
                        if (arg0->unk5C & 0x100) {
                            if (D_801041F0.unk0 != NULL) {
                                if ((arg0->unk1B4 & 0x4000) && (*D_801041F0.unk0 == 0)) {
                                    func_8027D47C(arg0);
                                } else {
                                    func_8027CCD0(arg0);
                                }
                                if (arg0->unk118->unk0 & 0x800) {
                                    arg0->unk1B9 = 1;
                                }
                            }
                            if ((arg0->unk5C & 0x100) && (RW_EFFECT_MODE != 0) && !(arg0->unk118->unk0 & 0x20000000)) {
                                if (RW_EFFECT_MODE == 1) {
                                    func_8027C808(arg0);
                                } else {
                                    func_8027CA7C(arg0);
                                }
                            }
                        }
                    }
                }
                if ((arg0->unk5C & 0x8100) == 0x100) {
                    func_80284200(arg0);
                }
            }
        }
        D_800D2988 = temp_f22;
    }
}
