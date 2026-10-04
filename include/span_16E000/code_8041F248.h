#ifndef UNBAKE_SPAN_16E000_CODE_8041F248_H
#define UNBAKE_SPAN_16E000_CODE_8041F248_H
#include "common/types.h"
#include "gfx.h"
#include "span_16E000/types.h"
#include "../types.h"
struct CharacterSelectionRoot;
typedef struct CharacterSelectionRoot CharacterSelectionRoot;

struct Choice;
typedef struct Choice Choice;

struct Entry_func_80420B78_de;
typedef struct Entry_func_80420B78_de Entry_func_80420B78_de;

struct Frame_func_804217D4_de;
typedef struct Frame_func_804217D4_de Frame_func_804217D4_de;

struct Match_func_80420618_de;
typedef struct Match_func_80420618_de Match_func_80420618_de;

struct NumberPadScreen;
typedef struct NumberPadScreen NumberPadScreen;

struct PanelRecord;
typedef struct PanelRecord PanelRecord;

struct RosterSlot;
typedef struct RosterSlot RosterSlot;

struct Row_func_80420850_de;
typedef struct Row_func_80420850_de Row_func_80420850_de;

struct SelectEntry;
typedef struct SelectEntry SelectEntry;

struct SelectMenu;
typedef struct SelectMenu SelectMenu;

struct Selection_func_80420850_de;
typedef struct Selection_func_80420850_de Selection_func_80420850_de;

struct State_func_80420C10_de;
typedef struct State_func_80420C10_de State_func_80420C10_de;

struct State_func_804217D4_de;
typedef struct State_func_804217D4_de State_func_804217D4_de;

struct CharacterSelectionRoot;
struct CharacterSelectionRoot {
    void *screen;
    s32 panel;
    char pad8[8];
    s32 choice;
    s32 phase;
};
struct Choice;
struct Choice {
    s32 id;
    char pad4[8];
    f32 scale[4];
    f32 angle[4];
    Vec3 position[4];
    s32 flags[4];
    char pad6C[4];
};
struct Entry_func_804201A4_de;
struct Entry_func_804201A4_de {
    void *window;
    char pad4[0x10 - 0x4];
    s32 kind;
    char pad14[0x18 - 0x14];
    s32 choice;
    char pad1C[0x4C8 - 0x1C];
};
struct Item_func_80420308_de;
struct Item_func_80420308_de {
    char pad[0x14];
    u16 x;
    u16 y;
};
struct Entry_func_80420308_de;
struct Item_func_80420308_de;
struct Entry_func_80420308_de {
    void *window;
    char pad4[0x8 - 0x4];
    struct Item_func_80420308_de *cursor;
    char padC[0x14 - 0xC];
    s32 state;
    char pad18[0x4C8 - 0x18];
};
struct Entry_func_80420AD4_de;
struct Entry_func_80420AD4_de {
    char pad[0x14];
    s32 state;
    char pad18[0x4C8 - 0x18];
};
struct Entry_func_80420B78_de;
struct Entry_func_80420B78_de {
    char pad[0x10];
    int target;
    int active;
    char pad18[0x4C8 - 0x18];
};
struct RosterSlot;
struct RosterSlot {
    char pad00[0x78];
    unsigned char active;
    char pad79[6];
    unsigned char player;
    unsigned char kind;
    unsigned char variant;
    char pad82[0xF];
    unsigned char locked;
    char pad92[4];
};
struct Match_func_80420618_de;
struct Match_func_80420618_de {
    char pad00[0xD];
    unsigned char mode;
    char pad0E[0xC2];
    RosterSlot slots[8];
};
struct MenuWidget;
struct NumberPadScreen;
struct NumberPadScreen {
    char pad0[8];
    void *window;
    char padC[0x20 - 0xC];
    struct MenuWidget *pad;
    char pad24[4];
    s32 length;
    s32 mode;
    s32 value;
    s32 cursor;
    s32 full;
};
struct PanelRecord;
struct PanelRecord {
    char pad[0x14];
    s32 mode;
    char pad18[8];
    char target;
    char pad21[0x4A7];
};
struct Panel_func_8041FC50_de;
struct Panel_func_8041FC50_de {
    char pad0[8];
    s32 player;
    s32 state;
    char pad10[8];
    char body[0x4A8];
    s32 flash;
    char pad4C4[4];
};
struct Row;
struct StateFlags;
struct Row {
    char pad0[0xC];
    struct StateFlags cells[6];
};
struct Row_func_80420308_de;
struct Row_func_80420308_de {
    s16 pad0;
    s16 frame;
    s16 pad4;
    u16 cursor;
    s16 pad8;
    u16 prompt;
    char padC[36 - 0xC];
};
struct Row_func_80420438_de;
struct StateFlags;
struct Row_func_80420438_de {
    char pad0[0xC];
    struct StateFlags cells[3];
    struct StateFlags options[3];
};
struct Row_func_80420850_de;
struct Row_func_80420850_de {
    s32 choice;
    s32 phase;
    s32 costume;
    char padC[4];
    char preview[0x4A8];
    char tail[0x10];
};
struct Panel_func_8041FC50_de;
struct Screen_func_8041FC50_de;
struct Screen_func_8041FC50_de {
    char pad0[8];
    struct Panel_func_8041FC50_de panels[4];
    char pad1328[0x10];
    s32 state;
};
struct Entry_func_804201A4_de;
struct Screen_func_804201A4_de;
struct Screen_func_804201A4_de {
    struct Entry_func_804201A4_de entries[4];
};
struct Entry_func_80420308_de;
struct Screen_func_80420308_de;
struct Screen_func_80420308_de {
    struct Entry_func_80420308_de entries[4];
};
struct Screen_func_804210E8_de;
struct Screen_func_804210E8_de {
    char pad0[0xC];
    void *boxes[4];
};
struct Screen_func_80421884_de;
struct Screen_func_80421884_de {
    s32 dialog;
    char pad4[0x34 - 4];
    s32 open;
    s32 confirmed;
};
struct SelectEntry;
struct SelectEntry {
    int choice;
    int state;
    unsigned char variant[4];
    char pad0C[4];
    char preview[0x4A8];
    int confirmed;
    char pad4BC[0xC];
};
struct SelectMenu;
struct SelectMenu {
    void *screen;
    void *menu;
    char pad08[8];
    SelectEntry entries[8];
};
struct Selection_func_80420850_de;
struct Selection_func_80420850_de {
    void *screen;
    char pad4[0xC];
    Row_func_80420850_de rows[8];
};
struct Slot_func_8041F1D8_de;
struct Slot_func_8041F1D8_de {
    s32 key;
    s32 value;
    char pad[0x70 - 8];
};
struct State_func_80420C10_de;
struct State_func_80420C10_de {
    s32 a;
    s32 unk4;
    char p0[8];
    s32 unk10;
    s32 unk14;
    char p1[0x1320];
    s32 unk1338;
    s32 unk133C;
    char p2[0x14];
    s32 unk1354;
};
struct State_func_8042177C_de;
struct State_func_8042177C_de {
    char pad0[8];
    void *list;
    char padC[0x20 - 0xC];
    void *object;
    char pad24[0x34 - 0x24];
    s32 ready;
};
struct Frame_func_804217D4_de;
struct State_func_804217D4_de;
struct State_func_804217D4_de {
    char a[8];
    s32 unk8;
    char b[0x14];
    struct Frame_func_804217D4_de *unk20;
    char c[8];
    s32 unk2C;
};
extern s32 func_8041F1D8_de(s32 key);
extern void func_8041FF2C_de(void);
extern void func_80420850_de(s32 player);
extern s32 func_80420AD4_de(void);
extern s32 func_80420D90_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_80421234_de(void);
extern void func_804217D4_de(void);
#endif
