#include "span_16E000/code_8044D024.h"
#include "types.h"




/* Resets part of a large state block: sets its word at offset 0x1B410 to 2 and clears the words
   at 0x1B414 to 0x1B41C and 0x1B434 to 0x1B440. */
void func_8044D1B4_de(char *state) {
    ((func_8044DE04_S1 *)(state))->unk1B410 = 2;
    ((func_8044DE04_S1 *)(state))->unk1B414 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B418 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B41C = 0;
    ((func_8044DE04_S1 *)(state))->unk1B434 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B438 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B43C = 0;
    ((func_8044DE04_S1 *)(state))->unk1B440 = 0;
}
