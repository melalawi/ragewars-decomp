#include "common/types.h"
#include "span_1000/code_8022A8E0.h"


int func_80286728_de(void *a);

extern char D_8011BDC8[];




int func_8022AE28_de(void *arg0, void *arg1) {
    int flag;
    Triple *src;
    src = (Triple *)arg1;
    flag = func_80286728_de(D_8011BDC8);
    ((func_8022AE18_S1 *)(arg0))->unk8 = *src;
    ((func_8022AE18_S1 *)(arg0))->unk14 = flag;
    ((func_8022AE18_S1 *)(arg0))->unk2F0 = *src;
    ((func_8022AE18_S1 *)(arg0))->unk2FC = flag;
    return flag != 0;
}
