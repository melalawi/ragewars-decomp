#include "span_1000/code_802A0888.h"
#include "types.h"

s32 func_802A037C_de(const void *arg0, const void *arg1) {
    const u8 *a = arg0;
    const u8 *b = arg1;
    s32 difference;

    while ((difference = *a - *b) == 0) {
        if (*b == 0) {
            break;
        }
        a++;
        b++;
    }
    return difference;
}
