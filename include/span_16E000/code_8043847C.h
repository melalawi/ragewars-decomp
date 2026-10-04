#ifndef UNBAKE_SPAN_16E000_CODE_8043847C_H
#define UNBAKE_SPAN_16E000_CODE_8043847C_H
#include "common/types.h"
#include "../types.h"
struct Pulse;
typedef struct Pulse Pulse;

struct Pulse;
struct Shape_func_80299E74_de_2;
struct Pulse {
    struct Shape_func_80299E74_de_2 *light;
    s32 phase;
};
struct State_func_80438A88_de;
struct State_func_80438A88_de {
    char pad0[0x9C];
    s32 first;
    char padA0[0xB0 - 0xA0];
    s32 second;
    char padB4[0x188 - 0xB4];
    s32 third;
};
struct State_func_80438C84_de;
struct State_func_80438C84_de {
    char pad[0x24];
    void *item;
    char pad28[0x90 - 0x28];
    s32 started;
    char pad94[0x1C0 - 0x94];
    s32 busy;
};
struct State_func_80439018_de;
struct State_func_80439018_de {
    void *menu;
    char pad4[0x8 - 0x4];
    void *music;
    void *effects;
    char pad10[0x14 - 0x10];
    s32 target;
};
struct State_func_80439128_de;
struct State_func_80439128_de {
    void *first;
    char pad4[0x14 - 4];
    s32 value;
};
extern void func_804389C4_de(void);
extern void func_80438A88_de(void);
extern s32 func_80438E7C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_804391B0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 func_8043944C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
#endif
