#include "span_1000/code_80245804.h"
#include "span_1000/types.h"
/** Clear the word at offset 0x100 in the active object. */
extern char *D_800DE7E0;




void func_80245A10_de(void) {
    char *base = D_800DE7E0;
    ((func_80203C40_S1 *)(base))->unk100 = 0;
}
