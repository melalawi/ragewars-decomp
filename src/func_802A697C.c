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

typedef struct func_802A697C_S1 func_802A697C_S1;
typedef struct func_802A697C_S2 func_802A697C_S2;
typedef struct func_802A697C_S3 func_802A697C_S3;
typedef struct func_802A697C_S4 func_802A697C_S4;
struct func_802A697C_S1 {
    char pad0[0x4];
    void* unk4;
    char pad4[0x8 - 0x4 - sizeof(void*)];
    void* unk8;
    char pad8[0x1C - 0x8 - sizeof(void*)];
    void* unk1C;
    char pad1C[0x24 - 0x1C - sizeof(void*)];
    float unk24;
    char pad24[0x3C - 0x24 - sizeof(float)];
    int unk3C;
};
struct func_802A697C_S2 {
    char pad0[0x13B];
    char unk13B;
};
struct func_802A697C_S3 {
    char pad0[0x1D9];
    char unk1D9;
};
struct func_802A697C_S4 {
    char pad0[0x4];
    float unk4;
};

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
            temp_a0 = ((func_802A697C_S1 *)(var_v1))->unk1C;
            if ((int)temp_a0 == object) {
                if (temp_a0 != 0) {
                    if (((func_802A697C_S1 *)(var_v1))->unk3C & 1) {
                        temp_v0 = ((func_802A697C_S2 *)(temp_a0))->unk13B;
                        if (temp_v0 != 0) {
                            ((func_802A697C_S2 *)(temp_a0))->unk13B = (u8)(temp_v0 - 1);
                        }
                    }
                    if (((func_802A697C_S1 *)(var_v1))->unk3C & 2) {
                        temp_a0_2 = ((func_802A697C_S1 *)(var_v1))->unk1C;
                        temp_v0_2 = ((func_802A697C_S3 *)(temp_a0_2))->unk1D9;
                        if (temp_v0_2 != 0) {
                            ((func_802A697C_S3 *)(temp_a0_2))->unk1D9 = (u8)(temp_v0_2 - 1);
                        }
                    }
                }
                ((func_802A697C_S1 *)(var_v1))->unk1C = 0;
                temp_f1 = ((func_802A697C_S4 *)(((func_802A697C_S1 *)(var_v1))->unk8))->unk4;
                if (((func_802A697C_S1 *)(var_v1))->unk24 < temp_f1) {
                    ((func_802A697C_S1 *)(var_v1))->unk24 = temp_f1;
                }
            }
            var_v1 = ((func_802A697C_S1 *)(var_v1))->unk4;
        } while (var_v1 != 0);
    }
}
