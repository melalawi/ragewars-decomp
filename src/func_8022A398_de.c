#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"





























extern void func_8023942C_de(void *arg0);
extern void func_8021EEFC_de(void *arg0, void *arg1);
extern s32 D_800D0EBC;






/* Notifies the entity list associated with arg0 about arg1 and calls a handler for each owner. */
void func_8022A398_de(void *arg0, void *arg1) {
    void *var_s0;

#if defined(VERSION_US_REV1)
    if (D_800D0EBC != 0) {
#endif
        func_8023942C_de(arg1);
        var_s0 = ((func_80228774_S1 *)(arg0))->unk20;
        if (var_s0 != 0) {
            do {
                if (((SharedPlayer_func_80209CD8_de *)(var_s0))->views5DC.view5DC_0.unk5DC == arg1) {
                    func_8021EEFC_de(var_s0, arg1);
                }
                var_s0 = ((SharedPlayer_func_80209CD8_de *)(var_s0))->views16E0.view16E0_0.unk16E0;
            } while (var_s0 != 0);
        }
#if defined(VERSION_US_REV1)
    }
#endif
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53AC_4 = 0.100000001f;
const float unbake_rodata_800C53B0_4 = 0.5f;
const float unbake_rodata_800C53B4_4 = 1.0f;
const float unbake_rodata_800C53B8_4 = (-4.0f);
const float unbake_rodata_800C53BC_4 = 0.5f;
const float unbake_rodata_800C53C0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA56C_4 = 0.100000001f;
const float unbake_rodata_800CA570_4 = 0.5f;
const float unbake_rodata_800CA574_4 = 1.0f;
const float unbake_rodata_800CA578_4 = (-4.0f);
const float unbake_rodata_800CA57C_4 = 0.5f;
const float unbake_rodata_800CA580_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C559C_4 = 3.40282347e+38f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C551C_12[] = {0x4D, 0x75, 0x6C, 0x74, 0x69, 0x20, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C53D4_4 = 16.0f;
const float unbake_rodata_800C53D8_4 = 1.0f;
const float unbake_rodata_800C53DC_4 = 255.0f;
const float unbake_rodata_800C53E0_4 = 256.0f;
const float unbake_rodata_800C53E4_4 = 0.00281690131f;
const float unbake_rodata_800C53E8_4 = 0.00450450461f;
const float unbake_rodata_800C53EC_4 = 0.045045048f;
#endif
