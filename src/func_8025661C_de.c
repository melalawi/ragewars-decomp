#include "common/types.h"
#include "span_1000/code_80256234.h"
#include "types.h"

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_80255ED8_de(void *, s32);
extern s32 func_80255CB8_de(void *, s32);







void *func_8025661C_de(void *arg0) {
    u32 temp_s2;
    void *temp_s0;

    temp_s2 = func_802BCF30_de();
    temp_s0 = ((func_8025663C_S1 *)(arg0))->unk5068.v0;
    if (temp_s0 != 0) {
        func_80255ED8_de(&((func_8025663C_S1 *)(arg0))->unk5068.v1, (s32) temp_s0);
        ((func_80204468_S3 *)(temp_s0))->unk14 = 1;
        func_80255CB8_de(&((func_8025663C_S1 *)(arg0))->unk507C, (s32) temp_s0);
    }
    func_802BCF50_de(temp_s2);
    return temp_s0;
}
