#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80212C90.h"
#include "types.h"

void func_80212C90_de(void *arg0) {
    void *temp_s0;
    temp_s0 = (((struct func_80212828_S2 *) ((s8 *) ((struct func_8020A028_S3 *) ((s8 *) arg0))->unk1D8))->unk1454);
    (((struct Brain_func_80212D78_eu_x *) ((s8 *) temp_s0))->unk220) = 0;
    func_80209988_de(temp_s0);
    (((struct Brain_func_80212D78_eu_x *) ((s8 *) temp_s0))->unk2FC) = 0;
}

extern void *func_8022A83C_de(char *);
extern s32 func_80209874_de(void *, s32);
extern void func_80211020_de(void *);
extern void func_80209948_de(s32 *, s32);
extern void func_80208410_de(void *);
extern void func_80208EB0_de(s32 *);
extern char D_80145040;






void func_80212CC4_de(void *arg0) {
    s32 *rec;
    void *v0;

    rec = ((func_80212C04_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    v0 = func_8022A83C_de(&D_80145040);
    if (v0 == 0 || v0 != (void *) *rec) {
        func_80209874_de(rec, 2);
        return;
    }
    rec = ((func_80212C04_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    func_80211020_de(rec);
    func_80209948_de(rec, rec[3]);
    func_80208410_de(rec);
    func_80208EB0_de(rec);
}
