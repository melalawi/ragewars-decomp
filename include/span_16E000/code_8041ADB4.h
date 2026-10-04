#ifndef UNBAKE_SPAN_16E000_CODE_8041ADB4_H
#define UNBAKE_SPAN_16E000_CODE_8041ADB4_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Context_func_8041B6E8_de;
typedef struct Context_func_8041B6E8_de Context_func_8041B6E8_de;

struct Node_func_8041B610_de;
typedef struct Node_func_8041B610_de Node_func_8041B610_de;

struct Node_func_8041B6E8_de;
typedef struct Node_func_8041B6E8_de Node_func_8041B6E8_de;

struct Owner_func_8041B610_de;
typedef struct Owner_func_8041B610_de Owner_func_8041B610_de;

struct Owner_func_8041B6E8_de;
typedef struct Owner_func_8041B6E8_de Owner_func_8041B6E8_de;

struct Record_func_8041B110_de;
typedef struct Record_func_8041B110_de Record_func_8041B110_de;

struct Record_func_8041B22C_de;
typedef struct Record_func_8041B22C_de Record_func_8041B22C_de;

struct Child;
struct Child {
    char pad[0x12];
    u16 flags;
    char pad14[0x34 - 0x14];
    void *target;
};
struct Node_func_8041B6E8_de;
struct Node_func_8041B6E8_de {
    s32 words_00[3];
    s16 id;
};
struct Context_func_8041B6E8_de;
struct Context_func_8041B6E8_de {
    s32 words_00[17];
    void *root;
    s32 words_48;
    Node_func_8041B6E8_de *shown[4];
    s32 locked[4];
    s32 shared;
};
struct Key;
struct Menu_func_8041AD34_de;
struct Menu_func_8041AD34_de {
    char pad0[0x48];
    struct Key entries[(0x110 - 0x48) / 20];
    s32 index;
    s32 count;
};
struct Key;
struct Menu_func_8041AFF8_de;
struct Owner_func_8041AD10_de;
struct Menu_func_8041AFF8_de {
    char pad0[0x44];
    struct Owner_func_8041AD10_de *owner;
    struct Key entries[(0x110 - 0x48) / 20];
    s32 index;
    s32 count;
};
struct Node_func_8041B610_de;
struct Owner_func_8041B610_de;
struct Node_func_8041B610_de {
    s32 words_00[3];
    s16 tag;
    s16 kind;
    s16 pad10;
    s16 flags;
    s32 words_14[12];
    struct Owner_func_8041B610_de *owner;
    s32 value;
    s32 words_4C[8];
    s32 field_6C;
};
struct Owner_func_8041B610_de {
    s32 words_00[2];
    struct Node_func_8041B610_de *root;
    s32 words_0C[14];
    struct Node_func_8041B610_de *overlay;
};
struct Context_func_8041B6E8_de;
struct Owner_func_8041B6E8_de;
struct Owner_func_8041B6E8_de {
    s32 words_00[2];
    struct Context_func_8041B6E8_de *context;
};
struct Child;
struct Owner_func_8041BB3C_de;
struct Owner_func_8041BB3C_de {
    char pad[0x4C];
    struct Child *children[4];
    s32 busy[4];
};
struct Record_func_8041B110_de;
struct Record_func_8041B110_de {
    s32 words_00[3];
    s16 field_0C;
    s16 field_0E;
    s32 words_10[2];
    s16 field_18;
    s16 field_1A;
    s32 words_1C[4];
    s32 fields_2C[5];
    s32 field_40;
};
struct Record_func_8041B22C_de;
struct Record_func_8041B22C_de {
    s32 words_00[3];
    s16 field_0C;
    u16 field_0E;
    s32 words_10[2];
    s16 field_18;
    s16 field_1A;
    s32 words_1C[4];
    s32 fields_2C[5];
    s32 field_40;
};
struct Slots_func_8041B7B4_de;
struct Slots_func_8041B7B4_de {
    char pad[0x5C];
    s32 values[1];
};
struct Slots_func_8041B7C4_de;
struct Slots_func_8041B7C4_de {
    char pad0[0x48];
    s32 count;
    char pad4C[0x5C - 0x4C];
    s32 values[1];
};
struct Slots_func_8041B810_de;
struct func_8021C9B4_S3;
struct Slots_func_8041B810_de {
    char pad[0x4C];
    struct func_8021C9B4_S3 *entries[1];
};
extern s32 func_8041AD7C_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8041B0E0_de(void);
extern void func_8041B110_de(s32 arg0);
extern s32 func_8041B340_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void func_8041B5E0_de(void);
extern s32 func_8041B7C4_de(struct Slots_func_8041B7C4_de *object);
extern void func_8041B828_de(Context_func_8041B6E8_de *context, s32 index, s32 id);
extern s32 func_8041B970_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
#endif
