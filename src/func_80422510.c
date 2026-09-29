#include "basetypes.h"

void *func_80252FFC();
extern s32 func_80265370();
extern s32 func_80419ED4();
extern s32 func_8041A300();
extern s32 func_8041A600();
extern s32 func_8041A76C();
extern s32 func_8041AC40();
extern s32 func_8041AD90();
extern s32 func_8041ADB4();
extern s32 func_8041B190();
typedef struct {
    char pad0[0x10];
    s32 unk10;
    char pad14[0x7];
    u8 unk1B;
    char pad1C[0x3];
    u8 unk1F;
    char pad20[0x560];
    u8 unk580;
} Settings;
extern Settings D_801462C8;
extern s32 D_800D749C;
extern s32 D_800D74A4;
extern s32 D_800D74A8;
extern s32 D_800D74AC;
extern s32 D_800D74B0;
extern s32 D_800D74B4;
extern s32 D_800D74B8;
extern s32 D_800D74BC;
extern void *D_800E4510;

/* Options screen state words: 0 screen, 4 label, 8 slider, 0xC/0x10/0x14 the three option lists, 0x20 selection, 0x24 state. */
#define SCREEN_WORD(offset) (*(s32 *)((char *)D_800E4510 + (offset)))

/* Opens the options screen D_800E4510: allocates it, builds its three option lists from the settings bytes and a slider from settings word 0x10, then stores the label and state. */
s32 func_80422510(void) {
    Settings *settings;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;

    settings = &D_801462C8;
    D_800E4510 = func_80252FFC(0x28);
    SCREEN_WORD(0x0) = func_8041A300(0x4D, 0x4E);
    func_8041B190(0x57);
    func_8041B190(0x58);
    temp_v0 = func_8041AC40(0x59, 0x5A);
    SCREEN_WORD(0xC) = temp_v0;
    func_8041ADB4(temp_v0, D_800D749C);
    func_8041ADB4(SCREEN_WORD(0xC), D_800D74A4);
    func_8041ADB4(SCREEN_WORD(0xC), D_800D74A8);
    func_8041AD90(SCREEN_WORD(0xC), settings->unk1B);
    temp_v0_2 = func_8041AC40(0x55, 0x56);
    SCREEN_WORD(0x10) = temp_v0_2;
    func_8041ADB4(temp_v0_2, D_800D74AC);
    func_8041ADB4(SCREEN_WORD(0x10), D_800D74B0);
    func_8041AD90(SCREEN_WORD(0x10), settings->unk1F);
    temp_v0_3 = func_8041AC40(0x51, 0x52);
    SCREEN_WORD(0x14) = temp_v0_3;
    func_8041ADB4(temp_v0_3, D_800D74B4);
    if (func_80265370() != 0x400000) {
        func_8041ADB4(SCREEN_WORD(0x14), D_800D74B8);
        func_8041ADB4(SCREEN_WORD(0x14), D_800D74BC);
    }
    func_8041AD90(SCREEN_WORD(0x14), settings->unk580);
    temp_v0_4 = func_8041A600(0x53, 0x54, 0x80);
    SCREEN_WORD(0x8) = temp_v0_4;
    func_8041A76C(temp_v0_4, settings->unk10);
    func_8041B190(0x50);
    temp_v0_5 = func_80419ED4(0x4F, 0x6E);
    SCREEN_WORD(0x24) = 3;
    SCREEN_WORD(0x4) = temp_v0_5;
    SCREEN_WORD(0x20) = -1;
    return 0;
}
