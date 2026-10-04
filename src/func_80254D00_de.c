#include "common/types.h"
#include "span_1000/code_8025477C.h"
#include "types.h"

extern void func_80254D44_de(s32 arg0, s32 arg1);



void func_80254D00_de(void) {
    s32 *p = &D_801005A8;
    func_80254D44_de(0, *p);
    D_80100598[*p] = 0;
}
