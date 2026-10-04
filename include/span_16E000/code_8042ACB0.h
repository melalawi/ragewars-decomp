#ifndef UNBAKE_SPAN_16E000_CODE_8042ACB0_H
#define UNBAKE_SPAN_16E000_CODE_8042ACB0_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Control;
typedef struct Control Control;

struct G;
typedef struct G G;

struct Menu_func_8042AAD0_de;
typedef struct Menu_func_8042AAD0_de Menu_func_8042AAD0_de;

struct Record_func_8042B1B8_de;
typedef struct Record_func_8042B1B8_de Record_func_8042B1B8_de;

struct ResourceBank;
typedef struct ResourceBank ResourceBank;

struct func_8042B4C4_S1;
typedef struct func_8042B4C4_S1 func_8042B4C4_S1;

struct Control;
struct Control {
    short unk0;
    unsigned short first;
    int second;
    char pad8[8];
};
struct Cup;
struct Cup {
    s32 index;
    s32 stages;
    u8 played[4];
};
struct G;
struct G {
    char pad0[0x3DC];
    s32 unk3DC;
    char pad3E0[0x3EC - 0x3E0];
    s32 unk3EC;
    s32 unk3F0;
    char pad3F4[0x440 - 0x3F4];
    s32 unk440;
    s32 unk444;
    s32 unk448;
    Resource_func_80419E54_de *unk44C;
};
struct Menu_func_8042AAD0_de;
struct Menu_func_8042AAD0_de {
    void *screen;
    char pad4[0x3E8];
    void *widgetA;
    void *widgetB;
    char pad3F4[0x40];
    int mode;
    int selection;
    char pad43C[4];
    void *widgetC;
    void *widgetD;
    void *widgetE;
};
struct Record_func_8042B1B8_de;
struct Record_func_8042B1B8_de {
    s32 key;
    char pad4[0x8];
    s32 value;
};
struct ResourceBank;
struct ResourceBank {
    u16 ids[20];
};
struct Label;
struct Screen_func_8042AFE0_de;
struct Screen_func_8042AFE0_de {
    char pad0[0x3EC];
    struct Label *widget;
    char pad3F0[0x3F4 - 0x3F0];
    char label[0x40];
    s32 list;
    s32 entry;
};
struct Item_func_8042B4D4_de;
struct Screen_func_8042B4D4_de;
struct Screen_func_8042B4D4_de {
    char pad0[0x308];
    char view[0x434 - 0x308];
    s32 category;
    s32 selection;
    struct Item_func_8042B4D4_de *item;
    struct Item_func_8042B4D4_de *left;
    struct Item_func_8042B4D4_de *right;
    struct Item_func_8042B4D4_de *marker;
    char pad44C[0x45C - 0x44C];
    s32 word45C;
    char pad460[0x464 - 0x460];
    s32 word464;
};
struct Resource_func_80419E54_de;
struct Screen_func_8042B644_de;
struct Screen_func_8042B644_de {
    char pad0[0x434];
    s32 category;
    s32 selection;
    struct Resource_func_80419E54_de *item;
    struct Resource_func_80419E54_de *left;
    struct Resource_func_80419E54_de *right;
    struct Resource_func_80419E54_de *marker;
    char pad44C[0x45C - 0x44C];
    s32 word45C;
    char pad460[0x464 - 0x460];
    s32 word464;
};
struct Item_func_8042B4D4_de;
struct Screen_func_8042B78C_de;
struct Screen_func_8042B78C_de {
    char pad0[0x308];
    char view[0x434 - 0x308];
    s32 category;
    s32 selection;
    struct Item_func_8042B4D4_de *item;
    char pad440[0x448 - 0x440];
    struct Item_func_8042B4D4_de *marker;
    char pad44C[0x45C - 0x44C];
    s32 word45C;
    char pad460[0x464 - 0x460];
    s32 word464;
};
struct State_func_8042BA54_de;
struct State_func_8042BA54_de {
    char pad[0x3DC];
    s32 mode;
    s32 next;
};
struct State_func_8042BA98_de;
struct State_func_8042BA98_de {
    char pad[0x3DC];
    s32 mode;
};
struct Resource_func_80419E54_de;
struct func_8042B4C4_S1;
struct func_8042B4C4_S1 {
    char pad0[0x450];
    struct Resource_func_80419E54_de * unk450;
    char pad450[0x454 - 0x450 - sizeof(struct Resource_func_80419E54_de*)];
    struct Resource_func_80419E54_de * unk454;
    char pad454[0x46C - 0x454 - sizeof(struct Resource_func_80419E54_de*)];
    s32 unk46C;
};
extern s32 func_8042AFB8_de(void);
extern void func_8042AFE0_de(void);
extern void func_8042B080_de(void);
extern void func_8042B350_de(void);
extern s32 func_8042BAD0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8042CC74_de(void);
extern void func_8042CFB0_de(void);
#endif
