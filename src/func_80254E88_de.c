#include "common/types.h"
#include "span_1000/code_8025477C.h"
#include "types.h"

extern void func_80255ED8_de(void *, s32);
extern s32 func_80255CB8_de(void *, s32);
extern char D_8010110C;




void func_80254E88_de(s32 arg0, void *arg1) {
    func_80255ED8_de(&D_8010110C, arg1);
    ((func_8022BC04_S3 *)(arg1))->unk10 = 0;
    func_80255CB8_de((char *)&D_8010110C - 0x14, (s32) arg1);
}
