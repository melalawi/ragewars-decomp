#include "common/types.h"
#include "span_1000/code_8025477C.h"
extern int D_80101180;

extern void func_80255FB8_de(void *arg0);




void func_80254DA4_de(void *arg0, void *arg1) {
    int *p = &D_80101180;
    ((func_8022BC04_S3 *)(arg1))->unk10 = *p;
    func_80255FB8_de((char *)p - 0xC10);
}
