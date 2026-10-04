#ifndef UNBAKE_SPAN_1000_CODE_802C0384_H
#define UNBAKE_SPAN_1000_CODE_802C0384_H
#include "common/types.h"
#include "span_1000/types.h"
#include "../types.h"
struct Node802C07B0;
typedef struct Node802C07B0 Node802C07B0;

struct Node_func_802BB9F8_de;
typedef struct Node_func_802BB9F8_de Node_func_802BB9F8_de;

struct OSThread_s_func_802BB5F0_de;
typedef struct OSThread_s_func_802BB5F0_de OSThread_s_func_802BB5F0_de;

struct Queue_func_802BB2A0_de;
typedef struct Queue_func_802BB2A0_de Queue_func_802BB2A0_de;

struct Thread;
typedef struct Thread Thread;

struct ThreadNode;
typedef struct ThreadNode ThreadNode;

struct Node802C07B0;
struct Node802C07B0 {
    s32 field0;
    s32 field4;
    u64 field8;
    u64 field10;
    void *field18;
    void *field1C;
};
struct Node_func_802BB9F8_de;
struct Node_func_802BB9F8_de {
    void *next;
    void *prev;
    u64 field8;
    u64 field10;
    s32 field18;
    s32 field1C;
};
struct OSThread_s_func_802BB5F0_de;
struct OSThread_s_func_802BB5F0_de {
    struct OSThread_s_func_802BB5F0_de *next;
    s32 priority;
    struct OSThread_s_func_802BB5F0_de **queue;
    struct OSThread_s_func_802BB5F0_de *tlnext;
    u16 state;
};
struct Queue_func_802BB2A0_de;
struct Queue_func_802BB2A0_de {
    void *mtqueue;
    void *fullqueue;
    s32 validCount;
    s32 first;
    s32 msgCount;
    void **msg;
};
struct Thread;
struct Thread {
    char pad0[0x10];
    u16 state;
};
struct ThreadNode;
struct ThreadNode {
    struct ThreadNode *next;
    s32 priority;
    struct ThreadNode **queue;
    s32 unk0C;
    u16 state;
};
extern void func_802BB3D0_de(s32 arg0);
extern void func_802BB850_eu(s32 arg0);
extern void func_802BB9F8_de(void);
extern void func_802BBA4C_de(u64 interval);
extern void func_802BBC20_de(void);
#endif
