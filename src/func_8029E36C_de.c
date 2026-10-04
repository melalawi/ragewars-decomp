#include "span_1000/code_8029F304.h"
#include "span_1000/types.h"
#include "types.h"






/** Scale a 3-vector (arg1) by a scalar (arg2), store into arg0. */
void func_8029E36C_de(void *arg0, void *arg1, f32 arg2) {
    ((func_8024C864_S1 *)(arg0))->unk0 = ((func_8024C864_S1 *)(arg1))->unk0 * arg2;
    ((func_8024C864_S1 *)(arg0))->unk4 = ((func_8024C864_S1 *)(arg1))->unk4 * arg2;
    ((func_8024C864_S1 *)(arg0))->unk8 = ((func_8024C864_S1 *)(arg1))->unk8 * arg2;
}
