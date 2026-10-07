#ifdef NON_MATCHING
#include "types.h"
#include "span_16E000/code_804143D8.h"

extern u64 func_802BADC0_de(void);
extern u64 D_80149B00;

f64 func_804147F0_eu_x(void) {
    f64 time;

    time = (f64)(s64)func_802BADC0_de();
    return time / (f64)(s64)D_80149B00;
}
#endif /* NON_MATCHING */
