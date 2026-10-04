#ifndef UNBAKE_SPAN_1000_CODE_802C0384_H
#define UNBAKE_SPAN_1000_CODE_802C0384_H
#include "../types.h"
struct Node802C07B0;
struct Node802C07B0;
typedef struct Node802C07B0 Node802C07B0;

/* unbake evidence input: c3RydWN0IE5vZGU4MDJDMDdCMDsKdHlwZWRlZiBzdHJ1Y3QgTm9kZTgwMkMwN0IwIE5vZGU4MDJDMDdCMDsK */

struct Node_func_802BB9F8_de;
struct Node_func_802BB9F8_de;
typedef struct Node_func_802BB9F8_de Node_func_802BB9F8_de;

/* unbake evidence input: c3RydWN0IE5vZGVfZnVuY184MDJCQjlGOF9kZTsKdHlwZWRlZiBzdHJ1Y3QgTm9kZV9mdW5jXzgwMkJCOUY4X2RlIE5vZGVfZnVuY184MDJCQjlGOF9kZTsK */

struct OSThread_s_func_802BB5F0_de;
struct OSThread_s_func_802BB5F0_de;
typedef struct OSThread_s_func_802BB5F0_de OSThread_s_func_802BB5F0_de;

/* unbake evidence input: c3RydWN0IE9TVGhyZWFkX3NfZnVuY184MDJCQjVGMF9kZTsKdHlwZWRlZiBzdHJ1Y3QgT1NUaHJlYWRfc19mdW5jXzgwMkJCNUYwX2RlIE9TVGhyZWFkX3NfZnVuY184MDJCQjVGMF9kZTsK */

struct Queue_func_802BB2A0_de;
struct Queue_func_802BB2A0_de {
    void *mtqueue;
    void *fullqueue;
    s32 validCount;
    s32 first;
    s32 msgCount;
    void **msg;
};
/* unbake evidence input: c3RydWN0IFF1ZXVlX2Z1bmNfODAyQkIyQTBfZGUgewogICAgdm9pZCAqbXRxdWV1ZTsKICAgIHZvaWQgKmZ1bGxxdWV1ZTsKICAgIHMzMiB2YWxpZENvdW50OwogICAgczMyIGZpcnN0OwogICAgczMyIG1zZ0NvdW50OwogICAgdm9pZCAqKm1zZzsKfTs= */

struct Thread;
struct Thread {
    char pad0[0x10];
    u16 state;
};
/* unbake evidence input: c3RydWN0IFRocmVhZCB7CiAgICBjaGFyIHBhZDBbMHgxMF07CiAgICB1MTYgc3RhdGU7Cn07 */

struct ThreadNode;
struct ThreadNode {
    struct ThreadNode *next;
    s32 priority;
    struct ThreadNode **queue;
    s32 unk0C;
    u16 state;
};
/* unbake evidence input: c3RydWN0IFRocmVhZE5vZGUgewogICAgc3RydWN0IFRocmVhZE5vZGUgKm5leHQ7CiAgICBzMzIgcHJpb3JpdHk7CiAgICBzdHJ1Y3QgVGhyZWFkTm9kZSAqKnF1ZXVlOwogICAgczMyIHVuazBDOwogICAgdTE2IHN0YXRlOwp9Ow== */

struct Node802C07B0;
struct Node802C07B0;
struct Node802C07B0 {
    s32 field0;
    s32 field4;
    u64 field8;
    u64 field10;
    void *field18;
    void *field1C;
};

/* unbake evidence input: c3RydWN0IE5vZGU4MDJDMDdCMDsKc3RydWN0IE5vZGU4MDJDMDdCMCB7CiAgICBzMzIgZmllbGQwOwogICAgczMyIGZpZWxkNDsKICAgIHU2NCBmaWVsZDg7CiAgICB1NjQgZmllbGQxMDsKICAgIHZvaWQgKmZpZWxkMTg7CiAgICB2b2lkICpmaWVsZDFDOwp9Owo= */

struct Node_func_802BB9F8_de;
struct Node_func_802BB9F8_de;
struct Node_func_802BB9F8_de {
    void *next;
    void *prev;
    u64 field8;
    u64 field10;
    s32 field18;
    s32 field1C;
};

/* unbake evidence input: c3RydWN0IE5vZGVfZnVuY184MDJCQjlGOF9kZTsKc3RydWN0IE5vZGVfZnVuY184MDJCQjlGOF9kZSB7CiAgICB2b2lkICpuZXh0OwogICAgdm9pZCAqcHJldjsKICAgIHU2NCBmaWVsZDg7CiAgICB1NjQgZmllbGQxMDsKICAgIHMzMiBmaWVsZDE4OwogICAgczMyIGZpZWxkMUM7Cn07Cg== */

struct OSThread_s_func_802BB5F0_de;
struct OSThread_s_func_802BB5F0_de;
struct OSThread_s_func_802BB5F0_de {
    struct OSThread_s_func_802BB5F0_de *next;
    s32 priority;
    struct OSThread_s_func_802BB5F0_de **queue;
    struct OSThread_s_func_802BB5F0_de *tlnext;
    u16 state;
};

/* unbake evidence input: c3RydWN0IE9TVGhyZWFkX3NfZnVuY184MDJCQjVGMF9kZTsKc3RydWN0IE9TVGhyZWFkX3NfZnVuY184MDJCQjVGMF9kZSB7CiAgICBzdHJ1Y3QgT1NUaHJlYWRfc19mdW5jXzgwMkJCNUYwX2RlICpuZXh0OwogICAgczMyIHByaW9yaXR5OwogICAgc3RydWN0IE9TVGhyZWFkX3NfZnVuY184MDJCQjVGMF9kZSAqKnF1ZXVlOwogICAgc3RydWN0IE9TVGhyZWFkX3NfZnVuY184MDJCQjVGMF9kZSAqdGxuZXh0OwogICAgdTE2IHN0YXRlOwp9Owo= */

struct Queue_func_802BB2A0_de;
typedef struct Queue_func_802BB2A0_de Queue_func_802BB2A0_de;
struct Thread;
typedef struct Thread Thread;
struct ThreadNode;
typedef struct ThreadNode ThreadNode;
extern void func_802BB3D0_de(s32 arg0);
extern void func_802BB850_eu(s32 arg0);
extern void func_802BB9F8_de(void);
extern void func_802BBA4C_de(u64 interval);
extern void func_802BBC20_de(void);
#endif
