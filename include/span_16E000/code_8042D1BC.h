#ifndef UNBAKE_SPAN_16E000_CODE_8042D1BC_H
#define UNBAKE_SPAN_16E000_CODE_8042D1BC_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Game_func_8042D060_de;
typedef struct Game_func_8042D060_de Game_func_8042D060_de;

struct IntegerState330;
typedef struct IntegerState330 IntegerState330;

struct IntegerStateF4;
typedef struct IntegerStateF4 IntegerStateF4;

struct Rules_func_8042D060_de;
typedef struct Rules_func_8042D060_de Rules_func_8042D060_de;

struct Screen_func_8042DC04_de;
typedef struct Screen_func_8042DC04_de Screen_func_8042DC04_de;

struct Settings_func_8042D060_de;
typedef struct Settings_func_8042D060_de Settings_func_8042D060_de;

struct Shared_BigObj;
typedef struct Shared_BigObj Shared_BigObj;

struct Shared_Rec3;
typedef struct Shared_Rec3 Shared_Rec3;

struct Slot_func_8042DC04_de;
typedef struct Slot_func_8042DC04_de Slot_func_8042DC04_de;

struct Rules_func_8042D060_de;
struct Rules_func_8042D060_de {
    char pad0[0x14];
    f32 timeLeft;
    char pad18[0x98 - 0x18];
    s32 lastStanding;
};
struct Settings_func_8042D060_de;
struct Settings_func_8042D060_de {
    char pad0[0x24];
    s8 timeSetting;
};
struct Game_func_8042D060_de;
struct Game_func_8042D060_de {
    char pad0[0xCAC];
    Settings_func_8042D060_de settings;
    char padCD1[0x1284 - 0xCD1];
    Rules_func_8042D060_de rules;
};
struct IntegerState330;
struct IntegerState330 {
    char pad0[0x32C];
    s32 unk_32C;
};
struct IntegerStateF4;
struct IntegerStateF4 {
    unsigned char padding_0[240];
    s32 unk_F0;
};
struct Item_func_8042D304_de;
struct Item_func_8042D304_de {
    char pad[0x10];
    u8 alpha;
    char pad11[0x2C - 0x11];
    s32 frame;
};
struct Match_func_8042DEA0_de;
struct Match_func_8042DEA0_de {
    char pad0[0x90];
    s32 kills;
    char pad94[4];
    s32 deaths;
};
struct Object_func_8042DD00_de;
struct Object_func_8042DD00_de {
    char pad[0x14];
    char text[0xC];
    s32 value;
};
struct Record_func_8042DEA0_de;
struct Record_func_8042DEA0_de {
    char name[0x189];
    u8 profile[5];
    char pad18E[2];
};
struct Screen_func_8042D690_de;
struct Screen_func_8042D690_de {
    char pad0[0xE4];
    void *object;
    char padE8[0x320 - 0xE8];
    s32 open;
    char pad324[0x328 - 0x324];
    s32 choice;
};
struct Screen_func_8042DC04_de;
struct Screen_func_8042DC04_de {
    int window;
    char pad4[12];
    int state;
    char pad14[12];
    int count;
};
struct Shape_func_802764D4_de_2;
struct Shared_BigObj;
struct Shared_BigObj {
    char pad0[0xF0];
    s32 slot[8];
    struct Shape_func_802764D4_de_2 arr2[8];
};
struct Shared_Rec3;
struct Shared_Rec3 {
    char pad0[0x91];
    u8 flag;
    char pad92[0x4];
};
struct State_func_8042CFDC_de;
struct State_func_8042CFDC_de {
    char pad0[0x54];
    s32 first;
    char pad58[0x78 - 0x58];
    s32 second;
};
struct State_func_8042D908_de;
struct State_func_8042D908_de {
    char pad[0xE8];
    s32 position;
    s32 limit;
};
struct Frame_func_804217D4_de;
struct Menu_func_804241BC_de;
struct State_func_8042DAF8_de;
struct State_func_8042DAF8_de {
    struct Menu_func_804241BC_de *menu;
    char pad4[0x8 - 0x4];
    struct Frame_func_804217D4_de *list;
    s32 delay;
    s32 target;
};
struct Status_func_8042DEA0_de;
struct Status_func_8042DEA0_de {
    char pad0[0x78];
    u8 joined;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    char pad7C;
    u8 unk7D;
    char pad7E[2];
    s8 kind;
    char pad81;
    u8 unk82;
    char pad83;
    char name[0x91 - 0x84];
    u8 computer;
    u8 team;
    char pad93;
    u8 lives;
    u8 score;
};
extern s32 func_8042D060_de(void);
extern void func_8042D118_de(void);
extern void func_8042D1C8_de(void);
extern void func_8042D418_de(s32 arg0);
extern s32 func_8042D958_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8042DE10_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8042EB10_de(void);
#endif
