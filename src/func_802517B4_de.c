#include "common/types.h"
#include "span_1000/code_8024F944.h"
#include "span_1000/types.h"
#include "types.h"
/* Looks up a key in the hash table under the queue lock and, if found, bumps the object's reference count, flags it, stamps it and passes it to func_80255FB8_de, returning the object. Adapted from func_80253F8C_de, with the count/flag updates added and the object returned. */





extern s32 D_80100570;
extern Queue_func_802517B4_de D_80101140;



extern struct Shape_func_8021A2D4_de_2 D_80101180;

extern struct Shape_func_8021A2D4_de_2 D_80101190;

extern struct Shape_func_8021A2D4_de_2 D_80101194;

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern s32 func_802BB420_de(Queue_func_802517B4_de *, s32, s32);
extern void func_80255FB8_de(void *, s32);




void *func_802517B4_de(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    u32 temp_a0;
    u32 temp_v0;
    HashNode *node;
    void *value;
    void **out;
    void *object;

    temp_a0 = func_802BCF30_de();
    temp_v1 = D_8010115C + 1;
    D_8010115C = temp_v1;
    if (temp_v1 != 1) {
        func_802BCF50_de(temp_a0);
        func_802BB2A0_de((s32)&D_80101140, 0, 1);
    } else {
        func_802BCF50_de(temp_a0);
    }

    out = &value;
    node = (HashNode *)((s32)D_80101194.field_0 +
        ((((arg1 << 5) ^ ((u32)arg1 >> 1) ^ ((u32)arg1 >> 9) ^
           ((u32)arg1 >> 17)) & D_80101190.field_0) * 0x10));
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
        ((func_8020A028_S4 *)(object))->unk8 += 1;
        ((func_8020A028_S4 *)(object))->unkC |= 0x100;
        ((func_8020A028_S4 *)(object))->unk10 = D_80101180.field_0;
        func_80255FB8_de(&D_80100570, object);
    }

    temp_v0 = func_802BCF30_de();
    temp_v1_2 = D_8010115C - 1;
    D_8010115C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802BCF50_de(temp_v0);
        func_802BB420_de(&D_80101140, 0, 1);
    } else {
        func_802BCF50_de(temp_v0);
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
