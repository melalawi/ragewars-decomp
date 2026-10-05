#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80254CE4.h"
#include "types.h"


extern void func_80255ED8_de(void *, s32);
extern s32 func_80255CB8_de(void *, s32);
extern char D_8010110C;
extern s32 D_801010F8;








void func_80254DD0_de(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_s0;

    temp_v0 = ((func_80254D70_S1 *)(arg1))->unk14;
    if (temp_v0 != 0) {
        func_80255488_de(((func_80254D70_S2 *)(temp_v0))->unk8);
        temp_s0 = ((func_80254D70_S1 *)(arg1))->unk14;
        func_80255ED8_de(&D_8010110C, temp_s0);
        ((func_8022BC04_S3 *)(temp_s0))->unk10 = 0;
        func_80255CB8_de(&D_801010F8, (s32) temp_s0);
    }
}
