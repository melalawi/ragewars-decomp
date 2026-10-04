#include "common/types.h"
#include "span_1000/code_8022A8E0.h"


int func_80286728_de(void *a);

extern char D_8011BDC8[];




int func_8022AE28_de(void *arg0, void *arg1) {
    int flag;
    Triple *src;
    src = (Triple *)arg1;
    flag = func_80286728_de(D_8011BDC8);
    ((func_8022AE18_S1 *)(arg0))->unk8 = *src;
    ((func_8022AE18_S1 *)(arg0))->unk14 = flag;
    ((func_8022AE18_S1 *)(arg0))->unk2F0 = *src;
    ((func_8022AE18_S1 *)(arg0))->unk2FC = flag;
    return flag != 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5A24_4 = 1.0f;
const float unbake_rodata_800C5A28_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CAE00_8 = 6.2831859588623047;
const float unbake_rodata_800CAE08_4 = 6.28318596f;
const float unbake_rodata_800CAE0C_4 = 6.28318596f;
const float unbake_rodata_800CAE10_4 = 3.14159274f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C57C0_40[] = {0x00297114U, 0x0029714CU, 0x0029705CU, 0x0029705CU, 0x002970F4U, 0x002970F4U, 0x002970F4U, 0x002970F4U, 0x0029705CU, 0x0029705CU, 0x0029705CU, 0x0029705CU, 0x0029705CU, 0x0029705CU, 0x00297170U, 0x00297184U};
const unsigned int unbake_rodata_800C5800_40[] = {0x00297368U, 0x002973A0U, 0x002973F4U, 0x002973F4U, 0x00297348U, 0x00297348U, 0x00297348U, 0x00297348U, 0x002973F4U, 0x002973F4U, 0x002973F4U, 0x002973F4U, 0x002973F4U, 0x002973F4U, 0x002973C4U, 0x002973DCU};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C57C4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5A58_4 = 1.0f;
const float unbake_rodata_800C5A5C_4 = (-1.0f);
const float unbake_rodata_800C5A60_4 = 1.0f;
const float unbake_rodata_800C5A64_4 = (-1.0f);
const float unbake_rodata_800C5A68_4 = (-0.0116805276f);
const float unbake_rodata_800C5A6C_4 = 0.0308918804f;
const float unbake_rodata_800C5A70_4 = 0.0501743034f;
const float unbake_rodata_800C5A74_4 = 0.0889789909f;
const float unbake_rodata_800C5A78_4 = 0.214598805f;
const float unbake_rodata_800C5A7C_4 = 1.57079625f;
const float unbake_rodata_800C5A80_4 = 1.57079637f;
#endif
