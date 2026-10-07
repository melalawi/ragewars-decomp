#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80420E90.h"
#include "span_16E000/code_80434F4C.h"
#include "types.h"
/* Handles the menu message func_80299A08_de reports after func_8029973C_de, for messages 0x3A2 to 0x3A7
   through jtbl_800E1610: five pick option 0, 1, 3, 4 or 2, pass it to func_80434FB4_de and set the
   result word at offset 0x10 of the screen D_800E4450 to 0x13; the sixth sets it to -1. Both then
   close the screen's first word through func_8041A430_de with 2. Returns zero. */
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
#if defined(VERSION_DE)
    message = func_80299A08_de() - 0x39C;
#elif defined(VERSION_EU) || defined(VERSION_US) || defined(VERSION_US_REV1)
    message = func_80299A08_de() - 0x3A2;
#elif defined(VERSION_EU_X)
    message = func_80299A08_de() - 0x3A6;
#endif
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
