#include "basetypes.h"

extern void *D_800D052C[];
extern char D_80121990;
extern s32 func_802831FC(void *, s32);

extern void *jtbl_800C7F20[];

typedef struct func_8022EAFC_S1 func_8022EAFC_S1;
typedef struct func_8022EAFC_S2 func_8022EAFC_S2;
typedef struct func_8022EAFC_S3 func_8022EAFC_S3;
struct func_8022EAFC_S1 {
    char pad0[0x20];
    s16* unk20;
};
struct func_8022EAFC_S2 {
    char pad0[0x5F4];
    s16 unk5F4;
};
struct func_8022EAFC_S3 {
    char pad0[0x5F4];
    s16 unk5F4;
    char pad5F4[0x5F8 - 0x5F4 - sizeof(s16)];
    s16 unk5F8;
};

/** Test whether an actor satisfies the condition selected by an entry type. */
s32 func_8022EAFC(void *arg0, s32 arg1) {
    void *entry;
    s16 *condition;
    char *indexed;
    s32 offset;

    entry = D_800D052C[arg1];
    {
        static void *sw_arg1_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_arg1_1, &&sw_arg1_2, &&sw_arg1_5, &&sw_arg1_6, &&sw_arg1_7, &&sw_arg1_8, &&sw_arg1_9, &&sw_arg1_10, &&sw_arg1_11, &&sw_arg1_13, &&sw_arg1_14, &&sw_arg1_15, &&sw_arg1_3, &&sw_arg1_4, &&sw_arg1_12, &&sw_arg1_0, &&sw_arg1_18, &&sw_arg1_19, &&sw_arg1_20, &&sw_arg1_21, &&sw_arg1_default
        };
        s32 sw_arg1_value = arg1;
        if ((unsigned int)sw_arg1_value > 21) {
            goto sw_arg1_default;
        }
        goto *jtbl_800C7F20[sw_arg1_value];
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
        condition = ((func_8022EAFC_S1 *)(entry))->unk20;
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
        return func_802831FC(&D_80121990, (s32)arg0);
    sw_arg1_default:
        return 0;
    
    } while (0);
}
