#include "span_1000/code_8024B644.h"
#include "span_1000/types.h"
#include "types.h"

extern void **func_8024BFD4_de(void *arg0, s32 arg1);
extern char *func_8028FDB4_de(int *arg0, int arg1);
extern void func_80253754_de(void *arg0, void *arg1);






s32 func_8024BE80_de(void *arg0) {
    void **temp_s0;
    char *temp_v0;
    s32 result;

    result = -1;
    temp_s0 = func_8024BFD4_de(arg0, ((func_8024BE70_S1 *)(arg0))->unk1);
    if (temp_s0 != 0) {
        temp_v0 = func_8028FDB4_de((int *)*temp_s0, 5);
        result = ((func_8024BE70_S2 *)(temp_v0))->unk6E;
        func_80253754_de(0, temp_s0);
    }
    return result;
}
