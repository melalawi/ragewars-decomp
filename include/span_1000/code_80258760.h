#ifndef UNBAKE_SPAN_1000_CODE_80258760_H
#define UNBAKE_SPAN_1000_CODE_80258760_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct IntegerState1DC4;
typedef struct IntegerState1DC4 IntegerState1DC4;

struct Obj_func_80258E5C_de;
typedef struct Obj_func_80258E5C_de Obj_func_80258E5C_de;

struct SortTable;
typedef struct SortTable SortTable;

struct func_802588F4_S1;
typedef struct func_802588F4_S1 func_802588F4_S1;

struct func_80258A9C_S1;
typedef struct func_80258A9C_S1 func_80258A9C_S1;

struct func_80258B00_S1;
typedef struct func_80258B00_S1 func_80258B00_S1;

struct func_80258BAC_S1;
typedef struct func_80258BAC_S1 func_80258BAC_S1;

struct func_80258BDC_S1;
typedef struct func_80258BDC_S1 func_80258BDC_S1;

struct func_80258BE4_S1;
typedef struct func_80258BE4_S1 func_80258BE4_S1;

struct func_80258BFC_S1;
typedef struct func_80258BFC_S1 func_80258BFC_S1;

struct func_80258C14_S1;
typedef struct func_80258C14_S1 func_80258C14_S1;

struct func_80258C2C_S1;
typedef struct func_80258C2C_S1 func_80258C2C_S1;

struct func_80258D28_S1;
typedef struct func_80258D28_S1 func_80258D28_S1;

struct func_80258D3C_S1;
typedef struct func_80258D3C_S1 func_80258D3C_S1;

struct func_80258D44_S1;
typedef struct func_80258D44_S1 func_80258D44_S1;

struct func_80258D4C_S1;
typedef struct func_80258D4C_S1 func_80258D4C_S1;

struct func_80258D68_S1;
typedef struct func_80258D68_S1 func_80258D68_S1;

struct func_80258F30_S1;
typedef struct func_80258F30_S1 func_80258F30_S1;

struct IntegerState1DC4;
struct IntegerState1DC4 {
    unsigned char padding_0[7616];
    s32 unk_1DC0;
};
struct Obj_func_80258E5C_de;
struct Obj_func_80258E5C_de {
    char pad[0x2B9C];
    int level;
};
struct SortTable;
struct SortTable {
    char unknown00[0xE];
    s16 count;
    u32 entries[1];
};
struct func_802588F4_S1;
struct func_802588F4_S1 {
    char pad0[0x110];
    char unk110;
    char pad110[0x138 - 0x110 - sizeof(char)];
    char unk138;
    char pad138[0x1DB8 - 0x138 - sizeof(char)];
    char unk1DB8;
};
struct func_80258A9C_S1;
struct func_80258A9C_S1 {
    char pad0[0x2BBC];
    f32 unk2BBC;
};
struct func_80258B00_S1;
struct func_80258B00_S1 {
    char pad0[0x104];
    s32 unk104;
    char pad104[0x134 - 0x104 - sizeof(s32)];
    s32 unk134;
    char pad134[0x2BB4 - 0x134 - sizeof(s32)];
    s32 unk2BB4;
};
struct func_80258BAC_S1;
struct func_80258BAC_S1 {
    char pad0[0x2BA0];
    int unk2BA0;
};
struct func_80258BDC_S1;
struct func_80258BDC_S1 {
    char pad0[0x2BA8];
    int unk2BA8;
};
struct func_80258BE4_S1;
struct func_80258BE4_S1 {
    char pad0[0x2B70];
    char * unk2B70;
};
struct func_80258BFC_S1;
struct func_80258BFC_S1 {
    char pad0[0x2B74];
    int unk2B74;
};
struct func_80258C14_S1;
struct func_80258C14_S1 {
    char pad0[0x2B78];
    void * unk2B78;
};
struct func_80258C2C_S1;
struct func_80258C2C_S1 {
    char pad0[0x110];
    s32 unk110;
    char pad110[0x138 - 0x110 - sizeof(s32)];
    char unk138;
    char pad138[0x1DB8 - 0x138 - sizeof(char)];
    char unk1DB8;
    char pad1DB8[0x2B9C - 0x1DB8 - sizeof(char)];
    s32 unk2B9C;
};
struct func_80258D28_S1;
struct func_80258D28_S1 {
    char pad0[0x2BAC];
    int unk2BAC;
};
struct func_80258D3C_S1;
struct func_80258D3C_S1 {
    char pad0[0x2BB4];
    int unk2BB4;
};
struct func_80258D44_S1;
struct func_80258D44_S1 {
    char pad0[0x2B98];
    int unk2B98;
};
struct func_80258D4C_S1;
struct func_80258D4C_S1 {
    char pad0[0x2BB0];
    int unk2BB0;
};
struct func_80258D68_S1;
struct func_80258D68_S1 {
    char pad0[0x2BB8];
    int unk2BB8;
};
struct func_80258F30_S1;
struct func_80258F30_S1 {
    char pad0[0x2BA8];
    float unk2BA8;
    char pad2BA8[0x2BC0 - 0x2BA8 - sizeof(float)];
    char unk2BC0;
};
extern void func_80258B8C_de(void *arg0, int arg1);
extern void func_80258B94_de(void *arg0, int arg1);
extern void func_80258BBC_de(void *object, int value);
extern char *func_80258BC4_de(char *object, int index);
extern void *func_80258BDC_de(void *arg0, int arg1);
extern void *func_80258BF4_de(void *arg0, int arg1);
extern int func_80258D2C_de(void *object);
extern void func_80258D38_de(void *arg0, int arg1);
extern void func_80258F6C_de(SortTable *table);
#endif
