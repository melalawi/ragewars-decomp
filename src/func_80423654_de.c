#include "span_16E000/code_804233DC.h"
#include "types.h"

/* Handles the menu message func_80299A08_de reports after func_8029973C_de: 0x1C3, 0x1BD, 0x1C2 and
   0x1C4 send codes -1, 13, 12 and 14 to func_8042E988_de; a handled message then runs func_8042302C_de
   and func_802998A8_de. Returns zero. */
#if defined(VERSION_DE)
#define MESSAGE_1BD 0x1B9
#define MESSAGE_1C2 0x1BE
#define MESSAGE_1C3 0x1BF
#define MESSAGE_1C4 0x1C0
#elif defined(VERSION_EU_X)
#define MESSAGE_1BD 0x1C1
#define MESSAGE_1C2 0x1C6
#define MESSAGE_1C3 0x1C7
#define MESSAGE_1C4 0x1C8
#else
#define MESSAGE_1BD 0x1BD
#define MESSAGE_1C2 0x1C2
#define MESSAGE_1C3 0x1C3
#define MESSAGE_1C4 0x1C4
#endif

extern void func_8029973C_de(void);
extern s32 func_80299A08_de(void);
extern void func_8042E988_de(s32);
extern void func_8042302C_de(void);
extern void func_802998A8_de(void);

s32 func_80423654_de(void) {
    s32 handled;

    func_8029973C_de();
    handled = 1;
    switch (func_80299A08_de()) {
    case MESSAGE_1C3:
        func_8042E988_de(-1);
        break;
    case MESSAGE_1BD:
        func_8042E988_de(13);
        break;
    case MESSAGE_1C2:
        func_8042E988_de(12);
        break;
    case MESSAGE_1C4:
        func_8042E988_de(14);
        break;
    default:
        handled = 0;
        break;
    }
    if (handled == 1) {
        func_8042302C_de();
        func_802998A8_de();
    }
    return 0;
}
