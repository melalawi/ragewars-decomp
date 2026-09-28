/** Check whether a human player in mode 1 may select a weapon; when refused play the refusal sound and post a notice. */
typedef struct Player {
    char pad0[0x5D4];
    int character;
    char pad5D8[4];
    void *hud;
    char pad5E0[0x62E - 0x5E0];
    short weapon;
    char pad630[0x11D8 - 0x630];
    float shield;
    char pad11DC[0x1450 - 0x11DC];
    int isBot;
} Player;

typedef struct Rules {
    char pad0[0xD];
    unsigned char mode;
} Rules;

extern Rules D_801462C8;
extern char D_80102B00[][0x190];
extern float D_800C8100;
extern int D_800D70E8;
extern int func_8022F54C(char *, int);
extern void func_8025DF54(int);
extern int func_8022A590(void *, Player *);
extern void func_802398F8(void *, void *, int, int, float);

int func_802327E4(Player *player) {
    Rules *rules;
    int result;

    if (player->shield > 0.0f) {
        return 0;
    }
    if (player->isBot != 0) {
        return 1;
    }
    rules = &D_801462C8;
    if (rules->mode != 1) {
        return 1;
    }
    result = func_8022F54C(D_80102B00[player->character], player->weapon);
    if (result == 0) {
        func_8025DF54(0xD4D);
        if (player->hud != 0) {
            func_802398F8((char *)rules - 0x1240, player->hud, D_800D70E8,
                          func_8022A590((char *)rules - 0x1288, player), D_800C8100);
        }
    }
    return result;
}
