#include "basetypes.h"

/* After func_8029A73C, opens screen D_800E4400 through func_804217EC while its word at 0x34 is
   zero; otherwise handles the menu message func_8029AA08 reports: 0x3AC closes the screen's first
   word through func_8041A4B0 with 2 and calls func_80421158, and 0x3B6 calls func_8042144C.
   Returns zero. */
struct Screen {
    s32 handle;
    char pad4[0x34 - 4];
    s32 open;
};

extern struct Screen *D_800E4400;
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_804217EC(void);
extern void func_8041A4B0(s32, s32);
extern void func_80421158(void);
extern void func_8042144C(void);

s32 func_80421998(void) {
    func_8029A73C();
    if (D_800E4400->open == 0) {
        func_804217EC();
    } else {
        switch (func_8029AA08()) {
        case 0x3AC:
            func_8041A4B0(D_800E4400->handle, 2);
            func_80421158();
            break;
        case 0x3B6:
            func_8042144C();
            break;
        }
    }
    return 0;
}
