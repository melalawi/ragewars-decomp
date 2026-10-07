#include "span_1000/code_8028B64C.h"
#include "shared/func_8028C568_de_closed.h"

s32 func_8028C568_de(void *arg0, void *arg1) {
    void *rec;
    f32 val;
    s32 flag;

    rec = ((func_8028C544_S1 *)(arg0))->unk11EC.v0;
    if (rec != 0) {
        func_80255ED8_de(&((func_8028C544_S1 *)(arg0))->unk11EC.v1, (s32)rec);
        func_80255CB8_de(&((func_8028C544_S1 *)(arg0))->unk11D8, (s32) rec);
        ((func_8028C544_S2 *)(rec))->unk8 = arg1;
    } else {
        rec = ((func_8028C544_S1 *)(arg0))->unk11DC;
        func_80278C10_de(((func_8028C544_S2 *)(rec))->unk8);
        ((func_8028C544_S2 *)(rec))->unk8 = arg1;
    }
    val = recordValue((s32) ((func_8028C544_S3 *)(arg1))->unkC);
    ((func_8028C544_S2 *)(rec))->unkC = val;
    flag = ((func_8028C544_S3 *)(arg1))->unkE & 2;
    if (flag != 0) {
        ((func_8028C544_S2 *)(rec))->unkC = val * D_800C52E8_de;
    }
    return flag;
}
