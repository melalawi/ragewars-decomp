#ifndef UNBAKE_SPAN_16E000_TYPES_H
#define UNBAKE_SPAN_16E000_TYPES_H
#include "common/types.h"
#include "../types.h"
struct Active;
typedef struct Active Active;

struct Cell_func_80421BEC_de;
typedef struct Cell_func_80421BEC_de Cell_func_80421BEC_de;

struct ControllerProfile;
typedef struct ControllerProfile ControllerProfile;

struct MenuWidget;
typedef struct MenuWidget MenuWidget;

struct Menu_func_8043E494_de;
typedef struct Menu_func_8043E494_de Menu_func_8043E494_de;

struct Model;
typedef struct Model Model;

struct NodeEvent;
typedef struct NodeEvent NodeEvent;

struct OSPfs_func_80445F80_de;
typedef struct OSPfs_func_80445F80_de OSPfs_func_80445F80_de;

struct PixelFormat;
typedef struct PixelFormat PixelFormat;

struct PlayerRecord;
typedef struct PlayerRecord PlayerRecord;

struct Player_func_80434750_de;
typedef struct Player_func_80434750_de Player_func_80434750_de;

struct Profile_func_80408C4C_de;
typedef struct Profile_func_80408C4C_de Profile_func_80408C4C_de;

struct Record_func_80433914_de;
typedef struct Record_func_80433914_de Record_func_80433914_de;

struct Resource_func_80419E54_de;
typedef struct Resource_func_80419E54_de Resource_func_80419E54_de;

struct Settings_func_8042EB10_de;
typedef struct Settings_func_8042EB10_de Settings_func_8042EB10_de;

struct State_func_80421BEC_de;
typedef struct State_func_80421BEC_de State_func_80421BEC_de;

struct State_func_8043E254_de;
typedef struct State_func_8043E254_de State_func_8043E254_de;

struct State_func_804447F0_de;
typedef struct State_func_804447F0_de State_func_804447F0_de;

struct TextEntry;
typedef struct TextEntry TextEntry;

struct __OSDir;
typedef struct __OSDir __OSDir;

struct __OSInode;
typedef struct __OSInode __OSInode;

union __OSInodeUnit;
typedef union __OSInodeUnit __OSInodeUnit;

struct func_8042CE54_S1;
typedef struct func_8042CE54_S1 func_8042CE54_S1;

struct func_80435010_S3;
typedef struct func_80435010_S3 func_80435010_S3;

struct func_80435010_S4;
typedef struct func_80435010_S4 func_80435010_S4;

struct func_804360F4_S2;
typedef struct func_804360F4_S2 func_804360F4_S2;

struct Active;
struct Active {
    char pad0[0x21];
    u8 score;
    u8 limit;
    u8 other;
    u8 time;
};
struct Part;
struct Part {
    char pad[0x78];
    u8 active;
};
struct Resource_func_80419E54_de;
struct Resource_func_80419E54_de {
    char pad[0x10];
    unsigned char value;
};
struct Slots_func_8041B7FC_de;
struct Slots_func_8041B7FC_de {
    char pad[0x4C];
    s32 values[1];
};
struct Player_func_804356BC_de;
struct Player_func_804356BC_de {
    char pad0[0x18];
    char slots[4][400];
    char pad658[0xB68 - 0x658];
};
struct Cell_func_80421BEC_de;
struct Cell_func_80421BEC_de {
    char pad[0x16];
    s16 unk16;
    s16 unk18;
    s16 unk1A;
};
struct ControllerProfile;
struct ControllerProfile {
    char pad0[0x224];
};
struct Entry_func_804101BC_de;
struct Entry_func_804101BC_de {
    s32 unused;
    s32 flags;
    char rest[0x14];
};
struct Entry_func_8041EB50_de;
struct Entry_func_8041EB50_de {
    s32 value;
    char pad[28 - 4];
};
struct Entry_func_80441EB0_de;
struct Entry_func_80441EB0_de {
    s16 type;
    char pad[0x22];
};
struct Field;
struct Field {
    char pad[0x14];
    char **text;
};
struct Field_func_8040A4A0_de;
struct Field_func_8040A4A0_de {
    char pad[0x14];
    char *text;
};
struct ResultsPlayerPanel;
struct ResultsPlayerPanel {
    char pad0[0x4A8];
    s32 state;
    char pad4AC[0x4D0 - 0x4AC];
};
struct Frame_func_804217D4_de;
struct Frame_func_804217D4_de {
    char a[0x16];
    s16 unk16;
    char b[2];
    s16 unk1A;
};
struct Player_func_8041EAC4_de;
struct Player_func_8041EAC4_de {
    char pad0[0x78];
    u8 active;
    char pad79[0x96 - 0x79];
};
struct Handlers;
struct Handlers {
    char pad[0xC];
    void (*callback)(void *, void *);
};
struct Owner_func_8043DB04_de;
struct Owner_func_8043DB04_de {
    char pad[0x5D0];
    s32 value;
};
struct Holder;
struct Owner_func_8043DB04_de;
struct Holder {
    char pad[0x1C];
    struct Owner_func_8043DB04_de *owner;
};
struct Item_func_8041A940_de;
struct Item_func_8041A940_de {
    s32 pad0;
    struct Item_func_8041A940_de *next;
    char pad8[0xE - 8];
    u16 kind;
    u8 alpha;
};
struct State_func_80442A60_de;
struct State_func_80442A60_de {
    char pad0[0xB0];
    s32 a;
    s32 b;
    s32 padB8;
    s32 c;
};
struct Handlers;
struct Item_func_80442A60_de;
struct State_func_80442A60_de;
struct Item_func_80442A60_de {
    char pad0[8];
    s32 resource;
    char padC[0x14 - 0xC];
    struct Handlers *handlers;
    char pad18[0x20 - 0x18];
    struct State_func_80442A60_de *state;
};
struct List;
struct List {
    char pad0[0x48];
    u8 visibleX;
    u8 visibleY;
    u8 maxX;
    u8 maxY;
    u8 cursorX;
    u8 cursorY;
    u8 scrollX;
    u8 scrollY;
    u8 minX;
    u8 minY;
};
struct MenuWidget;
struct MenuWidget {
    char pad0[12];
    s16 resource;
    char padE[2];
    u8 alpha;
    char pad11[3];
    s16 x;
    s16 y;
    s16 width;
    s16 height;
    char pad1C[0x2C - 0x1C];
    s32 value;
    struct MenuWidget *next;
    s32 field34;
    union { void *text; s32 image; s32 word38; };
};
struct Profile_func_80408C4C_de;
struct Profile_func_80408C4C_de {
    u16 words[4];
    char pad8[0x78];
    u8 flags;
    char pad81[3];
    u8 name[8];
};
struct Item_func_8041A940_de;
struct Menu_func_8041A940_de;
struct Menu_func_8041A940_de {
    char pad0[8];
    struct Item_func_8041A940_de *items;
    char padC[0x54 - 0xC];
    s32 state;
};
struct Key;
struct Owner_func_8041AD10_de;
struct Owner_func_8041AD10_de {
    char pad[0x38];
    struct Key *selected;
};
struct Frame_func_804217D4_de;
struct Menu_func_804241BC_de;
struct Menu_func_804241BC_de {
    char pad[0x44];
    struct Frame_func_804217D4_de *list;
};
struct Owner_func_8043E1F8_de;
struct Owner_func_8043E1F8_de {
    char pad0[0x85C];
    s32 unk85C;
};
struct Record_func_8043E494_de;
struct Record_func_8043E494_de {
    char pad[0x7B];
    s8 mode;
};
struct Owner_func_8043E494_de;
struct Record_func_8043E494_de;
struct Owner_func_8043E494_de {
    char pad[0x5D8];
    struct Record_func_8043E494_de *record;
};
struct Menu_func_8043E494_de;
struct Owner_func_8043E494_de;
struct Menu_func_8043E494_de {
    char pad[0x1C];
    struct Owner_func_8043E494_de *owner;
};
struct OSPfs_func_80445F80_de;
struct OSPfs_func_80445F80_de {
    int status;
    void *queue;
    int channel;
    u8 id[32];
    u8 label[32];
    int version;
    int dir_size;
    int inode_table;
    int minode_table;
    int dir_table;
    int inode_start_page;
    u8 banks;
    u8 activebank;
};
struct Cell_func_80421BEC_de;
struct Obj_func_80421BEC_de;
struct Obj_func_80421BEC_de {
    char pad[0x44];
    struct Cell_func_80421BEC_de *unk44;
};
struct Object_func_80442064_de;
struct Object_func_80442064_de {
    char pad[0x14];
    s32 *source;
};
struct Pair14;
struct Pair14 {
    char pad[0x14];
    s16 first;
    s16 second;
};
struct Record_func_80433914_de;
struct Record_func_80433914_de {
    union {
        struct {
    u8 name[8];
    s32 time;
    s8 owner;
    s8 player;
    char padE[1];
    u8 slot;
    char pad10[7];
    u8 count;
    char pad18[0x25 - 0x18];
    u8 rank;
    char pad26[0x4A - 0x26];
    u8 achievementFlags[0x189 - 0x4A];
    u8 setting[5];
    char pad18E[0x190 - 0x18E];
        };
        struct { char pad0[0x6C]; s32 wins, kills, deaths; } statistics;
    };
};
struct PixelFormat;
struct PixelFormat {
    char pad0[0x14];
    u32 mask[4];
    s32 shift[4];
};
struct PlayerRecord;
struct PlayerRecord {
    char data[0x190];
};
struct Player_func_80434750_de;
struct Player_func_80434750_de {
    char pad[0x58];
    int state;
    char pad5C[0xB68 - 0x5C];
};
struct Record_func_80409BDC_de;
struct func_80242278_S1;
struct Record_func_80409BDC_de {
    char pad[0x20];
    struct func_80242278_S1 *inner;
};
struct Record_func_80409DCC_de;
struct func_8021846C_S3;
struct Record_func_80409DCC_de {
    char pad[0x20];
    struct func_8021846C_S3 *inner;
};
struct Target_func_8040AB54_de;
struct Target_func_8040AB54_de {
    char pad[0x120];
    s32 flags;
};
struct Record_func_8040AB54_de;
struct Target_func_8040AB54_de;
struct Record_func_8040AB54_de {
    char pad[0xC];
    struct Target_func_8040AB54_de *target;
};
struct Record_func_80444C68_de;
struct Record_func_80444C68_de {
    char pad[8];
    s32 flags;
    char padC[0x14 - 0xC];
    s32 value;
};
struct Resource_func_804101BC_de;
struct Resource_func_804101BC_de {
    s32 id;
    s16 retained;
    s16 unused;
};
struct Shape_typemap_21;
struct Shape_typemap_21 {
    unsigned char padding_0[16];
    unsigned char field_10;
};
struct Settings_func_8042EB10_de;
struct Settings_func_8042EB10_de {
    char pad0[0xD];
    u8 trialKind;
    char padE[0x16];
    s8 time;
    s8 limit;
    s8 other;
    s8 score;
};
struct Cell_func_80421BEC_de;
struct Obj_func_80421BEC_de;
struct State_func_80421BEC_de;
struct State_func_80421BEC_de {
    struct Obj_func_80421BEC_de *unk0;
    s32 unk4;
    struct Cell_func_80421BEC_de *unk8;
    s32 unkC;
    s32 unk10;
};
struct State_func_8043E254_de;
struct State_func_8043E254_de {
    char pad0[0x1C];
    s32 unk1C;
    s32 unk20;
    char pad24[4];
    s32 unk28;
};
struct State_func_804447F0_de;
struct State_func_804447F0_de {
    char a[8];
    s32 unk8;
    char b[8];
    char *unk14;
};
struct Status;
struct Status {
    char pad0[0x78];
    u8 active;
    char pad79[0x80 - 0x79];
    s8 kind;
    char pad81[150 - 0x81];
};
struct TextEntry;
struct TextEntry {
    s32 id;
    char **text;
};
union __OSInodeUnit;
union __OSInodeUnit {
    struct {
        u8 bank;
        u8 page;
    } inode_t;
    u16 ipage;
};
struct __OSDir;
struct __OSDir {
    u32 game_code;
    u16 company_code;
    __OSInodeUnit start_page;
    u8 status;
    s8 reserved;
    u16 data_sum;
    u8 ext_name[4];
    u8 game_name[16];
};
struct __OSInode;
struct __OSInode {
    __OSInodeUnit inode_page[128];
};
struct func_8042CE54_S1;
struct func_8042CE54_S1 {
    char pad0[0xE0];
    void * unkE0;
};
struct func_80435010_S3;
struct func_80435010_S3 {
    char pad0[0xB8C];
    u8 unkB8C;
};
struct func_80435010_S4;
struct func_80435010_S4 {
    char pad0[0xB9C];
    s32 unkB9C;
};
#endif
