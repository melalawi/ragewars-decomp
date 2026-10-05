#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802022E0.h"
#include "types.h"

extern s32 D_8011BDC8;
extern f32 D_800C1A40_de[];

extern s32 func_80285F58_de(void *, void *);
extern s32 func_80214178_de(void *, void *, s32);











void func_80203908_de(void *arg0, void *arg1) {
    s32 flags;
    void *record;

    record = &((func_80203908_S2 *)(((func_80203908_S1 *)(arg0))->unk18))->unk14;
    if (((func_80203908_S1 *)(arg0))->unkE4 == 0x40C) {
        ((func_80203908_S3 *)(arg1))->unk124.v0 = D_800C1A40_de[1];
    } else {
        ((func_80203908_S3 *)(arg1))->unk124.v1 = 0;
    }
    ((func_80203908_S3 *)(arg1))->unk128 = 0;
    ((func_80203908_S3 *)(arg1))->unk64 = ((func_80203908_S4 *)(record))->unk6C;

    if (func_80285F58_de(&D_8011BDC8, arg0) == 0) {
        if (*(s32 *)record & 0x1000) {
            flags = ((func_80203908_S1 *)(arg0))->unk100 & ~0x2000;
            flags = flags & ~0x100;
            ((func_80203908_S1 *)(arg0))->unk100 = flags;
        }
        if (*(s32 *)record & 0x800) {
            ((func_80203908_S1 *)(arg0))->unk100 =
                ((func_80203908_S1 *)(arg0))->unk100 & ~0x100;
            func_80214178_de(arg0, arg1, 0);
        } else {
            func_80214178_de(arg0, arg1, 1);
        }
    } else {
        func_80214178_de(arg0, arg1, 0x40);
    }
    ((func_80203908_S3 *)(arg1))->unk37 = 0;
}
