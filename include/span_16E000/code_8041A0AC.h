#ifndef UNBAKE_SPAN_16E000_CODE_8041A0AC_H
#define UNBAKE_SPAN_16E000_CODE_8041A0AC_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Record_func_8041A280_de;
typedef struct Record_func_8041A280_de Record_func_8041A280_de;

struct Record_func_8041A580_de;
typedef struct Record_func_8041A580_de Record_func_8041A580_de;

struct Record_func_8041ABC0_de;
typedef struct Record_func_8041ABC0_de Record_func_8041ABC0_de;

struct func_8041AA30_S1;
typedef struct func_8041AA30_S1 func_8041AA30_S1;

struct Key;
struct Menu_func_8041AD10_de;
struct Owner_func_8041AD10_de;
struct Menu_func_8041AD10_de {
    char pad0[0x44];
    struct Owner_func_8041AD10_de *owner;
    struct Key entries[(0x110 - 0x48) / 20];
    s32 index;
};
struct Record_func_8041A280_de;
struct Record_func_8041A280_de {
    char pad0[0xC];
    s16 field_0C;
    s16 field_0E;
    char pad10[0x12 - 0x10];
    s16 field_12;
    char pad14[0x20 - 0x14];
    s32 field_20;
    f32 field_24;
    char pad28[0x2C - 0x28];
    u32 colours[4];
    char pad3C[0x44 - 0x3C];
    struct Record_func_8041A280_de *frame;
    struct Record_func_8041A280_de *item;
    f32 scaleX;
    f32 scaleY;
    char pad54[0x60 - 0x54];
    u32 copies[4];
    u32 greenStep;
    u32 redStep;
    s32 active;
};
struct Record_func_8041A580_de;
struct Record_func_8041A580_de {
    s32 words_00[3];
    s16 field_0C;
    s16 field_0E;
    s32 words_10[2];
    s16 field_18;
    s16 field_1A;
    s32 words_1C[4];
    s32 fields_2C[5];
    s32 field_40;
    struct Record_func_8041A580_de *field_44;
    s32 field_48;
    s32 field_4C;
    s32 field_50;
    s32 field_54;
};
struct Record_func_8041ABC0_de;
struct Record_func_8041ABC0_de {
    s32 words_00[3];
    s16 field_0C;
    s16 field_0E;
    s32 words_10[2];
    s16 field_18;
    s16 field_1A;
    s32 words_1C[4];
    s32 fields_2C[5];
    s32 field_40;
    struct Record_func_8041ABC0_de *field_44;
    s32 words_48[(0x110 - 0x48) / 4];
    s32 field_110;
    s32 field_114;
};
struct Obj_func_802B20D4_de;
struct Scroll;
struct Scroll {
    char pad[0x44];
    struct Obj_func_802B20D4_de *bar;
    s32 length;
    s32 count;
    s32 item;
};
struct Scroll_func_8041A8E8_de;
struct Scroll_func_8041A8E8_de {
    char pad[0x48];
    s32 length;
    s32 count;
    s32 item;
};
struct func_8041AA30_S1;
struct func_8041AA30_S1 {
    char pad0[0x8];
    void * unk8;
    char pad8[0x54 - 0x8 - sizeof(void*)];
    s32 unk54;
};
extern void func_8041A02C_de(s32 arg0, struct Triple arg1);
extern void func_8041A400_de(void);
extern s32 func_8041A490_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8041A520_de(void *target, const char *format, ...);
extern void func_8041A550_de(void);
extern s32 func_8041A724_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8041AB90_de(void);
#endif
