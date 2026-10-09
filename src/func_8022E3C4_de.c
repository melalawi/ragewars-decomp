#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8022D944.h"
#include "types.h"

extern void *D_800CB2EC[];
extern s32 D_80140FF8;








s32 func_8022E3C4_de(void *arg0, s32 arg1, s32 arg2) {
    void **entry;
    void **scan;
    void *resource;
    void *item;
    s32 i;

    resource = D_800CB2EC[arg1];
    if (((func_8022E3B4_S1 *)(arg0))->unk1450 != 0) {
        entry = &((func_8022E3B4_S2 *)(resource))->unk2C;
        goto scan_setup;
    }
    if (D_80140FF8 != 1) {
        entry = &((func_8022E3B4_S2 *)(resource))->unk2C;
        goto scan_setup;
    }
    entry = &((func_8022E3B4_S2 *)(resource))->unk20;

scan_setup:
    i = 0;
    scan = entry;
loop:
    item = *scan;
    if (item == 0) {
        goto null_item;
    }
    if (((func_8022E3B4_S3 *)(item))->unk4 != arg2) {
        goto mismatch;
    }
    return 1;
null_item:
    return 0;
mismatch:
    i += 1;
    if (i < 3) {
        scan += 1;
        goto loop;
    }
    return 0;
}
