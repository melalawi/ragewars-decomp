#include "span_16E000/code_804288E0.h"
#include "types.h"

/* Calls func_8029973C_de and func_804273D4_de, passes the two words after the identifier in the
   28-byte entry D_800E4690's selection at 0xA44 picks from D_800E4694 to func_8042E9A0_de, then
   calls func_8042E988_de with 0x19. Returns zero. */




extern struct State_func_80428E10_de *D_800E0640_de;
extern struct Entry_func_80428E10_de D_800E0644[];
extern void func_8029973C_de();
extern void func_804273D4_de();
extern void func_8042E9A0_de(s32, s32);
extern void func_8042E988_de(s32);

s32 func_80428E10_de(void) {
    s32 selection;

    func_8029973C_de();
    func_804273D4_de();
    selection = D_800E0640_de->selection;
    func_8042E9A0_de(D_800E0644[selection].first, D_800E0644[selection].second);
    func_8042E988_de(0x19);
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DF2F8_4[] = {0x00, 0x00, 0x00, 0x02};
const unsigned char unbake_rodata_800DF2FC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E4698_4[] = {0x00, 0x00, 0x00, 0x02};
const unsigned char unbake_rodata_800E469C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F0CB8_4[] = {0x00, 0x00, 0x00, 0x02};
const unsigned char unbake_rodata_800F0CBC_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EBE98_4[] = {0x00, 0x00, 0x00, 0x02};
const unsigned char unbake_rodata_800EBE9C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E0648_4[] = {0x00, 0x00, 0x00, 0x02};
const unsigned char unbake_rodata_800E064C_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
