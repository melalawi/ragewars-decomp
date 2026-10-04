#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_8021CBD0_de(void *arg0, void *arg1);


#if defined(VERSION_US_REV1)
extern s32 D_800D0EBC;
#endif








/* Removes entity from list if owned by specific owner, with version-specific check. */
void func_8022A328_de(void *arg0, void *arg1) {
    void *var_s0;

#if defined(VERSION_US_REV1)
    if (D_800D0EBC != 0) {
        var_s0 = ((func_80228774_S1 *)(arg0))->unk20;
        if (var_s0 != 0) {
            do {
                if (((func_8022A2FC_S2 *)(var_s0))->unk5DC == arg1 &&
                    ((func_80207B5C_S2 *)(arg1))->unk24 == 0 &&
                    ((func_8022A2FC_S2 *)(var_s0))->unkE4 != D_800C922C) {
                    func_8021CBD0_de(var_s0, arg1);
                }
                var_s0 = ((func_8022A2FC_S2 *)(var_s0))->unk16E0;
            } while (var_s0 != 0);
        }
    }
#else
    var_s0 = ((func_80228774_S1 *)(arg0))->unk20;
    if (var_s0 != 0) {
        do {
            if (((func_8022A2FC_S2 *)(var_s0))->unk5DC == arg1 &&
                ((func_80207B5C_S2 *)(arg1))->unk24 == 0 &&
                ((func_8022A2FC_S2 *)(var_s0))->unkE4 != D_800C922C) {
                func_8021CBD0_de(var_s0, arg1);
            }
            var_s0 = ((func_8022A2FC_S2 *)(var_s0))->unk16E0;
        } while (var_s0 != 0);
    }
#endif
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C539C_4 = 9.99999997e-07f;
const float unbake_rodata_800C53A0_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA55C_4 = 9.99999997e-07f;
const float unbake_rodata_800CA560_4 = 15.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C5534_B[] = {0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x00};
const unsigned char unbake_rodata_800C5540_2B[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x47, 0x65, 0x74, 0x42, 0x4C, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x44, 0x61, 0x74, 0x61, 0x3A, 0x20, 0x62, 0x6C, 0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x64, 0x61, 0x74, 0x61, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
const unsigned char unbake_rodata_800C556C_25[] = {0x43, 0x53, 0x63, 0x65, 0x6E, 0x65, 0x5F, 0x5F, 0x47, 0x65, 0x74, 0x42, 0x4C, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x44, 0x61, 0x74, 0x61, 0x3A, 0x20, 0x62, 0x6C, 0x6C, 0x65, 0x76, 0x65, 0x6C, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
const unsigned char unbake_rodata_800C5594_3[] = {0x25, 0x73, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C5510_9[] = {0x56, 0x69, 0x73, 0x20, 0x49, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C53D0_4 = 4.0f;
#endif
