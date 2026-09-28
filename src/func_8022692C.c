/** Allocate and clear the player array and its per-player state blocks, linking each player to its block. */
extern char D_800C7C58[];
extern void **func_802533DC(int, int, int, char *);
extern void func_802A101C(void *, int, int);

typedef struct Player {
    char pad0[0x1454];
    char *state;
    char pad1458[0x16E8 - 0x1458];
} Player;

typedef struct PlayerList {
    void **handle;
    Player *players;
    int count;
} PlayerList;

void func_8022692C(PlayerList *list, int count) {
    int playerSize = count * sizeof(Player);
    int stateSize = count * 0x330;
    char *states;
    void **handle;
    int i;

    handle = func_802533DC(0, playerSize + stateSize, 0x23, D_800C7C58);
    list->handle = handle;
    list->count = count;
    list->players = *handle;
    states = (char *)list->players + playerSize;
    func_802A101C(list->players, 0, playerSize);
    func_802A101C(states, 0, stateSize);
    for (i = 0; i < count; i++) {
        list->players[i].state = states + i * 0x330;
    }
}
