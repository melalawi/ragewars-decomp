#include "span_1000/code_802AB720.h"
#include "span_C76B0/data.h"
#include "types.h"
extern s32 D_80147150;
extern f32 D_800C6214_de;
extern f32 D_800C621C_de;
extern f32 D_800C6224_de;


extern void *jtbl_800C61F8_de[];

/** Return the floating parameter selected by the current global mode. */
f32 func_802AA864_de(void) {
    {
        static void *sw_mode_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_mode_0, &&sw_mode_1, &&sw_mode_2, &&sw_mode_6, &&sw_mode_3, &&sw_mode_4, &&sw_mode_5, &&sw_mode_default
        };
        s32 sw_mode_value = D_80147150;
        if ((unsigned int)sw_mode_value > 6) {
            goto sw_mode_default;
        }
        goto *jtbl_800C61F8_de[sw_mode_value];
    }
    do {
    sw_mode_0:
        return D_800C6214_de;
    sw_mode_1:
        return (12.0f);
    sw_mode_2:
    sw_mode_6:
        return D_800C621C_de;
    sw_mode_3:
        return (6.0f);
    sw_mode_4:
    sw_mode_5:
        return D_800C6224_de;
    sw_mode_default:
        return D_800C6228_de;
    
    } while (0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C6128_1C[] = {0x002AA7BCU, 0x002AA7CCU, 0x002AA7DCU, 0x002AA7ECU, 0x002AA7FCU, 0x002AA7FCU, 0x002AA7DCU};
const float unbake_rodata_800C6144_4 = 24.0f;
const float unbake_rodata_800C6148_4 = 12.0f;
const float unbake_rodata_800C614C_4 = 8.0f;
const float unbake_rodata_800C6150_4 = 6.0f;
const float unbake_rodata_800C6154_4 = 16.0f;
const float unbake_rodata_800C6158_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB388_1C[] = {0x002AB87CU, 0x002AB88CU, 0x002AB89CU, 0x002AB8ACU, 0x002AB8BCU, 0x002AB8BCU, 0x002AB89CU};
const float unbake_rodata_800CB3A4_4 = 24.0f;
const float unbake_rodata_800CB3A8_4 = 12.0f;
const float unbake_rodata_800CB3AC_4 = 8.0f;
const float unbake_rodata_800CB3B0_4 = 6.0f;
const float unbake_rodata_800CB3B4_4 = 16.0f;
const float unbake_rodata_800CB3B8_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6498_1C[] = {0x002AA99CU, 0x002AA9ACU, 0x002AA9BCU, 0x002AA9CCU, 0x002AA9DCU, 0x002AA9DCU, 0x002AA9BCU};
const float unbake_rodata_800C64B4_4 = 24.0f;
const float unbake_rodata_800C64B8_4 = 12.0f;
const float unbake_rodata_800C64BC_4 = 8.0f;
const float unbake_rodata_800C64C0_4 = 6.0f;
const float unbake_rodata_800C64C4_4 = 16.0f;
const float unbake_rodata_800C64C8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C64D8_1C[] = {0x002AA9DCU, 0x002AA9ECU, 0x002AA9FCU, 0x002AAA0CU, 0x002AAA1CU, 0x002AAA1CU, 0x002AA9FCU};
const float unbake_rodata_800C64F4_4 = 24.0f;
const float unbake_rodata_800C64F8_4 = 12.0f;
const float unbake_rodata_800C64FC_4 = 8.0f;
const float unbake_rodata_800C6500_4 = 6.0f;
const float unbake_rodata_800C6504_4 = 16.0f;
const float unbake_rodata_800C6508_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C61F8_1C[] = {0x002AA88CU, 0x002AA89CU, 0x002AA8ACU, 0x002AA8BCU, 0x002AA8CCU, 0x002AA8CCU, 0x002AA8ACU};
const float unbake_rodata_800C6214_4 = 24.0f;
const float unbake_rodata_800C6218_4 = 12.0f;
const float unbake_rodata_800C621C_4 = 8.0f;
const float unbake_rodata_800C6220_4 = 6.0f;
const float unbake_rodata_800C6224_4 = 16.0f;
const float unbake_rodata_800C6228_4 = 1.0f;
#endif
