#ifndef UNBAKE_SPAN_1000_CODE_80212D78_H
#define UNBAKE_SPAN_1000_CODE_80212D78_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct IntegerState23C;
typedef struct IntegerState23C IntegerState23C;

struct Source;
typedef struct Source Source;

struct func_80212D94_S3;
typedef struct func_80212D94_S3 func_80212D94_S3;

struct func_8021321C_S3;
typedef struct func_8021321C_S3 func_8021321C_S3;

struct func_8021321C_S5;
typedef struct func_8021321C_S5 func_8021321C_S5;

struct func_80213340_S2;
typedef struct func_80213340_S2 func_80213340_S2;

struct func_80213500_S3;
typedef struct func_80213500_S3 func_80213500_S3;

struct func_80213500_S7;
typedef struct func_80213500_S7 func_80213500_S7;

struct func_802136EC_S3;
typedef struct func_802136EC_S3 func_802136EC_S3;

struct func_802138F0_S1;
typedef struct func_802138F0_S1 func_802138F0_S1;

struct func_802138F0_S2;
typedef struct func_802138F0_S2 func_802138F0_S2;

union func_802138F0_S2_U18;
typedef union func_802138F0_S2_U18 func_802138F0_S2_U18;

struct func_80213CF8_S1;
typedef struct func_80213CF8_S1 func_80213CF8_S1;

struct IntegerState23C;
struct IntegerState23C {
    unsigned char padding_0[104];
    s32 unk_68;
    unsigned char padding_6C[436];
    s32 unk_220;
    unsigned char padding_224[20];
    s32 unk_238;
};
struct Source;
struct Source {
    u8 pad0[8];
    Vec3 position;
    u8 pad14[4];
    s32 *kind;
    Vec3 velocity;
    u8 pad28[0x10];
    s32 flags38;
    u8 pad3c[0x30];
    f32 height;
};
struct func_80212D94_S3;
struct func_80212D94_S3 {
    char pad0[0x10];
    s32 unk10;
    char pad10[0x64 - 0x10 - sizeof(s32)];
    void * unk64;
};
struct func_8021321C_S3;
struct func_8021321C_S3 {
    char pad0[0x38];
    u32 unk38;
    char pad38[0x5D8 - 0x38 - sizeof(u32)];
    void * unk5D8;
    char pad5D8[0x650 - 0x5D8 - sizeof(void*)];
    s16 unk650;
    char pad650[0x6B0 - 0x650 - sizeof(s16)];
    u32 unk6B0;
};
struct func_8021321C_S5;
struct func_8021321C_S5 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x320 - 0xC - sizeof(s32)];
    s32 unk320;
};
struct func_80213340_S2;
struct func_80213340_S2 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x22C - 0xC - sizeof(s32)];
    s32 unk22C;
};
struct func_80213500_S3;
struct func_80213500_S3 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x22C - 0xC - sizeof(s32)];
    s32 unk22C;
    char pad22C[0x314 - 0x22C - sizeof(s32)];
    s32 unk314;
    char pad314[0x320 - 0x314 - sizeof(s32)];
    s32 unk320;
};
struct func_80213500_S7;
struct func_80213500_S7 {
    char pad0[0x38];
    s32 unk38;
    char pad38[0x650 - 0x38 - sizeof(s32)];
    s16 unk650;
    char pad650[0x6B0 - 0x650 - sizeof(s16)];
    s32 unk6B0;
};
struct func_802136EC_S3;
struct func_802136EC_S3 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x220 - 0xC - sizeof(s32)];
    s32 unk220;
    char pad220[0x22C - 0x220 - sizeof(s32)];
    s32 unk22C;
    char pad22C[0x320 - 0x22C - sizeof(s32)];
    s32 unk320;
};
struct func_802138F0_S1;
struct func_802138F0_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s8 unk10;
    char pad10[0xCC - 0x10 - sizeof(s8)];
    s8 unkCC;
    char padCC[0x100 - 0xCC - sizeof(s8)];
    u8 unk100;
    char pad100[0x102 - 0x100 - sizeof(u8)];
    s16 unk102;
};
union func_802138F0_S2_U18;
union func_802138F0_S2_U18 {
    s32 v0;
    s16 v1;
};
struct func_802138F0_S2;
struct func_802138F0_S2 {
    char pad0[0xE];
    s8 unkE;
    char padE[0x10 - 0xE - sizeof(s8)];
    s8 unk10;
    char pad10[0x12 - 0x10 - sizeof(s8)];
    s8 unk12;
    char pad12[0x18 - 0x12 - sizeof(s8)];
    func_802138F0_S2_U18 unk18;
    char pad18[0x40 - 0x18 - sizeof(func_802138F0_S2_U18)];
    u8 unk40;
    char pad40[0x41 - 0x40 - sizeof(u8)];
    u8 unk41;
};
struct func_80213CF8_S1;
struct func_80213CF8_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x18 - 0x8 - sizeof(Vec3)];
    s32 * unk18;
};
extern void func_80212D94_de(void *arg0);
extern int func_80212FDC_eu(void * arg0);
extern void func_802131AC_de(void *arg0);
extern void func_8021321C_de(void *arg0);
extern void func_80213500_de(void *arg0);
extern void func_802136EC_de(void *arg0);
extern void func_80213810_de(void *arg0);
#endif
