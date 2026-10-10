#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80443868.h"
#include "types.h"

extern s32 func_8044972C_de(s32 arg0);

s32 func_8043DADC_de(void *arg0, MenuRules *arg1) {
    s32 x = 0;
    func_8044972C_de(arg1->locked);
    return 1;
}
