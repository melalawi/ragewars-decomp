#include "basetypes.h"

typedef struct Queue {
    void **head;
    s32 unk04;
    s32 count;
    s32 index;
    s32 capacity;
    void **entries;
} Queue;

typedef struct HashNode80253F2C {
    s32 key;
    void *value;
    s32 unk08;
    struct HashNode80253F2C *next;
} HashNode80253F2C;

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

typedef struct func_80253F2C_S1 func_80253F2C_S1;
struct func_80253F2C_S1 {
    char pad0[0x10];
    s32 unk10;
};

void func_80253F2C(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    HashNode80253F2C *node;
    void *value;
    void **out;

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
    node = (HashNode80253F2C *)((s32)D_80105194 +
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

    if (value != 0) {
        void *object = *(void **)value;
        ((func_80253F2C_S1 *)(object))->unk10 = D_80105180;
        func_80255F58(&D_80104570, object);
    }

    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(&D_80105140, 0, 1);
        return;
    }
    func_802C2040(temp_v0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800F200A_4[] = {0x01, 0x32, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EC6C8_28[] = {0x00, 0x42, 0x9C, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x42, 0x9D, 0xA4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x42, 0x9C, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FF234_4[] = {0xFF, 0xDE, 0xDA, 0x0B};
#endif
