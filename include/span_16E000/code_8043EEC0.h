#ifndef UNBAKE_SPAN_16E000_CODE_8043EEC0_H
#define UNBAKE_SPAN_16E000_CODE_8043EEC0_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Item_func_80441FE8_de;
typedef struct Item_func_80441FE8_de Item_func_80441FE8_de;

struct LayeredText;
typedef struct LayeredText LayeredText;

struct Model_func_8044214C_de;
typedef struct Model_func_8044214C_de Model_func_8044214C_de;

struct State_func_8044214C_de;
typedef struct State_func_8044214C_de State_func_8044214C_de;

struct TextLayerMetrics;
typedef struct TextLayerMetrics TextLayerMetrics;

struct Widget_func_8044214C_de;
typedef struct Widget_func_8044214C_de Widget_func_8044214C_de;

struct func_8043FFAC_S2;
typedef struct func_8043FFAC_S2 func_8043FFAC_S2;

struct func_8043FFAC_S4;
typedef struct func_8043FFAC_S4 func_8043FFAC_S4;

struct func_8043FFAC_S5;
typedef struct func_8043FFAC_S5 func_8043FFAC_S5;

struct Entry_func_804410AC_de;
struct MenuRules;
struct Entry_func_804410AC_de {
    char pad0[8];
    s32 flags;
    char pad0C[4];
    s8 back[4];
    char pad14[4];
    struct MenuRules *target;
    char pad1C[0xC];
};
struct Player_func_8043F048_de;
struct Player_func_8043F048_de {
    char pad[0x644];
    u8 flags[9];
    u8 count64D;
    u8 count64E;
};
struct Holder_func_8043F048_de;
struct Player_func_8043F048_de;
struct Holder_func_8043F048_de {
    char pad[0x1C];
    struct Player_func_8043F048_de *player;
};
struct ItemDef;
struct Item_func_8043F048_de;
struct Item_func_8043F048_de {
    char pad[0x18];
    struct ItemDef *def;
};
struct Item_func_80441FE8_de;
struct Item_func_80441FE8_de {
    int unk0;
    short type;
    char pad6[0xE];
    u8 **text;
};
struct LayeredText;
struct LayeredText {
    int value;
    short mode;
    short reserved;
    int flags;
    int fieldC;
    int field10;
    int *text;
    int field18;
    int spacing;
    int field20;
    int field24;
};
struct Entry_func_80441EB0_de;
struct List_func_80441EB0_de;
struct List_func_80441EB0_de {
    struct Entry_func_80441EB0_de *entries;
    s16 count;
    char pad6[0x1A];
    s32 value;
};
struct Entry_func_804410AC_de;
struct Menu_func_804410AC_de;
struct Menu_func_804410AC_de {
    s16 cursor;
    char pad2[0xA];
    struct Entry_func_804410AC_de *entries;
    s32 count;
};
struct Model_func_8044214C_de;
struct Model_func_8044214C_de {
    float x;
    float y;
    float depth;
    char padc[8];
    float dx;
    float dy;
    float dz;
    char pad20[0xD4];
    float size;
    char padf8[0x90];
};
struct Object_func_804420B4_de;
struct Object_func_804420B4_de {
    char pad[0x17];
    u8 character;
};
struct List_func_80441EB0_de;
struct Params_func_80441EB0_de;
struct Params_func_80441EB0_de {
    char pad[0x18];
    struct List_func_80441EB0_de *list;
    s32 b;
    s32 c;
    s32 d;
};
struct State_func_8044214C_de;
struct State_func_8044214C_de {
    int selection;
    Model_func_8044214C_de model;
    char pad18c[0x2EC];
    int active;
    float size;
};
struct TextLayerMetrics;
struct TextLayerMetrics {
    int field0;
    int width;
    int height;
    int rest[7];
};
struct State_func_8044214C_de;
struct Widget_func_8044214C_de;
struct Widget_func_8044214C_de {
    char pad[0x20];
    struct State_func_8044214C_de *state;
};
struct func_8043FFAC_S2;
struct func_8043FFAC_S2 {
    s16 unk0;
    char pad0[0x2E];
    f32 unk30;
    f32 unk34;
    s32 unk38;
    s32 unk3C;
};
struct func_8043FFAC_S4;
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
struct func_8043FFAC_S5;
struct func_8043FFAC_S5 {
    s32 unk0;
    char pad0[0x10];
    s32 unk14;
    char pad14[0x4];
    s32 unk1C;
};
extern s32 func_8043ED48_de(void);
extern s32 func_8043ED50_de(void);
extern s32 func_8043EDDC_de(void);
extern void func_8043F040_de(void);
extern char *func_80442214_de(struct func_802285C4_S1 *object);
#endif
