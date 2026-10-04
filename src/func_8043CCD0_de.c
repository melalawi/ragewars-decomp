#include "span_166000/code_80426234.h"
#include "types.h"





/* Shifts cheat input history left and decrements its counters when a character is deleted. */



extern s32 D_8014DDA0;
extern Shared_Entry D_800E1C50;

s32 func_8043CCD0_de(void) {
    s32 index;
    s32 next;

    D_8014DDA0 = -1;
    D_800E1C50.timer = 0;
    if (D_800E1C50.count == 0) {
        return 0;
    }
    if (D_800E1C50.value == 0) {
        return 0;
    }
    index = D_800E1C50.value - 1;
    if (index < 0x17) {
        do {
            next = index + 1;
            D_800E1C50.text[index] = D_800E1C50.text[next];
            index = next;
        } while (index < 0x17);
    }
    D_800E1C50.value--;
    D_800E1C50.count--;
    return 0;
}
