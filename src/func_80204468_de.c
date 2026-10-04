#include "common/types.h"
#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
extern char D_800C8274;
extern char D_002043E0;








void func_80204468_de(void *arg0, void *arg1) {
    ((func_80204468_S1 *)(arg1))->unk2C = &D_800C8274;
    ((func_80204468_S1 *)(arg1))->unk108 = &D_002043E0;
    ((func_80204468_S1 *)(arg1))->unk124 = 0;
    ((func_80204468_S1 *)(arg1))->unk128 = 0;
    ((func_80204468_S1 *)(arg1))->unk12C = 0;
    if (((func_80204468_S3 *)((((func_80204468_S2 *)(arg0))->unk18)))->unk14 & 1) {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 | 0x10000;
        return;
    }
    ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 & 0xFFFEFFFF;
}
