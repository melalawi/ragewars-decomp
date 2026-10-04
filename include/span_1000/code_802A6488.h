#ifndef UNBAKE_SPAN_1000_CODE_802A6488_H
#define UNBAKE_SPAN_1000_CODE_802A6488_H
#include "common/types.h"
#include "gfx.h"
#include "../types.h"
struct CallbackState1C;
typedef struct CallbackState1C CallbackState1C;

struct FloatState50;
typedef struct FloatState50 FloatState50;

struct FloatStateB0;
typedef struct FloatStateB0 FloatStateB0;

struct Input_func_802A65E0_de;
typedef struct Input_func_802A65E0_de Input_func_802A65E0_de;

struct IntegerState6A94;
typedef struct IntegerState6A94 IntegerState6A94;

struct List802A6DF8;
typedef struct List802A6DF8 List802A6DF8;

struct Lists802A6DF8;
typedef struct Lists802A6DF8 Lists802A6DF8;

struct MenuItem;
typedef struct MenuItem MenuItem;

struct Menu_func_802A65E0_de;
typedef struct Menu_func_802A65E0_de Menu_func_802A65E0_de;

struct Node802A697C;
typedef struct Node802A697C Node802A697C;

struct ObjectLinks14_2;
typedef struct ObjectLinks14_2 ObjectLinks14_2;

struct ObjectLinks7598;
typedef struct ObjectLinks7598 ObjectLinks7598;

struct Owner802A697C;
typedef struct Owner802A697C Owner802A697C;

struct Owner802A6DF8;
typedef struct Owner802A6DF8 Owner802A6DF8;

struct Sprite;
typedef struct Sprite Sprite;

struct State802A6DF8;
typedef struct State802A6DF8 State802A6DF8;

struct State802A6FE0;
typedef struct State802A6FE0 State802A6FE0;

struct func_802A66B4_S1;
typedef struct func_802A66B4_S1 func_802A66B4_S1;

struct func_802A66EC_S1;
typedef struct func_802A66EC_S1 func_802A66EC_S1;

struct func_802A67D0_S1;
typedef struct func_802A67D0_S1 func_802A67D0_S1;

struct func_802A67D0_S2;
typedef struct func_802A67D0_S2 func_802A67D0_S2;

struct func_802A68A0_S2;
typedef struct func_802A68A0_S2 func_802A68A0_S2;

struct func_802A68A0_S3;
typedef struct func_802A68A0_S3 func_802A68A0_S3;

struct func_802A697C_S1;
typedef struct func_802A697C_S1 func_802A697C_S1;

struct func_802A697C_S2;
typedef struct func_802A697C_S2 func_802A697C_S2;

struct func_802A697C_S3;
typedef struct func_802A697C_S3 func_802A697C_S3;

struct func_802A6A14_S1;
typedef struct func_802A6A14_S1 func_802A6A14_S1;

struct func_802A6A44_S1;
typedef struct func_802A6A44_S1 func_802A6A44_S1;

struct func_802A6A54_S1;
typedef struct func_802A6A54_S1 func_802A6A54_S1;

struct func_802A6A54_S2;
typedef struct func_802A6A54_S2 func_802A6A54_S2;

struct func_802A6A54_S3;
typedef struct func_802A6A54_S3 func_802A6A54_S3;

struct func_802A6AC0_S2;
typedef struct func_802A6AC0_S2 func_802A6AC0_S2;

struct func_802A6B74_S1;
typedef struct func_802A6B74_S1 func_802A6B74_S1;

struct func_802A6D28_S1;
typedef struct func_802A6D28_S1 func_802A6D28_S1;

struct func_802A6D28_S2;
typedef struct func_802A6D28_S2 func_802A6D28_S2;

struct func_802A6F8C_S1;
typedef struct func_802A6F8C_S1 func_802A6F8C_S1;

struct func_802A7164_S1;
typedef struct func_802A7164_S1 func_802A7164_S1;

struct func_802A7164_S4;
typedef struct func_802A7164_S4 func_802A7164_S4;

struct func_802A72AC_S1;
typedef struct func_802A72AC_S1 func_802A72AC_S1;

struct func_802A72AC_S2;
typedef struct func_802A72AC_S2 func_802A72AC_S2;

struct func_802A72F4_S1;
typedef struct func_802A72F4_S1 func_802A72F4_S1;

struct func_802A7394_S1;
typedef struct func_802A7394_S1 func_802A7394_S1;

struct func_802A7440_S2;
typedef struct func_802A7440_S2 func_802A7440_S2;

struct func_802A7480_S1;
typedef struct func_802A7480_S1 func_802A7480_S1;

struct func_802A7480_S2;
typedef struct func_802A7480_S2 func_802A7480_S2;

struct CallbackState1C;
struct CallbackState1C {
    unsigned char padding_0[24];
    void (*callback)(void *);
};
struct FloatState50;
struct FloatState50 {
    unsigned char padding_0[76];
    f32 unk_4C;
};
struct FloatStateB0;
struct FloatStateB0 {
    unsigned char padding_0[172];
    f32 unk_AC;
};
struct Input_func_802A65E0_de;
struct Input_func_802A65E0_de {
    char pad0[0x6AC];
    s32 held;
    s32 pressed;
};
struct IntegerState6A94;
struct IntegerState6A94 {
    unsigned char padding_0[27280];
    s32 unk_6A90;
};
struct Node802A697C;
struct Node802A697C {
    u32 unk0;
    f32 value;
};
struct State802A6DF8;
struct State802A6DF8 {
    struct State802A6DF8 *prev;
    struct State802A6DF8 *next;
    Node802A697C *node;
    u8 padC[0x10];
    void *object;
    u8 pad20[4];
    f32 value;
    u8 pad28[0x14];
    u32 flags;
};
struct List802A6DF8;
struct State802A6DF8;
struct List802A6DF8 {
    struct State802A6DF8 *head;
    struct State802A6DF8 *tail;
    s32 count;
};
struct Lists802A6DF8;
struct Lists802A6DF8 {
    List802A6DF8 active;
    List802A6DF8 inactive;
};
struct MenuItem;
struct MenuItem {
    s32 active;
    s32 on;
    char pad8[0x18 - 0x8];
    s16 bounce;
    s32 startFrame;
    f32 value;
    s32 extra;
    f32 restoreValue;
    s32 restoreExtra;
    s32 (*select)(void *input, struct MenuItem *item);
    s32 (*update)(void *input, struct MenuItem *item);
};
struct Menu_func_802A65E0_de;
struct Menu_func_802A65E0_de {
    u8 state;
    u8 timer;
    MenuItem items[4];
    u16 selected;
    s16 blink;
    s32 frame;
};
struct ObjectLinks14_2;
struct ObjectLinks14_2 {
    char pad0[0x4];
    void * next;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    f32 unk_8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unk_C;
    char padC[0x10 - 0xC - sizeof(f32)];
    s32 unk_10;
};
struct ObjectLinks7598;
struct ObjectLinks7598 {
    char pad0[0x7588];
    char unk_7588;
    char pad7588[0x7594 - 0x7588 - sizeof(char)];
    void * unk_7594;
};
struct Node802A697C;
struct State802A697C;
struct State802A697C {
    u8 pad0[4];
    struct State802A697C *next;
    struct Node802A697C *node;
    u8 padC[0x10];
    void *object;
    u8 pad20[4];
    f32 value;
    u8 pad28[0x14];
    u32 flags;
};
struct Owner802A697C;
struct State802A697C;
struct Owner802A697C {
    u8 pad0[0x7528];
    struct State802A697C *head;
};
struct Owner802A6DF8;
struct Owner802A6DF8 {
    u8 pad0[0x751C];
    Lists802A6DF8 lists;
};
struct Sprite;
struct Sprite {
    s32 format;
    char *data;
    s32 field8;
    s32 fieldC;
    f32 width;
    f32 height;
    f32 extentX;
    f32 extentY;
    f32 step;
};
struct State802A6FE0;
struct State802A6FE0 {
    u8 pad0[8];
    Node802A697C *node;
    u8 padC[0x10];
    void *object;
    u8 pad20[4];
    f32 value;
    u8 pad28[0x14];
    u32 flags;
};
struct func_802A66B4_S1;
struct func_802A66B4_S1 {
    char pad0[0x2588];
    s32 unk2588;
    char pad2588[0x258C - 0x2588 - sizeof(s32)];
    s32 unk258C;
};
struct func_802A66EC_S1;
struct func_802A66EC_S1 {
    int unk0;
    char pad0[0x2588 - 0x0 - sizeof(int)];
    int unk2588;
    char pad2588[0x258C - 0x2588 - sizeof(int)];
    void * unk258C;
};
struct func_802A67D0_S1;
struct func_802A67D0_S1 {
    char pad0[0x7528];
    void * unk7528;
};
struct func_802A67D0_S2;
struct func_802A67D0_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    void * unk8;
    char pad8[0x1C - 0x8 - sizeof(void*)];
    s32 unk1C;
    char pad1C[0x24 - 0x1C - sizeof(s32)];
    f32 unk24;
};
struct func_802A68A0_S2;
struct func_802A68A0_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x1C - 0x4 - sizeof(void*)];
    void * unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    f32 unk24;
};
struct func_802A68A0_S3;
struct func_802A68A0_S3 {
    char pad0[0x118];
    void * unk118;
};
struct func_802A697C_S1;
struct func_802A697C_S1 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    void * unk8;
    char pad8[0x1C - 0x8 - sizeof(void*)];
    void * unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    float unk24;
    char pad24[0x3C - 0x24 - sizeof(float)];
    int unk3C;
};
struct func_802A697C_S2;
struct func_802A697C_S2 {
    char pad0[0x13B];
    char unk13B;
};
struct func_802A697C_S3;
struct func_802A697C_S3 {
    char pad0[0x1D9];
    char unk1D9;
};
struct func_802A6A14_S1;
struct func_802A6A14_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    f32 unk14;
    char pad14[0x24 - 0x14 - sizeof(f32)];
    s32 unk24;
    char pad24[0x34 - 0x24 - sizeof(s32)];
    s32 unk34;
    char pad34[0x38 - 0x34 - sizeof(s32)];
    s32 unk38;
    char pad38[0x3C - 0x38 - sizeof(s32)];
    s32 unk3C;
};
struct func_802A6A44_S1;
struct func_802A6A44_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0xC - 0x4 - sizeof(int)];
    int unkC;
    char padC[0x10 - 0xC - sizeof(int)];
    int unk10;
};
struct func_802A6A54_S1;
struct func_802A6A54_S1 {
    char pad0[0x14];
    f32 unk14;
    char pad14[0x24 - 0x14 - sizeof(f32)];
    f32 unk24;
    char pad24[0x34 - 0x24 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
};
struct func_802A6A54_S2;
struct func_802A6A54_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
};
struct func_802A6A54_S3;
struct func_802A6A54_S3 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
};
struct func_802A6AC0_S2;
struct func_802A6AC0_S2 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
};
struct func_802A6B74_S1;
struct func_802A6B74_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
};
struct func_802A6D28_S1;
struct func_802A6D28_S1 {
    char pad0[0x94E0];
    HeadRecord slots[10];
    char pad95A8[0x10];
    s32 unk95B8;
};
struct func_802A6D28_S2;
struct func_802A6D28_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x48 - 0x4 - sizeof(void*)];
    s32 unk48;
};
struct func_802A6F8C_S1;
struct func_802A6F8C_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x34 - 0x14 - sizeof(s32)];
    s32 unk34;
};
struct func_802A7164_S1;
struct func_802A7164_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x1C - 0x10 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0xB0 - 0x1C - sizeof(f32)];
    void * unkB0;
};
struct func_802A7164_S4;
struct func_802A7164_S4 {
    char pad0[0x8];
    void * unk8;
    char pad8[0x3C - 0x8 - sizeof(void*)];
    u32 unk3C;
};
struct func_802A72AC_S1;
struct func_802A72AC_S1 {
    char pad0[0x40];
    void * unk40;
    char pad40[0x4C - 0x40 - sizeof(void*)];
    f32 unk4C;
};
struct func_802A72AC_S2;
struct func_802A72AC_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0xA8 - 0x4 - sizeof(void*)];
    f32 unkA8;
    char padA8[0xAC - 0xA8 - sizeof(f32)];
    f32 unkAC;
};
struct func_802A72F4_S1;
struct func_802A72F4_S1 {
    char pad0[0x34];
    s32 unk34;
    char pad34[0x3C - 0x34 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x48 - 0x3C - sizeof(s32)];
    s32 unk48;
};
struct func_802A7394_S1;
struct func_802A7394_S1 {
    char pad0[0x1C];
    void * unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    f32 unk24;
};
struct func_802A7440_S2;
struct func_802A7440_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x1C - 0x4 - sizeof(void*)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
};
struct func_802A7480_S1;
struct func_802A7480_S1 {
    char pad0[0x7528];
    char * unk7528;
};
struct func_802A7480_S2;
struct func_802A7480_S2 {
    char pad0[0x4];
    char * unk4;
    char pad4[0x34 - 0x4 - sizeof(char*)];
    s32 unk34;
    char pad34[0x3C - 0x34 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x48 - 0x3C - sizeof(s32)];
    s32 unk48;
};
extern void func_802A57D8_de(void);
extern void func_802A598C_de(Owner802A697C *owner, int object);
extern void func_802A5A24_de(void *arg0, s32 arg1);
extern void func_802A5A54_de(void *arg0, int arg1);
extern void func_802A5A64_de(void *arg0);
extern void func_802A5AD0_de(void *arg0);
extern void func_802A5B4C_de(f32 *arg0);
extern void func_802A5B84_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_802A6068_de(struct Image * image, struct Image * texture, Sprite * sprite);
extern void func_802A6174_de(void *arg0, void *arg1);
extern void func_802A62BC_de(void *arg0);
#endif
