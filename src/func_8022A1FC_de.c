#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"

extern s32 func_8024D160_de(void *arg0);











void func_8022A1FC_de(void *arg0, void *arg1) {
    void *node;
    int scale;
    s32 count1;
    s32 count2;
    char *entry;

    node = ((func_80228774_S1 *)(arg0))->unk20;
    if (node != 0) {
        do {
            ((ObjectLinks16E4_2 *)(node))->unk_70 = 0;
            ((ObjectLinks16E4_2 *)(node))->unk_358 = 0;
            if (func_8024D160_de(node) != 0) {
                if (node) {
                    count1 = ((IntegerState948 *)(arg1))->unk_944;
                } else {
                    count1 = ((IntegerState948 *)(arg1))->unk_944;
                }
                if (count1 != 0x200) {
                    scale = 4;
                    ((ObjectLinks148 *)(((s32)arg1 + count1 * scale)))->unk_144 = node;
                    ((IntegerState948 *)(arg1))->unk_944 = count1 + 1;
                }
                count1 = 0xB48;
                count2 = ((IntegerStateB4C *)arg1)->unk_B48;
                if (count2 != 0x80) {
                    ((struct ObjectLinks94C *) (entry = (char *) (((s32) arg1) + (count2 * 4))))->unk_948 = node;
                    ((IntegerStateB4C *)arg1)->unk_B48 = count2 + 1;
                }
            }
            node = ((ObjectLinks16E4_2 *)(node))->unk_16E0;
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
