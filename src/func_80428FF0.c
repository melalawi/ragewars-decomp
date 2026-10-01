#include "basetypes.h"

/* Calls func_8029A73C and func_804275B4, passes the two words after the identifier in the
   28-byte entry D_800E4690's selection at 0xA44 picks from D_800E4694 to func_8042EB80, then
   calls func_8042EB68 with 0x19. Returns zero. */
struct Entry {
    s32 id;
    s32 first;
    s32 second;
    char pad[28 - 12];
};

struct State {
    char pad[0xA44];
    s32 selection;
};

extern struct State *D_800E4690;
extern struct Entry D_800E4694[];
extern void func_8029A73C();
extern void func_804275B4();
extern void func_8042EB80(s32, s32);
extern void func_8042EB68(s32);

s32 func_80428FF0(void) {
    s32 selection;

    func_8029A73C();
    func_804275B4();
    selection = D_800E4690->selection;
    func_8042EB80(D_800E4694[selection].first, D_800E4694[selection].second);
    func_8042EB68(0x19);
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
