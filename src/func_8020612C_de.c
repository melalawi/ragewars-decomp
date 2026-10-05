#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80204E78.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);










void func_8020612C_de(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_a2;
    s32 temp_v1;
    s32 var_v0;

    temp_v0 = ((func_80204468_S2 *)(arg0))->unk18;
    temp_a2 = &((func_80203908_S2 *)(temp_v0))->unk14;
    if (((func_8020612C_S3 *)(temp_a2))->unk4 == 0) {
        if (((func_8020612C_S3 *)(temp_a2))->unk14 == -1) {
            ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
            return;
        }
        if (((func_8020612C_S3 *)(temp_a2))->unk16 == -1) {
            ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
            return;
        }
    }
    if (((func_8020612C_S4 *)(arg1))->unk124 == ((func_8020612C_S3 *)(temp_a2))->unkA) {
        ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
        return;
    }
    temp_v1 = ((func_8020612C_S3 *)(temp_a2))->unk0;
    if (!(temp_v1 & 1)) {
        if (((func_8020612C_S4 *)(arg1))->unk128 <= 0) {
            return;
        }
    }
    var_v0 = temp_v1 & 2;
    if (var_v0 != 0) {
        if (((func_80204468_S2 *)(arg0))->unk100 & 0x200) {
            ((func_8020612C_S4 *)(arg1))->unk40 = 0.0f;
            return;
        }
    }
    if (((func_8020612C_S4 *)(arg1))->unk40 >= ((func_8020612C_S4 *)(arg1))->unk64) {
        func_80214178_de(arg0, arg1, 1);
    }
}
