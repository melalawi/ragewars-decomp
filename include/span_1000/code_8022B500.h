#ifndef UNBAKE_SPAN_1000_CODE_8022B500_H
#define UNBAKE_SPAN_1000_CODE_8022B500_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Context;
typedef struct Context Context;

struct FloatState67C;
typedef struct FloatState67C FloatState67C;

struct Game_func_8022B7F8_de;
typedef struct Game_func_8022B7F8_de Game_func_8022B7F8_de;

struct IntegerState1218;
typedef struct IntegerState1218 IntegerState1218;

struct IntegerState1250;
typedef struct IntegerState1250 IntegerState1250;

struct Obj_func_8022B550_de;
typedef struct Obj_func_8022B550_de Obj_func_8022B550_de;

struct ObjectState12C4;
typedef struct ObjectState12C4 ObjectState12C4;

struct ObjectState13E4;
typedef struct ObjectState13E4 ObjectState13E4;

struct Player_func_8022C110_de;
typedef struct Player_func_8022C110_de Player_func_8022C110_de;

struct Record_func_8022BA0C_de;
typedef struct Record_func_8022BA0C_de Record_func_8022BA0C_de;

struct Rules_func_8022C110_de;
typedef struct Rules_func_8022C110_de Rules_func_8022C110_de;

struct Timer;
typedef struct Timer Timer;

struct func_8022B720_S1;
typedef struct func_8022B720_S1 func_8022B720_S1;

struct func_8022B74C_S1;
typedef struct func_8022B74C_S1 func_8022B74C_S1;

struct func_8022B7E8_S1;
typedef struct func_8022B7E8_S1 func_8022B7E8_S1;

struct func_8022B7E8_S2;
typedef struct func_8022B7E8_S2 func_8022B7E8_S2;

struct func_8022B974_S1;
typedef struct func_8022B974_S1 func_8022B974_S1;

struct func_8022BAC0_S1;
typedef struct func_8022BAC0_S1 func_8022BAC0_S1;

struct func_8022BAC0_S3;
typedef struct func_8022BAC0_S3 func_8022BAC0_S3;

struct func_8022BB70_S1;
typedef struct func_8022BB70_S1 func_8022BB70_S1;

struct func_8022BB70_S2;
typedef struct func_8022BB70_S2 func_8022BB70_S2;

struct func_8022BC04_S1;
typedef struct func_8022BC04_S1 func_8022BC04_S1;

struct func_8022BD84_S2;
typedef struct func_8022BD84_S2 func_8022BD84_S2;

struct func_8022C070_S2;
typedef struct func_8022C070_S2 func_8022C070_S2;

struct ScoreTable;
struct ScoreTable {
    u8 pad00[0x3C];
    short value[8];
};
struct Record_func_8022BA0C_de;
struct ScoreTable;
struct Record_func_8022BA0C_de {
    u8 pad0000[0x5D8];
    struct ScoreTable *scores;
    u8 pad05DC[0x16E0 - 0x5DC];
    struct Record_func_8022BA0C_de *next;
    u8 pad16E4[4];
};
struct Context;
struct Record_func_8022BA0C_de;
struct Context {
    u8 pad00[4];
    struct Record_func_8022BA0C_de *base;
    u8 pad08[0x18];
    struct Record_func_8022BA0C_de *head;
};
struct FloatState67C;
struct FloatState67C {
    unsigned char padding_0[1656];
    f32 unk_678;
};
struct Game_func_8022B7F8_de;
struct Game_func_8022B7F8_de {
    char pad0[0x1240];
    MenuSettings settings;
};
struct IntegerState1218;
struct IntegerState1218 {
    unsigned char padding_0[1508];
    s32 unk_5E4;
    unsigned char padding_5E8[3112];
    s32 unk_1210;
    s32 unk_1214;
};
struct IntegerState1250;
struct IntegerState1250 {
    unsigned char padding_0[4684];
    s32 unk_124C;
};
struct Timer;
struct Timer {
    float step;
    float duration;
    int kind;
    float target;
    float elapsed;
    int tag;
};
struct Obj_func_8022B550_de;
struct Obj_func_8022B550_de {
    char pad[0x1248];
    Timer timers[5];
};
struct ObjectState12C4;
struct ObjectState12C4 {
    unsigned char padding_0[1508];
    s32 unk_5E4;
    unsigned char padding_5E8[3288];
    f32 unk_12C0;
};
struct ObjectState13E4;
struct ObjectState13E4 {
    char pad0[0x170];
    char unk_170;
    char pad170[0x174 - 0x170 - sizeof(char)];
    s32 unk_174;
    char pad174[0x11E4 - 0x174 - sizeof(s32)];
    f32 unk_11E4;
    char pad11E4[0x13E0 - 0x11E4 - sizeof(f32)];
    s32 unk_13E0;
};
struct Player_func_8022C110_de;
struct Player_func_8022C110_de {
    char pad0[0x5D4];
    int character;
    func_80229BE0_S2 *info;
    char pad5DC[0x5EA - 0x5DC];
    short state;
    char pad5EC[0x133C - 0x5EC];
    int lives;
    char pad1340[0x13C8 - 0x1340];
    int timer;
    char pad13CC[0x1450 - 0x13CC];
    int isBot;
};
struct Rules_func_8022C110_de;
struct Rules_func_8022C110_de {
    char pad0[0xD];
    unsigned char mode;
    char padE[0x1D - 0xE];
    unsigned char started;
};
struct func_8022B720_S1;
struct func_8022B720_S1 {
    char pad0[0x11DC];
    f32 unk11DC;
    char pad11DC[0x122C - 0x11DC - sizeof(f32)];
    s32 unk122C;
};
struct func_8022B74C_S1;
struct func_8022B74C_S1 {
    char pad0[0x5DC];
    s32 unk5DC;
    char pad5DC[0x13B0 - 0x5DC - sizeof(s32)];
    s32 unk13B0;
};
struct func_8022B7E8_S1;
struct func_8022B7E8_S1 {
    char pad0[0x5DC];
    void * unk5DC;
    char pad5DC[0x11E4 - 0x5DC - sizeof(void*)];
    f32 unk11E4;
    char pad11E4[0x13E0 - 0x11E4 - sizeof(f32)];
    void * unk13E0;
};
struct func_8022B7E8_S2;
struct func_8022B7E8_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x5D8 - 0x100 - sizeof(s32)];
    char * unk5D8;
};
struct func_8022B974_S1;
struct func_8022B974_S1 {
    char pad0[0x1210];
    s32 unk1210;
    char pad1210[0x1214 - 0x1210 - sizeof(s32)];
    s32 unk1214;
};
struct func_8022BAC0_S1;
struct func_8022BAC0_S1 {
    char pad0[0x18];
    void * unk18;
    char pad18[0x50 - 0x18 - sizeof(void*)];
    f32 unk50;
    char pad50[0x54 - 0x50 - sizeof(f32)];
    f32 unk54;
    char pad54[0x58 - 0x54 - sizeof(f32)];
    f32 unk58;
    char pad58[0x5D8 - 0x58 - sizeof(f32)];
    void * unk5D8;
    char pad5D8[0x5E0 - 0x5D8 - sizeof(void*)];
    s32 unk5E0;
};
struct func_8022BAC0_S3;
struct func_8022BAC0_S3 {
    char pad0[0xFC];
    f32 unkFC;
    char padFC[0x100 - 0xFC - sizeof(f32)];
    f32 unk100;
    char pad100[0x104 - 0x100 - sizeof(f32)];
    f32 unk104;
};
struct func_8022BB70_S1;
struct func_8022BB70_S1 {
    char pad0[0x62C];
    s32 unk62C;
};
struct func_8022BB70_S2;
struct func_8022BB70_S2 {
    char pad0[0x3];
    u8 unk3;
    char pad3[0x18 - 0x3 - sizeof(u8)];
    void * unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void * unk5D8;
    char pad5D8[0x86C - 0x5D8 - sizeof(void*)];
    s32 unk86C;
};
struct func_8022BC04_S1;
struct func_8022BC04_S1 {
    char pad0[0x2E8];
    char unk2E8;
    char pad2E8[0x484 - 0x2E8 - sizeof(char)];
    void * unk484;
    char pad484[0x62E - 0x484 - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x1450 - 0x62E - sizeof(s16)];
    s32 unk1450;
};
struct func_8022BD84_S2;
struct func_8022BD84_S2 {
    char pad0[0x840];
    s32 unk840;
};
struct func_8022C070_S2;
struct func_8022C070_S2 {
    char pad0[0x780];
    f32 unk780;
};
extern int func_8022B97C_de(void);
extern void *func_8022BA0C_de(Context *context);
extern int func_8022BA90_de(void);
extern int func_8022BAC0_de(void);
extern void func_8022BC14_de(void *arg0);
extern int func_8022BEDC_de(void *arg0);
extern void func_8022C0D0_de(void *arg0);
extern void func_8022C110_de(Player_func_8022C110_de *player);
extern void func_8022C2B4_de(void *arg0, char *arg1);
#endif
