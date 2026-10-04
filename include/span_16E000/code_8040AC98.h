#ifndef UNBAKE_SPAN_16E000_CODE_8040AC98_H
#define UNBAKE_SPAN_16E000_CODE_8040AC98_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Action_func_8040B4E0_de;
typedef struct Action_func_8040B4E0_de Action_func_8040B4E0_de;

struct Action_func_8040B648_de;
typedef struct Action_func_8040B648_de Action_func_8040B648_de;

struct Record_func_8040B58C_de;
typedef struct Record_func_8040B58C_de Record_func_8040B58C_de;

struct Action_func_8040B4E0_de;
struct Action_func_8040B4E0_de {
    char pad0[0x1C];
    void *unk1C;
    func_80242278_S1 *unk20;
    void *unk24;
};
struct Action_func_8040B648_de;
struct Action_func_8040B648_de {
    char a[0x1C];
    func_8024795C_S2 *unk1C;
    s32 unk20;
    s32 unk24;
};
struct Record_func_8040B58C_de;
struct Record_func_8040B58C_de {
    char pad0[0x1C];
    func_8024795C_S2 *player;
    func_80242278_S1 *inner;
    void *unk24;
};
extern void func_8040AC18_de(void);
extern void func_8040AC2C_de(void);
extern void func_8040AC40_de(void);
extern void func_8040B3A8_de(void);
extern void func_8040B3C4_de(void);
extern s32 func_8040B648_de(s32 arg0, Action_func_8040B648_de *arg1);
extern void func_8040B7E0_de(void);
extern void func_8040B7F8_de(void);
extern void func_8040B814_de(void);
extern void func_8040B830_de(void);
extern void func_8040B84C_de(void);
#endif
