#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80206258.h"
extern void func_802065C0_de(void *a, void *b, unsigned short c);
extern void func_802472F0_de(void *arg0);
extern char D_8011BDC8[];
extern void func_80285DB0_de(char *a, void *b, int c);






void func_8020676C_de(void *arg0, void *arg1, void *arg2) {
    func_802065C0_de(arg0, arg1, ((func_8020676C_S1 *)(arg2))->unk6);
    ((func_80203C40_S1 *)(arg0))->unk100 = ((func_80203C40_S1 *)(arg0))->unk100 | 0x2100;
    func_802472F0_de(arg0);
    func_80285DB0_de(D_8011BDC8, arg0, 0);
}
