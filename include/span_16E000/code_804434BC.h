#ifndef UNBAKE_SPAN_16E000_CODE_804434BC_H
#define UNBAKE_SPAN_16E000_CODE_804434BC_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Actor_func_804438BC_de;
typedef struct Actor_func_804438BC_de Actor_func_804438BC_de;

struct Actor_func_80443C14_de;
typedef struct Actor_func_80443C14_de Actor_func_80443C14_de;

struct Arg_func_80443CD4_de;
typedef struct Arg_func_80443CD4_de Arg_func_80443CD4_de;

struct Entry_func_80443734_de;
typedef struct Entry_func_80443734_de Entry_func_80443734_de;

struct Object_func_80443C14_de;
typedef struct Object_func_80443C14_de Object_func_80443C14_de;

struct Owner_func_8043E1F8_de;
typedef struct Owner_func_8043E1F8_de Owner_func_8043E1F8_de;

struct Player_func_80443844_de;
typedef struct Player_func_80443844_de Player_func_80443844_de;

struct State_func_804438BC_de;
typedef struct State_func_804438BC_de State_func_804438BC_de;

struct Sync;
typedef struct Sync Sync;

struct Actor_func_80443844_de;
struct Actor_func_80443844_de {
    char pad[0x5D0];
    int waiting;
    char pad5D4[4];
    func_8020EA10_S3 *info;
};
struct Actor_func_804438BC_de;
struct Actor_func_804438BC_de {
    char pad0[4928];
    s32 unk1340;
    char pad1344[268];
    s32 unk1450;
};
struct Actor_func_80443C14_de;
struct Actor_func_80443C14_de {
    char pad[0x58];
    int flags58;
    char pad5c[0xC4];
    int flags120;
    char pad124[0x9C];
    int flags1c0;
    char pad1c4[0x4C];
    int flags210;
    char pad214[0x24];
    int flags238;
    char pad23c[0x24];
    int flags260;
};
struct Arg_func_80443CD4_de;
struct Arg_func_80443CD4_de {
    char pad[12];
    Actor_func_80443C14_de *unkC;
    char pad2[12];
    int unk1C;
};
struct Entry_func_80443734_de;
struct Entry_func_80443734_de {
    char pad0[4];
    s32 width;
    char pad8[4];
    f32 scaleX;
    f32 scaleY;
    char pad14[2];
    u16 x;
    char pad18[6];
    u16 y;
};
struct Owner_func_80443694_de;
struct Owner_func_80443694_de {
    char pad[0x698];
    s32 value;
};
struct Holder_func_80443694_de;
struct Owner_func_80443694_de;
struct Holder_func_80443694_de {
    char pad[0x1C];
    struct Owner_func_80443694_de *owner;
};
struct Leaf;
struct Leaf {
    char pad[0x8E];
    u8 flag;
};
struct Leaf;
struct Middle;
struct Middle {
    char pad[0x5D8];
    struct Leaf *leaf;
};
struct Actor_func_80443C14_de;
struct Object_func_80443C14_de;
struct Object_func_80443C14_de {
    char pad[0xC];
    struct Actor_func_80443C14_de *actor;
    char pad10[0xC];
    Owner_func_8043E1F8_de *parent;
};
struct Actor_func_80443844_de;
struct Player_func_80443844_de;
struct Player_func_80443844_de {
    char pad[0x1C];
    struct Actor_func_80443844_de *actor;
};
struct Middle;
struct Root_func_804436F8_de;
struct Root_func_804436F8_de {
    char pad[0x1C];
    struct Middle *middle;
};
struct Actor_func_804438BC_de;
struct State_func_804438BC_de;
struct State_func_804438BC_de {
    char pad0[28];
    struct Actor_func_804438BC_de * unk1C;
};
struct Sync;
struct Sync {
    char pad[0x54];
    int sync;
    char pad58[0x1C];
    int team;
};
extern void func_804433F8_de(void);
extern void func_80443528_us_rev1(void);
extern s32 func_80443694_de(void *unused, struct Holder_func_80443694_de *holder);
extern s32 func_804436F8_de(void *unused, struct Root_func_804436F8_de *root);
extern s32 func_80443710_de(void *arg0, MenuRules *arg1);
extern void func_80443734_de(func_80239CD0_S1 *arg0, Entry_func_80443734_de *arg1, s32 arg2, Style_func_8043C9AC_de *arg3);
extern int func_80443844_de(int unused, Player_func_80443844_de *player);
extern s32 func_804438BC_de(State_func_804438BC_de *arg0);
extern void func_80443BCC_de(void);
extern void func_80443BD4_de(struct Record_func_8040AB54_de *record);
extern void func_80443C14_de(Object_func_80443C14_de *object);
extern void func_80443CD4_de(Arg_func_80443CD4_de *arg0);
extern void func_80443DD0_de(Arg_func_80443CD4_de *arg0);
extern void func_80444094_de(u8 *record, u8 value);
#endif
