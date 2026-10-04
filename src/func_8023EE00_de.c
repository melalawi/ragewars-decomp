#include "span_1000/code_8023ECAC.h"
#include "types.h"
/* Points the active table at D_801041F0 and runs the setup routine on the fixed record D_44B4A0. */

extern u8 D_801001F0[];
extern void *D_800FFFCC;
extern u8 D_0044A850[];

extern void func_8023EE60_de(void *);

void func_8023EE00_de(void) {
    D_800FFFCC = D_801001F0;
    func_8023EE60_de(D_0044A850);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC9B8_20[] = {0x00430990U, 0x00430990U, 0x004309C4U, 0x00430990U, 0x00430990U, 0x00430990U, 0x00430990U, 0x00430A18U};
const unsigned int unbake_rodata_800DC9D8_20[] = {0x00430ABCU, 0x00430ABCU, 0x00430B30U, 0x00430ABCU, 0x00430ABCU, 0x00430ABCU, 0x00430ABCU, 0x00430AF0U};
const unsigned int unbake_rodata_800DC9F8_20[] = {0x00431240U, 0x00431240U, 0x00431274U, 0x00431240U, 0x00431240U, 0x00431240U, 0x0043230CU, 0x004312C8U};
const unsigned int unbake_rodata_800DCA18_20[] = {0x00431348U, 0x004313E0U, 0x00431378U, 0x00431410U, 0x004313E0U, 0x00431410U, 0x004313E0U, 0x004313ACU};
const unsigned int unbake_rodata_800DCA38_20[] = {0x00431D84U, 0x00431D64U, 0x00431D94U, 0x00431D6CU, 0x00431D94U, 0x00431D74U, 0x00431D94U, 0x00431D7CU};
const unsigned int unbake_rodata_800DCA58_20[] = {0x00431D84U, 0x00431E88U, 0x00431EA4U, 0x00431E90U, 0x00431EA4U, 0x00431E98U, 0x00431EA4U, 0x00431EA0U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1B70_14[] = {0x0042E49CU, 0x0042E4E0U, 0x0042E53CU, 0x0042E594U, 0x0042E50CU};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E3B64_10[] = {0x80, 0x0D, 0x1C, 0xD0, 0x80, 0x0D, 0x7E, 0xB4, 0x80, 0x0D, 0xC0, 0x58, 0x80, 0x0D, 0xFE, 0x14};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DE618_C[] = {0x80, 0x0D, 0x19, 0x90, 0x80, 0x0D, 0x6D, 0x78, 0x80, 0x0D, 0xB0, 0xB8};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DD0B0_3[] = {0x72, 0x62, 0x00};
#endif
