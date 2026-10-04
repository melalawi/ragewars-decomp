#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80245B0C_de(void);
extern s32 D_00206724;
extern s32 D_0020694C;
extern s32 D_800C85F0_de;

extern func_80206604_G1 D_801462E5;






void func_80206604_de(void *arg0, void *arg1) {
    s32 flags;
    s32 flags2;

    ((func_80206604_S1 *)(arg1))->unk2C = &D_800C85F0_de;
    ((func_80206604_S1 *)(arg1))->unk108 = &D_00206724;
    flags = ((func_802044C8_S1 *)(arg0))->unk100;
    flags |= 0x01000000;
    flags |= 0x02000000;
    flags2 = flags | 0x20000;
    ((func_802044C8_S1 *)(arg0))->unk100 = flags2;
    if (D_801462E5.unk0 == 0) {
        ((func_802044C8_S1 *)(arg0))->unk100 = flags2 | 0x10000000;
    }
    if ((((func_802044C8_S1 *)(arg0))->unkE4 == 0x453) && (func_80245B0C_de() == 0x6F)) {
        ((func_80206604_S1 *)(arg1))->unk10C = &D_0020694C;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C27E4_4 = 0.5f;
const float unbake_rodata_800C27E8_4 = 3.14159274f;
const float unbake_rodata_800C27EC_4 = 0.5f;
const float unbake_rodata_800C27F0_4 = 1.57079637f;
const float unbake_rodata_800C27F4_4 = 0.5f;
const float unbake_rodata_800C27F8_4 = 3.14159274f;
const float unbake_rodata_800C27FC_4 = 0.75f;
const float unbake_rodata_800C2800_4 = 0.75f;
const float unbake_rodata_800C2804_4 = 0.75f;
const float unbake_rodata_800C2808_4 = 1.57079637f;
const float unbake_rodata_800C280C_4 = 7.5f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C76EC_3[] = {0x25, 0x73, 0x00};
const float unbake_rodata_800C76F0_4 = 1.5f;
const float unbake_rodata_800C76F4_4 = 1.0f;
const float unbake_rodata_800C76F8_4 = 3.0f;
const float unbake_rodata_800C76FC_4 = 4.0f;
const float unbake_rodata_800C7700_4 = 255.0f;
const float unbake_rodata_800C7704_4 = 50.0f;
const float unbake_rodata_800C7708_4 = 255.0f;
const float unbake_rodata_800C770C_4 = 12.0f;
const float unbake_rodata_800C7710_4 = 0.512000024f;
const float unbake_rodata_800C7714_4 = 0.791999996f;
const float unbake_rodata_800C7718_4 = 0.136000007f;
const float unbake_rodata_800C771C_4 = 128.0f;
const float unbake_rodata_800C7720_4 = 198.0f;
const float unbake_rodata_800C7724_4 = 34.0f;
const float unbake_rodata_800C7728_4 = 253.0f;
const float unbake_rodata_800C772C_4 = 1.01199996f;
const float unbake_rodata_800C7730_4 = 0.419999987f;
const float unbake_rodata_800C7734_4 = 0.716000021f;
const float unbake_rodata_800C7738_4 = 105.0f;
const float unbake_rodata_800C773C_4 = 179.0f;
const float unbake_rodata_800C7740_4 = 0.5f;
const float unbake_rodata_800C7744_4 = 1.5f;
const float unbake_rodata_800C7748_4 = 12.0f;
const float unbake_rodata_800C774C_4 = 0.5f;
const float unbake_rodata_800C7750_4 = 2.14748365e+09f;
const float unbake_rodata_800C7754_4 = 1.5f;
const float unbake_rodata_800C7758_4 = 1.0f;
const float unbake_rodata_800C775C_4 = 0.75f;
const float unbake_rodata_800C7760_4 = 18.0f;
const float unbake_rodata_800C7764_4 = 28.0f;
const float unbake_rodata_800C7768_4 = 30.0f;
const float unbake_rodata_800C776C_4 = 24.0f;
const float unbake_rodata_800C7770_4 = 22.0f;
const float unbake_rodata_800C7774_4 = 20.0f;
const float unbake_rodata_800C7778_4 = 16.0f;
const float unbake_rodata_800C777C_4 = 1.5f;
const float unbake_rodata_800C7780_4 = 40.0f;
const float unbake_rodata_800C7784_4 = 11.0f;
const float unbake_rodata_800C7788_4 = 255.0f;
const float unbake_rodata_800C778C_4 = 200.0f;
const float unbake_rodata_800C7790_4 = 12.0f;
const float unbake_rodata_800C7794_4 = 48.0f;
const float unbake_rodata_800C7798_4 = 22.0f;
const float unbake_rodata_800C779C_4 = 11.0f;
const float unbake_rodata_800C77A0_4 = 1.5f;
const float unbake_rodata_800C77A4_4 = 8.0f;
const float unbake_rodata_800C77A8_4 = 16.0f;
const float unbake_rodata_800C77AC_4 = 1.5f;
const float unbake_rodata_800C77B0_4 = 8.0f;
const float unbake_rodata_800C77B4_4 = 16.0f;
const float unbake_rodata_800C77B8_4 = 1.5f;
const float unbake_rodata_800C77BC_4 = 11.0f;
const float unbake_rodata_800C77C0_4 = 1.5f;
const float unbake_rodata_800C77C4_4 = 8.0f;
const float unbake_rodata_800C77C8_4 = 16.0f;
const float unbake_rodata_800C77CC_4 = 1.5f;
const float unbake_rodata_800C77D0_4 = 8.0f;
const float unbake_rodata_800C77D4_4 = 16.0f;
const float unbake_rodata_800C77D8_4 = 1.5f;
const float unbake_rodata_800C77DC_4 = 1.0f;
const float unbake_rodata_800C77E0_4 = 0.5f;
const float unbake_rodata_800C77E4_4 = 16.0f;
const float unbake_rodata_800C77E8_4 = 0.75f;
const float unbake_rodata_800C77EC_4 = 1.0f;
const float unbake_rodata_800C77F0_4 = 12.0f;
const float unbake_rodata_800C77F4_4 = 4.0f;
const float unbake_rodata_800C77F8_4 = 200.0f;
const float unbake_rodata_800C77FC_4 = 12.0f;
const float unbake_rodata_800C7800_4 = 48.0f;
const float unbake_rodata_800C7804_4 = 20.0f;
const float unbake_rodata_800C7808_4 = 8.0f;
const float unbake_rodata_800C780C_4 = 16.0f;
const float unbake_rodata_800C7810_4 = 8.0f;
const float unbake_rodata_800C7814_4 = 16.0f;
const float unbake_rodata_800C7818_4 = 200.0f;
const float unbake_rodata_800C781C_4 = 12.0f;
const float unbake_rodata_800C7820_4 = 48.0f;
const float unbake_rodata_800C7824_4 = 20.0f;
const float unbake_rodata_800C7828_4 = 8.0f;
const float unbake_rodata_800C782C_4 = 16.0f;
const float unbake_rodata_800C7830_4 = 1.5f;
const float unbake_rodata_800C7834_4 = 8.0f;
const float unbake_rodata_800C7838_4 = 16.0f;
const float unbake_rodata_800C783C_4 = 1.5f;
const float unbake_rodata_800C7840_4 = 5.0f;
const float unbake_rodata_800C7844_4 = 255.0f;
const float unbake_rodata_800C7848_4 = 0.5f;
const float unbake_rodata_800C784C_4 = 31.0f;
const float unbake_rodata_800C7850_4 = 32.0f;
const float unbake_rodata_800C7854_4 = 1.70000005f;
const float unbake_rodata_800C7858_4 = 255.0f;
const float unbake_rodata_800C785C_4 = 5.0f;
const float unbake_rodata_800C7860_4 = 255.0f;
const float unbake_rodata_800C7864_4 = 255.0f;
const float unbake_rodata_800C7868_4 = 70.0f;
const float unbake_rodata_800C786C_4 = 140.0f;
const float unbake_rodata_800C7870_4 = 1.0f;
const float unbake_rodata_800C7874_4 = 0.25f;
const float unbake_rodata_800C7878_4 = 10.0f;
const float unbake_rodata_800C787C_4 = 140.0f;
const float unbake_rodata_800C7880_4 = 0.25f;
const float unbake_rodata_800C7884_4 = 10.0f;
const float unbake_rodata_800C7888_4 = 140.0f;
const float unbake_rodata_800C788C_4 = 0.5f;
const float unbake_rodata_800C7890_4 = 64.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C2698_194[] = {0x0021E640U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E630U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E640U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E630U, 0x0021E630U, 0x0021E640U, 0x0021E640U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E640U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E650U, 0x0021E640U};
const float unbake_rodata_800C282C_4 = 8.0f;
const float unbake_rodata_800C2830_4 = 32.0f;
const float unbake_rodata_800C2834_4 = 16.0f;
const float unbake_rodata_800C2838_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C26C0_4 = 1.0f;
const float unbake_rodata_800C26C4_4 = 8.0f;
const float unbake_rodata_800C26C8_4 = 32.0f;
const float unbake_rodata_800C26CC_4 = 16.0f;
const float unbake_rodata_800C26D0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C27A4_4 = 40.9599991f;
const float unbake_rodata_800C27A8_4 = 3.0f;
const float unbake_rodata_800C27AC_4 = 0.069813177f;
const float unbake_rodata_800C27B0_4 = 0.069813177f;
const float unbake_rodata_800C27B4_4 = 4.09600019f;
const float unbake_rodata_800C27B8_4 = 4.09600019f;
const float unbake_rodata_800C27BC_4 = 81.9199982f;
const float unbake_rodata_800C27C0_4 = 3.0f;
#endif
