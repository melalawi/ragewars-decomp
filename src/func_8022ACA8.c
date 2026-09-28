/** Return the capacity for an item slot: the player's own value, or in mode 1 the base value plus the character's bonus. */
typedef struct Character {
    char pad0[0x14];
    unsigned char bonus2;
    unsigned char bonus0;
    unsigned char bonus1;
    char pad17[0x190 - 0x17];
} Character;

typedef struct Loadout {
    char pad0[0x108];
    int capacity[1];
} Loadout;

typedef struct Player {
    char pad0[0x18];
    Loadout *loadout;
    char pad1C[0x5D4 - 0x1C];
    int character;
    char pad5D8[0x1450 - 0x5D8];
    int isBot;
} Player;

extern unsigned char D_801462D5;
extern int D_800CE3E8[];
extern Character D_80102B00[];

int func_8022ACA8(Player *player, int slot) {
    int value;

    if (slot == -1) {
        return 0;
    }
    if (D_801462D5 != 1) {
        value = player->loadout->capacity[slot];
    } else {
        value = D_800CE3E8[slot];
        if (player->isBot == 0) {
            if (slot == 0) {
                value += D_80102B00[player->character].bonus0;
            } else if (slot == 1) {
                value += D_80102B00[player->character].bonus1;
            } else if (slot == 2) {
                value += D_80102B00[player->character].bonus2;
            }
        }
    }
    return value;
}
