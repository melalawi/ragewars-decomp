#ifndef UNBAKE_SPAN_1000_CODE_80252714_H
#define UNBAKE_SPAN_1000_CODE_80252714_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct HashNode_func_80252774_de;
typedef struct HashNode_func_80252774_de HashNode_func_80252774_de;

struct Node80253610;
typedef struct Node80253610 Node80253610;

struct NodePair80253E04;
typedef struct NodePair80253E04 NodePair80253E04;

struct Node_func_80252774_de;
typedef struct Node_func_80252774_de Node_func_80252774_de;

struct Request_func_80252774_de;
typedef struct Request_func_80252774_de Request_func_80252774_de;

struct func_802532A0_S1;
typedef struct func_802532A0_S1 func_802532A0_S1;

struct func_8025398C_S1;
typedef struct func_8025398C_S1 func_8025398C_S1;

struct func_80254420_S1;
typedef struct func_80254420_S1 func_80254420_S1;

struct Node_func_80252774_de;
struct Request_func_80252774_de;
struct Node_func_80252774_de {
    void *data;
    s32 pad4;
    s32 count;
    s32 flags;
    s32 pad10;
    struct Request_func_80252774_de *owner;
};
struct Request_func_80252774_de {
    struct Node_func_80252774_de *node;
    s32 pad4;
    s32 key;
    s32 priority;
};
struct HashNode_func_80252774_de;
struct Request_func_80252774_de;
struct HashNode_func_80252774_de {
    s32 key;
    struct Request_func_80252774_de *value;
    s32 pad8;
    struct HashNode_func_80252774_de *next;
};
struct Node80253610;
struct Node80253610 {
    s32 field0;
    s32 field4;
    s32 references;
    u32 flags;
};
struct NodePair80253E04;
struct NodePair80253E04 {
    Node80253610 *first;
    Node80253610 *second;
};
struct Shape_func_802BC570_de;
struct Shape_func_802BC570_de {
    int field_0;
    int field_4;
    int field_8;
    int field_C;
};
struct func_802532A0_S1;
struct func_802532A0_S1 {
    char pad0[0x8];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    unsigned int unkC;
};
struct func_8025398C_S1;
struct func_8025398C_S1 {
    char pad0[0xB98];
    char unkB98;
};
struct func_80254420_S1;
struct func_80254420_S1 {
    char pad0[0x1C];
    u32 unk1C;
};
extern int func_802532F4_de(void *arg0);
extern void func_80253300_de(void *arg0);
extern void func_8025331C_de(void *arg0);
extern s32 func_80253AD4_de(void);
extern int func_8025478C_de(void);
extern int func_802547AC_de(void);
extern int func_802547BC_de(void);
extern int func_802547CC_de(void);
#endif
