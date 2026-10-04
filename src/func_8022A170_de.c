#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"

extern u8 D_80142208_de[];

extern void func_80253BBC_de(s32 arg0, void *arg1);
extern void func_8024B8C4_de(void *arg0);
extern void func_8022BC94_de(void *arg0, s32 arg1);
extern s32 func_8024B7E4_de(void *arg0, s32 arg1);






void func_8022A170_de(void *arg0) {
    void *node;

    if (*(void **)arg0 != 0) {
        func_80253BBC_de(0, *(void **)arg0);
    }

    node = ((func_80228774_S1 *)(arg0))->unk20;
    if (node != 0) {
        u8 *base = D_80142208_de;

        do {
            func_8024B8C4_de(node);
            func_8024B8C4_de((char *)node + 0x2E8);
            func_8022BC94_de(node, 0);
            if (base[0x1D] != 0) {
                func_8024B7E4_de(node, 1);
            }
            node = ((func_8022A5E4_S2 *)(node))->unk16E0;
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
