#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "types.h"



extern s32 D_800C9FE4;
extern s32 D_800CD6E0_de;
extern void *D_800FE9F0;
extern u8 D_800FEAD8[];
extern s32 D_8011BDC8;
extern s32 D_801371D0;

extern char D_0022ECCC;

extern void *func_8028B2F8_de(void *, u16 *);
extern s32 func_80245618_de(s32 arg0, void *arg1, VoidCallback arg2);
extern void *func_8028CFA0_de(void *arg0, s32 arg1, s32 arg2);






void func_80225B98_de(void *arg0, void *arg1, s32 arg2)
{
    s32 enabled;
    u32 resource_flags;
    void *resource;
    s32 i;

    enabled = 1;
    resource_flags = 0;

    if (((ObjectLinks854 *)(arg0))->unk_14 != 0) {
        resource = func_8028B2F8_de(&D_8011BDC8, ((ObjectLinks854 *)(arg0))->unk_14);
        if (resource != 0) {
            resource_flags = ((ObjectState108 *)(resource))->unk_44;
        }
    }

    if (D_801371D0 != 0) {
        enabled = 0;
    }
    if (((ObjectLinks854 *)(arg0))->unk_664 & 0x8000) {
        enabled = 0;
    }
    if (D_801371D0 != 0) {
        enabled = 0;
    }
    if (D_80140F88 >= 2) {
        enabled = 0;
    }
    if (arg2 == 12) {
        enabled = 0;
    }
    if (((ObjectLinks854 *)(arg0))->unk_664 & 0x8000) {
        enabled = 0;
    }
    if (resource_flags & 0x1000000) {
        enabled = 0;
    }
    if ((resource_flags & 0x80000) &&
        (arg2 != 20) && (arg2 != 40) && (arg2 != 30)) {
        enabled = 0;
    }

    ((ObjectLinks854 *)(arg0))->unk_850 = enabled;
    if (enabled != 0) {
        if (arg2 == 50) {
            void *data;

            data = ((ObjectLinks854 *)(arg0))->unk_5DC;
            D_800C9FE4 = 1;
            if (data != 0) {
                for (i = 0; i < 4; i++) {
                    D_800FEAD8[i] = ((struct ObjectState521 *) (((u8 *) ((ObjectLinks854 *) arg0)->unk_5DC) + i))->unk_520;
                }
            }
        }
        D_800CD6E0_de = 0;
        D_800FE9F0 = arg0;
        func_80245618_de(arg2, 0, (VoidCallback)&D_0022ECCC);
    }

    resource = func_8028CFA0_de(&D_8011BDC8, -1, 0xC45);
    if (resource != 0) {
        ((ObjectLinks854 *)(arg0))->unk_50 = ((ObjectState108 *)(resource))->unk_FC;
        ((ObjectLinks854 *)(arg0))->unk_54 = ((ObjectState108 *)(resource))->unk_100;
        ((ObjectLinks854 *)(arg0))->unk_58 = ((ObjectState108 *)(resource))->unk_104;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C5150_9[] = {0x56, 0x69, 0x73, 0x20, 0x49, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800CA310_9[] = {0x56, 0x69, 0x73, 0x20, 0x49, 0x6E, 0x66, 0x6F, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5028_4 = 128.0f;
const float unbake_rodata_800C502C_4 = 255.0f;
const float unbake_rodata_800C5030_4 = 128.0f;
const float unbake_rodata_800C5034_4 = 255.0f;
const float unbake_rodata_800C5038_4 = 1.0f;
const float unbake_rodata_800C503C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5040_4 = 255.0f;
const float unbake_rodata_800C5044_4 = 2.14748365e+09f;
const float unbake_rodata_800C5048_4 = 255.0f;
const float unbake_rodata_800C504C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5050_4 = 255.0f;
const float unbake_rodata_800C5054_4 = 2.14748365e+09f;
const float unbake_rodata_800C5058_4 = 255.0f;
const float unbake_rodata_800C505C_4 = 2.14748365e+09f;
const float unbake_rodata_800C5060_4 = 255.0f;
const float unbake_rodata_800C5064_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C5068_18[] = {0x0027F4E0U, 0x0027F50CU, 0x0027F524U, 0x0027F55CU, 0x0027F5B8U, 0x0027F5F8U};
const float unbake_rodata_800C5080_4 = 255.0f;
const float unbake_rodata_800C5084_4 = 1.0f;
const float unbake_rodata_800C5088_4 = 1.0f;
const float unbake_rodata_800C508C_4 = (-9.99999975e-05f);
const float unbake_rodata_800C5090_4 = 9.99999975e-05f;
const float unbake_rodata_800C5094_4 = 10.0f;
const float unbake_rodata_800C5098_4 = 1.0f;
const float unbake_rodata_800C509C_4 = 5.0f;
const float unbake_rodata_800C50A0_4 = 1.0f;
const float unbake_rodata_800C50A4_4 = 0.5f;
const float unbake_rodata_800C50A8_4 = 2.14748365e+09f;
const float unbake_rodata_800C50AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C50B0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4EE8_4 = 0.25f;
const float unbake_rodata_800C4EEC_4 = 1.41421354f;
const float unbake_rodata_800C4EF0_4 = 0.5f;
const float unbake_rodata_800C4EF4_4 = 32.0f;
const float unbake_rodata_800C4EF8_4 = 6.0f;
const float unbake_rodata_800C4EFC_4 = 32.0f;
const float unbake_rodata_800C4F00_4 = 0.0174532942f;
const float unbake_rodata_800C4F04_4 = 0.0666666701f;
const float unbake_rodata_800C4F08_4 = 10.2399998f;
const float unbake_rodata_800C4F0C_4 = 4096.0f;
const float unbake_rodata_800C4F10_4 = 400.0f;
const float unbake_rodata_800C4F14_4 = 4096.0f;
const float unbake_rodata_800C4F18_4 = 400.0f;
const float unbake_rodata_800C4F1C_4 = 10.2399998f;
const float unbake_rodata_800C4F20_4 = 0.5f;
const float unbake_rodata_800C4F24_4 = 0.00100000005f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C51E8_B[] = {0x67, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x65, 0x74, 0x00};
#endif
