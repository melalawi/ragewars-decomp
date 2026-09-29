/* Commits a pending selection to the controller D_8013B364: returns at once when nothing is
   requested at 0xC, the request is already active at 0x4, or it continues the committed request at
   0x28 through valid links at 0x14 and 0x18 that are already current or that func_8020CC0C joins;
   otherwise it resets the controller, runs the pending release passes flagged at 0x2F4, 0x2F8 and
   0x2FC, rebuilds through func_8020EC14, loads the request, clears the controller's link word,
   reselects the active entry, copies the four link words from 0x14 and records the request as
   committed. Always returns 1. Written from its own assembly with early returns. */
#include "basetypes.h"

extern s32 D_8013B364;
extern s32 func_8020CC0C(s32 *, s32, s32);
extern void func_8020D014(s32 *);
extern void func_8020EDCC(void *);
extern void func_8020EE50(void *);
extern void func_8020EEA4(void *);
extern void func_8020EC14(void *);
extern void func_8020D1FC(s32 *);
extern void func_8020D220(s32 *, s32);
extern void func_8020D0CC(s32 *, s32);
extern void func_8020D114(s32 *, s32 *, s32);

typedef struct func_8020EAE0_S1 func_8020EAE0_S1;
struct func_8020EAE0_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
    char padC[0x14 - 0xC - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
    char pad18[0x28 - 0x18 - sizeof(s32)];
    s32 unk28;
    char pad28[0x1BC - 0x28 - sizeof(s32)];
    s32 unk1BC;
    char pad1BC[0x1C0 - 0x1BC - sizeof(s32)];
    s32 unk1C0;
    char pad1C0[0x2F4 - 0x1C0 - sizeof(s32)];
    s32 unk2F4;
    char pad2F4[0x2F8 - 0x2F4 - sizeof(s32)];
    s32 unk2F8;
    char pad2F8[0x2FC - 0x2F8 - sizeof(s32)];
    s32 unk2FC;
};

s32 func_8020EAE0(void *arg0) {
    s32 *base;
    s32 requested;
    s32 current;
    s32 link;

    base = &D_8013B364;
    if (base == 0) {
        return 1;
    }
    requested = ((func_8020EAE0_S1 *)(arg0))->unkC;
    if (requested == -1) {
        return 1;
    }
    current = ((func_8020EAE0_S1 *)(arg0))->unk4;
    if (current == requested) {
        return 1;
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk28 == requested) {
        link = ((func_8020EAE0_S1 *)(arg0))->unk14;
        if (link != -1 && ((func_8020EAE0_S1 *)(arg0))->unk18 != -1) {
            if (current == link) {
                return 1;
            }
            if (func_8020CC0C(base, current, link) != -1) {
                return 1;
            }
        }
    }
    func_8020D014(base);
    if (((func_8020EAE0_S1 *)(arg0))->unk2F4 != 0) {
        func_8020EDCC(arg0);
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk2F8 != 0) {
        func_8020EE50(arg0);
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk2FC != 0) {
        func_8020EEA4(arg0);
    }
    func_8020EC14(arg0);
    func_8020D1FC(base);
    func_8020D220(base, ((func_8020EAE0_S1 *)(arg0))->unkC);
    base[6] = -1;
    func_8020D0CC(base, ((func_8020EAE0_S1 *)(arg0))->unk4);
    func_8020D114(base, &((func_8020EAE0_S1 *)(arg0))->unk14, 4);
    ((func_8020EAE0_S1 *)(arg0))->unk1BC = 0;
    ((func_8020EAE0_S1 *)(arg0))->unk1C0 = -1;
    ((func_8020EAE0_S1 *)(arg0))->unk28 = ((func_8020EAE0_S1 *)(arg0))->unkC;
    return 1;
}
