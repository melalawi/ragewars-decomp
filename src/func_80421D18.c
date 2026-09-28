#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C, for messages 0x3A2 to 0x3A7
   through jtbl_800E1610: five pick option 0, 1, 3, 4 or 2, pass it to func_80435190 and set the
   result word at offset 0x10 of the screen D_800E4450 to 0x13; the sixth sets it to -1. Both then
   close the screen's first word through func_8041A4B0 with 2. Returns zero. */

#if defined(VERSION_DE)
#define MESSAGE_BASE 0x39C
#elif defined(VERSION_EU_MUL)
#define MESSAGE_BASE 0x3A6
#else
#define MESSAGE_BASE 0x3A2
#endif

struct Screen {
    s32 handle;
    char pad4[0x10 - 4];
    s32 result;
};

extern struct Screen *D_800E4450;
extern void *jtbl_800E1610[];
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_80435190(s32);
extern void func_8041A4B0(s32, s32);

s32 func_80421D18(void) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&option_0, &&option_1, &&option_3, &&option_4, &&option_2, &&cancel, &&done
    };
    s32 option;
    u32 message;

    func_8029A73C();
    message = func_8029AA08() - MESSAGE_BASE;
    if (message >= 6) {
        return 0;
    }
    goto *jtbl_800E1610[message];
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
    func_80435190(option);
    D_800E4450->result = 0x13;
    goto close;
cancel:
    D_800E4450->result = -1;
close:
    func_8041A4B0(D_800E4450->handle, 2);
done:
    return 0;
}
