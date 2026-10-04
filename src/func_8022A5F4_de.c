#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"






void *func_8022A5F4_de(void *arg0, u32 arg1) {
    void *var_v1;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_80228774_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                if (var_a2 == (s32)arg1) {
                    return var_v1;
                }
                var_v1 = ((func_8022A5E4_S2 *)(var_v1))->unk16E0;
                var_a2 += 1;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5428_18[] = {0x0029517CU, 0x002953E0U, 0x00295924U, 0x00295630U, 0x00295B78U, 0x00295C90U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA770_40[] = {0x00298950U, 0x00298988U, 0x002989DCU, 0x002989DCU, 0x00298930U, 0x00298930U, 0x00298930U, 0x00298930U, 0x002989DCU, 0x002989DCU, 0x002989DCU, 0x002989DCU, 0x002989DCU, 0x002989DCU, 0x002989ACU, 0x002989C4U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5644_4 = 10.2399998f;
const float unbake_rodata_800C5648_4 = 1.0f;
const float unbake_rodata_800C564C_4 = 81.9199982f;
const float unbake_rodata_800C5650_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5630_4 = 262144.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C54B8_4 = 30.0f;
const float unbake_rodata_800C54BC_4 = 675.0f;
#endif
