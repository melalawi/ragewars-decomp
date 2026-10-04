#include "span_1000/code_8027ED40.h"




extern D801041F8_Layout D_801001F8;




void func_80283BCC_de(void *arg0) {
    ((func_80283BA0_S1 *)(arg0))->unk5C |= 0x20000;
    ((func_80283BA0_S1 *)(arg0))->unk8 = D_801001F8.first;
    ((func_80283BA0_S1 *)(arg0))->unk1C = D_801001F8.second;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE1F8_4[] = {0xAF, 0xC3, 0x00, 0x48};
const unsigned char unbake_rodata_800FE1FC_4[] = {0x08, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800FE200_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_801001F8_4[] = {0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_801001FC_4[] = {0x00, 0x22, 0xBF, 0xC0};
const unsigned char unbake_rodata_80100200_4[] = {0xDE, 0x03, 0x1D, 0x33};
#endif
