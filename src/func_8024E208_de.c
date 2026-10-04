#include "span_1000/code_8024DF4C.h"
#include "types.h"

/* Reports whether an actor's current state counts as active: states 1 and 5 always do, and state 11 does for a live mirrored actor whose controller flag at 0x80C is set or for which func_80245798_de agrees. */

extern s32 func_80245798_de(char *actor);




s32 func_8024E208_de(char *actor)
{
    switch (*((ObjectLinks1DC_4 *)(actor))->unk_18) {
    case 1:
    case 5:
        return 1;
    case 11:
        if (*(u8 *)actor != 1) {
            return 0;
        }
        if (!(((ObjectLinks1DC_4 *)(actor))->unk_100 & 0x300000)) {
            return 0;
        }
        if (((struct IntegerState810 *) ((ObjectLinks1DC_4 *) actor)->unk_1D8)->unk_80C != 0 || func_80245798_de(actor) != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
