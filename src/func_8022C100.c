/** Set up a player's starting lives from the game mode and character, then reset its respawn state. */
typedef struct Info {
    char pad0[0x80];
    signed char character;
} Info;

typedef struct Player {
    char pad0[0x5D4];
    int character;
    Info *info;
    char pad5DC[0x5EA - 0x5DC];
    short state;
    char pad5EC[0x133C - 0x5EC];
    int lives;
    char pad1340[0x13C8 - 0x1340];
    int timer;
    char pad13CC[0x1450 - 0x13CC];
    int isBot;
} Player;

typedef struct Rules {
    char pad0[0xD];
    unsigned char mode;
    char padE[0x1D - 0xE];
    unsigned char started;
} Rules;

typedef struct Preset {
    char pad0[0x28];
    unsigned char lives;
} Preset;

extern Rules D_801462C8;
extern Preset *D_800E4680;
extern char D_80102B00[][0x190];
extern unsigned char func_8022F444(char *, int);

void func_8022C100(Player *player) {
    short state;

    if (D_801462C8.started != 0) {
        if (D_801462C8.mode == 1 && player->isBot == 0) {
            player->lives = (unsigned char)func_8022F444(D_80102B00[player->character], player->info->character) / 2 + 1;
        }
        if (D_801462C8.mode == 4 && player->isBot == 0 && D_800E4680 != 0) {
            player->lives = D_800E4680->lives;
        }
        state = 1;
    } else {
        state = 3;
    }
    player->state = state;
    player->timer = 0;
}
