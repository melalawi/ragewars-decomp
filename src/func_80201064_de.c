#ifdef NON_MATCHING
#include "span_1000/code_80200610.h"
#include "types.h"


extern void func_80200C28_de(s32 address, s32 value);

void func_80201064_de(s32 destination, s32 source, u32 count) {
    while (count-- != 0) {
        u8 value = func_80200800_de(source++);
        func_80200C28_de(destination++, value);
    }
}
#endif /* NON_MATCHING */
