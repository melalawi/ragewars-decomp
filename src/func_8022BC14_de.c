#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8022BA90.h"
#include "types.h"

extern void func_8028B274_de(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern s32 D_80140FF8;
extern s32 D_8014288C;
extern void *D_800CB2EC[];
extern s32 D_8011BDC8;








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
    func_8028B274_de(&D_8011BDC8, &((func_8022BC04_S1 *)(arg0))->unk2E8,
        ((func_8022BC04_S2 *)(D_800CB2EC[((func_8022BC04_S1 *)(arg0))->unk62E]))->unk4 + var_t0,
        ((func_8022BC04_S3 *)(((func_8022BC04_S1 *)(arg0))->unk484))->unk10);
}
