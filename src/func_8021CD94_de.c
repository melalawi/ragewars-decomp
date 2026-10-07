#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8021CD70.h"
#include "stddef.h"
s32 func_80216BF4_de(void *, void *, void *);
/* Checks whether the player's current weapon can lock onto the target. */
s32 func_8021CD94_de(func_8021CD70_S1 *arg0, func_8021CD70_S2 *arg1) {
    s16 temp_a1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    s16 shielded;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_4;
    func_8021CD70_S3 *temp_a1_2;
    func_8021CD70_S4 *temp_a1_3;
    func_8021CD70_S4 *temp_v0;
    temp_a1 = arg0->unk62E;
    if (temp_a1 == 0x12) {
        if (arg1->unk100 & 0x300000) {
            if (arg1->unk18->unk14 & 0x20) {
                temp_v1 = arg1->unk1A4;
                if ((temp_v1 != 0x26) && (temp_v1 != temp_a1) && (arg1->unk174 != 0)) {
                    temp_v0 = arg1->unk5DC;
                    if (temp_v0 == NULL) {
                        var_v0 = 0;
                    } else {
                        var_v0 = temp_v0->unk564 != 0;
                    }
                    if (var_v0 != 0) {
                        return 0;
                    }
                    goto block_25;
                }
                /* Duplicate return node #35. Try simplifying control flow for better match */
                return 0;
            }
            goto block_34;
        }
        temp_a1_2 = arg1->unk18;
        if (temp_a1_2->unk0 == 1) {
            if ((temp_a1_2->unk14 & 0x2400) == 0) {
                goto block_34;
            }
            temp_v1_2 = arg1->unk1A4;
            if (((temp_v1_2 == 0x21) || (temp_v1_2 == 0x34) ||
                 (temp_v1_2 == 0x3C) || (temp_v1_2 == 0x3D)) ||
                (arg1->unk174 == 0)) {
                goto block_34;
            }
            goto block_25;
        }
        goto block_19;
    }
block_19:
    temp_v1_3 = arg1->unk18->unk0;
    if (temp_v1_3 == 4) goto block_24;
    if (temp_v1_3 < 5) return 0;
    if (temp_v1_3 == 7) goto block_34;
    if (temp_v1_3 == 11) goto block_27;
    return 0;
block_24:
    do {
        if (arg1->unk174 == 0) goto block_34;
    } while (0);
block_25:
    return func_80216BF4_de(arg0, &arg0->unk170, arg1) == 0;
block_27:
    temp_v1_4 = arg1->unk1A4;
    var_a0 = 0;
    if (temp_v1_4 == 0x26) goto block_33;
    if (temp_v1_4 == 0x12) goto block_33;
    if (arg1->unk174 == 0) goto block_33;
    var_v0_2 = 0;
    temp_a1_3 = arg1->unk5DC;
    if (temp_a1_3 != NULL) {
        /* FAKEMATCH: keep the shield predicate in a named flag for register selection. */
        shielded = temp_a1_3->unk564 != 0;
        var_v0_2 = shielded;
    }
    if (var_v0_2 == 0) var_a0 = 1;
block_33:
    return var_a0;
block_34:
    return 0;
}
