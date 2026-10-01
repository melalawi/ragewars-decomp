#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C, for its MESSAGE_COUNT messages from
   FIRST_MESSAGE (0x377 to 0x380 on us) through jtbl_800E1668: one reopens screen D_800E4518 (marking it shown with timer -1 and
   refreshing its two windows at 0x44 and 0x4C) and calls func_80245B18; one tries func_8042AEB8
   and on failure sets the screen's modes 5 and 4 with timer 20, else reopens it with timer 0; the
   others pass codes 0x17, 13, 12 and 14 to func_8042EB68. Any handled message then runs
   func_80423370. Returns zero. */
/* The first message this handles and how many it takes: eu-x numbers the messages 4 higher, de 4
   lower and takes only 8, as each cartridge's own bytes show; us, us-rev1 and eu share 0x377 and 10. */
#if defined(VERSION_EU_X)
#define FIRST_MESSAGE 0x37B
#define MESSAGE_COUNT 10
#elif defined(VERSION_DE)
#define FIRST_MESSAGE 0x373
#define MESSAGE_COUNT 8
#else
#define FIRST_MESSAGE 0x377
#define MESSAGE_COUNT 10
#endif

struct Screen {
    char pad0[0x1C];
    s32 shown;
    char pad20[0x30 - 0x20];
    s32 mode;
    s32 next_mode;
    char pad38[0x44 - 0x38];
    void *window;
    char pad48[0x4C - 0x48];
    void *second_window;
    char pad50[0x60 - 0x50];
    s32 timer;
};

extern struct Screen *D_800E4518;
extern void *jtbl_800E1668[];
extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_802A338C(void);
extern void func_8043C458(struct Screen *);
extern void func_8040E958(void *, s32);
extern void func_80245B18(void);
extern void func_8042EB68(s32);
extern s32 func_8042AEB8(void);
extern void func_80423370(void);

s32 func_80423A00(void) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&reopen, &&code_17, &&retry, &&code_13, &&code_12, &&code_14, &&other, &&done
    };
    s32 handled;
    u32 message;

    func_8029A73C();
    handled = 1;
    message = func_8029AA08() - FIRST_MESSAGE;
    if (message >= MESSAGE_COUNT) {
        goto other;
    }
    goto *jtbl_800E1668[message];
reopen:
    func_802A338C();
    func_8043C458(D_800E4518);
    D_800E4518->shown = 1;
    D_800E4518->timer = -1;
    func_8040E958(D_800E4518->window, 1);
    func_8040E958(D_800E4518->second_window, 1);
    func_80245B18();
    goto done;
code_17:
    func_8042EB68(0x17);
    goto done;
retry:
    func_802A338C();
    if (func_8042AEB8() == 0) {
        D_800E4518->mode = 5;
        D_800E4518->next_mode = 4;
        D_800E4518->timer = 20;
    } else {
        func_8043C458(D_800E4518);
        D_800E4518->shown = 1;
        D_800E4518->timer = 0;
    }
    goto done;
code_13:
    func_8042EB68(13);
    goto done;
code_12:
    func_8042EB68(12);
    goto done;
code_14:
    func_8042EB68(14);
    goto done;
other:
    handled = 0;
done:
    if (handled == 1) {
        func_80423370();
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC2E8_28[] = {0x00423B0CU, 0x00423B3CU, 0x00423B3CU, 0x00423B3CU, 0x00423B3CU, 0x00423B1CU, 0x00423A3CU, 0x00423AACU, 0x00423B2CU, 0x00423A9CU};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1668_28[] = {0x00423B0CU, 0x00423B3CU, 0x00423B3CU, 0x00423B3CU, 0x00423B3CU, 0x00423B1CU, 0x00423A3CU, 0x00423AACU, 0x00423B2CU, 0x00423A9CU};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EDCB8_28[] = {0x004240CCU, 0x004240FCU, 0x004240FCU, 0x004240FCU, 0x004240FCU, 0x004240DCU, 0x00423FFCU, 0x0042406CU, 0x004240ECU, 0x0042405CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8E78_28[] = {0x00424220U, 0x00424250U, 0x00424250U, 0x00424250U, 0x00424250U, 0x00424230U, 0x00424150U, 0x004241C0U, 0x00424240U, 0x004241B0U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD638_28[] = {0x00423864U, 0x004238D4U, 0x00423954U, 0x004238C4U, 0x00423964U, 0x00423964U, 0x00423934U, 0x00423944U, 0x00424034U, 0x0042405CU};
#endif
