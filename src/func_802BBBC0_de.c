#include "span_1000/code_802C0384.h"
#include "types.h"

extern s32 func_802BD080_de(void);

s32 func_802BBBC0_de(s32 arg0) {
    if (arg0 < 0 && (u32)arg0 <= 0x9FFFFFFFU) {
        return arg0 & 0x1FFFFFFF;
    }
    if ((u32)(arg0 + 0x60000000) > 0x1FFFFFFFU) {
        return func_802BD080_de();
    }
    return arg0 & 0x1FFFFFFF;
}
