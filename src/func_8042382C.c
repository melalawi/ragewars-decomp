#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C: 0x1C3, 0x1BD, 0x1C2 and
   0x1C4 send codes -1, 13, 12 and 14 to func_8042EB68; a handled message then runs func_80423304
   and func_8029A8A8. Returns zero. */
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

extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_8042EB68(s32);
extern void func_80423304(void);
extern void func_8029A8A8(void);

s32 func_8042382C(void) {
    s32 handled;

    func_8029A73C();
    handled = 1;
    switch (func_8029AA08()) {
    case MESSAGE_1C3:
        func_8042EB68(-1);
        break;
    case MESSAGE_1BD:
        func_8042EB68(13);
        break;
    case MESSAGE_1C2:
        func_8042EB68(12);
        break;
    case MESSAGE_1C4:
        func_8042EB68(14);
        break;
    default:
        handled = 0;
        break;
    }
    if (handled == 1) {
        func_80423304();
        func_8029A8A8();
    }
    return 0;
}
