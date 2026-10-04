#ifndef UNBAKE_SPAN_16E000_CODE_8043D904_H
#define UNBAKE_SPAN_16E000_CODE_8043D904_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct FlaggedRosterView;
typedef struct FlaggedRosterView FlaggedRosterView;

struct Menu_func_8043E1F8_de;
typedef struct Menu_func_8043E1F8_de Menu_func_8043E1F8_de;

struct PlayerSettings;
typedef struct PlayerSettings PlayerSettings;

struct Shared_func_8043DEDC_S1;
typedef struct Shared_func_8043DEDC_S1 Shared_func_8043DEDC_S1;

struct Shared_func_8043DEDC_S2;
typedef struct Shared_func_8043DEDC_S2 Shared_func_8043DEDC_S2;

struct Shared_func_8043DEDC_S3;
typedef struct Shared_func_8043DEDC_S3 Shared_func_8043DEDC_S3;

struct StatusStep;
typedef struct StatusStep StatusStep;

struct StatusView;
typedef struct StatusView StatusView;

struct func_8043E318_S2;
typedef struct func_8043E318_S2 func_8043E318_S2;

struct func_8043E5BC_S1;
typedef struct func_8043E5BC_S1 func_8043E5BC_S1;

struct FlaggedRosterView;
struct FlaggedRosterView {
    char pad0[0x148];
    u8 flag;
};
struct Menu_func_8043E1F8_de;
struct Owner_func_8043E1F8_de;
struct Menu_func_8043E1F8_de {
    char pad0[0x1C];
    struct Owner_func_8043E1F8_de *owner;
    func_80242278_S1 *widget;
};
struct PlayerSettings;
struct PlayerSettings {
    char pad0[0x78];
    s8 active;
    char pad79[6];
    s8 selected;
    char pad80[150 - 0x80];
};
struct Shared_func_8043DEDC_S1;
struct Shared_func_8043DEDC_S1 {
    char pad0[0x148];
    s8 unk148;
};
struct Shared_func_8043DEDC_S2;
struct Shared_func_8043DEDC_S2 {
    char pad0[0x224];
    s32 unk224;
};
struct Shared_func_8043DEDC_S3;
struct Shared_func_8043DEDC_S3 {
    char pad0[0x78];
    s8 unk78;
    char pad79[0x6];
    s8 unk7F;
};
struct StatusStep;
struct StatusStep {
    char pad[150];
};
struct StatusView;
struct StatusView {
    char pad[336];
    s8 active;
};
struct func_8043E318_S2;
struct func_8043E318_S2 {
    char pad0[0x5D8];
    u8 * unk5D8;
};
struct func_8043E5BC_S1;
struct func_8043E5BC_S1 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x28 - 0x20 - sizeof(s32)];
    s32 unk28;
};
extern s32 func_8043DB04_de(void *unused, struct Holder *holder);
extern void func_8043DE50_de(func_80250BD4_S1 *arg0);
extern void func_8043DEF8_de(void *arg0, s32 arg1);
extern void func_8043DFC8_de(void);
extern ControllerProfile *func_8043E05C_de(s32 *out);
extern void func_8043E124_de(void);
extern s32 func_8043E134_de(void);
extern s32 func_8043E1C0_de(void);
extern s32 func_8043E1F8_de(s32 arg0, Menu_func_8043E1F8_de *menu);
extern s32 func_8043E254_de(void);
#endif
