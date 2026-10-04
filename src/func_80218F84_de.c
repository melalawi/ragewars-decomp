#include "span_1000/code_8021762C.h"



/** Reset a record and mark its word at offset 0x6C as invalid. */
void func_80218F84_de(void *record) {
    ((func_80218F84_S1 *)(record))->unk0 = 0;
    ((func_80218F84_S1 *)(record))->unk4 = 0;
    ((func_80218F84_S1 *)(record))->unk6C = -1;
    ((func_80218F84_S1 *)(record))->unk8 = 0;
}
