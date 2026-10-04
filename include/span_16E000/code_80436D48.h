#ifndef UNBAKE_SPAN_16E000_CODE_80436D48_H
#define UNBAKE_SPAN_16E000_CODE_80436D48_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct MenuListScreen;
typedef struct MenuListScreen MenuListScreen;

struct MenuSelectionMessage;
typedef struct MenuSelectionMessage MenuSelectionMessage;

struct MenuListScreen;
struct MenuListScreen {
    void *panels[2];
    void *listB;
    void *listA;
    void *listC;
    s32 selection;
    void *window;
};
struct MenuSelectionMessage;
struct MenuSelectionMessage {
    void *first;
    s32 pad4[3];
    s32 value;
};
struct Menu_func_80437718_de;
struct Resource_func_80419E54_de;
struct Menu_func_80437718_de {
    void *title;
    void *button;
    struct Resource_func_80419E54_de *item;
    s32 count;
    s32 selection;
};
struct State_func_80436BF4_de;
struct State_func_80436BF4_de {
    void *first;
    char pad4[0x20 - 4];
    s32 value;
    char pad24[0x28 - 0x24];
    s32 item;
};
struct Frame_func_804217D4_de;
struct Menu_func_804241BC_de;
struct State_func_80437444_de;
struct State_func_80437444_de {
    struct Menu_func_804241BC_de *menu;
    char pad4[0x8 - 0x4];
    struct Frame_func_804217D4_de *list;
    s32 delay;
    s32 target;
    s32 seen;
};
extern s32 func_80436E04_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_80437274_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
#endif
