#include "basetypes.h"
#include "shared/number_pad_screen.h"

/* Updates the limit markers of the screen D_800E4400: totals func_804261E4 over the four 400-byte
   records of D_80102B00 whose owner byte 0xD is not negative (or takes 40 when the word at 0x38 is
   1), enables items 0x3B4, 0x3B1, 0x3AD and 0x3AF of the window at 0x8 through func_8040E9D0, then
   disables 0x3B1 from a total of 10, 0x3B4 from 6, 0x3AD from 12 and 0x3AF from 14. Written from
   the assembly. */

extern NumberPadScreen *D_800E4400;
extern s8 D_80102B0D[];
extern s32 func_804261E4(s32);
extern void *func_8040ECB0(void *, s32);
extern void func_8040E9D0(void *, s32);

#if defined(VERSION_DE)
enum { MENU_804212A4_941 = 935, MENU_804212A4_943 = 937, MENU_804212A4_945 = 939, MENU_804212A4_948 = 942 };
#elif defined(VERSION_EU_X)
enum { MENU_804212A4_941 = 950, MENU_804212A4_943 = 952, MENU_804212A4_945 = 947, MENU_804212A4_948 = 944 };
#else
enum { MENU_804212A4_941 = 941, MENU_804212A4_943 = 943, MENU_804212A4_945 = 945, MENU_804212A4_948 = 948 };
#endif

void func_804212A4(void) {
    s32 total;
    s32 i;

    total = 0;
    for (i = 0; i < 4; i++) {
        if (D_80102B0D[i * 400] >= 0) {
            total += func_804261E4(i);
        }
    }
    if (D_800E4400->full == 1) {
        total = 40;
    }
    func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_948), 1);
    func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_945), 1);
    func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_941), 1);
    func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_943), 1);
    if (total >= 10) {
        func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_945), 0);
    }
    if (total >= 6) {
        func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_948), 0);
    }
    if (total >= 12) {
        func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_941), 0);
    }
    if (total >= 14) {
        func_8040E9D0(func_8040ECB0(D_800E4400->window, MENU_804212A4_943), 0);
    }
}
