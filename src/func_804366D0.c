/* Builds screen D_800E5690 under a parent window: allocates its 0x64 bytes, creates widget 0x5B/0x5C
   at 0x0, opens lists 0x64/0x65 and 0x61/0x63 filled from D_800D74xx at 0x14 and 0x10, opens panels
   0x66/0x67 and 0x6A/0x6B at 0x8 and 0xC, opens list 0x68/0x69 at 0x18 filled from three more
   D_800D74xx entries, sets 3 and -1 at 0x24/0x20, takes item 0x5F under the parent and resets
   through func_80436898(0). A twin of func_80437074. */
#include "basetypes.h"

struct Screen {
    void *widget;
    s32 unk4;
    void *panelA;
    void *panelB;
    void *listB;
    void *listA;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    void *window;
};

extern struct Screen *D_800E5690;
extern s32 D_800D749C[];
extern s32 D_800D74A0[];
extern s32 D_800D74D0[];
extern s32 D_800D74DC[];
extern s32 D_800D74E0[];
extern s32 D_800D74E4[];
extern s32 D_800D74E8[];

extern struct Screen *func_80252FFC(s32);
extern void *func_8041A300(s32, s32);
extern void func_8041B190(s32);
extern void *func_8041AC40(s32, s32);
extern void func_8041ADB4(void *, s32);
extern void *func_8041A600(s32, s32, s32);
extern s32 func_80419ED4(s32, s32);
extern void *func_8040ECB0(void *, s32);
extern void func_80436898(s32);

s32 func_804366D0(void *parent) {
    void *list;

    D_800E5690 = func_80252FFC(0x64);
    D_800E5690->widget = func_8041A300(0x5B, 0x5C);
    func_8041B190(0x5E);

    list = func_8041AC40(0x64, 0x65);
    D_800E5690->listA = list;
    func_8041ADB4(list, D_800D74D0[0]);
    func_8041ADB4(D_800E5690->listA, D_800D74DC[0]);

    list = func_8041AC40(0x61, 0x63);
    D_800E5690->listB = list;
    func_8041ADB4(list, D_800D749C[0]);
    func_8041ADB4(D_800E5690->listB, D_800D74A0[0]);

    D_800E5690->panelA = func_8041A600(0x66, 0x67, 0xF8);
    D_800E5690->panelB = func_8041A600(0x6A, 0x6B, 0xF8);

    list = func_8041AC40(0x68, 0x69);
    D_800E5690->unk18 = (s32)list;
    func_8041ADB4(list, D_800D74E0[0]);
    func_8041ADB4((void *)D_800E5690->unk18, D_800D74E4[0]);
    func_8041ADB4((void *)D_800E5690->unk18, D_800D74E8[0]);

    func_8041B190(0x60);
    D_800E5690->unk4 = func_80419ED4(0x5D, 0x6E);
    D_800E5690->unk24 = 3;
    D_800E5690->unk20 = -1;
    D_800E5690->window = func_8040ECB0(parent, 0x5F);
    D_800E5690->unk28 = 0;
    func_80436898(0);
    return 0;
}
