#include "span_1000/code_80258760.h"



/** Return the indexed twelve-byte record from the table at offset 0x2B70. */
char *func_80258BC4_de(char *object, int index) {
    return ((func_80258BE4_S1 *)(object))->unk2B70 + index * 12;
}
