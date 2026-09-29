#include "basetypes.h"

#define WORD_AT(base, offset) (*(s32 *)((char *)(base) + (offset)))
void *func_80252FFC();
extern s32 func_802A2990();
extern s32 func_8040E9D0();
extern s32 func_8040ECB0();
extern s32 func_8041AC40();
extern s32 func_8041ADB4();
extern s32 func_8041B190();
extern s32 func_8041EB34();
extern s32 func_80429740();
extern s32 func_80429834();
extern s32 func_8043C3F0();
extern s32 D_80154028;
extern s32 D_800D74C0;
extern s32 D_800D74C4;
extern s32 D_800D74C8;
extern s32 D_800D74CC;
extern s32 D_800D74D0;
extern s32 D_800D74D4;
extern s32 D_800D74D8;
extern void *D_800E4EF0;

/* Opens screen D_800E4EF0: shows the course options that match the current mode, creates its four toggles and the selector, and fills its two lists. */
s32 func_804293B0(s32 arg0) {
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v0;

    temp_v0 = func_80252FFC(0x40);
    D_800E4EF0 = temp_v0;
    func_8043C3F0(temp_v0, 0x67, 0, 0, 0);
    WORD_AT(D_800E4EF0, 0x38) = func_8041EB34();
    switch (D_80154028) {
    case 1:
        func_8040E9D0(func_8040ECB0(arg0, 0x35F), 1);
        func_8040E9D0(func_8040ECB0(arg0, 0x363), 1);
        break;
    case 0:
        func_8040E9D0(func_8040ECB0(arg0, 0x365), 1);
        func_8040E9D0(func_8040ECB0(arg0, 0x363), 1);
        break;
    case 2:
    case 3:
        func_8040E9D0(func_8040ECB0(arg0, 0x35F), 1);
        func_8040E9D0(func_8040ECB0(arg0, 0x365), 1);
        break;
    }
    WORD_AT(D_800E4EF0, 0x24) = func_802A2990(0x363, 0x364, 0, 0x64, 1);
    WORD_AT(D_800E4EF0, 0x28) = func_802A2990(0x361, 0x362, 0, 0x64, 1);
    WORD_AT(D_800E4EF0, 0x2C) = func_802A2990(0x35F, 0x360, 0, 0x64, 1);
    WORD_AT(D_800E4EF0, 0x30) = func_802A2990(0x365, 0x366, 0, 0x64, 1);
    WORD_AT(D_800E4EF0, 0x3C) = 0;
    if (WORD_AT(D_800E4EF0, 0x38) == 3) {
        WORD_AT(D_800E4EF0, 0x3C) = 1;
    }
    WORD_AT(D_800E4EF0, 0x34) = func_802A2990(0x36C, 0x36D, WORD_AT(D_800E4EF0, 0x3C), WORD_AT(D_800E4EF0, 0x38), 1);
    temp_v0_2 = func_8041AC40(0x367, 0x368);
    WORD_AT(D_800E4EF0, 0x1C) = temp_v0_2;
    func_8041ADB4(temp_v0_2, D_800D74C0);
    func_8041ADB4(WORD_AT(D_800E4EF0, 0x1C), D_800D74C4);
    temp_v0_3 = func_8041AC40(0x36E, 0x36F);
    WORD_AT(D_800E4EF0, 0x20) = temp_v0_3;
    func_8041ADB4(temp_v0_3, D_800D74C8);
    func_8041ADB4(WORD_AT(D_800E4EF0, 0x20), D_800D74CC);
    func_8041ADB4(WORD_AT(D_800E4EF0, 0x20), D_800D74D0);
    func_8041ADB4(WORD_AT(D_800E4EF0, 0x20), D_800D74D4);
    func_8041ADB4(WORD_AT(D_800E4EF0, 0x20), D_800D74D8);
    func_8041B190(0x369);
    func_8041B190(0x36A);
    func_8041B190(0x36B);
    func_80429740();
    func_80429834(0);
    func_80429740();
    return 0;
}
