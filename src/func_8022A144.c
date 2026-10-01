#include "basetypes.h"

extern u8 D_801462C8[];

extern void func_80253B5C(s32 arg0, void *arg1);
extern void func_8024B8B4(void *arg0);
extern void func_8022BC84(void *arg0, s32 arg1);
extern s32 func_8024B7D4(void *arg0, s32 arg1);

typedef struct func_8022A144_S1 func_8022A144_S1;
typedef struct func_8022A144_S2 func_8022A144_S2;
struct func_8022A144_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A144_S2 {
    char pad0[0x16E0];
    void* unk16E0;
};

void func_8022A144(void *arg0) {
    void *node;

    if (*(void **)arg0 != 0) {
        func_80253B5C(0, *(void **)arg0);
    }

    node = ((func_8022A144_S1 *)(arg0))->unk20;
    if (node != 0) {
        u8 *base = D_801462C8;

        do {
            func_8024B8B4(node);
            func_8024B8B4((char *)node + 0x2E8);
            func_8022BC84(node, 0);
            if (base[0x1D] != 0) {
                func_8024B7D4(node, 1);
            }
            node = ((func_8022A144_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5358_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA518_4 = 4.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C54D0_9[] = {0x56, 0x69, 0x73, 0x20, 0x49, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C54F8_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C53A4_4 = 81.9199982f;
#endif
