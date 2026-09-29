#include "basetypes.h"

typedef struct func_8044DE04_S1 func_8044DE04_S1;
struct func_8044DE04_S1 {
    char pad0[0x1B410];
    s32 unk1B410;
    char pad1B410[0x1B414 - 0x1B410 - sizeof(s32)];
    s32 unk1B414;
    char pad1B414[0x1B418 - 0x1B414 - sizeof(s32)];
    s32 unk1B418;
    char pad1B418[0x1B41C - 0x1B418 - sizeof(s32)];
    s32 unk1B41C;
    char pad1B41C[0x1B434 - 0x1B41C - sizeof(s32)];
    s32 unk1B434;
    char pad1B434[0x1B438 - 0x1B434 - sizeof(s32)];
    s32 unk1B438;
    char pad1B438[0x1B43C - 0x1B438 - sizeof(s32)];
    s32 unk1B43C;
    char pad1B43C[0x1B440 - 0x1B43C - sizeof(s32)];
    s32 unk1B440;
};

/* Resets part of a large state block: sets its word at offset 0x1B410 to 2 and clears the words
   at 0x1B414 to 0x1B41C and 0x1B434 to 0x1B440. */
void func_8044DE04(char *state) {
    ((func_8044DE04_S1 *)(state))->unk1B410 = 2;
    ((func_8044DE04_S1 *)(state))->unk1B414 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B418 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B41C = 0;
    ((func_8044DE04_S1 *)(state))->unk1B434 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B438 = 0;
    ((func_8044DE04_S1 *)(state))->unk1B43C = 0;
    ((func_8044DE04_S1 *)(state))->unk1B440 = 0;
}
