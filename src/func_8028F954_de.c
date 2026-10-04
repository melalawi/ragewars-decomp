#include "common/types.h"
#include "span_1000/code_8028DF6C.h"
#include "types.h"








void func_8028F954_de(void *arg0, void *arg1) {
    void *temp_v0;

    if ((((func_8028F934_S1 *)(arg1))->unk10) == 2) {
        temp_v0 = ((func_8028F934_S2 *)(arg0))->unk2EC;
        if (temp_v0 != 0) {
            ((func_80284AF4_G2 *)(temp_v0))->unk0 = arg1;
        } else {
            ((func_8028F934_S2 *)(arg0))->unk2E4 = arg1;
        }
        ((func_8028F934_S2 *)(arg0))->unk2EC = arg1;
        ((func_8028F934_S2 *)(arg0))->unk300 = 1;
    } else {
        temp_v0 = ((func_8028F934_S2 *)(arg0))->unk2F0;
        if (temp_v0 != 0) {
            ((func_80284AF4_G2 *)(temp_v0))->unk0 = arg1;
        } else {
            ((func_8028F934_S2 *)(arg0))->unk2E8 = arg1;
        }
        ((func_8028F934_S2 *)(arg0))->unk2F0 = arg1;
    }
    ((func_8028F934_S1 *)(arg1))->unk0 = 0;
    ((func_8028F934_S1 *)(arg1))->unk4 = (((func_8028F934_S1 *)(arg1))->unk8) & 3;
}
