/* Returns 1 when all four of a player's 400-byte entries in the game D_800E54A4 have state byte -1 at
   0x7D, stopping with 0 at the first in use. */
typedef struct {
    char pad[0x7D];
    signed char state;
    char pad7E[0x190 - 0x7E];
} Entry;

typedef struct {
    Entry entries[4];
    char pad[0xB68 - 0x640];
} Player;

typedef struct { Player players[4]; } Game;
extern Game *D_800E54A4;
int func_80435360(int player) {
    int result;
    int i;

    result = 1;
    for (i = 0; i < 4 && result == 1; i++) {
        if (D_800E54A4->players[player].entries[i].state != -1) {
            result = 0;
        }
    }
    return result;
}
