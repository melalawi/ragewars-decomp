#ifndef UNBAKE_SPAN_1000_CODE_802945CC_H
#define UNBAKE_SPAN_1000_CODE_802945CC_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Entry80294AC4;
typedef struct Entry80294AC4 Entry80294AC4;

struct Prompt;
typedef struct Prompt Prompt;

struct func_802947DC_S1;
typedef struct func_802947DC_S1 func_802947DC_S1;

struct func_80294AC4_S1;
typedef struct func_80294AC4_S1 func_80294AC4_S1;

struct func_80294BB0_S1;
typedef struct func_80294BB0_S1 func_80294BB0_S1;

struct Entry80294AC4;
struct Entry80294AC4 {
    void (*callback)(void *arg0);
    s32 field4;
    s32 field8;
};
struct Prompt;
struct Prompt {
    char pad[0x88];
    s32 unk88;
};
struct Shape_func_8027ABF4_de_2;
struct Shape_func_8027ABF4_de_2 {
    unsigned char padding_0[4];
    int field_4;
};
struct func_802947DC_S1;
struct func_802947DC_S1 {
    char pad0[0x26DBC];
    s32 unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(s32)];
    s8 unk26DC1;
    char pad26DC1[0x26DD8 - 0x26DC1 - sizeof(s8)];
    s32 unk26DD8;
};
struct func_80294AC4_S1;
struct func_80294AC4_S1 {
    char pad0[0x26DB0];
    s32 unk26DB0;
    char pad26DB0[0x26DB8 - 0x26DB0 - sizeof(s32)];
    s32 unk26DB8;
    char pad26DB8[0x26DBC - 0x26DB8 - sizeof(s32)];
    s32 unk26DBC;
    char pad26DBC[0x26DD0 - 0x26DBC - sizeof(s32)];
    s32 unk26DD0;
};
struct func_80294BB0_S1;
struct func_80294BB0_S1 {
    char pad0[0x1284];
    Prompt unk1284;
};
extern void func_802945F8_de(void);
extern void func_802947A8_de(void);
extern void func_802947B0_de(void);
extern void func_802947B8_de(void);
extern void func_802947C0_de(void);
extern void func_80294848_de(s32 arg0);
extern void func_8029496C_de(s32 arg0);
extern void func_80294AA8_de(void);
extern void func_80294AB0_de(void *arg0);
extern void func_80294AB0_us(void);
extern void func_80294AB8_us(void);
extern void func_80294AC0_us(void);
extern void func_80294AC8_us(void);
extern void func_80294AD0_us(void);
extern void func_80294AD8_us(void);
extern void func_80294B64_de(void);
extern s32 func_80294B9C_de(func_80293C20_S1 *arg0);
extern void func_80294C50_de(void);
extern void func_80294C84_de(void);
#endif
