#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80213ED4.h"
#include "types.h"

s32 func_80274020_de(void *);
void func_80217074_de(void *arg0, f32 arg1) {
    (((struct func_80203908_S4 *) ((s8 *) arg0))->unk6C) = (f32) ((((struct func_80203908_S4 *) ((s8 *) arg0))->unk6C) + arg1);
    func_80274020_de(arg0 + 0x6C);
}
