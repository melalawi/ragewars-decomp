#include "basetypes.h"

extern int func_8026477C(int arg0);
extern s32 D_8010FBF0[];

s32 func_802645F0(s32 arg0) {
    if (func_8026477C(arg0) == 0) {
        return 0;
    }
    return D_8010FBF0[arg0];
}
