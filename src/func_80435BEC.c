/* Handles a packed message for a player in D_800E54A4: when the player (low half) is in state 12, the
   message type (high half) is 3 and the argument is 4 or 5, moves the player to phase 2 with a zero
   timer; always returns 0. */
typedef struct {
    char pad[0x58];
    int state;
    char pad5C[0xBA0 - 0x5C];
    int phase;
    int timer;
} Player;

extern char *D_800E54A4;

int func_80435BEC(int unused0, int unused1, unsigned int message, int arg) {
    Player *p = (Player *)(D_800E54A4 + (message & 0xFFFF) * 0xB68);

    if (p->state == 12 && (message >> 16) == 3 && arg < 6 && arg >= 4) {
        p->timer = 0;
        p->phase = 2;
    }
    return 0;
}
