/* Looks up a key in the hash table under the queue lock and, if found, bumps the object's reference count, flags it, stamps it and passes it to func_80255F58, returning the object. Adapted from func_80253F2C, with the count/flag updates added and the object returned. */
#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

typedef struct HashNode {
    s32 key;
    void *value;
    s32 unk08;
    struct HashNode *next;
} HashNode;

extern s32 D_80104570;
extern Queue D_80105140;
extern s32 D_8010515C;
extern s32 D_80105180;
extern s32 D_80105190;
extern s32 D_80105194;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern s32 func_802C0510(Queue *, s32, s32);
extern void func_80255F58(void *, s32);

void *func_80251754(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    HashNode *node;
    void *value;
    void **out;
    void *object;

    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_a0);
    }

    out = &value;
    node = (HashNode *)((s32)D_80105194 +
        ((((arg1 << 5) ^ ((u32)arg1 >> 1) ^ ((u32)arg1 >> 9) ^
           ((u32)arg1 >> 17)) & D_80105190) * 0x10));
    if (node->key != arg1) {
        goto not_initial;
    }
    value = node->value;
    goto found;
loop_found:
    *out = node->value;
    goto found;
not_initial:
    value = 0;
    if (node == 0) {
        goto found;
    }
loop:
    if (node->key == arg1) {
        goto loop_found;
    }
    node = node->next;
    if (node != 0) {
        goto loop;
    }
found:

    object = 0;
    if (value != 0) {
        object = *(void **)value;
        *(s32 *)((char *)object + 0x8) += 1;
        *(s32 *)((char *)object + 0xC) |= 0x100;
        *(s32 *)((char *)object + 0x10) = D_80105180;
        func_80255F58(&D_80104570, object);
    }

    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(&D_80105140, 0, 1);
    } else {
        func_802C2040(temp_v0);
    }
    return object;
}
