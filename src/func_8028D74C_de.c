#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8028CCB8.h"
#include "types.h"






s32 func_8028D74C_de(void *arg0, void *arg1) {
    void *base;

    if (((func_80207F90_S1 *)(arg1))->unk100 & 0x80000) {
        return -1;
    }
    base = ((func_8028D728_S2 *)(arg0))->unk138;
    if (arg1 >= base &&
        (char *)arg1 <= (char *)base + (((func_8028D728_S2 *)(arg0))->unk140 * 0x2E8 - 0x2E8)) {
        return ((u32)arg1 - (u32)base) / 0x2E8;
    }
    return -1;
}
