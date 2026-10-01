#include "basetypes.h"

extern f32 func_8027272C(f32 *a, f32 *b);
extern f32 D_800C9F90;

typedef struct func_8028509C_S1 func_8028509C_S1;
typedef struct func_8028509C_S2 func_8028509C_S2;
typedef struct func_8028509C_S3 func_8028509C_S3;
struct func_8028509C_S1 {
    char pad0[0xFC14];
    void* unkFC14;
};
struct func_8028509C_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x5C - 0x8 - sizeof(f32)];
    s32 unk5C;
    char pad5C[0x12C - 0x5C - sizeof(s32)];
    void* unk12C;
    char pad12C[0x1F4 - 0x12C - sizeof(void*)];
    void* unk1F4;
};
struct func_8028509C_S3 {
    char pad0[0x8];
    f32 unk8;
};

void func_8028509C(void *arg0, void *arg1, f32 *arg2) {
    f32 temp;
    void *node;

    *arg2 = D_800C9F90;
    node = ((func_8028509C_S1 *)(arg0))->unkFC14;
    if (node != 0) {
        do {
            if (((func_8028509C_S2 *)(node))->unk12C != arg1 && (((func_8028509C_S2 *)(node))->unk5C & 0x100)) {
                temp = func_8027272C(&((func_8028509C_S2 *)(node))->unk8, &((func_8028509C_S3 *)(arg1))->unk8);
                if (temp < *arg2) {
                    *arg2 = temp;
                }
            }
            node = ((func_8028509C_S2 *)(node))->unk1F4;
        } while (node != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4DD0_4 = 10000000.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9F90_4 = 10000000.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5150_4 = 10000000.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5190_4 = 10000000.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4EA0_4 = 10000000.0f;
#endif
