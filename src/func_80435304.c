/* Returns the index of the first of a player's four 400-byte entries in the game D_800E54A4 whose
   state byte at 0x7D is -1, or -1 when all are in use. */
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
int func_80435304(int player) {
    int result;
    int i;

    result = -1;
    for (i = 0; i < 4 && result == -1; i++) {
        if (D_800E54A4->players[player].entries[i].state == -1) {
            result = i;
        }
    }
    return result;
}
