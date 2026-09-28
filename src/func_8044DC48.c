#include "basetypes.h"

/* Runs func_8044DCA4 and func_8044DD40 on a large state block, then clears its word at offset
   0x1B444, sets the word at 0x1B448 to 0x15 and copies D_801462CC into the word at 0x1B44C. */
extern s32 D_801462CC;
extern void func_8044DCA4(char *);
extern void func_8044DD40(char *);

void func_8044DC48(char *state) {
    func_8044DCA4(state);
    func_8044DD40(state);
    *(s32 *) (state + 0x1B444) = 0;
    *(s32 *) (state + 0x1B448) = 0x15;
    *(s32 *) (state + 0x1B44C) = D_801462CC;
}
