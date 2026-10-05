#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_802022E0.h"
#include "types.h"

extern void func_802738C0_de(void *arg0, f32 arg1);
extern void func_80273C68_de(void *arg0, f32 arg1);










void func_80203DF0_de(void *arg0, void *arg1) {
    void *temp_a0;
    char *temp_s1;
    void *temp_v0;

    temp_a0 = ((func_80203DF0_S1 *)(arg1))->unk8;
    temp_s1 = ((func_80203DF0_S2 *)(temp_a0))->unk18 + 0x14;
    if (((func_80203DF0_S1 *)(arg1))->unk4 == ((func_80203DF0_S3 *)(temp_s1))->unk3C) {
        func_802738C0_de(arg0, ((func_80203DF0_S2 *)(temp_a0))->unk294);
    }
    if (((func_80203DF0_S1 *)(arg1))->unk4 == ((func_80203DF0_S3 *)(temp_s1))->unk40) {
        temp_v0 = ((func_80203DF0_S1 *)(arg1))->unk8;
        func_80273C68_de(arg0,
                      ((func_80203DF0_S4 *)(temp_v0))->unk20C -
                          ((func_80203DF0_S4 *)(temp_v0))->unk6C);
    }
}
