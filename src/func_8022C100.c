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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C7290_60[] = {0x002AEBB0U, 0x002AF018U, 0x002AEDBCU, 0x002AF018U, 0x002AF018U, 0x002AEBE0U, 0x002AEC28U, 0x002AEDD0U, 0x002AF030U, 0x002AEBC0U, 0x002AEDE4U, 0x002AF030U, 0x002AEF68U, 0x002AEF84U, 0x002AEFDCU, 0x002AEE3CU, 0x002AEE5CU, 0x002AEEC8U, 0x002AF030U, 0x002AF030U, 0x002AF030U, 0x002AEDBCU, 0x002AEC84U, 0x002AED38U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CC5C0_60[] = {0x002B3D50U, 0x002B41B8U, 0x002B3F5CU, 0x002B41B8U, 0x002B41B8U, 0x002B3D80U, 0x002B3DC8U, 0x002B3F70U, 0x002B41D0U, 0x002B3D60U, 0x002B3F84U, 0x002B41D0U, 0x002B4108U, 0x002B4124U, 0x002B417CU, 0x002B3FDCU, 0x002B3FFCU, 0x002B4068U, 0x002B41D0U, 0x002B41D0U, 0x002B41D0U, 0x002B3F5CU, 0x002B3E24U, 0x002B3ED8U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C62D0_1C[] = {0x002A8D30U, 0x002A8D40U, 0x002A8D70U, 0x002A8D50U, 0x002A8D60U, 0x002A8D60U, 0x002A8D70U};
const float unbake_rodata_800C62EC_4 = 24.0f;
const float unbake_rodata_800C62F0_4 = 12.0f;
const float unbake_rodata_800C62F4_4 = 6.0f;
const float unbake_rodata_800C62F8_4 = 16.0f;
const float unbake_rodata_800C62FC_4 = 8.0f;
const float unbake_rodata_800C6300_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6274_4 = 0.00100000005f;
const float unbake_rodata_800C6278_4 = 0.00999999978f;
const float unbake_rodata_800C627C_4 = 0.100000001f;
const float unbake_rodata_800C6280_4 = 13.0f;
const float unbake_rodata_800C6284_4 = 13.0f;
const float unbake_rodata_800C6288_4 = 1.0f;
const float unbake_rodata_800C628C_4 = 0.699999988f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C622C_4 = 1.0f;
const double unbake_rodata_800C6230_8 = 4294967296.0;
const float unbake_rodata_800C6238_4 = 1.0f;
const float unbake_rodata_800C623C_4 = 1.0f;
#endif
