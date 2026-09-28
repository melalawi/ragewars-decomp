#include "basetypes.h"

/* Restarts sound: calls func_8025E234 with -1, records what func_8025E2E4 returns in D_800E63B0,
   passes D_800E63B8 to func_8025E2F4, calls func_8025E2BC with 1, clears D_800E63B4, calls
   func_80264A1C and then func_80442934 with the third argument, the second and D_451F58.
   Returns one. */
extern s32 D_800E63B0;
extern s32 D_800E63B4;
extern s32 D_800E63B8;
extern char D_451F58[];
extern void func_8025E234(s32);
extern s32 func_8025E2E4();
extern void func_8025E2F4(s32);
extern void func_8025E2BC(s32);
extern void func_80264A1C();
extern void func_80442934(void *, void *, void *);

s32 func_8043EE3C(void *first, void *second, void *third) {
    func_8025E234(-1);
    D_800E63B0 = func_8025E2E4();
    func_8025E2F4(D_800E63B8);
    func_8025E2BC(1);
    D_800E63B4 = 0;
    func_80264A1C();
    func_80442934(third, second, D_451F58);
    return 1;
}
