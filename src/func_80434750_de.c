#include "span_16E000/code_8042ED84.h"
#include "span_16E000/types.h"
/* Returns the first of the four players in D_800E54A4 whose state at 0x58 is 14, provided every player
   is idle (0), finished (17) or in state 14; otherwise, or when none is in state 14, returns -1. */


extern Player_func_80434750_de *D_800E1454_de;

int func_80434750_de(void) {
    int i;
    int state;

    for (i = 0; i < 4; i++) {
        state = D_800E1454_de[i].state;
        if (state != 0 && state != 17 && state != 14) {
            return -1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_800E1454_de[i].state == 14) {
            return i;
        }
    }
    return -1;
}
