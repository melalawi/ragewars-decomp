#include "common/types.h"
#include "span_1000/code_802953FC.h"
#include "types.h"



extern s32 D_800D2AEC;
extern ResourceManagerState D_8014AEC0;

void func_80295924_us_rev1(void) {
    s32 *ptr;
    s32 old;
    s32 count;

    ptr = &D_800D2AEC;
    old = (*ptr)++;
    if (old >= 3) {
        count = D_8014AEC0.active;
        D_8014AEC0.count = 1;
        D_800D2AEC = 0;
        D_8014AEC0.active = count - 1;
    }
}
