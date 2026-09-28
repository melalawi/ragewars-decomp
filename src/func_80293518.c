#include "basetypes.h"

extern void func_802C2410(void *a, void *b, void *c, void *d);
extern s32 func_802C2000(void);
extern void func_802C2250(s32 arg0);
extern void func_80291404(void *arg0);

extern int D_8014ADA8;
extern int D_800CA4F0;
extern int D_800CA4F8;
extern int D_800CA504;
extern int D_8011FAC0;

void func_80293518(void) {
    func_802C2410(&D_8014ADA8, &D_800CA4F0, &D_800CA4F8, &D_800CA504);
    func_802C2250(func_802C2000() | 0x400);
    func_80291404(&D_8011FAC0);
}
