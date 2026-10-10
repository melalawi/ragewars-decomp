#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "resident_event_handler.h"
extern s32 D_auto_800D2AE8;
extern int D_8014AEB8;

void func_8029576C_us_rev1(void) {
    s32 temp_v1;

    D_auto_800D2AE8 += 1;
    if (D_auto_800D2AE8 >= 3) {
        temp_v1 = D_8014AEBC + 1;
        D_auto_800D2AE8 = 0;
        D_8014AEC4 = 1;
        D_8014AEBC = temp_v1;
        D_8014AEBC = temp_v1 % D_8014AEB8;
    }
}
