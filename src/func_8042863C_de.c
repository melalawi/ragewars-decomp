#include "span_16E000/code_80425BC0.h"
/* Finds a menu item identifier in three selection tables, falling back to the first item of the second table. */
extern int D_800E1AFC_de[],D_800E1AF4_de[],D_800E1B7C[],D_800E1B74[],D_800E1ACC_de[],D_800E1AC4_de[];
int func_8042863C_de(int id) {
 int i;
 for(i=0;i<8;i++) if(D_800E1AFC_de[i*4]==id) return D_800E1AF4_de[i*4];
 for(i=0;i<4;i++) if(D_800E1B7C[i*4]==id) return D_800E1B74[i*4];
 for(i=0;i<3;i++) if(D_800E1ACC_de[i*4]==id) return D_800E1AC4_de[i*4];
 return D_800E1B74[0];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800E0824_8[] = {0x00, 0x00, 0x00, 0xA9, 0x00, 0x00, 0x13, 0xA7};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5BC4_8[] = {0x00, 0x00, 0x00, 0xA9, 0x00, 0x00, 0x13, 0xA7};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F21E4_8[] = {0x00, 0x00, 0x00, 0xA9, 0x00, 0x00, 0x13, 0xA7};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ED3C4_8[] = {0x00, 0x00, 0x00, 0xA9, 0x00, 0x00, 0x13, 0xA7};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E1B74_8[] = {0x00, 0x00, 0x00, 0xA9, 0x00, 0x00, 0x13, 0xA7};
#endif
