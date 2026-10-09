#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8022BA90.h"
#include "types.h"
#include "span_1000/code_8026AC38.h"


extern s32 D_80140FF8;
extern s32 D_8014288C;
extern void *D_800D052C[];
extern s32 D_8011FE88;








void func_8022BC14_de(void *arg0) {
    s32 var_t0;

    if (((func_8022BC04_S1 *)(arg0))->unk1450 != 0) {
        if (D_8014288C == 0) {
            var_t0 = 0x17;
            goto after;
        }
    }
    var_t0 = (D_80140FF8 == 1) ? 0 : 0x17;
after:
    ((void (*)(void *, void *, s32, s32))func_8028B274_de)(&D_8011FE88, &((func_8022BC04_S1 *)(arg0))->unk2E8,
        ((func_8022BC04_S2 *)(D_800D052C[((func_8022BC04_S1 *)(arg0))->unk62E]))->unk4 + var_t0,
        ((func_8022BC04_S3 *)(((func_8022BC04_S1 *)(arg0))->unk484))->unk10);
}
