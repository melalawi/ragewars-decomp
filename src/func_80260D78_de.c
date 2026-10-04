#include "common/types.h"
#include "span_1000/code_80260D98.h"
#include "span_1000/types.h"





/** Store a scalar word, a three-word record by value, and a trailing scalar. */
void func_80260D78_de(void *arg0, int arg1, Triple t, int arg5) {
    ((func_80260C8C_S1 *)(arg0))->unk0 = arg1;
    ((func_80260C8C_S1 *)(arg0))->unk4 = t;
    ((func_80260C8C_S1 *)(arg0))->unk10 = arg5;
}
