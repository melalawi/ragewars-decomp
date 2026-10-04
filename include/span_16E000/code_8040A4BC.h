#ifndef UNBAKE_SPAN_16E000_CODE_8040A4BC_H
#define UNBAKE_SPAN_16E000_CODE_8040A4BC_H
#include "common/types.h"
#include "span_16E000/types.h"
#include "../types.h"
struct Display_func_8040A4D4_de;
typedef struct Display_func_8040A4D4_de Display_func_8040A4D4_de;

struct Item_func_8040AA4C_de;
typedef struct Item_func_8040AA4C_de Item_func_8040AA4C_de;

struct Display_func_8040A4D4_de;
struct Display_func_8040A4D4_de {
    char pad[0x90];
    unsigned int depth;
};
struct Item_func_8040AA4C_de;
struct Item_func_8040AA4C_de {
    char pad[0x1C];
    int x;
    int y;
    char *label;
};
struct Record_func_8040A6DC_de;
struct Record_func_8040A6DC_de {
    char pad[0x1C];
    s32 first;
    s32 second;
    void *resource;
};
struct Target_func_8040A77C_de;
struct Target_func_8040A77C_de {
    char pad0[0xA8];
    s32 first;
    char padAC[0xD0 - 0xAC];
    s32 second;
};
struct Record_func_8040A77C_de;
struct Target_func_8040A77C_de;
struct Record_func_8040A77C_de {
    char pad[0xC];
    struct Target_func_8040A77C_de *target;
};
extern void func_8040A490_de(void);
extern s32 func_8040A6DC_de(void *unused, struct Record_func_8040A6DC_de *record);
extern void func_8040A748_de(void);
extern void func_8040A764_de(void);
extern void func_8040A77C_de(struct Record_func_8040A77C_de *record);
extern int func_8040AA4C_de(int unused, Item_func_8040AA4C_de *item);
extern void func_8040AAB8_de(void);
extern void func_8040AAC8_de(void);
extern void func_8040AADC_de(void);
extern void func_8040AAF0_de(void);
extern void func_8040AB04_de(void);
extern void func_8040AB18_de(void);
extern void func_8040AB2C_de(void);
extern void func_8040AB40_de(void);
extern void func_8040AB54_de(struct Record_func_8040AB54_de *record);
extern void func_8040ABA0_de(void);
extern void func_8040ABBC_de(void);
extern void func_8040ABDC_de(void);
extern void func_8040ABF0_de(void);
extern void func_8040AC04_de(void);
#endif
