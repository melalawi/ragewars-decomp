#include "basetypes.h"

/* Calls func_80293808 on D_8011FAC0 with 8 and returns one. */
extern char D_8011FAC0[];
extern void func_80293808(void *, s32);

s32 func_8043EEC8(void) {
    func_80293808(D_8011FAC0, 8);
    return 1;
}
