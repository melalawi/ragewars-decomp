#include "basetypes.h"

typedef struct {
    char pad0[0x78];
    u8 active;
    char pad79[0x80 - 0x79];
    s8 item;
    char pad81[0x96 - 0x81];
} Player;

extern Player D_80146398[];

extern s32 func_80274544(void);

/* Draws a random item type from 0 to 10, redrawing types 0 and 5 while any of the eight active players already holds that type, and returns it. */
s32 func_8042F074(void) {
    s32 type;
    s32 free;
    s32 i;
    s32 excl; /* FAKEMATCH: constant-holding local places the li of 5 */
    Player *players; /* FAKEMATCH: copy-only local, set inside the draw loop, steers the base register */

    do {
        type = func_80274544() % 11;
        excl = 5;
        players = D_80146398;
        do {
            free = 1;
        } while (0);
        if (type == 0 || type == excl) {
            for (i = 0; i < 8; i++) {
                if (players[i].active != 0 && players[i].item == type) {
                    free = 0;
                }
            }
        }
    } while (free == 0);
    return type;
}