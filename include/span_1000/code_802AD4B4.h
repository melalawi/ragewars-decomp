#ifndef UNBAKE_SPAN_1000_CODE_802AD4B4_H
#define UNBAKE_SPAN_1000_CODE_802AD4B4_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct LocalizedEffectContext;
typedef struct LocalizedEffectContext LocalizedEffectContext;

struct func_802ADA44_S1;
typedef struct func_802ADA44_S1 func_802ADA44_S1;

struct func_802ADB08_S1;
typedef struct func_802ADB08_S1 func_802ADB08_S1;

struct func_802ADB08_S2;
typedef struct func_802ADB08_S2 func_802ADB08_S2;

struct func_802ADBF4_S1;
typedef struct func_802ADBF4_S1 func_802ADBF4_S1;

struct func_802ADBF4_S2;
typedef struct func_802ADBF4_S2 func_802ADBF4_S2;

struct func_802ADD18_S1;
typedef struct func_802ADD18_S1 func_802ADD18_S1;

union func_802ADD18_S1_U5E8;
typedef union func_802ADD18_S1_U5E8 func_802ADD18_S1_U5E8;

struct func_802ADD18_S2;
typedef struct func_802ADD18_S2 func_802ADD18_S2;

struct func_802ADFA0_S1;
typedef struct func_802ADFA0_S1 func_802ADFA0_S1;

struct func_802AE1A4_S1;
typedef struct func_802AE1A4_S1 func_802AE1A4_S1;

struct func_802AE1A4_S2;
typedef struct func_802AE1A4_S2 func_802AE1A4_S2;

struct LocalizedEffectContext;
struct LocalizedEffectContext {
    u8 reserved[0x17C1];
    u8 language;
};
struct func_802ADA44_S1;
struct func_802ADA44_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x19C - 0x14 - sizeof(s32)];
    u16 unk19C;
    char pad19C[0x1D0 - 0x19C - sizeof(u16)];
    s32 unk1D0;
};
struct func_802ADB08_S1;
struct func_802ADB08_S1 {
    char pad0[0x6];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    s16 unkC;
    char padC[0xE - 0xC - sizeof(s16)];
    s16 unkE;
};
struct func_802ADB08_S2;
struct func_802ADB08_S2 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5DC - 0x10 - sizeof(s32)];
    void * unk5DC;
};
struct func_802ADBF4_S1;
struct func_802ADBF4_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x174 - 0x10 - sizeof(s32)];
    s32 unk174;
    char pad174[0x5DC - 0x174 - sizeof(s32)];
    void * unk5DC;
    char pad5DC[0x5E4 - 0x5DC - sizeof(void*)];
    s32 unk5E4;
};
struct func_802ADBF4_S2;
struct func_802ADBF4_S2 {
    char pad0[0x6];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    s32 unkC;
};
union func_802ADD18_S1_U5E8;
union func_802ADD18_S1_U5E8 {
    u16 v0;
    s16 v1;
};
struct func_802ADD18_S1;
struct func_802ADD18_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x5DC - 0x10 - sizeof(s32)];
    void * unk5DC;
    char pad5DC[0x5E8 - 0x5DC - sizeof(void*)];
    func_802ADD18_S1_U5E8 unk5E8;
    char pad5E8[0x5EA - 0x5E8 - sizeof(func_802ADD18_S1_U5E8)];
    func_8022FD9C_S2_U770 unk5EA;
};
struct func_802ADD18_S2;
struct func_802ADD18_S2 {
    char pad0[0x6];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    u16 unkC;
};
struct func_802ADFA0_S1;
struct func_802ADFA0_S1 {
    char pad0[0x6];
    s16 unk6;
    char pad6[0x8 - 0x6 - sizeof(s16)];
    s16 unk8;
    char pad8[0xC - 0x8 - sizeof(s16)];
    s16 unkC;
    char padC[0xE - 0xC - sizeof(s16)];
    s16 unkE;
    char padE[0x10 - 0xE - sizeof(s16)];
    s16 unk10;
};
struct func_802AE1A4_S1;
struct func_802AE1A4_S1 {
    char pad0[0x5DC];
    void * unk5DC;
    char pad5DC[0x16D4 - 0x5DC - sizeof(void*)];
    s32 unk16D4;
};
struct func_802AE1A4_S2;
struct func_802AE1A4_S2 {
    char pad0[0x124];
    s16 unk124;
};
extern s32 func_802ACB18_de(void *arg0, void *arg1);
extern s32 func_802ACD28_de(void *arg0, void *arg1);
extern s32 func_802ACFB0_de(void *arg0, void *arg1);
extern s32 func_802AD1B4_de(void *arg0);
extern int func_802AD264_de(void);
#endif
