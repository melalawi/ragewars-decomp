#include "basetypes.h"

/* Spawns the pickups of a level: between func_802458C8 and func_802458B4 it passes every item of both item tables whose kind is 1, 2, 4 or 10 to func_8028784C. */
typedef struct {
    char pad0[0x11];
    u8 kind;
    char pad12[2];
} Item;

typedef struct {
    char pad0[0x11C0];
    s32 counts[2];
    char pad11C8[8];
    Item *items[2];
} Level;

extern void func_802458C8(void);
extern void func_802458B4(void);
extern void func_8028784C(Level *, Item *);

void func_8044E2B8(Level *level) {
    s32 i;
    s32 n;
    Item *item;

    func_802458C8();
    n = level->counts[0];
    for (i = 0; i < n; i++) {
        item = &level->items[0][i];
        if (item->kind == 1 || item->kind == 4 || item->kind == 2 || item->kind == 10) {
            func_8028784C(level, item);
        }
    }
    n = level->counts[1];
    for (i = 0; i < n; i++) {
        item = &level->items[1][i];
        if (item->kind == 1 || item->kind == 4 || item->kind == 2 || item->kind == 10) {
            func_8028784C(level, item);
        }
    }
    func_802458B4();
}
