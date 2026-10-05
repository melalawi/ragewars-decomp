#include "span_1000/code_8020EAE0.h"
#include "types.h"
/* Commits a pending selection to the controller D_8013B364: returns at once when nothing is
   requested at 0xC, the request is already active at 0x4, or it continues the committed request at
   0x28 through valid links at 0x14 and 0x18 that are already current or that func_8020CC0C_de joins;
   otherwise it resets the controller, runs the pending release passes flagged at 0x2F4, 0x2F8 and
   0x2FC, rebuilds through func_8020EC14_de, loads the request, clears the controller's link word,
   reselects the active entry, copies the four link words from 0x14 and records the request as
   committed. Always returns 1. Written from its own assembly with early returns. */

extern s32 D_801372A4;
extern s32 func_8020CC0C_de(s32 *, s32, s32);
extern void func_8020D014_de(s32 *);
extern void func_8020EDCC_de(void *);
extern void func_8020EE50_de(void *);
extern void func_8020EEA4_de(void *);
extern void func_8020EC14_de(void *);
extern void func_8020D1FC_de(s32 *);
extern void func_8020D220_de(s32 *, s32);
extern void func_8020D0CC_de(s32 *, s32);
extern void func_8020D114_de(s32 *, s32 *, s32);




s32 func_8020EAE0_de(void *arg0) {
    s32 *base;
    s32 requested;
    s32 current;
    s32 link;

    base = &D_801372A4;
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
            if (func_8020CC0C_de(base, current, link) != -1) {
                return 1;
            }
        }
    }
    func_8020D014_de(base);
    if (((func_8020EAE0_S1 *)(arg0))->unk2F4 != 0) {
        func_8020EDCC_de(arg0);
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk2F8 != 0) {
        func_8020EE50_de(arg0);
    }
    if (((func_8020EAE0_S1 *)(arg0))->unk2FC != 0) {
        func_8020EEA4_de(arg0);
    }
    func_8020EC14_de(arg0);
    func_8020D1FC_de(base);
    func_8020D220_de(base, ((func_8020EAE0_S1 *)(arg0))->unkC);
    base[6] = -1;
    func_8020D0CC_de(base, ((func_8020EAE0_S1 *)(arg0))->unk4);
    func_8020D114_de(base, &((func_8020EAE0_S1 *)(arg0))->unk14, 4);
    ((func_8020EAE0_S1 *)(arg0))->unk1BC = 0;
    ((func_8020EAE0_S1 *)(arg0))->unk1C0 = -1;
    ((func_8020EAE0_S1 *)(arg0))->unk28 = ((func_8020EAE0_S1 *)(arg0))->unkC;
    return 1;
}
