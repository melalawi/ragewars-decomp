#include "common/types.h"
#include "span_16E000/code_8044D024.h"
#include "types.h"

/* Runs func_8044D054_de and func_8044D0F0_de on a large state block, then clears its word at offset
   0x1B444, sets the word at 0x1B448 to 0x15 and copies D_801462CC into the word at 0x1B44C. */

extern struct Shape_func_8021A2D4_de_2 D_8014220C;
extern void func_8044D054_de(char *);
extern void func_8044D0F0_de(char *);




void func_8044CFF8_de(char *state) {
    func_8044D054_de(state);
    func_8044D0F0_de(state);
    ((func_8044DC48_S1 *)(state))->unk1B444 = 0;
    ((func_8044DC48_S1 *)(state))->unk1B448 = 0x15;
    ((func_8044DC48_S1 *)(state))->unk1B44C = D_8014220C.field_0;
}
