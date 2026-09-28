/* Confirms a player's character choice and, once no player is still choosing, fills the match roster and starts the game; scheduler lever: the block-scoped match pointer inside the roster loop places the hoisted match address after the loop constants, as the cartridge does. */
typedef struct {
    int choice;
    int state;
    unsigned char variant[4];
    char pad0C[4];
    char preview[0x4A8];
    int confirmed;
    char pad4BC[0xC];
} SelectEntry;

typedef struct {
    void *screen;
    void *menu;
    char pad08[8];
    SelectEntry entries[8];
} SelectMenu;

typedef struct {
    char pad00[0x78];
    unsigned char active;
    char pad79[6];
    unsigned char player;
    unsigned char kind;
    unsigned char variant;
    char pad82[0xF];
    unsigned char locked;
    char pad92[4];
} RosterSlot;

typedef struct {
    char pad00[0xD];
    unsigned char mode;
    char pad0E[0xC2];
    RosterSlot slots[8];
} Match;

extern SelectMenu *D_800E42D0;
typedef struct {
    unsigned short id;
    unsigned short pad;
} PreviewPart;

extern PreviewPart D_800E42EE[][9];
extern Match D_801462C8;
extern unsigned char D_80102B0F[];

extern void func_8041B834(void *, int, int);
extern void *func_8040ECB0(void *, int);
extern void func_8040E958(void *, int);
extern void func_8041F1FC(int);
extern void func_8041CE80(void *, int);
extern int func_8041F248(int);
extern void func_80299368(int);

void func_80420688(int player, int choice) {
    int i;
    int j;
    int count;
    RosterSlot *slot;
    int kind;

    D_800E42D0->entries[player].state = 3;
    func_8041B834(D_800E42D0->menu, player, 1);
    D_800E42D0->entries[player].confirmed = 1;
    for (i = 0; i < 3; i++) {
        func_8040E958(func_8040ECB0(D_800E42D0->screen, D_800E42EE[player][i].id), 1);
    }
    D_800E42D0->entries[player].choice = choice;
    func_8041F1FC(choice);
    func_8041CE80(D_800E42D0->entries[player].preview, 0);

    count = 0;
    for (j = 0; j < 4; j++) {
        if (D_800E42D0->entries[j].state == 1 || D_800E42D0->entries[j].state == 2) {
            count++;
        }
    }
    if (count != 0) {
        return;
    }

    slot = D_801462C8.slots;
    for (i = 0; i < 8; i++) {
        slot[i].active = 0;
        if (D_800E42D0->entries[i].state == 3) {
            slot[i].locked = 0;
            slot[i].active = 1;
            slot[i].player = i;
            kind = func_8041F248(D_800E42D0->entries[i].choice);
            slot[i].kind = kind;
            {
                Match *match = &D_801462C8;

                if (match->mode == 1) {
                    D_80102B0F[i * 0x190] = kind;
                }
            }
            slot[i].variant = D_800E42D0->entries[i].variant[3];
        }
    }
    func_80299368(D_801462C8.mode == 1 ? 10 : 8);
}
