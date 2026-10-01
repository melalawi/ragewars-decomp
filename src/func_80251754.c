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
typedef struct { s32 unk0; } func_80251754_G1;
extern s32 D_8010515C;
typedef struct { s32 unk0; } func_80251754_G2;
extern func_80251754_G2 D_80105180;
typedef struct { s32 unk0; } func_80251754_G3;
extern func_80251754_G3 D_80105190;
typedef struct { s32 unk0; } func_80251754_G4;
extern func_80251754_G4 D_80105194;

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern s32 func_802C0510(Queue *, s32, s32);
extern void func_80255F58(void *, s32);

typedef struct func_80251754_S1 func_80251754_S1;
struct func_80251754_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

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
    node = (HashNode *)((s32)D_80105194.unk0 +
        ((((arg1 << 5) ^ ((u32)arg1 >> 1) ^ ((u32)arg1 >> 9) ^
           ((u32)arg1 >> 17)) & D_80105190.unk0) * 0x10));
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
        ((func_80251754_S1 *)(object))->unk8 += 1;
        ((func_80251754_S1 *)(object))->unkC |= 0x100;
        ((func_80251754_S1 *)(object))->unk10 = D_80105180.unk0;
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800F13AC_94[] = {0x00, 0x42, 0x72, 0xC8, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x74, 0x58, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x93, 0x60, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x78, 0x24, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x6E, 0x50, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x93, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x99, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x99, 0x78, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x93, 0xB8, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x95, 0x1C, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x97, 0xE4, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x42, 0x96, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EB234_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800F2CC0_20[] = {0x00, 0x00, 0x01, 0xB8, 0x00, 0x00, 0x01, 0x65, 0x00, 0x00, 0x01, 0x63, 0x00, 0x00, 0x01, 0x96, 0x00, 0x00, 0x01, 0xA5, 0x00, 0x00, 0x01, 0x64, 0x00, 0x00, 0x01, 0x98, 0x00, 0x00, 0x01, 0xA5};
#endif
