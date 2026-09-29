#include "basetypes.h"

/* Runs func_8044DCA4 and func_8044DD40 on a large state block, then clears its word at offset
   0x1B444, sets the word at 0x1B448 to 0x15 and copies D_801462CC into the word at 0x1B44C. */
typedef struct { s32 unk0; } func_8044DC48_G1;
extern func_8044DC48_G1 D_801462CC;
extern void func_8044DCA4(char *);
extern void func_8044DD40(char *);

typedef struct func_8044DC48_S1 func_8044DC48_S1;
struct func_8044DC48_S1 {
    char pad0[0x1B444];
    s32 unk1B444;
    char pad1B444[0x1B448 - 0x1B444 - sizeof(s32)];
    s32 unk1B448;
    char pad1B448[0x1B44C - 0x1B448 - sizeof(s32)];
    s32 unk1B44C;
};

void func_8044DC48(char *state) {
    func_8044DCA4(state);
    func_8044DD40(state);
    ((func_8044DC48_S1 *)(state))->unk1B444 = 0;
    ((func_8044DC48_S1 *)(state))->unk1B448 = 0x15;
    ((func_8044DC48_S1 *)(state))->unk1B44C = D_801462CC.unk0;
}
