/* Finds a menu item identifier in three selection tables, falling back to the first item of the second table. */
extern int D_800E5B4C[],D_800E5B44[],D_800E5BCC[],D_800E5BC4[],D_800E5B1C[],D_800E5B14[];
int func_8042881C(int id) {
 int i;
 for(i=0;i<8;i++) if(D_800E5B4C[i*4]==id) return D_800E5B44[i*4];
 for(i=0;i<4;i++) if(D_800E5BCC[i*4]==id) return D_800E5BC4[i*4];
 for(i=0;i<3;i++) if(D_800E5B1C[i*4]==id) return D_800E5B14[i*4];
 return D_800E5BC4[0];
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
