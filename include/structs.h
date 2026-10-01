#ifndef UNBAKE_STRUCTS_H
#define UNBAKE_STRUCTS_H
#include "types.h"

struct func_8043FFAC_S1 {
    char pad0[0x8];
    s32 unk8;
};
typedef struct func_8043FFAC_S1 func_8043FFAC_S1;

struct func_8043FFAC_S2 {
    s16 unk0;
    char pad0[0x2E];
    f32 unk30;
    f32 unk34;
    s32 unk38;
    s32 unk3C;
};
typedef struct func_8043FFAC_S2 func_8043FFAC_S2;

struct func_8043FFAC_S4 {
    s32 unk0;
    char pad0[0x8];
    f32 unkC;
    f32 unk10;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    u8 pad1B;
};
typedef struct func_8043FFAC_S4 func_8043FFAC_S4;

struct func_8043FFAC_S5 {
    s32 unk0;
    char pad0[0x10];
    s32 unk14;
    char pad14[0x4];
    s32 unk1C;
};
typedef struct func_8043FFAC_S5 func_8043FFAC_S5;

struct func_8043FFAC_S6 {
    s32 unk0;
    s32 unk4;
};
typedef struct func_8043FFAC_S6 func_8043FFAC_S6;

struct func_8041F2A0_Vec3 {
    f32 x;
    f32 y;
    f32 z;
};
typedef struct func_8041F2A0_Vec3 func_8041F2A0_Vec3;

struct func_8041F2A0_Item {
    char pad0[0x10];
    u8 alpha;
    char pad11[3];
    s16 x;
    s16 y;
    s16 w;
};
typedef struct func_8041F2A0_Item func_8041F2A0_Item;

struct func_8041F2A0_Player {
    func_8041F2A0_Item *highlight;
    s32 unk4;
    s32 kind;
    s32 unkC;
    s32 choice;
    char pad14[4];
    char model[0x4C0 - 0x18];
    s32 unk4C0;
    s32 pad4C4;
};
typedef struct func_8041F2A0_Player func_8041F2A0_Player;

struct func_8041F2A0_State {
    void *screen;
    s32 unk4;
    func_8041F2A0_Player players[4];
    func_8041F2A0_Item *header;
    s32 headerStep;
    func_8041F2A0_Item *footer;
    s32 footerStep;
    s32 phase;
    s32 timer;
    s32 prompt;
    func_8041F2A0_Item *promptItem;
    func_8041F2A0_Item *pulse;
    s32 pulseStep;
    s32 clock;
    s32 result;
};
typedef struct func_8041F2A0_State func_8041F2A0_State;

struct func_8041F2A0_Cell {
    u16 pad;
    u16 id;
};
typedef struct func_8041F2A0_Cell func_8041F2A0_Cell;

struct func_8041F2A0_Layout {
    s32 kind;
    u16 pad4[3];
    u16 title;
    func_8041F2A0_Cell cells[3];
    func_8041F2A0_Cell options[3];
};
typedef struct func_8041F2A0_Layout func_8041F2A0_Layout;

struct func_8041F2A0_Row {
    s32 pad;
    f32 scale[4];
    f32 distance[4];
    func_8041F2A0_Vec3 position[4];
    s32 light[4];
    char tail[12];
};
typedef struct func_8041F2A0_Row func_8041F2A0_Row;

struct func_8041F2A0_Config {
    char pad0[0x78];
    u8 active;
    char pad79[0x96 - 0x79];
};
typedef struct func_8041F2A0_Config func_8041F2A0_Config;

#endif
