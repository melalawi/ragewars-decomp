#include "span_1000/code_80214DD4.h"
#include "types.h"

extern s32 D_801371D0;










s32 func_802169AC_de(void *arg0, void *arg1, void *arg2) {
    void *temp_a2;

    if (((func_802169AC_S1 *)(arg1))->unk4 == 0) {
        return 6;
    }
    if (arg2 == 0) {
        if (((func_802169AC_S1 *)(arg1))->unk94 != 0) {
            return 4;
        }
        return 3;
    }
    if (arg2 == ((func_802169AC_S1 *)(arg1))->unk68) {
        return 2;
    }
    if (*((func_802169AC_S2 *)(arg2))->unk18 == 5) {
        return 5;
    }
    if (((func_802169AC_S2 *)(arg2))->unkE4 == 0x64F) {
        return 7;
    }
    if (D_801371D0 == 0) {
        if (((func_802169AC_S2 *)(arg2))->unk100 & 0x300000) {
            temp_a2 = ((func_802169AC_S2 *)(arg2))->unk1D8;
            if ((((func_802169AC_S3 *)(temp_a2))->unk794 == arg0) &&
                (((func_802169AC_S3 *)(temp_a2))->unk788 == 2)) {
                return 1;
            }
        }
        if (((func_802169AC_S4 *)(arg0))->unk2E0 & 2) {
            if (((func_802169AC_S4 *)(arg0))->unkE4 != 0xCA) {
                return 1;
            }
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4600_4 = 0.00100000005f;
const float unbake_rodata_800C4604_4 = (-1.0f);
const float unbake_rodata_800C4608_4 = 1.0f;
const float unbake_rodata_800C460C_4 = 0.00100000005f;
const float unbake_rodata_800C4610_4 = 1.0f;
const float unbake_rodata_800C4614_4 = 1.0f;
const float unbake_rodata_800C4618_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C97C0_4 = 0.00100000005f;
const float unbake_rodata_800C97C4_4 = (-1.0f);
const float unbake_rodata_800C97C8_4 = 1.0f;
const float unbake_rodata_800C97CC_4 = 0.00100000005f;
const float unbake_rodata_800C97D0_4 = 1.0f;
const float unbake_rodata_800C97D4_4 = 1.0f;
const float unbake_rodata_800C97D8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4540_4 = 0.99000001f;
const float unbake_rodata_800C4544_4 = 0.0078125f;
const float unbake_rodata_800C4548_4 = 1.0f;
const float unbake_rodata_800C454C_4 = 0.100000001f;
const float unbake_rodata_800C4550_4 = 0.75f;
const float unbake_rodata_800C4554_4 = 1.0f;
const float unbake_rodata_800C4558_4 = (-1.0f);
const float unbake_rodata_800C455C_4 = 0.0125000002f;
const float unbake_rodata_800C4560_4 = 1.0f;
const float unbake_rodata_800C4564_4 = (-1.0f);
const float unbake_rodata_800C4568_4 = 0.0125000002f;
const float unbake_rodata_800C456C_4 = 0.0125000002f;
const float unbake_rodata_800C4570_4 = 1.0f;
const float unbake_rodata_800C4574_4 = (-1.0f);
const float unbake_rodata_800C4578_4 = 0.0125000002f;
const float unbake_rodata_800C457C_4 = 1.0f;
const float unbake_rodata_800C4580_4 = (-1.0f);
const float unbake_rodata_800C4584_4 = 0.0125000002f;
const float unbake_rodata_800C4588_4 = 0.75f;
const float unbake_rodata_800C458C_4 = 1.0f;
const float unbake_rodata_800C4590_4 = 0.75f;
const float unbake_rodata_800C4594_4 = (-1.0f);
const float unbake_rodata_800C4598_4 = 0.100000001f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C44E8_4 = 1.0f;
const float unbake_rodata_800C44EC_4 = 1.0f;
const double unbake_rodata_800C44F0_8 = 4294967296.0;
const double unbake_rodata_800C44F8_8 = 4294967296.0;
const double unbake_rodata_800C4500_8 = 4294967296.0;
const double unbake_rodata_800C4508_8 = 4294967296.0;
const double unbake_rodata_800C4510_8 = 4294967296.0;
const float unbake_rodata_800C4518_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C45E8_1C[] = {0x0026A2C0U, 0x0026A2C0U, 0x0026A2C8U, 0x0026A2D8U, 0x0026A2D8U, 0x0026A2E0U, 0x0026A2D0U};
const float unbake_rodata_800C4604_4 = 2.14748365e+09f;
const float unbake_rodata_800C4608_4 = 2.14748365e+09f;
const float unbake_rodata_800C460C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4610_4 = 2.14748365e+09f;
const float unbake_rodata_800C4614_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C4618_1C[] = {0x0026A5C8U, 0x0026A5C8U, 0x0026A5D0U, 0x0026A5E0U, 0x0026A5E0U, 0x0026A5E8U, 0x0026A5D8U};
const float unbake_rodata_800C4634_4 = 2.14748365e+09f;
const float unbake_rodata_800C4638_4 = 2.14748365e+09f;
const float unbake_rodata_800C463C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4640_4 = 2.14748365e+09f;
const float unbake_rodata_800C4644_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C4648_1C[] = {0x0026A9B4U, 0x0026A9B4U, 0x0026A9BCU, 0x0026A9CCU, 0x0026A9CCU, 0x0026A9D4U, 0x0026A9C4U};
const float unbake_rodata_800C4664_4 = 2.14748365e+09f;
#endif
