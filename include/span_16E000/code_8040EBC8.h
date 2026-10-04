#ifndef UNBAKE_SPAN_16E000_CODE_8040EBC8_H
#define UNBAKE_SPAN_16E000_CODE_8040EBC8_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Entry_func_80410674_de;
typedef struct Entry_func_80410674_de Entry_func_80410674_de;

struct FileHeader;
typedef struct FileHeader FileHeader;

struct FileState;
typedef struct FileState FileState;

struct Font_func_8040F160_de;
typedef struct Font_func_8040F160_de Font_func_8040F160_de;

struct Glyph;
typedef struct Glyph Glyph;

struct Node_func_8040ED38_de;
typedef struct Node_func_8040ED38_de Node_func_8040ED38_de;

struct Node_func_8040EF84_de;
typedef struct Node_func_8040EF84_de Node_func_8040EF84_de;

struct Pool_func_8040F580_de;
typedef struct Pool_func_8040F580_de Pool_func_8040F580_de;

struct Slot_func_8040F580_de;
typedef struct Slot_func_8040F580_de Slot_func_8040F580_de;

struct Style;
typedef struct Style Style;

struct Usage;
typedef struct Usage Usage;

struct Widget_func_8040F044_de;
typedef struct Widget_func_8040F044_de Widget_func_8040F044_de;

struct Widget_func_8040F230_de;
typedef struct Widget_func_8040F230_de Widget_func_8040F230_de;

struct Widget_func_8040F6DC_de;
typedef struct Widget_func_8040F6DC_de Widget_func_8040F6DC_de;

struct Chunk_func_804101BC_de;
struct Chunk_func_804101BC_de {
    char pad[0x484];
    void **primary;
    void **optional;
    char rest[0x10];
};
struct Slot_func_8040F580_de;
struct Slot_func_8040F580_de {
    char pad0[4];
    s32 owner;
    u16 flags;
    char padA[2];
    char data[0x20];
};
struct Chunk_func_80410448_de;
struct Slot_func_8040F580_de;
struct func_802B67B0_S2;
struct Chunk_func_80410448_de {
    void *active;
    char pad4[0x480];
    struct Slot_func_8040F580_de **slots;
    char pad488[4];
    struct func_802B67B0_S2 *header;
    u8 live;
    char pad491[0xB];
};
struct Entry_func_8040F580_de;
struct Slot_func_8040F580_de;
struct Entry_func_8040F580_de {
    s32 active;
    char pad4[0x300];
    void *buffers[0x60];
    struct Slot_func_8040F580_de **pages;
    char pad488[4];
    func_802B67B0_S2 *def;
    unsigned char refCount;
    char pad491[0xB];
};
struct Entry_func_80410674_de;
struct Entry_func_80410674_de {
    s32 unk0;
    s32 unk4;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s32 unk10;
    s32 unk14;
    s32 unk18;
};
struct Entry_func_80410674_de;
struct FileHeader;
struct FileHeader {
    char pad0[0x25C];
    struct Entry_func_80410674_de *unk25C;
};
struct FileState;
struct FileState {
    s32 unk0;
    char pad4[0x244];
    s32 unk248;
};
struct Glyph;
struct Glyph {
    s8 width;
    char pad[7];
};
struct Font_func_8040F160_de;
struct Font_func_8040F160_de {
    char pad[8];
    Glyph glyphs[1];
};
struct Node_func_8040EB48_de;
struct Node_func_8040EB48_de {
    struct Node_func_8040EB48_de *next;
    char pad4[0x12 - 4];
    unsigned short flags;
};
struct Node_func_8040EBF4_de;
struct Node_func_8040EBF4_de {
    struct Node_func_8040EBF4_de *next;
    char pad4[0x14 - 4];
    s16 x;
    s16 y;
};
struct Node_func_8040ED38_de;
struct Node_func_8040ED38_de {
    struct Node_func_8040ED38_de *unk0;
    struct Node_func_8040ED38_de *unk4;
    struct Node_func_8040ED38_de *unk8;
};
struct Node_func_8040EF84_de;
struct Node_func_8040EF84_de {
    char pad0[4];
    struct Node_func_8040EF84_de *left;
    struct Node_func_8040EF84_de *right;
    char padC[2];
    u16 kind;
    char pad10[2];
    u16 flags;
    char pad14[0x18];
    void *ref2C;
    void *ref30;
    void *ref34;
    void *ref38;
    char pad3C[8];
    void *ref44;
};
struct Pair2C;
struct Pair2C {
    char pad[0x2C];
    u8 first;
    u8 second;
};
struct Entry_func_8040F580_de;
struct Pool_func_8040F580_de;
struct Pool_func_8040F580_de {
    s16 count;
    char pad2[6];
    struct Entry_func_8040F580_de *entries;
};
struct Quad_func_8040F218_de;
struct Quad_func_8040F218_de {
    char pad[0x2C];
    s32 values[4];
};
struct State_func_804101BC_de;
struct State_func_804101BC_de {
    void *active;
    char pad[0x25C];
    void *resource;
    char pad264[0xC];
    s16 count;
};
struct Chunk_func_80410448_de;
struct Entry_func_804101BC_de;
struct Resource_func_804101BC_de;
struct State_func_80410448_de;
struct State_func_80410448_de {
    char pad0[0x25C];
    s16 count;
    struct Entry_func_804101BC_de *entries;
    char pad264[4];
    struct Resource_func_804101BC_de *resources;
    char pad26C[4];
    s16 chunkCount;
    char pad272[6];
    struct Chunk_func_80410448_de *chunks;
    char pad27C[0x28];
    s32 locked;
};
struct Style;
struct Style {
    f32 scaleX;
    f32 scaleY;
    s32 v[5];
};
struct Tree;
struct Tree {
    char pad0[4];
    struct Tree *next;
    struct Tree *child;
    short id;
};
struct Tree_func_8040EDE4_de;
struct Tree_func_8040EDE4_de {
    struct Tree_func_8040EDE4_de *parent;
    struct Tree_func_8040EDE4_de *next;
    struct Tree_func_8040EDE4_de *child;
    short id;
};
struct Tree_func_8040EEA4_de;
struct Tree_func_8040EEA4_de {
    struct Tree_func_8040EEA4_de *parent;
    struct Tree_func_8040EEA4_de *next;
    struct Tree_func_8040EEA4_de *child;
    short id;
    short pad_0E;
    s32 pad_10;
    short field_14;
    short field_16;
};
struct Usage;
struct Usage {
    s32 expiry;
    u16 count;
    u16 pad6;
};
struct Widget_func_8040F044_de;
struct Widget_func_8040F044_de {
    struct Widget_func_8040F044_de *parent;
    struct Widget_func_8040F044_de *next;
    struct Widget_func_8040F044_de *child;
    char padC[2];
    u16 type;
    char pad10[0x1C];
};
struct Pair14;
struct Widget_func_8040F230_de;
struct Widget_func_8040F230_de {
    char pad0[0x2C];
    struct Pair14 *normal;
    struct Pair14 *highlighted;
    struct Pair14 *pressed;
};
struct Widget_func_8040F6DC_de;
struct Widget_func_8040F6DC_de {
    s32 name;
    struct Widget_func_8040F6DC_de *next;
    struct Widget_func_8040F6DC_de *children;
    char padC[2];
    u16 type;
    char pad10[2];
    u16 flags;
    char pad14[0x18];
    s32 words[4];
    char pad3C[8];
    s32 extra;
};
extern s32 func_8040EB48_de(struct Node_func_8040EB48_de *node);
extern s32 func_8040EB68_de(struct Node_func_8040EB48_de *node);
extern s32 func_8040EB8C_de(struct Node_func_8040EB48_de *node);
extern s32 func_8040EBAC_de(struct Node_func_8040EB48_de *node);
extern void func_8040EBF4_de(struct Node_func_8040EBF4_de *node, s32 *x, s32 *y);
extern void func_8040F044_de(Widget_func_8040F044_de *a, Widget_func_8040F044_de *b);
extern s32 func_8040F160_de(s32 font, u8 *text, s32 length);
extern void func_8040F1FC_de(struct Pair2C *record, u8 first, u8 second);
extern void func_8040F208_de(void *object, int value);
extern void func_8040F210_de(void *object, int value);
extern void func_8040F218_de(struct Quad_func_8040F218_de *record, s32 first, s32 second, s32 third, s32 fourth);
extern void func_8040F534_de(s32 width, s32 height);
extern void func_8040F568_de(void);
extern int func_8040F570_de(struct Field_u16_14 *a, struct Field_u16_14 *b);
extern void func_804101BC_de(void);
extern void func_80410448_de(void);
#endif
