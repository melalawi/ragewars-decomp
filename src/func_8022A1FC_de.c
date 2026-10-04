#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"

extern s32 func_8024D160_de(void *arg0);











void func_8022A1FC_de(void *arg0, void *arg1) {
    void *node;
    int scale;
    s32 count1;
    s32 count2;
    char *entry;

    node = ((func_80228774_S1 *)(arg0))->unk20;
    if (node != 0) {
        do {
            ((ObjectLinks16E4_2 *)(node))->unk_70 = 0;
            ((ObjectLinks16E4_2 *)(node))->unk_358 = 0;
            if (func_8024D160_de(node) != 0) {
                if (node) {
                    count1 = ((IntegerState948 *)(arg1))->unk_944;
                } else {
                    count1 = ((IntegerState948 *)(arg1))->unk_944;
                }
                if (count1 != 0x200) {
                    scale = 4;
                    ((ObjectLinks148 *)(((s32)arg1 + count1 * scale)))->unk_144 = node;
                    ((IntegerState948 *)(arg1))->unk_944 = count1 + 1;
                }
                count1 = 0xB48;
                count2 = ((IntegerStateB4C *)arg1)->unk_B48;
                if (count2 != 0x80) {
                    ((struct ObjectLinks94C *) (entry = (char *) (((s32) arg1) + (count2 * 4))))->unk_948 = node;
                    ((IntegerStateB4C *)arg1)->unk_B48 = count2 + 1;
                }
            }
            node = ((ObjectLinks16E4_2 *)(node))->unk_16E0;
        } while (node != 0);
    }
}
