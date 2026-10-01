#include "basetypes.h"

extern s32 func_8024D150(void *arg0);

typedef struct func_8022A1D0_S1 func_8022A1D0_S1;
typedef struct func_8022A1D0_S2 func_8022A1D0_S2;
typedef struct func_8022A1D0_S3 func_8022A1D0_S3;
typedef struct func_8022A1D0_S4 func_8022A1D0_S4;
struct func_8022A1D0_S1 {
    char pad0[0x20];
    void* unk20;
};
struct func_8022A1D0_S2 {
    char pad0[0x70];
    s32 unk70;
    char pad70[0x358 - 0x70 - sizeof(s32)];
    s32 unk358;
    char pad358[0x16E0 - 0x358 - sizeof(s32)];
    void* unk16E0;
};
struct func_8022A1D0_S3 {
    char pad0[0x944];
    s32 unk944;
};
typedef struct func_8022A1D0_S5 { char pad0[0xB48]; s32 unkB48; } func_8022A1D0_S5;
struct func_8022A1D0_S4 {
    char pad0[0x144];
    void* unk144;
};

void func_8022A1D0(void *arg0, void *arg1) {
    void *node;
    int scale;
    s32 count1;
    s32 count2;
    char *entry;

    node = ((func_8022A1D0_S1 *)(arg0))->unk20;
    if (node != 0) {
        do {
            ((func_8022A1D0_S2 *)(node))->unk70 = 0;
            ((func_8022A1D0_S2 *)(node))->unk358 = 0;
            if (func_8024D150(node) != 0) {
                if (node) {
                    count1 = ((func_8022A1D0_S3 *)(arg1))->unk944;
                } else {
                    count1 = ((func_8022A1D0_S3 *)(arg1))->unk944;
                }
                if (count1 != 0x200) {
                    scale = 4;
                    ((func_8022A1D0_S4 *)(((s32)arg1 + count1 * scale)))->unk144 = node;
                    ((func_8022A1D0_S3 *)(arg1))->unk944 = count1 + 1;
                }
                count1 = 0xB48;
                count2 = ((func_8022A1D0_S5 *)arg1)->unkB48;
                if (count2 != 0x80) {
                    *(void **)((entry = (char *)((s32)arg1 + count2 * 4)) + 0x948) = node;
                    ((func_8022A1D0_S5 *)arg1)->unkB48 = count2 + 1;
                }
            }
            node = ((func_8022A1D0_S2 *)(node))->unk16E0;
        } while (node != 0);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C535C_4 = 4.0f;
const float unbake_rodata_800C5360_4 = 0.00352112669f;
const float unbake_rodata_800C5364_4 = 0.00450450461f;
const float unbake_rodata_800C5368_4 = 0.850000024f;
const float unbake_rodata_800C536C_4 = 0.800000012f;
const float unbake_rodata_800C5370_4 = 0.5f;
const float unbake_rodata_800C5374_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA51C_4 = 4.0f;
const float unbake_rodata_800CA520_4 = 0.00352112669f;
const float unbake_rodata_800CA524_4 = 0.00450450461f;
const float unbake_rodata_800CA528_4 = 0.850000024f;
const float unbake_rodata_800CA52C_4 = 0.800000012f;
const float unbake_rodata_800CA530_4 = 0.5f;
const float unbake_rodata_800CA534_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C54DC_12[] = {0x4D, 0x75, 0x6C, 0x74, 0x69, 0x20, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C54FC_4 = 3000.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C53B0_4 = (-0.667424023f);
#endif
