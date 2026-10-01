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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C59C0_4 = 1.0f;
const float unbake_rodata_800C59C4_4 = 1.0f;
const float unbake_rodata_800C59C8_4 = 1.0f;
const float unbake_rodata_800C59CC_4 = 1.0f;
const float unbake_rodata_800C59D0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC84_4 = 1.0f;
const float unbake_rodata_800CAC88_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C5790_8[] = {0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C57B4_4 = 0.75f;
const float unbake_rodata_800C57B8_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C5940_8 = 0.0;
const double unbake_rodata_800C5948_8 = 25.299999237060547;
const double unbake_rodata_800C5950_8 = 1.0;
const double unbake_rodata_800C5958_8 = 0.54930615425109863;
const double unbake_rodata_800C5960_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5968_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5970_8 = 1.0;
const double unbake_rodata_800C5978_8 = 1.4426950216293335;
const double unbake_rodata_800C5980_8 = 0.5;
const double unbake_rodata_800C5988_8 = 0.693359375;
const double unbake_rodata_800C5990_8 = 0.00021219444170128557;
const double unbake_rodata_800C5998_8 = 1.652032915444579e-05;
const double unbake_rodata_800C59A0_8 = 0.0069435997866094112;
const double unbake_rodata_800C59A8_8 = 0.00049586285604164004;
const double unbake_rodata_800C59B0_8 = 0.055553868412971497;
const double unbake_rodata_800C59B8_8 = 0.25;
const double unbake_rodata_800C59C0_8 = 1.0;
const double unbake_rodata_800C59C8_8 = 0.5;
const double unbake_rodata_800C59D0_8 = 2.300000051524975e-10;
const double unbake_rodata_800C59D8_8 = (-0.96437489986419678);
const double unbake_rodata_800C59E0_8 = 99.225929260253906;
const double unbake_rodata_800C59E8_8 = 1613.411865234375;
const double unbake_rodata_800C59F0_8 = 112.74474334716795;
const double unbake_rodata_800C59F8_8 = 2233.77197265625;
const double unbake_rodata_800C5A00_8 = 4840.23583984375;
const double unbake_rodata_800C5A08_8 = 0.0;
#endif
