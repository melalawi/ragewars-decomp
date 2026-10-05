#include "span_1000/code_8025C544.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);










void func_8025D350_de(void *arg0, s32 arg1) {
    f64 var_f2;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_8028FDB4_de(((Bank *)(*(void **)arg0))->songs, arg1 * 2);
    temp_v0_2 = ((func_8025D370_S2 *)(temp_v0))->unk0;
    var_f2 = (f64) temp_v0_2;
    if (temp_v0_2 < 0) {
        var_f2 += D_800C3FB8_de;
    }
    ((func_8025D370_S3 *)(arg0))->unk20 = (f32) var_f2 * D_800C3FC0_de;
    ((func_8025D370_S3 *)(arg0))->unk24 = (f32) ((func_8025D370_S2 *)(temp_v0))->unk4;
    func_8028FDB4_de(((Bank *)(*(void **)arg0))->songs, (arg1 * 2) | 1);
}
