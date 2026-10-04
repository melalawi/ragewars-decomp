#include "span_1000/code_80233C78.h"
#include "span_1000/types.h"



/** Reset the word at 0x100 and enable the word at 0xFC. */
void func_8023940C_de(char *object) {
    ((func_802393FC_S1 *)(object))->unk100 = 0;
    ((func_802393FC_S1 *)(object))->unkFC = 1;
}
