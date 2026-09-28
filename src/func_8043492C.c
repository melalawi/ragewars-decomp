/* Returns the first of the four players in D_800E54A4 whose state at 0x58 is 14, provided every player
   is idle (0), finished (17) or in state 14; otherwise, or when none is in state 14, returns -1. */
typedef struct {
    char pad[0x58];
    int state;
    char pad5C[0xB68 - 0x5C];
} Player;

extern Player *D_800E54A4;

int func_8043492C(void) {
    int i;
    int state;

    for (i = 0; i < 4; i++) {
        state = D_800E54A4[i].state;
        if (state != 0 && state != 17 && state != 14) {
            return -1;
        }
    }
    for (i = 0; i < 4; i++) {
        if (D_800E54A4[i].state == 14) {
            return i;
        }
    }
    return -1;
}
