#include "basetypes.h"

/* When the timer D_801468B0 has run out, calls func_8044E9A0 on D_8011FAC0 and returns one;
   otherwise returns zero. */
extern f32 D_801468B0;
extern char D_8011FAC0[];
extern void func_8044E9A0(void *);

s32 func_8043EF4C(void) {
    if (D_801468B0 <= 0.0f) {
        func_8044E9A0(D_8011FAC0);
        return 1;
    }
    return 0;
}
