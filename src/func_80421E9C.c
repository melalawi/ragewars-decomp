#include "basetypes.h"

/* Switches a timer record to a new mode: when the mode at offset 8 changes it stores the mode,
   loads the countdown at offset 0 with 1000 for a non-zero mode or zero otherwise, and clears the
   word at offset 4. */
struct Timer {
    s32 countdown;
    s32 elapsed;
    s32 mode;
};

void func_80421E9C(struct Timer *timer, s32 mode) {
    if (timer->mode != mode) {
        timer->mode = mode;
        if (mode == 0) {
            timer->countdown = 0;
        } else {
            timer->countdown = 1000;
        }
        timer->elapsed = 0;
    }
}
