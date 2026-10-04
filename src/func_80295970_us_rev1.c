#include "common/types.h"
#include "span_1000/code_802953FC.h"
#include "types.h"



extern s32 D_800D2AF0;
extern ResourceManagerState D_8014AEC0;

void func_80295970_us_rev1(void) {
    s32 *ptr;
    s32 old;
    s32 count;

    ptr = &D_800D2AF0;
    old = (*ptr)++;
    if (old >= 3) {
        count = D_8014AEC0.active;
        D_8014AEC0.count = 1;
        D_800D2AF0 = 0;
        D_8014AEC0.active = count + 1;
    }
}
