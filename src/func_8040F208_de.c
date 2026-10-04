#include "common/types.h"
#include "span_16E000/code_8040EBC8.h"



/** Store a word at offset 0x2c. */
void func_8040F208_de(void *object, int value) {
    ((func_80205314_S2 *)(object))->unk2C = value;
}
