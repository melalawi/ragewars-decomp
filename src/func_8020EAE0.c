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

s32 func_8020EAE0(void *arg0) {
    s32 *base;
    s32 requested;
    s32 current;
    s32 link;

    base = &D_8013B364;
    if (base == 0) {
        return 1;
    }
    requested = *(s32 *) ((char *) arg0 + 0xC);
    if (requested == -1) {
        return 1;
    }
    current = *(s32 *) ((char *) arg0 + 0x4);
    if (current == requested) {
        return 1;
    }
    if (*(s32 *) ((char *) arg0 + 0x28) == requested) {
        link = *(s32 *) ((char *) arg0 + 0x14);
        if (link != -1 && *(s32 *) ((char *) arg0 + 0x18) != -1) {
            if (current == link) {
                return 1;
            }
            if (func_8020CC0C(base, current, link) != -1) {
                return 1;
            }
        }
    }
    func_8020D014(base);
    if (*(s32 *) ((char *) arg0 + 0x2F4) != 0) {
        func_8020EDCC(arg0);
    }
    if (*(s32 *) ((char *) arg0 + 0x2F8) != 0) {
        func_8020EE50(arg0);
    }
    if (*(s32 *) ((char *) arg0 + 0x2FC) != 0) {
        func_8020EEA4(arg0);
    }
    func_8020EC14(arg0);
    func_8020D1FC(base);
    func_8020D220(base, *(s32 *) ((char *) arg0 + 0xC));
    base[6] = -1;
    func_8020D0CC(base, *(s32 *) ((char *) arg0 + 0x4));
    func_8020D114(base, (s32 *) ((char *) arg0 + 0x14), 4);
    *(s32 *) ((char *) arg0 + 0x1BC) = 0;
    *(s32 *) ((char *) arg0 + 0x1C0) = -1;
    *(s32 *) ((char *) arg0 + 0x28) = *(s32 *) ((char *) arg0 + 0xC);
    return 1;
}
