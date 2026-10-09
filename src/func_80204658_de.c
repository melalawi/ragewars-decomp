#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80203F04.h"
#include "types.h"

extern void func_80285DB0_de(void *, void *, s32);
extern void func_80278D78_de(void *arg0, s32 arg1, void *arg2);
extern void func_802A5D38_de(void *, s32);
extern s32 D_8011FE88;
extern s32 D_800C8270_de;
extern char D_801379C0;








void func_80204658_de(void *arg0) {
    void *temp_s1;
    s32 temp_v1;
    s32 masked;
    s32 *pFlag;

    temp_s1 = ((func_80204468_S2 *)(arg0))->unk18;
    pFlag = &D_8011FE88;
    func_80285DB0_de(pFlag, arg0, 1);
    if (D_800C8270_de == 0) {
        func_80278D78_de(arg0, 0x80000, arg0);
    }
    func_802A5D38_de(&D_801379C0, arg0);
    if (*pFlag != 4) {
        temp_v1 = ((func_80204468_S2 *)(arg0))->unk100 | 0x08000000;
        ((func_80204468_S2 *)(arg0))->unk100 = temp_v1;
        if (((func_80204468_S3 *)(temp_s1))->unk14 & 2) {
            masked = temp_v1 & ~0x2000;
            masked = masked & ~0x100;
            ((func_80204468_S2 *)(arg0))->unk100 = masked;
        }
        if (((func_80204620_S2 *)(((func_80204468_S2 *)(arg0))->unk18))->unk28 == 0) {
            ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 & ~0x100;
        }
    }
}
