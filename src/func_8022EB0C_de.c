#include "span_1000/code_8022E120.h"
#include "span_1000/types.h"
#include "types.h"

extern void *D_800CB2EC[];
extern char D_8011D8D0;
extern s32 func_80283228_de(void *, s32);

extern void *jtbl_800C2E30[];








/** Test whether an actor satisfies the condition selected by an entry type. */
s32 func_8022EB0C_de(void *arg0, s32 arg1) {
    void *entry;
    s16 *condition;
    char *indexed;
    s32 offset;

    entry = D_800CB2EC[arg1];
    {
        static void *sw_arg1_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_arg1_1, &&sw_arg1_2, &&sw_arg1_5, &&sw_arg1_6, &&sw_arg1_7, &&sw_arg1_8, &&sw_arg1_9, &&sw_arg1_10, &&sw_arg1_11, &&sw_arg1_13, &&sw_arg1_14, &&sw_arg1_15, &&sw_arg1_3, &&sw_arg1_4, &&sw_arg1_12, &&sw_arg1_0, &&sw_arg1_18, &&sw_arg1_19, &&sw_arg1_20, &&sw_arg1_21, &&sw_arg1_default
        };
        s32 sw_arg1_value = arg1;
        if ((unsigned int)sw_arg1_value > 21) {
            goto sw_arg1_default;
        }
        goto *jtbl_800C2E30[sw_arg1_value];
    }
    do {
    sw_arg1_1:
    sw_arg1_2:
    sw_arg1_5:
    sw_arg1_6:
    sw_arg1_7:
    sw_arg1_8:
    sw_arg1_9:
    sw_arg1_10:
    sw_arg1_11:
    sw_arg1_13:
    sw_arg1_14:
    sw_arg1_15:
        condition = ((WeaponInfo *)(entry))->weaponClass;
        offset = condition[0] * 2;
        indexed = arg0;
        indexed += offset;
        return ((func_8022EAFC_S2 *)(indexed))->unk5F4 >= condition[3];
    sw_arg1_3:
        return ((func_8022EAFC_S3 *)(arg0))->unk5F4 >= 3;
    sw_arg1_4:
        return ((func_8022EAFC_S3 *)(arg0))->unk5F4 >= 5;
    sw_arg1_12:
        if (((func_8022EAFC_S3 *)(arg0))->unk5F8 == 0) {
            goto check_external;
        }
    sw_arg1_0:
    sw_arg1_18:
    sw_arg1_19:
    sw_arg1_20:
    sw_arg1_21:
        return 1;
    check_external:
        return func_80283228_de(&D_8011D8D0, (s32)arg0);
    sw_arg1_default:
        return 0;
    
    } while (0);
}
