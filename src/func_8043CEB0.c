#include "../splat/types/shared/entry.h"
/* Shifts cheat input history left and decrements its counters when a character is deleted. */
#include "basetypes.h"

typedef Shared_Entry Entry;

extern s32 D_80154030;
extern Entry D_800E5CA0;

s32 func_8043CEB0(void) {
    s32 index;
    s32 next;

    D_80154030 = -1;
    D_800E5CA0.timer = 0;
    if (D_800E5CA0.count == 0) {
        return 0;
    }
    if (D_800E5CA0.value == 0) {
        return 0;
    }
    index = D_800E5CA0.value - 1;
    if (index < 0x17) {
        do {
            next = index + 1;
            D_800E5CA0.text[index] = D_800E5CA0.text[next];
            index = next;
        } while (index < 0x17);
    }
    D_800E5CA0.value--;
    D_800E5CA0.count--;
    return 0;
}
