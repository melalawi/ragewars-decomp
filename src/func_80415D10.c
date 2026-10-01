#ifdef NON_MATCHING
/* Clips a rectangle and its corner colors to the viewport and emits drawing commands. */
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
/* The values func_80415D10 loads by address:
 * 0x800E1390 = 1.0 (float, D_800E1390 in this cartridge's tables)
 * 0x800E1394 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E1398 = 2147483600.0 (float, D_800E1398 in this cartridge's tables)
 * 0x800E139C = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13A0 = 2147483600.0 (float, D_800E13A0 in this cartridge's tables)
 * 0x800E13A4 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13A8 = 2147483600.0 (float, D_800E13A8 in this cartridge's tables)
 * 0x800E13AC = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13B0 = 2147483600.0 (float, D_800E13B0 in this cartridge's tables)
 * 0x800E13B4 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13B8 = 2147483600.0 (float, D_800E13B8 in this cartridge's tables)
 * 0x800E13BC = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13C0 = 2147483600.0 (float, D_800E13C0 in this cartridge's tables)
 * 0x800E13C4 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13C8 = 2147483600.0 (float, D_800E13C8 in this cartridge's tables)
 * 0x800E13CC = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13D0 = 2147483600.0 (float, D_800E13D0 in this cartridge's tables)
 * 0x800E13D4 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13D8 = 2147483600.0 (float, D_800E13D8 in this cartridge's tables)
 * 0x800E13DC = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13E0 = 2147483600.0 (float, D_800E13E0 in this cartridge's tables)
 * 0x800E13E4 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13E8 = 2147483600.0 (float, D_800E13E8 in this cartridge's tables)
 * 0x800E13EC = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13F0 = 2147483600.0 (float, D_800E13F0 in this cartridge's tables)
 * 0x800E13F4 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E13F8 = 2147483600.0 (float, D_800E13F8 in this cartridge's tables)
 * 0x800E13FC = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E1400 = 2147483600.0 (float, D_800E1400 in this cartridge's tables)
 * 0x800E1404 = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E1408 = 2147483600.0 (float, D_800E1408 in this cartridge's tables)
 * 0x800E140C = 2147483600.0 (float, unnamed in this cartridge's tables)
 * 0x800E1410 = 2147483600.0 (float, D_800E1410 in this cartridge's tables)
 * 0x800E1414 = 1.0 (float, D_800E1414 in this cartridge's tables)
 */
void func_802A2898(s32 *, s32 *, s32 *, s32 *);
typedef struct func_80415D10_S1 func_80415D10_S1;
typedef struct func_80415D10_S2 func_80415D10_S2;
typedef struct func_80415D10_S3 func_80415D10_S3;
typedef struct func_80415D10_S4 func_80415D10_S4;
typedef struct func_80415D10_S5 func_80415D10_S5;
typedef struct func_80415D10_S6 func_80415D10_S6;
typedef struct func_80415D10_S7 func_80415D10_S7;
typedef struct func_80415D10_S8 func_80415D10_S8;
typedef struct func_80415D10_S9 func_80415D10_S9;
typedef struct func_80415D10_S10 func_80415D10_S10;
typedef struct func_80415D10_S11 func_80415D10_S11;
typedef struct func_80415D10_S12 func_80415D10_S12;
typedef struct func_80415D10_S13 func_80415D10_S13;
typedef struct func_80415D10_S14 func_80415D10_S14;
typedef struct func_80415D10_S15 func_80415D10_S15;
typedef struct func_80415D10_S16 func_80415D10_S16;
typedef struct func_80415D10_S17 func_80415D10_S17;
typedef struct func_80415D10_S18 func_80415D10_S18;
typedef struct func_80415D10_S19 func_80415D10_S19;
typedef struct func_80415D10_S20 func_80415D10_S20;
typedef struct func_80415D10_S21 func_80415D10_S21;
struct func_80415D10_S1 {
    u8 unk0;
    char pad0[0x1 - 0x0 - sizeof(u8)];
    u8 unk1;
    char pad1[0x2 - 0x1 - sizeof(u8)];
    u8 unk2;
    char pad2[0x3 - 0x2 - sizeof(u8)];
    u8 unk3;
};
struct func_80415D10_S2 {
    u8 unk0;
    char pad0[0x1 - 0x0 - sizeof(u8)];
    u8 unk1;
    char pad1[0x2 - 0x1 - sizeof(u8)];
    u8 unk2;
    char pad2[0x3 - 0x2 - sizeof(u8)];
    u8 unk3;
};
struct func_80415D10_S3 {
    u8 unk0;
    char pad0[0x1 - 0x0 - sizeof(u8)];
    u8 unk1;
    char pad1[0x2 - 0x1 - sizeof(u8)];
    u8 unk2;
    char pad2[0x3 - 0x2 - sizeof(u8)];
    u8 unk3;
};
struct func_80415D10_S4 {
    u8 unk0;
    char pad0[0x1 - 0x0 - sizeof(u8)];
    u8 unk1;
    char pad1[0x2 - 0x1 - sizeof(u8)];
    u8 unk2;
    char pad2[0x3 - 0x2 - sizeof(u8)];
    u8 unk3;
};
struct func_80415D10_S5 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
};
struct func_80415D10_S6 {
    s32 unk0;
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    s32 unk10;
    char pad10[0x18 - 0x10 - sizeof(s32)];
    s32 unk18;
    char pad18[0x20 - 0x18 - sizeof(s32)];
    s32 unk20;
    char pad20[0x28 - 0x20 - sizeof(s32)];
    s32 unk28;
    char pad28[0x30 - 0x28 - sizeof(s32)];
    s32 unk30;
    char pad30[0x38 - 0x30 - sizeof(s32)];
    s32 unk38;
    char pad38[0x40 - 0x38 - sizeof(s32)];
    s32 unk40;
    char pad40[0x48 - 0x40 - sizeof(s32)];
    s32 unk48;
    char pad48[0x50 - 0x48 - sizeof(s32)];
    s32 unk50;
    char pad50[0x58 - 0x50 - sizeof(s32)];
    s32 unk58;
};
struct func_80415D10_S7 {
    volatile s32 unk0; /* FAKEMATCH: order first command after incoming color read. */
    s32 unk4;
};
struct func_80415D10_S8 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S9 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S10 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S11 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S12 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S13 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S14 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S15 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S16 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S17 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
};
struct func_80415D10_S18 {
    s32 unk0;
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0x10 - 0x8 - sizeof(s32)];
    s32 unk10;
    char pad10[0x18 - 0x10 - sizeof(s32)];
    s32 unk18;
};
struct func_80415D10_S19 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S20 {
    char pad0[0x4];
    s32 unk4;
};
struct func_80415D10_S21 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
};

#if defined(VERSION_US_REV1)
#define RW_FC_00 D_800E1390
extern f32 D_800E1390;
#define RW_FC_01 D_800E1394
extern f32 D_800E1394;
#define RW_FC_02 D_800E1398
extern f32 D_800E1398;
#define RW_FC_03 D_800E139C
extern f32 D_800E139C;
#define RW_FC_04 D_800E13A0
extern f32 D_800E13A0;
#define RW_FC_05 D_800E13A4
extern f32 D_800E13A4;
#define RW_FC_06 D_800E13A8
extern f32 D_800E13A8;
#define RW_FC_07 D_800E13AC
extern f32 D_800E13AC;
#define RW_FC_08 D_800E13B0
extern f32 D_800E13B0;
#define RW_FC_09 D_800E13B4
extern f32 D_800E13B4;
#define RW_FC_10 D_800E13B8
extern f32 D_800E13B8;
#define RW_FC_11 D_800E13BC
extern f32 D_800E13BC;
#define RW_FC_12 D_800E13C0
extern f32 D_800E13C0;
#define RW_FC_13 D_800E13C4
extern f32 D_800E13C4;
#define RW_FC_14 D_800E13C8
extern f32 D_800E13C8;
#define RW_FC_15 D_800E13CC
extern f32 D_800E13CC;
#define RW_FC_16 D_800E13D0
extern f32 D_800E13D0;
#define RW_FC_17 D_800E13D4
extern f32 D_800E13D4;
#define RW_FC_18 D_800E13D8
extern f32 D_800E13D8;
#define RW_FC_19 D_800E13DC
extern f32 D_800E13DC;
#define RW_FC_20 D_800E13E0
extern f32 D_800E13E0;
#define RW_FC_21 D_800E13E4
extern f32 D_800E13E4;
#define RW_FC_22 D_800E13E8
extern f32 D_800E13E8;
#define RW_FC_23 D_800E13EC
extern f32 D_800E13EC;
#define RW_FC_24 D_800E13F0
extern f32 D_800E13F0;
#define RW_FC_25 D_800E13F4
extern f32 D_800E13F4;
#define RW_FC_26 D_800E13F8
extern f32 D_800E13F8;
#define RW_FC_27 D_800E13FC
extern f32 D_800E13FC;
#define RW_FC_28 D_800E1400
extern f32 D_800E1400;
#define RW_FC_29 D_800E1404
extern f32 D_800E1404;
#define RW_FC_30 D_800E1408
extern f32 D_800E1408;
#define RW_FC_31 D_800E140C
extern f32 D_800E140C;
#define RW_FC_32 D_800E1410
extern f32 D_800E1410;
#define RW_FC_33 D_800E1414
extern volatile f32 D_800E1414; /* FAKEMATCH: order the extent load before the head load. */
#define RW_FLAG D_80153F64
extern volatile s32 D_80153F64; /* FAKEMATCH: ordering only. */
#elif defined(VERSION_US)
#define RW_FC_00 D_800DC010
extern f32 D_800DC010;
#define RW_FC_01 D_800DC014
extern f32 D_800DC014;
#define RW_FC_02 D_800DC018
extern f32 D_800DC018;
#define RW_FC_03 D_800DC01C
extern f32 D_800DC01C;
#define RW_FC_04 D_800DC020
extern f32 D_800DC020;
#define RW_FC_05 D_800DC024
extern f32 D_800DC024;
#define RW_FC_06 D_800DC028
extern f32 D_800DC028;
#define RW_FC_07 D_800DC02C
extern f32 D_800DC02C;
#define RW_FC_08 D_800DC030
extern f32 D_800DC030;
#define RW_FC_09 D_800DC034
extern f32 D_800DC034;
#define RW_FC_10 D_800DC038
extern f32 D_800DC038;
#define RW_FC_11 D_800DC03C
extern f32 D_800DC03C;
#define RW_FC_12 D_800DC040
extern f32 D_800DC040;
#define RW_FC_13 D_800DC044
extern f32 D_800DC044;
#define RW_FC_14 D_800DC048
extern f32 D_800DC048;
#define RW_FC_15 D_800DC04C
extern f32 D_800DC04C;
#define RW_FC_16 D_800DC050
extern f32 D_800DC050;
#define RW_FC_17 D_800DC054
extern f32 D_800DC054;
#define RW_FC_18 D_800DC058
extern f32 D_800DC058;
#define RW_FC_19 D_800DC05C
extern f32 D_800DC05C;
#define RW_FC_20 D_800DC060
extern f32 D_800DC060;
#define RW_FC_21 D_800DC064
extern f32 D_800DC064;
#define RW_FC_22 D_800DC068
extern f32 D_800DC068;
#define RW_FC_23 D_800DC06C
extern f32 D_800DC06C;
#define RW_FC_24 D_800DC070
extern f32 D_800DC070;
#define RW_FC_25 D_800DC074
extern f32 D_800DC074;
#define RW_FC_26 D_800DC078
extern f32 D_800DC078;
#define RW_FC_27 D_800DC07C
extern f32 D_800DC07C;
#define RW_FC_28 D_800DC080
extern f32 D_800DC080;
#define RW_FC_29 D_800DC084
extern f32 D_800DC084;
#define RW_FC_30 D_800DC088
extern f32 D_800DC088;
#define RW_FC_31 D_800DC08C
extern f32 D_800DC08C;
#define RW_FC_32 D_800DC090
extern f32 D_800DC090;
#define RW_FC_33 D_800DC094
extern volatile f32 D_800DC094; /* FAKEMATCH: order the extent load before the head load. */
#define RW_FLAG D_8014BCD4
extern volatile s32 D_8014BCD4; /* FAKEMATCH: ordering only. */
#elif defined(VERSION_EU)
#define RW_FC_00 D_800ED9E0
extern f32 D_800ED9E0;
#define RW_FC_01 D_800ED9E4
extern f32 D_800ED9E4;
#define RW_FC_02 D_800ED9E8
extern f32 D_800ED9E8;
#define RW_FC_03 D_800ED9EC
extern f32 D_800ED9EC;
#define RW_FC_04 D_800ED9F0
extern f32 D_800ED9F0;
#define RW_FC_05 D_800ED9F4
extern f32 D_800ED9F4;
#define RW_FC_06 D_800ED9F8
extern f32 D_800ED9F8;
#define RW_FC_07 D_800ED9FC
extern f32 D_800ED9FC;
#define RW_FC_08 D_800EDA00
extern f32 D_800EDA00;
#define RW_FC_09 D_800EDA04
extern f32 D_800EDA04;
#define RW_FC_10 D_800EDA08
extern f32 D_800EDA08;
#define RW_FC_11 D_800EDA0C
extern f32 D_800EDA0C;
#define RW_FC_12 D_800EDA10
extern f32 D_800EDA10;
#define RW_FC_13 D_800EDA14
extern f32 D_800EDA14;
#define RW_FC_14 D_800EDA18
extern f32 D_800EDA18;
#define RW_FC_15 D_800EDA1C
extern f32 D_800EDA1C;
#define RW_FC_16 D_800EDA20
extern f32 D_800EDA20;
#define RW_FC_17 D_800EDA24
extern f32 D_800EDA24;
#define RW_FC_18 D_800EDA28
extern f32 D_800EDA28;
#define RW_FC_19 D_800EDA2C
extern f32 D_800EDA2C;
#define RW_FC_20 D_800EDA30
extern f32 D_800EDA30;
#define RW_FC_21 D_800EDA34
extern f32 D_800EDA34;
#define RW_FC_22 D_800EDA38
extern f32 D_800EDA38;
#define RW_FC_23 D_800EDA3C
extern f32 D_800EDA3C;
#define RW_FC_24 D_800EDA40
extern f32 D_800EDA40;
#define RW_FC_25 D_800EDA44
extern f32 D_800EDA44;
#define RW_FC_26 D_800EDA48
extern f32 D_800EDA48;
#define RW_FC_27 D_800EDA4C
extern f32 D_800EDA4C;
#define RW_FC_28 D_800EDA50
extern f32 D_800EDA50;
#define RW_FC_29 D_800EDA54
extern f32 D_800EDA54;
#define RW_FC_30 D_800EDA58
extern f32 D_800EDA58;
#define RW_FC_31 D_800EDA5C
extern f32 D_800EDA5C;
#define RW_FC_32 D_800EDA60
extern f32 D_800EDA60;
#define RW_FC_33 D_800EDA64
extern volatile f32 D_800EDA64; /* FAKEMATCH: order the extent load before the head load. */
#define RW_FLAG D_8015DCD4
extern volatile s32 D_8015DCD4; /* FAKEMATCH: ordering only. */
#elif defined(VERSION_EU_X)
#define RW_FC_00 D_800E8BA0
extern f32 D_800E8BA0;
#define RW_FC_01 D_800E8BA4
extern f32 D_800E8BA4;
#define RW_FC_02 D_800E8BA8
extern f32 D_800E8BA8;
#define RW_FC_03 D_800E8BAC
extern f32 D_800E8BAC;
#define RW_FC_04 D_800E8BB0
extern f32 D_800E8BB0;
#define RW_FC_05 D_800E8BB4
extern f32 D_800E8BB4;
#define RW_FC_06 D_800E8BB8
extern f32 D_800E8BB8;
#define RW_FC_07 D_800E8BBC
extern f32 D_800E8BBC;
#define RW_FC_08 D_800E8BC0
extern f32 D_800E8BC0;
#define RW_FC_09 D_800E8BC4
extern f32 D_800E8BC4;
#define RW_FC_10 D_800E8BC8
extern f32 D_800E8BC8;
#define RW_FC_11 D_800E8BCC
extern f32 D_800E8BCC;
#define RW_FC_12 D_800E8BD0
extern f32 D_800E8BD0;
#define RW_FC_13 D_800E8BD4
extern f32 D_800E8BD4;
#define RW_FC_14 D_800E8BD8
extern f32 D_800E8BD8;
#define RW_FC_15 D_800E8BDC
extern f32 D_800E8BDC;
#define RW_FC_16 D_800E8BE0
extern f32 D_800E8BE0;
#define RW_FC_17 D_800E8BE4
extern f32 D_800E8BE4;
#define RW_FC_18 D_800E8BE8
extern f32 D_800E8BE8;
#define RW_FC_19 D_800E8BEC
extern f32 D_800E8BEC;
#define RW_FC_20 D_800E8BF0
extern f32 D_800E8BF0;
#define RW_FC_21 D_800E8BF4
extern f32 D_800E8BF4;
#define RW_FC_22 D_800E8BF8
extern f32 D_800E8BF8;
#define RW_FC_23 D_800E8BFC
extern f32 D_800E8BFC;
#define RW_FC_24 D_800E8C00
extern f32 D_800E8C00;
#define RW_FC_25 D_800E8C04
extern f32 D_800E8C04;
#define RW_FC_26 D_800E8C08
extern f32 D_800E8C08;
#define RW_FC_27 D_800E8C0C
extern f32 D_800E8C0C;
#define RW_FC_28 D_800E8C10
extern f32 D_800E8C10;
#define RW_FC_29 D_800E8C14
extern f32 D_800E8C14;
#define RW_FC_30 D_800E8C18
extern f32 D_800E8C18;
#define RW_FC_31 D_800E8C1C
extern f32 D_800E8C1C;
#define RW_FC_32 D_800E8C20
extern f32 D_800E8C20;
#define RW_FC_33 D_800E8C24
extern volatile f32 D_800E8C24; /* FAKEMATCH: order the extent load before the head load. */
#define RW_FLAG D_80157CD4
extern volatile s32 D_80157CD4; /* FAKEMATCH: ordering only. */
#elif defined(VERSION_DE)
#define RW_FC_00 D_800DD360
extern f32 D_800DD360;
#define RW_FC_01 D_800DD364
extern f32 D_800DD364;
#define RW_FC_02 D_800DD368
extern f32 D_800DD368;
#define RW_FC_03 D_800DD36C
extern f32 D_800DD36C;
#define RW_FC_04 D_800DD370
extern f32 D_800DD370;
#define RW_FC_05 D_800DD374
extern f32 D_800DD374;
#define RW_FC_06 D_800DD378
extern f32 D_800DD378;
#define RW_FC_07 D_800DD37C
extern f32 D_800DD37C;
#define RW_FC_08 D_800DD380
extern f32 D_800DD380;
#define RW_FC_09 D_800DD384
extern f32 D_800DD384;
#define RW_FC_10 D_800DD388
extern f32 D_800DD388;
#define RW_FC_11 D_800DD38C
extern f32 D_800DD38C;
#define RW_FC_12 D_800DD390
extern f32 D_800DD390;
#define RW_FC_13 D_800DD394
extern f32 D_800DD394;
#define RW_FC_14 D_800DD398
extern f32 D_800DD398;
#define RW_FC_15 D_800DD39C
extern f32 D_800DD39C;
#define RW_FC_16 D_800DD3A0
extern f32 D_800DD3A0;
#define RW_FC_17 D_800DD3A4
extern f32 D_800DD3A4;
#define RW_FC_18 D_800DD3A8
extern f32 D_800DD3A8;
#define RW_FC_19 D_800DD3AC
extern f32 D_800DD3AC;
#define RW_FC_20 D_800DD3B0
extern f32 D_800DD3B0;
#define RW_FC_21 D_800DD3B4
extern f32 D_800DD3B4;
#define RW_FC_22 D_800DD3B8
extern f32 D_800DD3B8;
#define RW_FC_23 D_800DD3BC
extern f32 D_800DD3BC;
#define RW_FC_24 D_800DD3C0
extern f32 D_800DD3C0;
#define RW_FC_25 D_800DD3C4
extern f32 D_800DD3C4;
#define RW_FC_26 D_800DD3C8
extern f32 D_800DD3C8;
#define RW_FC_27 D_800DD3CC
extern f32 D_800DD3CC;
#define RW_FC_28 D_800DD3D0
extern f32 D_800DD3D0;
#define RW_FC_29 D_800DD3D4
extern f32 D_800DD3D4;
#define RW_FC_30 D_800DD3D8
extern f32 D_800DD3D8;
#define RW_FC_31 D_800DD3DC
extern f32 D_800DD3DC;
#define RW_FC_32 D_800DD3E0
extern f32 D_800DD3E0;
#define RW_FC_33 D_800DD3E4
extern volatile f32 D_800DD3E4; /* FAKEMATCH: order the extent load before the head load. */
#define RW_FLAG D_8014DCD4
extern volatile s32 D_8014DCD4; /* FAKEMATCH: ordering only. */
#endif
typedef struct { s32 w0; s32 w1; } CmdWord;
extern func_80415D10_S5 *volatile D_80110634;
#define RW_DL_WRITE D_80110634 /* FAKEMATCH: order pointer stores. */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x58, 0x5c, 0x60, 0x64, 0x78, 0x7c], gap at: 0x4c. */
void func_80415D10(f32 arg0, f32 arg1, f32 arg2, f32 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7) {
    CmdWord *cursor;
    CmdWord *first;
    func_80415D10_S5 *dl_base;
    /* FAKEMATCH: order the incoming first-color read before command construction. */
    u32 packed4;
    /* FAKEMATCH: keep color7 live during head updates. */
    u32 packed7;
    /* FAKEMATCH: keep color5 live during head updates. */
    u32 packed5;
    /* FAKEMATCH: keep color word live across pointer updates. */
    u32 packed6;
    /* FAKEMATCH: retain the shared extent constant across ordered head writes. */
    f32 extent_unit;
    /* FAKEMATCH: unsigned float conversion temporary. */
    u32 converted_bits;
    /* FAKEMATCH: capture flag before terminal head updates. */
    s32 draw_mode;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_14;
    f32 temp_f0_15;
    f32 temp_f0_16;
    f32 temp_f0_17;
    f32 temp_f0_18;
    f32 temp_f0_19;
    f32 temp_f0_20;
    f32 temp_f0_21;
    f32 temp_f0_22;
    f32 temp_f0_23;
    f32 temp_f0_24;
    f32 temp_f0_25;
    f32 temp_f0_26;
    f32 temp_f0_27;
    f32 temp_f0_28;
    f32 temp_f0_29;
    f32 temp_f0_2;
    f32 temp_f0_30;
    f32 temp_f0_31;
    f32 temp_f0_32;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 var_f21;
    f32 var_f20;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_t1;
    s32 temp_v1_33;
    u8 temp_v1;
    u8 temp_v1_10;
    u8 temp_v1_11;
    u8 temp_v1_12;
    u8 temp_v1_13;
    u8 temp_v1_14;
    u8 temp_v1_15;
    u8 temp_v1_16;
    u8 temp_v1_17;
    u8 temp_v1_18;
    u8 temp_v1_19;
    u8 temp_v1_20;
    u8 temp_v1_21;
    u8 temp_v1_22;
    u8 temp_v1_23;
    u8 temp_v1_24;
    u8 temp_v1_25;
    u8 temp_v1_26;
    u8 temp_v1_27;
    u8 temp_v1_28;
    u8 temp_v1_29;
    u8 temp_v1_2;
    u8 temp_v1_30;
    u8 temp_v1_31;
    u8 temp_v1_32;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;
    func_80415D10_S6 *temp_a0;
    func_80415D10_S7 *temp_a1;
    func_80415D10_S20 *temp_a1_3;
    func_80415D10_S14 *temp_s0;
    func_80415D10_S15 *temp_s1;
    func_80415D10_S10 *temp_t2;
    func_80415D10_S9 *temp_t3;
    func_80415D10_S8 *temp_t4;
    func_80415D10_S11 *temp_t5;
    func_80415D10_S12 *temp_t6;
    func_80415D10_S13 *temp_t7;
    func_80415D10_S18 *temp_v0;
    func_80415D10_S16 *temp_v1_34;
    func_80415D10_S17 *temp_v1_35;
    func_80415D10_S19 *temp_v1_36;
    func_80415D10_S21 *temp_v1_37;

    func_80415D10_S2 *color4 = (func_80415D10_S2 *)&arg4;
    func_80415D10_S4 *color5 = (func_80415D10_S4 *)&arg5;
    func_80415D10_S1 *color6;
    func_80415D10_S3 *color7;


    var_f21 = (arg0 + arg2) - RW_FC_00;
    var_f20 = (arg1 + arg3) - RW_FC_00;
    color6 = (func_80415D10_S1 *)&arg6;
    color7 = (func_80415D10_S3 *)&arg7;
    func_802A2898(&sp10, &sp14, &sp18, &sp1C);
    if (!((f32) sp18 < arg0) && !((f32) sp1C < arg1) && !(var_f21 < (f32) sp10) && (temp_f2 = (f32) sp14, !(var_f20 < temp_f2))) {
        if (arg1 < temp_f2) {
            temp_v1 = (color6->unk1);
            temp_f3 = (var_f20 - temp_f2) / arg3;
            temp_f0 = (f32) temp_v1 - ((f32) (temp_v1 - (color4->unk1)) * temp_f3);
            arg1 = temp_f2;
            (color4->unk1) = (u8)(converted_bits = !(RW_FC_01 <= temp_f0) ? (s32)temp_f0 : (converted_bits = (s32)(temp_f0 - RW_FC_01)) | 0x80000000);
            temp_v1_2 = (color6->unk2);
            temp_f0_2 = (f32) temp_v1_2 - ((f32) (temp_v1_2 - (color4->unk2)) * temp_f3);
            (color4->unk2) = (u8)(converted_bits = !(RW_FC_02 <= temp_f0_2) ? (s32)temp_f0_2 : (converted_bits = (s32)(temp_f0_2 - RW_FC_02)) | 0x80000000);
            temp_v1_3 = (color6->unk3);
            temp_f0_3 = (f32) temp_v1_3 - ((f32) (temp_v1_3 - (color4->unk3)) * temp_f3);
            (color4->unk3) = (u8)(converted_bits = !(RW_FC_03 <= temp_f0_3) ? (s32)temp_f0_3 : (converted_bits = (s32)(temp_f0_3 - RW_FC_03)) | 0x80000000);
            temp_v1_4 = (color6->unk0);
            temp_f0_4 = (f32) temp_v1_4 - ((f32) (temp_v1_4 - (color4->unk0)) * temp_f3);
            (color4->unk0) = (u8)(converted_bits = !(RW_FC_04 <= temp_f0_4) ? (s32)temp_f0_4 : (converted_bits = (s32)(temp_f0_4 - RW_FC_04)) | 0x80000000);
            temp_v1_5 = (color7->unk1);
            temp_f0_5 = (f32) temp_v1_5 - ((f32) (temp_v1_5 - (color5->unk1)) * temp_f3);
            (color5->unk1) = (u8)(converted_bits = !(RW_FC_05 <= temp_f0_5) ? (s32)temp_f0_5 : (converted_bits = (s32)(temp_f0_5 - RW_FC_05)) | 0x80000000);
            temp_v1_6 = (color7->unk2);
            temp_f0_6 = (f32) temp_v1_6 - ((f32) (temp_v1_6 - (color5->unk2)) * temp_f3);
            (color5->unk2) = (u8)(converted_bits = !(RW_FC_06 <= temp_f0_6) ? (s32)temp_f0_6 : (converted_bits = (s32)(temp_f0_6 - RW_FC_06)) | 0x80000000);
            temp_v1_7 = (color7->unk3);
            temp_f0_7 = (f32) temp_v1_7 - ((f32) (temp_v1_7 - (color5->unk3)) * temp_f3);
            (color5->unk3) = (u8)(converted_bits = !(RW_FC_07 <= temp_f0_7) ? (s32)temp_f0_7 : (converted_bits = (s32)(temp_f0_7 - RW_FC_07)) | 0x80000000);
            temp_v1_8 = (color7->unk0);
            temp_f0_8 = (f32) temp_v1_8 - ((f32) (temp_v1_8 - (color5->unk0)) * temp_f3);
            (color5->unk0) = (u8)(converted_bits = !(RW_FC_08 <= temp_f0_8) ? (s32)temp_f0_8 : (converted_bits = (s32)(temp_f0_8 - RW_FC_08)) | 0x80000000);
        }
        temp_f2_2 = (f32) sp1C;
        if (temp_f2_2 < var_f20) {
            temp_v1_9 = (color4->unk1);
            temp_f3_2 = (temp_f2_2 - arg1) / arg3;
            temp_f0_9 = (f32) temp_v1_9 + ((f32) ((color6->unk1) - temp_v1_9) * temp_f3_2);
            var_f20 = temp_f2_2;
            (color6->unk1) = (u8)(converted_bits = !(RW_FC_09 <= temp_f0_9) ? (s32)temp_f0_9 : (converted_bits = (s32)(temp_f0_9 - RW_FC_09)) | 0x80000000);
            temp_v1_10 = (color4->unk2);
            temp_f0_10 = (f32) temp_v1_10 + ((f32) ((color6->unk2) - temp_v1_10) * temp_f3_2);
            (color6->unk2) = (u8)(converted_bits = !(RW_FC_10 <= temp_f0_10) ? (s32)temp_f0_10 : (converted_bits = (s32)(temp_f0_10 - RW_FC_10)) | 0x80000000);
            temp_v1_11 = (color4->unk3);
            temp_f0_11 = (f32) temp_v1_11 + ((f32) ((color6->unk3) - temp_v1_11) * temp_f3_2);
            (color6->unk3) = (u8)(converted_bits = !(RW_FC_11 <= temp_f0_11) ? (s32)temp_f0_11 : (converted_bits = (s32)(temp_f0_11 - RW_FC_11)) | 0x80000000);
            temp_v1_12 = (color4->unk0);
            temp_f0_12 = (f32) temp_v1_12 + ((f32) ((color6->unk0) - temp_v1_12) * temp_f3_2);
            (color6->unk0) = (u8)(converted_bits = !(RW_FC_12 <= temp_f0_12) ? (s32)temp_f0_12 : (converted_bits = (s32)(temp_f0_12 - RW_FC_12)) | 0x80000000);
            temp_v1_13 = (color5->unk1);
            temp_f0_13 = (f32) temp_v1_13 + ((f32) ((color7->unk1) - temp_v1_13) * temp_f3_2);
            (color7->unk1) = (u8)(converted_bits = !(RW_FC_13 <= temp_f0_13) ? (s32)temp_f0_13 : (converted_bits = (s32)(temp_f0_13 - RW_FC_13)) | 0x80000000);
            temp_v1_14 = (color5->unk2);
            temp_f0_14 = (f32) temp_v1_14 + ((f32) ((color7->unk2) - temp_v1_14) * temp_f3_2);
            (color7->unk2) = (u8)(converted_bits = !(RW_FC_14 <= temp_f0_14) ? (s32)temp_f0_14 : (converted_bits = (s32)(temp_f0_14 - RW_FC_14)) | 0x80000000);
            temp_v1_15 = (color5->unk3);
            temp_f0_15 = (f32) temp_v1_15 + ((f32) ((color7->unk3) - temp_v1_15) * temp_f3_2);
            (color7->unk3) = (u8)(converted_bits = !(RW_FC_15 <= temp_f0_15) ? (s32)temp_f0_15 : (converted_bits = (s32)(temp_f0_15 - RW_FC_15)) | 0x80000000);
            temp_v1_16 = (color5->unk0);
            temp_f0_16 = (f32) temp_v1_16 + ((f32) ((color7->unk0) - temp_v1_16) * temp_f3_2);
            (color7->unk0) = (u8)(converted_bits = !(RW_FC_16 <= temp_f0_16) ? (s32)temp_f0_16 : (converted_bits = (s32)(temp_f0_16 - RW_FC_16)) | 0x80000000);
        }
        temp_f2_3 = (f32) sp10;
        if (arg0 < temp_f2_3) {
            temp_v1_17 = (color5->unk1);
            temp_f3_3 = (var_f21 - temp_f2_3) / arg2;
            temp_f0_17 = (f32) temp_v1_17 - ((f32) (temp_v1_17 - (color4->unk1)) * temp_f3_3);
            (color4->unk1) = (u8)(converted_bits = !(RW_FC_17 <= (arg0 = temp_f2_3, temp_f0_17)) ? (s32)temp_f0_17 : (converted_bits = (s32)(temp_f0_17 - RW_FC_17)) | 0x80000000);
            temp_v1_18 = (color5->unk2);
            temp_f0_18 = (f32) temp_v1_18 - ((f32) (temp_v1_18 - (color4->unk2)) * temp_f3_3);
            (color4->unk2) = (u8)(converted_bits = !(RW_FC_18 <= temp_f0_18) ? (s32)temp_f0_18 : (converted_bits = (s32)(temp_f0_18 - RW_FC_18)) | 0x80000000);
            temp_v1_19 = (color5->unk3);
            temp_f0_19 = (f32) temp_v1_19 - ((f32) (temp_v1_19 - (color4->unk3)) * temp_f3_3);
            (color4->unk3) = (u8)(converted_bits = !(RW_FC_19 <= temp_f0_19) ? (s32)temp_f0_19 : (converted_bits = (s32)(temp_f0_19 - RW_FC_19)) | 0x80000000);
            temp_v1_20 = (color5->unk0);
            temp_f0_20 = (f32) temp_v1_20 - ((f32) (temp_v1_20 - (color4->unk0)) * temp_f3_3);
            (color4->unk0) = (u8)(converted_bits = !(RW_FC_20 <= temp_f0_20) ? (s32)temp_f0_20 : (converted_bits = (s32)(temp_f0_20 - RW_FC_20)) | 0x80000000);
            temp_v1_21 = (color7->unk1);
            temp_f0_21 = (f32) temp_v1_21 - ((f32) (temp_v1_21 - (color6->unk1)) * temp_f3_3);
            (color6->unk1) = (u8)(converted_bits = !(RW_FC_21 <= temp_f0_21) ? (s32)temp_f0_21 : (converted_bits = (s32)(temp_f0_21 - RW_FC_21)) | 0x80000000);
            temp_v1_22 = (color7->unk2);
            temp_f0_22 = (f32) temp_v1_22 - ((f32) (temp_v1_22 - (color6->unk2)) * temp_f3_3);
            (color6->unk2) = (u8)(converted_bits = !(RW_FC_22 <= temp_f0_22) ? (s32)temp_f0_22 : (converted_bits = (s32)(temp_f0_22 - RW_FC_22)) | 0x80000000);
            temp_v1_23 = (color7->unk3);
            temp_f0_23 = (f32) temp_v1_23 - ((f32) (temp_v1_23 - (color6->unk3)) * temp_f3_3);
            (color6->unk3) = (u8)(converted_bits = !(RW_FC_23 <= temp_f0_23) ? (s32)temp_f0_23 : (converted_bits = (s32)(temp_f0_23 - RW_FC_23)) | 0x80000000);
            temp_v1_24 = (color7->unk0);
            temp_f0_24 = (f32) temp_v1_24 - ((f32) (temp_v1_24 - (color6->unk0)) * temp_f3_3);
            (color6->unk0) = (u8)(converted_bits = !(RW_FC_24 <= temp_f0_24) ? (s32)temp_f0_24 : (converted_bits = (s32)(temp_f0_24 - RW_FC_24)) | 0x80000000);
        }
        temp_f2_4 = (f32) sp18;
        if (temp_f2_4 < var_f21) {
            temp_v1_25 = (color4->unk1);
            temp_f3_4 = (temp_f2_4 - arg0) / arg2;
            temp_f0_25 = (f32) temp_v1_25 + ((f32) ((color5->unk1) - temp_v1_25) * temp_f3_4);
            var_f21 = temp_f2_4;
            (color5->unk1) = (u8)(converted_bits = !(RW_FC_25 <= temp_f0_25) ? (s32)temp_f0_25 : (converted_bits = (s32)(temp_f0_25 - RW_FC_25)) | 0x80000000);
            temp_v1_26 = (color4->unk2);
            temp_f0_26 = (f32) temp_v1_26 + ((f32) ((color5->unk2) - temp_v1_26) * temp_f3_4);
            (color5->unk2) = (u8)(converted_bits = !(RW_FC_26 <= temp_f0_26) ? (s32)temp_f0_26 : (converted_bits = (s32)(temp_f0_26 - RW_FC_26)) | 0x80000000);
            temp_v1_27 = (color4->unk3);
            temp_f0_27 = (f32) temp_v1_27 + ((f32) ((color5->unk3) - temp_v1_27) * temp_f3_4);
            (color5->unk3) = (u8)(converted_bits = !(RW_FC_27 <= temp_f0_27) ? (s32)temp_f0_27 : (converted_bits = (s32)(temp_f0_27 - RW_FC_27)) | 0x80000000);
            temp_v1_28 = (color4->unk0);
            temp_f0_28 = (f32) temp_v1_28 + ((f32) ((color5->unk0) - temp_v1_28) * temp_f3_4);
            (color5->unk0) = (u8)(converted_bits = !(RW_FC_28 <= temp_f0_28) ? (s32)temp_f0_28 : (converted_bits = (s32)(temp_f0_28 - RW_FC_28)) | 0x80000000);
            temp_v1_29 = (color6->unk1);
            temp_f0_29 = (f32) temp_v1_29 + ((f32) ((color7->unk1) - temp_v1_29) * temp_f3_4);
            (color7->unk1) = (u8)(converted_bits = !(RW_FC_29 <= temp_f0_29) ? (s32)temp_f0_29 : (converted_bits = (s32)(temp_f0_29 - RW_FC_29)) | 0x80000000);
            temp_v1_30 = (color6->unk2);
            temp_f0_30 = (f32) temp_v1_30 + ((f32) ((color7->unk2) - temp_v1_30) * temp_f3_4);
            (color7->unk2) = (u8)(converted_bits = !(RW_FC_30 <= temp_f0_30) ? (s32)temp_f0_30 : (converted_bits = (s32)(temp_f0_30 - RW_FC_30)) | 0x80000000);
            temp_v1_31 = (color6->unk3);
            temp_f0_31 = (f32) temp_v1_31 + ((f32) ((color7->unk3) - temp_v1_31) * temp_f3_4);
            (color7->unk3) = (u8)(converted_bits = !(RW_FC_31 <= temp_f0_31) ? (s32)temp_f0_31 : (converted_bits = (s32)(temp_f0_31 - RW_FC_31)) | 0x80000000);
            temp_v1_32 = (color6->unk0);
            temp_f0_32 = (f32) temp_v1_32 + ((f32) ((color7->unk0) - temp_v1_32) * temp_f3_4);
            (color7->unk0) = (u8)(converted_bits = !(RW_FC_32 <= temp_f0_32) ? (s32)temp_f0_32 : (converted_bits = (s32)(temp_f0_32 - RW_FC_32)) | 0x80000000);
        }
        temp_a2 = (s32) arg0 << 0x12;
        temp_t1 = (s32) arg1;
        temp_t1 = (temp_t1 & 0xFFFF) * 4;
        extent_unit = RW_FC_33;
        temp_a0 = (void *)D_80110634;
        packed4 = *(volatile u32 *)&arg4; /* FAKEMATCH: ordering only. */
        temp_a1 = (void *)temp_a0;
        temp_a0 = (void *)((CmdWord *)temp_a0 + 1); /* FAKEMATCH: preserve pointer advance before initial stores. */
        temp_a1->unk0 = 0x02180000;
        temp_a1->unk4 = (s32) (temp_a2 | temp_t1);
        temp_a1 = (void *)&temp_a0->unk8;
        temp_a0->unk0 = 0x02100000;
        temp_t4 = (void *)&temp_a0->unk10;
        *(volatile s32 *)&temp_a0->unk4 = (s32) ((packed4 << 8) | (packed4 >> 0x18)); /* FAKEMATCH: order color word before head update. */
        temp_t3 = (void *)&temp_a0->unk18;
        temp_t2 = (void *)&temp_a0->unk20;
        temp_t5 = (void *)&temp_a0->unk28;
        temp_t6 = (void *)&temp_a0->unk30;
        temp_t7 = (void *)&temp_a0->unk38;
        temp_s0 = (void *)&temp_a0->unk40;
        RW_DL_WRITE = temp_a0;
        RW_DL_WRITE = temp_a1;
        RW_DL_WRITE = temp_t4;
        temp_a0->unk8 = 0x02140000;
        temp_a1->unk4 = 0;
        temp_s1 = (void *)&temp_a0->unk48;
        packed6 = arg6;
        RW_DL_WRITE = temp_t3;
        temp_a0->unk10 = 0x02180002;
        RW_DL_WRITE = temp_t2;
        packed7 = arg7;
        RW_DL_WRITE = temp_t5;
        var_f21 += extent_unit;
        RW_DL_WRITE = temp_t6;
        RW_DL_WRITE = temp_t7;
        RW_DL_WRITE = temp_s0;
        packed5 = arg5;
        var_f20 += extent_unit;
        RW_DL_WRITE = temp_s1;
        temp_v1_33 = ((s32) var_f20 & 0xFFFF) * 4;
        temp_t4->unk4 = (s32) (temp_a2 | temp_v1_33);
        temp_a0->unk18 = 0x02100002;
        temp_t3->unk4 = (s32) ((packed6 << 8) | (packed6 >> 0x18));
        temp_a0->unk20 = 0x02140002;
        temp_t2->unk4 = 0;
        temp_a0->unk28 = 0x02180004;
        temp_a1_2 = (s32) var_f21 << 0x12;
        temp_t5->unk4 = (s32) (temp_a1_2 | temp_v1_33);
        temp_v1_34 = (void *)&temp_a0->unk50;
        temp_a0->unk30 = 0x02100004;
        temp_t6->unk4 = (s32) ((packed7 << 8) | (packed7 >> 0x18));
        temp_a0->unk38 = 0x02140004;
        temp_t7->unk4 = 0;
        temp_a0->unk40 = 0x02180006;
        temp_s0->unk4 = (s32) (temp_a1_2 | temp_t1);
        temp_a0->unk48 = 0x02100006;
        RW_DL_WRITE = temp_v1_34;
        temp_s1->unk4 = (s32) ((packed5 << 8) | (packed5 >> 0x18));
        temp_a0->unk50 = 0x02140006;
        *(volatile s32 *)&temp_v1_34->unk4 = 0; /* FAKEMATCH: order final zero word before flag branch. */
        draw_mode = RW_FLAG; /* FAKEMATCH: order flag read before head writes. */
        RW_DL_WRITE = (void *)&temp_a0->unk58;
        if (draw_mode == 0) {
            func_80415D10_S5 **head = &D_80110634;
            cursor = (CmdWord *)(*head);
            first = cursor++;
            temp_v0 = (void *)cursor;
            (*head) = temp_v0;
            first->w0 = 0x08000200;
            first->w1 = 0;
            temp_v1_36 = (void *)&temp_v0->unk8;
            temp_a1_3 = (void *)&temp_v0->unk10;
            (*head) = temp_v1_36;
            temp_v0->unk0 = 0x08020400;
            temp_v0->unk4 = 0;
            (*head) = temp_a1_3;
            temp_v0->unk8 = 0x08040600;
            temp_v1_36->unk4 = 0;
            (*head) = (void *)&temp_v0->unk18;
            temp_v0->unk10 = 0x08060000;
            temp_a1_3->unk4 = 0;
            return;
        }
        {
            func_80415D10_S5 **head = &D_80110634;
        CmdWord *tail_cursor = (CmdWord *)(*head);
        CmdWord *tail_first = tail_cursor++; /* FAKEMATCH: preserve postincrement ordering at terminal command. */
        (*head) = (void *)tail_cursor;
        tail_first->w0 = 0x06000204;
        tail_first->w1 = 0x40600;
        }
    }
}

#endif
