#include "span_16E000/code_8041BC50.h"
/* In one- or no-player mode, counts a tick on the state D_800E3518 and, while it is not paused, once
   more than five ticks have passed runs func_802A2360_de and func_8041C244_de; always returns 0. */


extern int D_800DE890;
extern State_func_8041C40C_de *D_800DF4C8;
extern void func_802A2360_de(void);
extern void func_8041C244_de(void);

int func_8041C40C_de(void) {
    if (D_800DE890 < 2) {
        D_800DF4C8->ticks++;
        if (D_800DF4C8->paused == 0) {
            if (D_800DF4C8->ticks < 6) {
                return 0;
            }
            func_802A2360_de();
            func_8041C244_de();
        }
    }
    return 0;
}
