#ifndef UNBAKE_SPAN_1000_CODE_80297008_H
#define UNBAKE_SPAN_1000_CODE_80297008_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Board;
typedef struct Board Board;

struct Cache_func_80298170_de;
typedef struct Cache_func_80298170_de Cache_func_80298170_de;

struct Frustum;
typedef struct Frustum Frustum;

struct Manager_func_80298ECC_de;
typedef struct Manager_func_80298ECC_de Manager_func_80298ECC_de;

struct Obj5;
typedef struct Obj5 Obj5;

struct State_func_80297DBC_de;
typedef struct State_func_80297DBC_de State_func_80297DBC_de;

struct State_func_80297EA4_de;
typedef struct State_func_80297EA4_de State_func_80297EA4_de;

struct Ui;
typedef struct Ui Ui;

struct Ui_func_80297FA0_de;
typedef struct Ui_func_80297FA0_de Ui_func_80297FA0_de;

struct Widget;
typedef struct Widget Widget;

struct WidgetTable_func_802982C4_de;
typedef struct WidgetTable_func_802982C4_de WidgetTable_func_802982C4_de;

struct Board;
struct Board {
    s32 unk0;
    s32 unk4;
    s32 originX;
    s32 originY;
    s32 unk10;
    s32 unk14;
    s16 cells[17 * 17];
};
struct Entry_func_80298170_de;
struct Entry_func_80298170_de {
    s32 id;
    func_8021C9B4_S3 *object;
    s32 context;
};
struct Cache_func_80298170_de;
struct Entry_func_80298170_de;
struct Cache_func_80298170_de {
    char pad0[0x53C];
    struct Entry_func_80298170_de *entries;
    s32 count;
};
struct Entry_func_80297DBC_de;
struct Obj_func_80297DBC_de;
struct Entry_func_80297DBC_de {
    struct Obj_func_80297DBC_de *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};
struct Entry_func_80297EA4_de;
struct Entry_func_80297EA4_de {
    char pad[8];
    func_8021C9B4_S3 *unk8;
    char rest[16];
};
struct Frustum;
struct Frustum {
    f32 planes[6][4];
};
struct Entry_func_80298ECC_de;
struct Manager_func_80298ECC_de;
struct Manager_func_80298ECC_de {
    s32 field0;
    s32 index;
    s32 lowIndex;
    struct Entry_func_80298ECC_de *entries;
};
struct Obj5;
struct Obj5 {
    char pad0[4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s16 table[400];
};
struct Widget;
struct Widget {
    char pad0[0xC];
    s16 id;
    char padE[4];
    u16 flags;
    char pad14[0x2C - 0x14];
    struct Widget *links[4];
};
struct Screen;
struct Widget;
struct Screen {
    char pad0[8];
    struct Widget *focus;
    char padC[0x1C - 0xC];
};
struct Entry_func_80297DBC_de;
struct State_func_80297DBC_de;
struct State_func_80297DBC_de {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    struct Entry_func_80297DBC_de *unkC;
    s32 (*unk10)(s32);
};
struct Entry_func_80297EA4_de;
struct State_func_80297EA4_de;
struct State_func_80297EA4_de {
    int (*unk0)(int,int,int,int);
    int unk4;
    int unk8;
    struct Entry_func_80297EA4_de *unkC;
    char pad[0x510];
    int unk520;
    char pad2[12];
    int unk530;
};
struct Screen;
struct Ui;
struct Ui {
    s32 pad0;
    s32 current;
    s32 pad8;
    struct Screen *screens;
};
struct Ui_func_80297FA0_de;
struct Ui_func_80297FA0_de {
    s32 pad0;
    s32 current;
    s32 pad8;
    void *screens;
    s32 value;
    s32 limit;
    s32 screenCount;
    Rec_func_8024C92C_de slots[64];
    s32 pad51C[2];
    s32 frames;
    s32 focus;
    s32 paging;
    s32 pad530;
    s32 field534;
    s32 field538;
    void *cache;
    s32 cacheCount;
};
struct WidgetTable_func_802982C4_de;
struct WidgetTable_func_802982C4_de {
    u8 pad0[0x1C];
    Rec_func_8024C92C_de handlers[64];
};
extern f32 func_80296930_de(f32 *arg0, f32 *arg1, f32 *arg2);
extern f32 func_802969B0_de(f32 *a, f32 *b);
extern s32 func_80296C30_de(f32 *arg0, f32 *arg1);
extern void func_80296CD0_de(s32 direction);
extern void func_80297DBC_de(void);
extern void func_80297FA0_de(s32 screenCount, s32 value);
extern void func_80298ECC_de(void);
#endif
