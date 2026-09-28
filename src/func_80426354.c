/* Copies a player's enabled options into its option list: unless the player's info (at 0x5D8) is
   locked (byte 0x91 is 1) or absent (byte 0x78 is 0), each of the 22 option flags at 0x4C that is 1
   is recorded as the pair (1, value from 0x62) at 0x602 plus twice its index. */
typedef struct {
    char pad[0x4C];
    unsigned char enabled[22];
    unsigned char values[22];
    unsigned char present;
    char pad79[0x18];
    unsigned char locked;
} Info;

typedef struct {
    char pad[0x5D8];
    Info *info;
    char pad5DC[0x26];
    struct {
        unsigned char flag;
        unsigned char value;
    } options[22];
} Player;

void func_80426354(Player *p) {
    int i;

    if (p->info->locked != 1 && p->info->present != 0) {
        for (i = 0; i < 22; i++) {
            if (p->info->enabled[i] == 1) {
                p->options[i].flag = p->info->enabled[i];
                p->options[i].value = p->info->values[i];
            }
        }
    }
}
