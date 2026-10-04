#ifndef UNBAKE_SPAN_16E000_CODE_8044239C_H
#define UNBAKE_SPAN_16E000_CODE_8044239C_H
#include "common/types.h"
#include "gfx.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Descriptor_func_80442D10_de;
typedef struct Descriptor_func_80442D10_de Descriptor_func_80442D10_de;

struct List_func_804428F8_de;
typedef struct List_func_804428F8_de List_func_804428F8_de;

struct MenuSpriteElement;
typedef struct MenuSpriteElement MenuSpriteElement;

struct Node_func_804428F8_de;
typedef struct Node_func_804428F8_de Node_func_804428F8_de;

struct Node_func_80442A28_de;
typedef struct Node_func_80442A28_de Node_func_80442A28_de;

struct Obj_func_80442DDC_de;
typedef struct Obj_func_80442DDC_de Obj_func_80442DDC_de;

struct State_func_804428F8_de;
typedef struct State_func_804428F8_de State_func_804428F8_de;

struct Widget_func_80442D10_de;
typedef struct Widget_func_80442D10_de Widget_func_80442D10_de;

struct Descriptor_func_80442D10_de;
struct Descriptor_func_80442D10_de {
    short type;
    short pad;
    int flags;
    unsigned short x;
    unsigned short y;
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
    int value;
};
struct Handlers_func_804431E4_de;
struct Handlers_func_804431E4_de {
    char pad[0xC];
    void (*callback)();
};
struct Entry_func_80441EB0_de;
struct List_func_80442574_de;
struct List_func_80442574_de {
    struct Entry_func_80441EB0_de *entries;
    s16 count;
};
struct State_func_804428F8_de;
struct State_func_804428F8_de {
    char pad00[0xB0];
    s32 field_B0;
    s32 field_B4;
    char padB8[0xBC - 0xB8];
    s32 field_BC;
};
struct List_func_804428F8_de;
struct Node_func_804428F8_de;
struct State_func_804428F8_de;
struct Table_func_804428F8_de;
struct List_func_804428F8_de {
    struct Node_func_804428F8_de *head;
    char pad04[0x10 - 0x4];
    s32 flag;
};
struct Node_func_804428F8_de {
    char pad00[0x8];
    s32 handle;
    char pad0C[0x14 - 0xC];
    struct Table_func_804428F8_de *table;
    char pad18[0x20 - 0x18];
    struct State_func_804428F8_de *state;
    char pad24[0x28 - 0x24];
    s16 kind;
    char pad2A[0x1D4 - 0x2A];
    struct Node_func_804428F8_de *next;
};
struct Table_func_804428F8_de {
    char pad00[0xC];
    void (*handler)(Node_func_804428F8_de *, List_func_804428F8_de *);
};
struct Item_func_80442A60_de;
struct List_func_80442A60_de;
struct List_func_80442A60_de {
    struct Item_func_80442A60_de *head;
};
struct MenuSpriteElement;
struct Shared_HudView;
struct MenuSpriteElement {
    char pad0[0x40];
    struct Shared_HudView *owner;
    char pad44[0x184];
    s32 frame;
    s32 active;
};
struct Node_func_804429D4_de;
struct Node_func_804429D4_de {
    char pad0[0x14];
    void **vtable;
    char pad18[0x1B8];
    struct Node_func_804429D4_de *next;
};
struct Node_func_80442A28_de;
struct Node_func_80442A28_de {
    char pad0[0x28];
    short kind;
    char pad1[0x1A8];
    struct Node_func_80442A28_de *next;
};
struct Obj_func_80442DDC_de;
struct Obj_func_80442DDC_de {
    char pad[8];
    u32 flags;
};
struct Object1C8;
struct Object1C8 {
    char pad[0x1C8];
    s32 first;
    s32 second;
};
struct Object_func_80442ADC_de;
struct Object_func_80442ADC_de {
    s32 pad0;
    s16 kind;
    char pad6[0x14 - 6];
    void **target;
};
struct Object_func_80442B88_de;
struct Object_func_80442B88_de {
    char pad[0x1C8];
    s32 count;
};
struct Object_func_80442CF4_de;
struct Object_func_80442CF4_de {
    char pad[0x478];
    s32 flag;
};
struct Handlers_func_804431E4_de;
struct Object_func_804431E4_de;
struct State_func_80442A60_de;
struct Object_func_804431E4_de {
    char pad[0x14];
    struct Handlers_func_804431E4_de *handlers;
    char pad18[0x20 - 0x18];
    struct State_func_80442A60_de *state;
};
struct MenuRules;
struct Outer;
struct Outer {
    char pad[0x14];
    struct MenuRules *inner;
};
struct Node_func_804429D4_de;
struct Owner_func_804429D4_de;
struct Owner_func_804429D4_de {
    char pad[4];
    struct Node_func_804429D4_de *head;
};
struct Params_func_80442690_de;
struct Params_func_80442690_de {
    char pad[0x18];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
};
struct Params_func_804427C4_de;
struct Params_func_804427C4_de {
    char pad[0x14];
    s32 a;
    s32 pad18;
    s32 b;
    s32 c;
    s32 d;
};
struct Descriptor_func_80442D10_de;
struct Widget_func_80442D10_de;
struct Widget_func_80442D10_de {
    int id;
    unsigned short type;
    unsigned short pad;
    int flags;
    unsigned short x;
    unsigned short y;
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
    int value;
    struct Descriptor_func_80442D10_de *desc;
    int index;
    void *extra;
    int arg;
};
extern s32 func_804423AC_de(struct Outer *outer);
extern s32 func_80442B88_de(struct Object_func_80442B88_de *object);
extern void func_80442BA8_de(MenuSpriteElement *e);
extern s32 func_80442CD8_de(s16 *record);
extern void func_80442CF4_de(s16 *record, struct Object_func_80442CF4_de *object);
extern void func_80442D10_de(Widget_func_80442D10_de *w, Descriptor_func_80442D10_de *d, char **arena, int id, int arg);
extern void func_804431E4_de(struct Object_func_804431E4_de *object);
#endif
