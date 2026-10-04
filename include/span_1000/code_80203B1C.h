#ifndef UNBAKE_SPAN_1000_CODE_80203B1C_H
#define UNBAKE_SPAN_1000_CODE_80203B1C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Actor;
typedef struct Actor Actor;

struct Rider_func_80203F04_de;
typedef struct Rider_func_80203F04_de Rider_func_80203F04_de;

struct func_80203DF0_S2;
typedef struct func_80203DF0_S2 func_80203DF0_S2;

struct func_80203DF0_S4;
typedef struct func_80203DF0_S4 func_80203DF0_S4;

struct func_802043E0_S2;
typedef struct func_802043E0_S2 func_802043E0_S2;

struct func_80204468_S1;
typedef struct func_80204468_S1 func_80204468_S1;

struct func_8020459C_S2;
typedef struct func_8020459C_S2 func_8020459C_S2;

struct func_80204620_S2;
typedef struct func_80204620_S2 func_80204620_S2;

struct func_80204728_S1;
typedef struct func_80204728_S1 func_80204728_S1;

struct func_80204738_S1;
typedef struct func_80204738_S1 func_80204738_S1;

struct Actor;
struct Actor {
    char pad[0x1D8];
    struct Actor *linked;
    char pad1DC[0x5D8 - 0x1DC];
    Record *info;
    char pad5DC[0x5E4 - 0x5DC];
    int active;
};
struct Rider_func_80203F04_de;
struct Rider_func_80203F04_de {
    char pad0[0x130];
    Vec3 aim;
};
struct func_80203DF0_S2;
struct func_80203DF0_S2 {
    char pad0[0x18];
    char * unk18;
    char pad18[0x294 - 0x18 - sizeof(char*)];
    f32 unk294;
};
struct func_80203DF0_S4;
struct func_80203DF0_S4 {
    char pad0[0x6C];
    f32 unk6C;
    char pad6C[0x20C - 0x6C - sizeof(f32)];
    f32 unk20C;
};
struct func_802043E0_S2;
struct func_802043E0_S2 {
    char pad0[0x30];
    Hook * unk30;
};
struct func_80204468_S1;
struct func_80204468_S1 {
    char pad0[0x2C];
    void * unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void * unk108;
    char pad108[0x124 - 0x108 - sizeof(void*)];
    int unk124;
    char pad124[0x128 - 0x124 - sizeof(int)];
    int unk128;
    char pad128[0x12C - 0x128 - sizeof(int)];
    int unk12C;
};
struct func_8020459C_S2;
struct func_8020459C_S2 {
    char pad0[0x20];
    s16 unk20;
};
struct func_80204728_S1;
struct func_80204728_S1 {
    char pad0[0x10C];
    void * unk10C;
};
struct func_80204738_S1;
struct func_80204738_S1 {
    char pad0[0x100];
    int unk100;
    char pad100[0x1B0 - 0x100 - sizeof(int)];
    float unk1B0;
};
extern void func_80203DF0_de(void *arg0, void *arg1);
extern void func_802043E0_de(char *arg0, char *arg1);
extern void func_80204468_de(void *arg0, void *arg1);
extern s32 func_8020459C_de(void *arg0);
extern s32 func_80204620_de(void *arg0);
extern void func_80204728_de(void *arg0, void *arg1);
extern void func_80204738_de(void *object);
extern void func_8020478C_de(void *arg0);
extern void func_802047D8_de(void *arg0);
#endif
