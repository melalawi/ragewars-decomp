#include "basetypes.h"
#include "shared/player.h"

typedef struct func_8022C54C_S1 func_8022C54C_S1;
typedef SharedPlayer func_8022C54C_S2;
typedef struct func_8022C54C_S3 func_8022C54C_S3;
struct func_8022C54C_S1 {
    char pad0[0x20];
    void* unk20;
};

struct func_8022C54C_S3 {
    char pad0[0x90];
    u8 unk90;
};

void *func_8022C54C(void *arg0, u32 arg1) {
    void *var_v1;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_8022C54C_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                if (((func_8022C54C_S3 *)((((func_8022C54C_S2 *)(var_v1))->views5D8.view5D8_0.unk5D8)))->unk90 == 0) {
                    if (var_a2 == (s32) arg1) {
                        return var_v1;
                    }
                    var_a2 += 1;
                }
                var_v1 = ((func_8022C54C_S2 *)(var_v1))->views16E0.view16E0_0.unk16E0;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7430_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CC770_24[] = {0x002B78A4U, 0x002B79E8U, 0x002B7A58U, 0x002B7B40U, 0x002B7AC8U, 0x002B7C64U, 0x002B7BB0U, 0x002B7C3CU, 0x002B7B10U};
const float unbake_rodata_800CC794_4 = 9.99999975e-05f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6348_1C[] = {0x002A8EE4U, 0x002A8EF4U, 0x002A8F24U, 0x002A8F04U, 0x002A8F14U, 0x002A8F14U, 0x002A8F24U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C62D8_1C[] = {0x002A8CECU, 0x002A8CFCU, 0x002A8D2CU, 0x002A8D0CU, 0x002A8D1CU, 0x002A8D1CU, 0x002A8D2CU};
const float unbake_rodata_800C62F4_4 = 24.0f;
const float unbake_rodata_800C62F8_4 = 12.0f;
const float unbake_rodata_800C62FC_4 = 6.0f;
const float unbake_rodata_800C6300_4 = 16.0f;
const float unbake_rodata_800C6304_4 = 8.0f;
const float unbake_rodata_800C6308_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C7338_8 = 4294967296.0;
const float unbake_rodata_800C7340_4 = 2.14748365e+09f;
#endif
