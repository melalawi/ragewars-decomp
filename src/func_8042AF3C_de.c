#ifdef NON_MATCHING
#include "span_16E000/code_80429C10.h"
#include "types.h"

extern struct Cup D_8014DD80;

s32 func_8042AF3C_de(void) {
    s32 complete = 1;

    if (D_8014DD80.index >= 0) {
        switch (D_8014DD80.index) {
        case 0:
            complete = 5;
            break;
        case 1:
            complete = 7;
            break;
        case 3:
            complete = 11;
            break;
        case 2:
            complete = 17;
            break;
        default:
            complete = 0;
            break;
        }
        complete = D_8014DD80.stages + 1 == complete;
    }
    return complete;
}
#endif /* NON_MATCHING */
