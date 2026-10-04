#include "span_16E000/code_8043EEC0.h"
#include "types.h"

/* When the timer D_801468B0 has run out, calls func_8044DD50_de on D_8011FAC0 and returns one;
   otherwise returns zero. */
extern f32 D_801427F0;
extern char D_8011BA00[];
extern void func_8044DD50_de(void *);

s32 func_8043EDDC_de(void) {
    if (D_801427F0 <= 0.0f) {
        func_8044DD50_de(D_8011BA00);
        return 1;
    }
    return 0;
}
