#ifndef UNBAKE_SPAN_1000_CODE_802555C8_H
#define UNBAKE_SPAN_1000_CODE_802555C8_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Block80255720;
typedef struct Block80255720 Block80255720;

struct Block_func_80255920_de;
typedef struct Block_func_80255920_de Block_func_80255920_de;

struct Heap_func_80255920_de;
typedef struct Heap_func_80255920_de Heap_func_80255920_de;

struct Pool80255720;
typedef struct Pool80255720 Pool80255720;

struct Pool80255ACC;
typedef struct Pool80255ACC Pool80255ACC;

struct func_80255BEC_S2;
typedef struct func_80255BEC_S2 func_80255BEC_S2;

struct func_80255F34_S1;
typedef struct func_80255F34_S1 func_80255F34_S1;

union func_80255F34_S1_U4;
typedef union func_80255F34_S1_U4 func_80255F34_S1_U4;

struct func_80256130_S1;
typedef struct func_80256130_S1 func_80256130_S1;

struct Block80255720;
struct Block80255720 {
    struct Block80255720 *prev;
    struct Block80255720 *next;
    struct Block80255720 *prev_phys;
    struct Block80255720 *next_phys;
    s32 offset;
    s32 size;
};
struct Block_func_802558B4_de;
struct Block_func_802558B4_de {
    struct Block_func_802558B4_de *next;
    struct Block_func_802558B4_de *previous;
    s32 a;
    s32 b;
    s32 header;
    s32 size;
};
struct Block_func_80255920_de;
struct Block_func_80255920_de {
    struct Block_func_80255920_de *prevFree;
    struct Block_func_80255920_de *nextFree;
    struct Block_func_80255920_de *prev;
    struct Block_func_80255920_de *next;
    u32 size;
    u32 free;
};
struct Block_func_802558B4_de;
struct Heap;
struct Heap {
    char *start;
    char *end;
    struct Block_func_802558B4_de *free;
    struct Block_func_802558B4_de *last;
    struct Block_func_802558B4_de *first;
};
struct Block_func_80255920_de;
struct Heap_func_80255920_de;
struct Heap_func_80255920_de {
    char pad0[8];
    struct Block_func_80255920_de *head;
    struct Block_func_80255920_de *tail;
};
struct Block80255720;
struct Pool80255720;
struct Pool80255720 {
    s32 unk0;
    s32 unk4;
    struct Block80255720 *head;
    struct Block80255720 *tail;
    struct Block80255720 *anchor;
};
struct Pool80255ACC;
struct Pool80255ACC {
    s32 unk0;
    s32 unk4;
    Block80255720 *head;
    Block80255720 *tail;
};
struct func_80255BEC_S2;
struct func_80255BEC_S2 {
    char pad0[0x4];
    void * unk4;
    char pad4[0x14 - 0x4 - sizeof(void*)];
    u32 unk14;
};
union func_80255F34_S1_U4;
union func_80255F34_S1_U4 {
    char * v0;
    int v1;
};
struct func_80255F34_S1;
struct func_80255F34_S1 {
    char pad0[0x4];
    func_80255F34_S1_U4 unk4;
    char pad4[0x8 - 0x4 - sizeof(func_80255F34_S1_U4)];
    int unk8;
    char pad8[0x10 - 0x8 - sizeof(int)];
    int unk10;
};
struct func_80256130_S1;
struct func_80256130_S1 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    u32 unk10;
};
extern void func_80255780_de(Pool80255720 *arg0);
extern void func_80255C4C_de(void *arg0, s32 *arg1, u32 *arg2);
extern void func_80255E24_de(void *arg0, s32 arg1, s32 arg2);
extern void func_80255F70_de(void *arg0);
extern void func_80255F94_de(void *arg0);
extern void func_802560A4_de(void *arg0, s32 arg1);
extern void func_80256214_de(void *arg0);
#endif
