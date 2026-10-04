#include "common/types.h"
#include "span_1000/code_80260D98.h"





/** Store a scalar word plus a three-word record by value. */
void func_80260ECC_de(void *arg0, int arg1, Triple t) {
    ((func_80260EEC_S1 *)(arg0))->unk0 = arg1;
    ((func_80260EEC_S1 *)(arg0))->unk4 = t;
}
