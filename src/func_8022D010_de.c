#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8022C894.h"
#include "types.h"
/** Scales the floats at 0x6C0 and 0x6C4 of the first object and the float at 0x20 of the second by D_800C7E90. */








void func_8022D010_de(void *arg0, void *arg1) {
    ((func_8022C894_S1 *)(arg0))->unk6C0 = ((func_8022C894_S1 *)(arg0))->unk6C0 * (D_800C7E90);
    ((func_8022C894_S1 *)(arg0))->unk6C4 = ((func_8022C894_S1 *)(arg0))->unk6C4 * (D_800C7E90);
    ((func_8022CA04_S3 *)(arg1))->unk20 = ((func_8022CA04_S3 *)(arg1))->unk20 * (D_800C7E90);
}
