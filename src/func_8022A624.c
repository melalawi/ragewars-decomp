#include "basetypes.h"
#include "shared/player.h"

typedef struct func_8022A624_S1 func_8022A624_S1;
typedef SharedPlayer func_8022A624_S2;
typedef struct func_8022A624_S3 func_8022A624_S3;
struct func_8022A624_S1 {
    char pad0[0x20];
    void* unk20;
};

struct func_8022A624_S3 {
    char pad0[0x564];
    s32 unk564;
};

void *func_8022A624(void *arg0, u32 arg1) {
    void *var_v1;
    void *temp_v0;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = ((func_8022A624_S1 *)(arg0))->unk20;
        if (var_v1 != 0) {
            do {
                temp_v0 = ((func_8022A624_S2 *)(var_v1))->views5DC.view5DC_0.unk5DC;
                if (temp_v0 != 0 && ((func_8022A624_S3 *)(temp_v0))->unk564 == 0) {
                    if (var_a2 == (s32) arg1) {
                        return var_v1;
                    }
                    var_a2 += 1;
                }
                var_v1 = ((func_8022A624_S2 *)(var_v1))->views16E0.view16E0_0.unk16E0;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5450_40[] = {0x00296F34U, 0x00296F6CU, 0x00296E7CU, 0x00296E7CU, 0x00296F14U, 0x00296F14U, 0x00296F14U, 0x00296F14U, 0x00296E7CU, 0x00296E7CU, 0x00296E7CU, 0x00296E7CU, 0x00296E7CU, 0x00296E7CU, 0x00296F90U, 0x00296FA4U};
const unsigned int unbake_rodata_800C5490_40[] = {0x00297188U, 0x002971C0U, 0x00297214U, 0x00297214U, 0x00297168U, 0x00297168U, 0x00297168U, 0x00297168U, 0x00297214U, 0x00297214U, 0x00297214U, 0x00297214U, 0x00297214U, 0x00297214U, 0x002971E4U, 0x002971FCU};
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CA7B0_8 = 1000.0;
const unsigned int unbake_rodata_800CA7B8_40[] = {0x00298CF4U, 0x00298D2CU, 0x00298D80U, 0x00298D80U, 0x00298CD8U, 0x00298CD8U, 0x00298CD8U, 0x00298CD8U, 0x00298D80U, 0x00298D80U, 0x00298D80U, 0x00298D80U, 0x00298D80U, 0x00298D80U, 0x00298D50U, 0x00298D68U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5654_4 = 81.9199982f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C5658_1C[] = {0x0028F850U, 0x0028F7F8U, 0x0028F78CU, 0x0028F850U, 0x0028F850U, 0x0028F7F8U, 0x0028F7F8U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C54D4_4 = 1.0f;
#endif
