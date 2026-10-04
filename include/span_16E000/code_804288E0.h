#ifndef UNBAKE_SPAN_16E000_CODE_804288E0_H
#define UNBAKE_SPAN_16E000_CODE_804288E0_H
#include "common/types.h"
#include "gfx.h"
#include "span_16E000/types.h"
#include "../types.h"
struct ResultsOptionsScreen;
typedef struct ResultsOptionsScreen ResultsOptionsScreen;

struct func_804296A4_S1;
typedef struct func_804296A4_S1 func_804296A4_S1;

struct Entry_func_80428E10_de;
struct Entry_func_80428E10_de {
    s32 id;
    s32 first;
    s32 second;
    char pad[28 - 12];
};
struct Icon;
struct Icon {
    s32 key;
    s32 other;
    char pad8[0x10 - 0x8];
};
struct MenuRenderFill;
struct MenuRenderFill {
    s32 mode;
    f32 color[4];
};
struct Menu_func_80428850_de;
struct Resource_func_80419E54_de;
struct Menu_func_80428850_de {
    char pad0[0xA44];
    s32 current;
    struct Resource_func_80419E54_de *window;
    char padA4C[0xA6C - 0xA4C];
    s32 idle;
    char padA70[0xA74 - 0xA70];
    u8 reachable[5];
    u8 visited[5];
};
struct Options;
struct Options {
    char pad[0x24];
    u8 values[5];
};
struct Options_func_80429560_de;
struct Options_func_80429560_de {
    char pad[0x24];
    s8 val0;
    s8 val1;
    s8 val2;
    s8 val3;
    u8 val4;
};
struct ResultsOptionsScreen;
struct ResultsOptionsScreen {
    char pad0[0x970];
    union { MenuWidget *root; void *parent; };
};
struct Screen_func_80429560_de;
struct Screen_func_80429560_de {
    char pad0[0x1C];
    void *selectWidget;
    void *cursorWidget;
    void *widget24;
    void *widget28;
    void *widget2C;
    void *widget30;
    void *widget34;
    s32 countCap;
    s32 countDefault;
};
struct Screen_func_80429654_de;
struct Screen_func_80429654_de {
    char pad0[0x20];
    s32 cursor;
    char pad24[0x34 - 0x24];
    s32 list;
};
struct Label;
struct Screen_func_8042A990_de;
struct Screen_func_8042A990_de {
    void *window;
    char pad4[0x3EC - 0x4];
    struct Label *label;
    char pad3F0[0x3F4 - 0x3F0];
    char text[0x434 - 0x3F4];
    s32 category;
    s32 selection;
    void *item;
};
struct Resource_func_80419E54_de;
struct State_func_804287F8_de;
struct State_func_804287F8_de {
    char pad0[0x988];
    s32 mode;
    char pad98C[0xA50 - 0x98C];
    struct Resource_func_80419E54_de *item;
};
struct State_func_80428E10_de;
struct State_func_80428E10_de {
    char pad[0xA44];
    s32 selection;
};
struct Resource_func_80419E54_de;
struct VersusResultsScreen;
struct VersusResultsScreen {
    char pad0[0x8];
    char panels[4][0xC0];
    char tie[0x3DC - 0x308];
    s32 state;
    char pad3E0[0x434 - 0x3E0];
    s32 winnerSlot;
    s32 winner;
    char pad43C[0x450 - 0x43C];
    struct Resource_func_80419E54_de *bannerShadow;
    struct Resource_func_80419E54_de *banner;
    char pad458[0x464 - 0x458];
    s32 frames;
    s32 blinkDelay;
    s32 blinking;
};
struct func_804296A4_S1;
struct func_804296A4_S1 {
    char pad0[0x1C];
    void * unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    void * unk24;
    char pad24[0x28 - 0x24 - sizeof(void*)];
    void * unk28;
    char pad28[0x2C - 0x28 - sizeof(void*)];
    void * unk2C;
    char pad2C[0x30 - 0x2C - sizeof(void*)];
    void * unk30;
};
extern void func_80428700_de(void);
extern s32 func_80428E78_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80428F08_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80429560_de(void);
extern s32 func_80429994_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
#endif
