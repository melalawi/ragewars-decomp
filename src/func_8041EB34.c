/* Counts the four player records whose byte 0x78 is one and returns 3, 2 or 1 for one, two or three such players, otherwise zero. */
#include "basetypes.h"

typedef struct {
    char pad0[0x78];
    u8 active;
    char pad79[0x96 - 0x79];
} Player;

extern Player D_80146398[];

s32 func_8041EB34(void) {
    s32 count;
    s32 i;
    s32 result;
    Player *player;

    count = 0;
    player = D_80146398;
    for (i = 0; i < 4; i++) {
        if (player[i].active == 1) {
            count++;
        }
    }
    result = 0;
    switch (count) {
    case 1:
        result = 3;
        break;
    case 2:
        result = 2;
        break;
    case 3:
        result = 1;
        break;
    }
    return result;
}
