#ifndef UNBAKE_SPAN_16E000_CODE_80425BC0_H
#define UNBAKE_SPAN_16E000_CODE_80425BC0_H
#include "common/types.h"
#include "gfx.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Arg;
typedef struct Arg Arg;

struct Entry_func_8042840C_de;
typedef struct Entry_func_8042840C_de Entry_func_8042840C_de;

struct Player_func_80426174_de;
typedef struct Player_func_80426174_de Player_func_80426174_de;

struct Preset;
typedef struct Preset Preset;

struct PresetRow;
typedef struct PresetRow PresetRow;

struct PresetTable;
typedef struct PresetTable PresetTable;

struct Record_func_804284C0_de;
typedef struct Record_func_804284C0_de Record_func_804284C0_de;

struct ResultsDrawScreen;
typedef struct ResultsDrawScreen ResultsDrawScreen;

struct Slot_func_80428214_de;
typedef struct Slot_func_80428214_de Slot_func_80428214_de;

struct State_func_80426090_de;
typedef struct State_func_80426090_de State_func_80426090_de;

struct State_func_80428214_de;
typedef struct State_func_80428214_de State_func_80428214_de;

struct func_80426270_S1;
typedef struct func_80426270_S1 func_80426270_S1;

struct func_80428388_S1;
typedef struct func_80428388_S1 func_80428388_S1;

struct State_func_80426090_de;
struct State_func_80426090_de {
    char p[0x78];
    u8 unk78;
    char p2[6];
    s8 unk7F;
    char p3[17];
    u8 unk91;
};
struct Arg;
struct State_func_80426090_de;
struct Arg {
    char p[0x18];
    func_8024DED0_S2 *unk18;
    char p2[0x5bc];
    struct State_func_80426090_de *unk5D8;
    char p3[0x26];
    InventorySlot slots[8];
};
struct Entry_func_8042840C_de;
struct Entry_func_8042840C_de {
    char pad0[0x11C];
    u8 owned;
};
struct Entry_func_804279B8_de;
struct Globals_func_80427D70_de;
struct Globals_func_80427D70_de {
    char pad0[0xD];
    u8 mode;
    char padE[0xD0 - 0xE];
    struct Entry_func_804279B8_de status[8];
};
struct Info_func_80426174_de;
struct Info_func_80426174_de {
    char pad[0x4C];
    unsigned char enabled[22];
    unsigned char values[22];
    unsigned char present;
    char pad79[0x18];
    unsigned char locked;
};
struct Pair;
struct Pair {
    s32 a;
    s32 b;
    union {
        s32 id;
        struct {
            u16 high;
            u16 low;
        } half;
    } c;
};
struct Info_func_80426174_de;
struct Player_func_80426174_de;
struct Player_func_80426174_de {
    char pad[0x5D8];
    struct Info_func_80426174_de *info;
    char pad5DC[0x26];
    struct {
        unsigned char flag;
        unsigned char value;
    } options[22];
};
struct Preset;
struct Preset {
    u8 bytes[0x2A];
};
struct PresetRow;
struct PresetRow {
    Preset presets[20];
};
struct PresetTable;
struct PresetTable {
    char pad0[0x16];
    PresetRow rows[1];
};
struct Record_func_80427008_de;
struct Record_func_80427008_de {
    char pad0[0x7E];
    u8 single[5];
    u8 versus[5];
    u8 three[5];
    u8 four[5];
    char pad92[0x190 - 0x92];
};
struct Record_func_804284C0_de;
struct Record_func_804284C0_de {
    char pad0[6];
    u16 items[8];
};
struct ResultsDrawScreen;
struct Shape_typemap_21;
struct ResultsDrawScreen {
    char pad0[0x20];
    char panels[2][0x4A8];
    char pad970[0x988 - 0x970];
    s32 state;
    char pad98C[0xA44 - 0x98C];
    s32 soundBase;
    char padA48[0xA60 - 0xA48];
    struct Shape_typemap_21 *bannerShadow;
    struct Shape_typemap_21 *banner;
    s32 blinking;
    s32 frames;
    s32 blinkDelay;
};
struct Row_func_80426788_de;
struct Row_func_80426788_de {
    s32 pad0;
    f32 scale[4];
    f32 distance[4];
    Vec3 position[4];
    s32 light[4];
    char pad64[0x70 - 0x64];
};
struct Screen_func_80426788_de;
struct Screen_func_80426788_de {
    char pad0[0xA58];
    s32 wordA58;
};
struct Screen_func_80427008_de;
struct Screen_func_80427008_de {
    char pad0[0xA5C];
    s32 record;
    char padA60[0xA74 - 0xA60];
    u8 shown[5];
    u8 marked[5];
};
struct Screen_func_804273D4_de;
struct Screen_func_804273D4_de {
    char pad0[0x970];
    s32 context;
};
struct Screen_func_80427D70_de;
struct Screen_func_80427D70_de {
    char pad0[0xA5C];
    s32 player;
    char padA60[0xA74 - 0xA60];
    u8 owned[0xA79 - 0xA74];
    u8 unlocked[1];
};
struct Screen_func_80428300_de;
struct Screen_func_80428300_de {
    char pad[0xA5C];
    s32 player;
};
struct Slot_func_80428214_de;
struct Slot_func_80428214_de {
    u8 flags[0x16];
    u8 unk16[0x16];
    u8 ready;
    u8 pad2D[0x96 - 0x2D];
};
struct State_func_804280BC_de;
struct func_8028469C_S2;
struct State_func_804280BC_de {
    char pad0[0x998];
    struct func_8028469C_S2 *owner;
    char pad99C[0xA04 - 0x99C];
    char text[0x40];
    s32 name;
};
struct State_func_80428214_de;
struct State_func_80428214_de {
    u8 pad0[0x11C];
    Slot_func_80428214_de slots[4];
};
struct Table_func_80427D70_de;
struct Table_func_80427D70_de {
    u8 pad0;
    u8 first;
    u8 items[3];
};
struct func_80426270_S1;
struct func_80426270_S1 {
    char pad0[0x4];
    func_8024DED0_S2 unk4;
};
struct Resource_func_80419E54_de;
struct func_80428388_S1;
struct func_80428388_S1 {
    char pad0[0xA60];
    struct Resource_func_80419E54_de * unkA60;
    char padA60[0xA64 - 0xA60 - sizeof(struct Resource_func_80419E54_de*)];
    struct Resource_func_80419E54_de * unkA64;
    char padA64[0xA68 - 0xA64 - sizeof(struct Resource_func_80419E54_de*)];
    s32 unkA68;
};
extern void func_80427008_de(void);
extern void func_804280BC_de(void);
extern void func_804281A8_de(void);
extern void func_80428214_de(void);
extern void func_80428300_de(void);
extern void func_8042840C_de(void);
extern int func_8042863C_de(int id);
#endif
