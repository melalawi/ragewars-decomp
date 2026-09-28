#include "basetypes.h"

typedef struct Node802A697C {
    u32 unk0;
    f32 value;
} Node802A697C;

typedef struct State802A697C {
    u8 pad0[4];
    struct State802A697C *next;
    Node802A697C *node;
    u8 padC[0x10];
    void *object;
    u8 pad20[4];
    f32 value;
    u8 pad28[0x14];
    u32 flags;
} State802A697C;

typedef struct Owner802A697C {
    u8 pad0[0x7528];
    State802A697C *head;
} Owner802A697C;

void func_802A697C(Owner802A697C *owner, int object) {
    float temp_f1;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *var_v1;

    var_v1 = owner->head;
    if (var_v1 != 0) {
        do {
            temp_a0 = *(void **)((char *)var_v1 + 0x1C);
            if ((int)temp_a0 == object) {
                if (temp_a0 != 0) {
                    if (*(int *)((char *)var_v1 + 0x3C) & 1) {
                        temp_v0 = *((u8 *)temp_a0 + 0x13B);
                        if (temp_v0 != 0) {
                            *((u8 *)temp_a0 + 0x13B) = (u8)(temp_v0 - 1);
                        }
                    }
                    if (*(int *)((char *)var_v1 + 0x3C) & 2) {
                        temp_a0_2 = *(void **)((char *)var_v1 + 0x1C);
                        temp_v0_2 = *((u8 *)temp_a0_2 + 0x1D9);
                        if (temp_v0_2 != 0) {
                            *((u8 *)temp_a0_2 + 0x1D9) = (u8)(temp_v0_2 - 1);
                        }
                    }
                }
                *(void **)((char *)var_v1 + 0x1C) = 0;
                temp_f1 = *(float *)((char *)*(void **)((char *)var_v1 + 8) + 4);
                if (*(float *)((char *)var_v1 + 0x24) < temp_f1) {
                    *(float *)((char *)var_v1 + 0x24) = temp_f1;
                }
            }
            var_v1 = *(void **)((char *)var_v1 + 4);
        } while (var_v1 != 0);
    }
}
