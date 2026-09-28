/** Reset a player for a new life: restore health, clear status timers and effects, and drop any carried object. */
typedef struct Flags {
    int bits;
} Flags;

typedef struct Carried {
    char pad0[0x100];
    int flags;
    char pad104[0x170 - 0x104];
    Flags state;
} Carried;

typedef struct Pair {
    signed char kind;
    signed char state;
} Pair;

typedef struct Player {
    char pad0[0x38];
    int moving;
    char pad3C[0x174 - 0x3C];
    int maxHealth;
    char pad178[0x5D4 - 0x178];
    int character;
    char pad5D8[0x5E4 - 0x5D8];
    int health;
    char pad5E8[0x5EA - 0x5E8];
    short state;
    char pad5EC[0x602 - 0x5EC];
    Pair effects[22];
    char pad62E[0x670 - 0x62E];
    float bob;
    char pad674[0x698 - 0x674];
    void *anim;
    char pad69C[0x11B4 - 0x69C];
    int field11B4;
    int field11B8;
    char pad11BC[0x11D8 - 0x11BC];
    int field11D8;
    char pad11DC[0x11E4 - 0x11DC];
    int field11E4;
    Carried *carried;
    int field11EC;
    char pad11F0[0x11FC - 0x11F0];
    int field11FC;
    char pad1200[0x1210 - 0x1200];
    int field1210;
    char pad1214[0x12C0 - 0x1214];
    float fade;
    char pad12C4[0x13C8 - 0x12C4];
    int field13C8;
    char pad13CC[0x13D4 - 0x13CC];
    int field13D4;
    int field13D8;
    int field13DC;
    int field13E0;
    int field13E4;
    char pad13E8[0x1450 - 0x13E8];
    int isBot;
    void *brain;
} Player;

extern float D_800C7428;
extern float D_800C742C;
extern unsigned char D_801462E5;

static inline int isOnline(void) {
    return D_801462E5;
}
extern unsigned int D_800D2980;
extern short D_800CF198[];
extern int D_80102B10[][100];
extern void func_8022B500(Player *);
extern void func_80264808(void *, int);
extern void func_802266E4(Player *);
extern void func_8021A78C(Player *);
extern int func_802934DC(void);
extern void func_8025E13C(int);
extern void func_8021AF6C(Player *);
extern void func_80208000(void *);
extern void func_80217388(Carried *, Flags *);
extern void func_80262CA8(Carried *);

static inline void releaseState(Carried *carried, Flags *state) {
    if (state != 0) {
        func_80217388(carried, state);
        state->bits |= 0x20;
    }
}

void func_8044A17C(Player *player) {
    int i;
    Carried *carried;

    func_8022B500(player);
    player->moving = 0;
    player->fade = D_800C7428;
    func_80264808(player->anim, 1);
    if (D_801462E5 != 0) {
        func_802266E4(player);
    } else {
        if (player->isBot == 0) {
            player->health = D_80102B10[player->character][0] + 0x6400;
        } else {
            player->health = 0x6400;
        }
        player->maxHealth = player->health;
    }
    player->bob = D_800C742C;
    func_8021A78C(player);
    player->field11D8 = 0;
    player->field11FC = 0;
    player->field13E0 = 0;
    player->field1210 = 0;
    player->field11EC = 0;
    player->field11E4 = 0;
    player->field13D8 = 0;
    player->field13DC = 0;
    player->field13E4 = 0;
    player->field13D4 = 0;
    if (func_802934DC() != 0 && D_801462E5 == 0 && D_800D2980 > 10 && player->state < 11) {
        func_8025E13C(D_800CF198[player->state]);
    }
    if (isOnline()) {
        func_8021AF6C(player);
    }
    player->field11B4 = 0;
    player->field11B8 = 0;
    player->field13C8 = 0;
    if (player->isBot != 0) {
        func_80208000(player->brain);
    }
    for (i = 1; i < 22; i++) {
        if (player->effects[i].state == 3 || player->effects[i].state == 7) {
            player->effects[i].kind = 0;
            player->effects[i].state = -1;
        }
    }
    carried = player->carried;
    if (carried != 0) {
        releaseState(carried, &carried->state);
        carried->flags &= ~0x2000;
        carried->flags &= ~0x100;
        func_80262CA8(player->carried);
        player->carried = 0;
    }
}
