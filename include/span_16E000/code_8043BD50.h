#ifndef UNBAKE_SPAN_16E000_CODE_8043BD50_H
#define UNBAKE_SPAN_16E000_CODE_8043BD50_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct State_func_8043BF28_de;
typedef struct State_func_8043BF28_de State_func_8043BF28_de;

struct Entry_func_8043BBB0_de;
struct Entry_func_8043BBB0_de {
    char pad[0x4B0];
    s32 state;
    s32 selection;
    s32 values[6];
};
struct Entry_func_8043BCC0_de;
struct Entry_func_8043BCC0_de {
    char pad[0x4B0];
    s32 state;
    char pad4B4[0x4D4 - 0x4B4];
    s32 nextActive;
};
struct Entry_func_8043BBB0_de;
struct Screen_func_8043BBB0_de;
struct Screen_func_8043BBB0_de {
    struct Entry_func_8043BBB0_de entries[4];
};
struct ResultsPlayerPanel;
struct State_func_8043BF28_de;
struct State_func_8043BF28_de {
    void *screen;
    void *menu;
    struct ResultsPlayerPanel players[4];
    char pad1348[0x10];
    int phase;
    int timer;
    char pad1360[8];
    int next;
};
extern s32 func_8043BFF0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8043C2D4_de(s32 *record);
extern s32 func_8043C2E0_de(s32 *record);
#endif
