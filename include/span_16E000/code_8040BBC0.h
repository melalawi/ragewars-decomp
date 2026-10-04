#ifndef UNBAKE_SPAN_16E000_CODE_8040BBC0_H
#define UNBAKE_SPAN_16E000_CODE_8040BBC0_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Batch;
typedef struct Batch Batch;

struct Batch_func_8040CF8C_de;
typedef struct Batch_func_8040CF8C_de Batch_func_8040CF8C_de;

struct DrawArgs;
typedef struct DrawArgs DrawArgs;

struct DrawArgs_func_8040E67C_de;
typedef struct DrawArgs_func_8040E67C_de DrawArgs_func_8040E67C_de;

struct Mode_func_8040C09C_de;
typedef struct Mode_func_8040C09C_de Mode_func_8040C09C_de;

struct Node_func_8040C484_de;
typedef struct Node_func_8040C484_de Node_func_8040C484_de;

struct Node_func_8040E7FC_de;
typedef struct Node_func_8040E7FC_de Node_func_8040E7FC_de;

struct Slider;
typedef struct Slider Slider;

struct Sprite_func_8040CAB0_de;
typedef struct Sprite_func_8040CAB0_de Sprite_func_8040CAB0_de;

struct Widget_func_8040CD50_de;
typedef struct Widget_func_8040CD50_de Widget_func_8040CD50_de;

struct Widget_func_8040CF8C_de;
typedef struct Widget_func_8040CF8C_de Widget_func_8040CF8C_de;

struct Widget_func_8040E67C_de;
typedef struct Widget_func_8040E67C_de Widget_func_8040E67C_de;

struct Widget_func_8040E984_de;
typedef struct Widget_func_8040E984_de Widget_func_8040E984_de;

struct Sprite_func_8040CAB0_de;
struct Sprite_func_8040CAB0_de {
    s32 glyph;
    f32 x;
    f32 y;
    s32 color;
    f32 scale;
    u16 page;
    u16 pad16;
};
struct Batch;
struct Sprite_func_8040CAB0_de;
struct Batch {
    s32 pad0[4];
    struct Sprite_func_8040CAB0_de *cursor;
    s32 count;
};
struct Batch_func_8040CF8C_de;
struct Shape_typemap_165;
struct Batch_func_8040CF8C_de {
    struct Shape_typemap_165 area;
    void *cursor;
    s32 count;
};
struct DrawArgs;
struct DrawArgs {
    s32 x;
    s32 y;
    s32 flags;
    f32 scaleX;
    f32 scaleY;
    u8 alpha;
    u8 pad15[3];
    s32 v[4];
};
struct DrawArgs_func_8040E67C_de;
struct DrawArgs_func_8040E67C_de {
    s32 x;
    s32 y;
    s32 flags;
    f32 scaleX;
    f32 scaleY;
    s32 v[5];
};
struct Mode_func_8040C09C_de;
struct Mode_func_8040C09C_de {
    int width;
    int height;
    int rest[5];
};
struct Node_func_8040C484_de;
struct Node_func_8040C484_de {
    int unused;
    struct Node_func_8040C484_de *next;
    char pad[0x294];
    float width;
    float height;
    int x;
    int y;
};
struct Node_func_8040E7FC_de;
struct Node_func_8040E7FC_de {
    s32 unk0;
    struct Node_func_8040E7FC_de *next;
    u8 pad8[0xA];
    u16 flags;
};
struct Shape_func_8024A5A8_de_2;
struct Shape_func_8024A5A8_de_2 {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
};
struct Widget_func_8040C950_de;
struct Widget_func_8040C950_de {
    char pad0[0x14];
    s16 x;
    s16 y;
    s16 width;
    s16 height;
};
struct Slider;
struct Widget_func_8040C950_de;
struct Slider {
    char pad0[0x44];
    s32 min;
    s32 max;
    char pad4C[4];
    s32 value;
    s32 left;
    s32 top;
    s32 right;
    s32 bottom;
    struct Widget_func_8040C950_de *thumb;
    struct Widget_func_8040C950_de *fill;
    s32 flags;
};
struct Widget_func_8040CD50_de;
struct Widget_func_8040CD50_de {
    char pad0[0x12];
    u16 flags;
    char pad14[0x18];
    s32 image;
};
struct Widget_func_8040CF8C_de;
struct Widget_func_8040CF8C_de {
    char pad0[0x12];
    u16 flags;
    char pad14[0x18];
    u32 colors[4];
};
struct Widget_func_8040E67C_de;
struct Widget_func_8040E67C_de {
    char pad0[0x12];
    u16 flags;
};
struct Widget_func_8040E984_de;
struct Widget_func_8040E984_de {
    char pad0[4];
    struct Widget_func_8040E984_de *next;
    struct Widget_func_8040E984_de *child;
    s16 id;
    u16 selector;
    char pad10[4];
    s16 x;
    s16 y;
    s16 width;
    s16 height;
};
extern void func_8040C09C_de(void);
extern void func_8040C318_de(void);
extern void func_8040C948_de(void);
extern void func_8040C950_de(Slider *slider);
extern void func_8040CAB0_de(void);
extern void func_8040E894_de(void);
extern void func_8040E900_de(struct Widget_func_8040E67C_de *record, int enable);
extern void func_8040E978_de(struct Pair14 *record, s16 first, s16 second);
extern void func_8040E984_de(Widget_func_8040E984_de **hit, Widget_func_8040E984_de *node, DrawArgs_func_8040E67C_de args, s32 px, s32 py);
#endif
