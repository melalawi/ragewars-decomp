#include "common/types.h"
#include "span_1000/code_8025477C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_801010F8;
extern void func_80255ED8_de(void *, s32);
extern s32 func_80255CB8_de(void *, s32);






void *func_80254E30_de(void) {
    void **p = &D_801010F8;
    void *temp_s0 = *p;
    if (temp_s0 != 0) {
        func_80255ED8_de(p, (s32) temp_s0);
        ((func_8022BC04_S3 *)(temp_s0))->unk10 = 1;
        func_80255CB8_de(&((func_80203908_S2 *)(p))->unk14, (s32) temp_s0);
    }
    return temp_s0;
}
