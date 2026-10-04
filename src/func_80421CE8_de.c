#include "common/types.h"
#include "span_16E000/code_80421A88.h"
#include "span_16E000/code_80435010.h"
#include "types.h"

/* Handles the menu message func_80299A08_de reports after func_8029973C_de, for messages 0x3A2 to 0x3A7
   through jtbl_800E1610: five pick option 0, 1, 3, 4 or 2, pass it to func_80434FB4_de and set the
   result word at offset 0x10 of the screen D_800E4450 to 0x13; the sixth sets it to -1. Both then
   close the screen's first word through func_8041A430_de with 2. Returns zero. */

#if defined(VERSION_DE)
#define MESSAGE_BASE 0x39C
#elif defined(VERSION_EU_X)
#define MESSAGE_BASE 0x3A6
#else
#define MESSAGE_BASE 0x3A2
#endif



extern struct func_8029A838_S1 *D_800E0400;
extern void *jtbl_800DD5E0[];
extern void func_8029973C_de(void);
extern s32 func_80299A08_de(void);

extern void func_8041A430_de(s32, s32);

s32 func_80421CE8_de(void) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&option_0, &&option_1, &&option_3, &&option_4, &&option_2, &&cancel, &&done
    };
    s32 option;
    u32 message;

    func_8029973C_de();
    message = func_80299A08_de() - MESSAGE_BASE;
    if (message >= 6) {
        return 0;
    }
    goto *jtbl_800DD5E0[message];
option_0:
    option = 0;
    goto choose;
option_1:
    option = 1;
    goto choose;
option_3:
    option = 3;
    goto choose;
option_4:
    option = 4;
    goto choose;
option_2:
    option = 2;
choose:
    func_80434FB4_de(option);
    D_800E0400->unk10 = 0x13;
    goto close;
cancel:
    D_800E0400->unk10 = -1;
close:
    func_8041A430_de(D_800E0400->unk0, 2);
done:
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC290_18[] = {0x00421D6CU, 0x00421D64U, 0x00421D54U, 0x00421D5CU, 0x00421D90U, 0x00421D74U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1610_20[] = {0x00421D6CU, 0x00421D64U, 0x00421D54U, 0x00421D5CU, 0x00421D90U, 0x00421D74U, 0x00442454U, 0x00442454U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EDC60_18[] = {0x0042223CU, 0x00422234U, 0x00422224U, 0x0042222CU, 0x00422260U, 0x00422244U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8E20_20[] = {0x00422260U, 0x00422224U, 0x00422234U, 0x0042223CU, 0x00422244U, 0x0042222CU, 0x0044333CU, 0x0044333CU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD5E0_18[] = {0x00421D3CU, 0x00421D34U, 0x00421D24U, 0x00421D2CU, 0x00421D60U, 0x00421D44U};
#endif
