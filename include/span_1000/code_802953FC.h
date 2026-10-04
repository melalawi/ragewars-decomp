#ifndef UNBAKE_SPAN_1000_CODE_802953FC_H
#define UNBAKE_SPAN_1000_CODE_802953FC_H
#include "common/types.h"
#include "../types.h"
struct Selection_func_802955EC_us_rev1;
typedef struct Selection_func_802955EC_us_rev1 Selection_func_802955EC_us_rev1;

struct func_802953FC_S1;
typedef struct func_802953FC_S1 func_802953FC_S1;

struct func_802956AC_S1;
typedef struct func_802956AC_S1 func_802956AC_S1;

struct func_802956AC_S2;
typedef struct func_802956AC_S2 func_802956AC_S2;

struct func_802958D8_S1;
typedef struct func_802958D8_S1 func_802958D8_S1;

struct func_80295B00_S1;
typedef struct func_80295B00_S1 func_80295B00_S1;

struct func_80295B18_S1;
typedef struct func_80295B18_S1 func_80295B18_S1;

struct func_80296F7C_S1;
typedef struct func_80296F7C_S1 func_80296F7C_S1;

struct Selection_func_802955EC_us_rev1;
struct Selection_func_802955EC_us_rev1 {
    s32 value;
    char pad4[12];
};
struct func_802953FC_S1;
struct func_802953FC_S1 {
    char pad0[0x2];
    u8 unk2;
    char pad2[0x3 - 0x2 - sizeof(u8)];
    u8 unk3;
};
struct func_802956AC_S1;
struct func_802956AC_S1 {
    char pad0[0x21A0];
    s32 unk21A0;
};
struct func_802956AC_S2;
struct func_802956AC_S2 {
    char pad0[0x2010];
    s32 unk2010;
};
struct func_802958D8_S1;
struct func_802958D8_S1 {
    char unk0;
    char pad0[0x1 - 0x0 - sizeof(char)];
    char unk1;
    char pad1[0x4 - 0x1 - sizeof(char)];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x10 - 0xC - sizeof(int)];
    int unk10;
    char pad10[0x14 - 0x10 - sizeof(int)];
    int unk14;
    char pad14[0x1C - 0x14 - sizeof(int)];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
    char pad24[0x28 - 0x24 - sizeof(int)];
    int unk28;
    char pad28[0x212C - 0x28 - sizeof(int)];
    int unk212C;
    char pad212C[0x2130 - 0x212C - sizeof(int)];
    int unk2130;
    char pad2130[0x2134 - 0x2130 - sizeof(int)];
    int unk2134;
    char pad2134[0x21B8 - 0x2134 - sizeof(int)];
    int unk21B8;
};
struct func_80295B00_S1;
struct func_80295B00_S1 {
    char pad0[0x2];
    unsigned char unk2;
};
struct func_80295B18_S1;
struct func_80295B18_S1 {
    char pad0[0x3];
    char unk3;
};
struct func_80296F7C_S1;
struct func_80296F7C_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    void * unk8;
};
extern void func_802954E0_us_rev1(void);
extern void func_802955AC_us_rev1(void);
extern int func_802955C8_us_rev1(void);
extern void func_80295890_us_rev1(void);
extern void func_802958D8_us_rev1(void);
extern void func_80295924_us_rev1(void);
extern void func_80295970_us_rev1(void);
extern int func_80295B00_us_rev1(void);
extern int func_80295B18_us_rev1(void);
extern void func_80295E78_de(int *value, int first, int second);
extern void func_80295FF4_de(void);
#endif
