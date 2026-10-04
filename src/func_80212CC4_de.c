#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
#include "types.h"

extern void *func_8022A83C_de(char *);
extern s32 func_80209874_de(void *, s32);
extern void func_80211020_de(void *);
extern void func_80209948_de(s32 *, s32);
extern void func_80208410_de(void *);
extern void func_80208EB0_de(s32 *);
extern char D_80140F80;






void func_80212CC4_de(void *arg0) {
    s32 *rec;
    void *v0;

    rec = ((func_80212C04_S2 *)(((func_8020A028_S3 *)(arg0))->unk1D8))->unk1454;
    v0 = func_8022A83C_de(&D_80140F80);
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
