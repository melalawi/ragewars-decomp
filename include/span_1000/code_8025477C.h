#ifndef UNBAKE_SPAN_1000_CODE_8025477C_H
#define UNBAKE_SPAN_1000_CODE_8025477C_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct EntryList;
typedef struct EntryList EntryList;

struct Entry_func_80255048_de;
typedef struct Entry_func_80255048_de Entry_func_80255048_de;

struct Entry_func_802553B4_de;
typedef struct Entry_func_802553B4_de Entry_func_802553B4_de;

struct Slot_func_802552E0_de;
typedef struct Slot_func_802552E0_de Slot_func_802552E0_de;

struct func_80255110_S2;
typedef struct func_80255110_S2 func_80255110_S2;

struct func_802551C8_S1;
typedef struct func_802551C8_S1 func_802551C8_S1;

struct func_80255428_S1;
typedef struct func_80255428_S1 func_80255428_S1;

union func_80255428_S1_UC;
typedef union func_80255428_S1_UC func_80255428_S1_UC;

struct func_80255428_S2;
typedef struct func_80255428_S2 func_80255428_S2;

struct func_80255428_S3;
typedef struct func_80255428_S3 func_80255428_S3;

struct Entry_func_80255048_de;
struct Entry_func_80255048_de {
    char pad0[0xC];
    s32 flags;
    s32 stamp;
    s32 pad14;
    struct Entry_func_80255048_de *next;
};
struct EntryList;
struct Entry_func_80255048_de;
struct EntryList {
    s32 pad0;
    struct Entry_func_80255048_de *first;
};
struct Entry_func_802553B4_de;
struct Entry_func_802553B4_de {
    u32 key;
    s32 value;
    s32 index;
    struct Entry_func_802553B4_de *next;
};
struct Slot_func_802552E0_de;
struct Slot_func_802552E0_de {
    s32 key;
    s32 value;
    u32 index;
    struct Slot_func_802552E0_de *next;
};
struct func_80255110_S2;
struct func_80255110_S2 {
    char pad0[0x230];
    s32 unk230;
};
struct func_802551C8_S1;
struct func_802551C8_S1 {
    char pad0[0x238];
    s32 unk238;
};
union func_80255428_S1_UC;
union func_80255428_S1_UC {
    s32 * v0;
    s32 v1;
};
struct func_80255428_S1;
struct func_80255428_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    func_80255428_S1_UC unkC;
};
struct func_80255428_S2;
struct func_80255428_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 * unkC;
};
struct func_80255428_S3;
struct func_80255428_S3 {
    char pad0[0xC];
    s32 * unkC;
};
extern void *func_80254A28_de(s32 unused0, s32 arg1);
extern void func_80254D00_de(void);
extern void func_802552E0_de(s32 capacity);
extern void func_80255488_de(s32 arg0);
extern s32 func_80255540_de(s32 arg0);
#endif
