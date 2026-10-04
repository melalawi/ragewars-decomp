#include "span_16E000/code_8042ED84.h"
#include "span_16E000/types.h"
#include "types.h"



extern struct Status D_801422D8[];

extern s32 func_802744D4_de(void);

/* Draws a random item type from 0 to 10, redrawing types 0 and 5 while any of the eight active players already holds that type, and returns it. */
s32 func_8042EE94_de(void) {
    s32 type;
    s32 free;
    s32 i;
    s32 excl; /* FAKEMATCH: constant-holding local places the li of 5 */
    struct Status *players; /* FAKEMATCH: copy-only local, set inside the draw loop, steers the base register */

    do {
        type = func_802744D4_de() % 11;
        excl = 5;
        players = D_801422D8;
        do {
            free = 1;
        } while (0);
        if (type == 0 || type == excl) {
            for (i = 0; i < 8; i++) {
                if (players[i].active != 0 && players[i].kind == type) {
                    free = 0;
                }
            }
        }
    } while (free == 0);
    return type;
}