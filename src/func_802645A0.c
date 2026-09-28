#include "basetypes.h"

extern int func_8026477C(int arg0);
extern s32 D_8010FBF0[];

/** Fetch-and-clear: return the old slot value, then zero it. */
s32 func_802645A0(s32 arg0) {
    s32 old;

    if (func_8026477C(arg0) == 0) {
        return 0;
    }
    old = D_8010FBF0[arg0];
    D_8010FBF0[arg0] = 0;
    return old;
}
