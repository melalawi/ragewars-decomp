#include "basetypes.h"

/* Reports whether an item is available to the player: for item type 0x10FE its index 0-2 must be below the player's count at 0x64D and 3-5 (less three) below the count at 0x64E, and for type 0x1194 the player's flag byte at 0x644 for the index must be set; any other type or index gives zero. */
struct ItemDef {
    char pad[0x20];
    s16 type;
    s16 index;
};

struct Item {
    char pad[0x18];
    struct ItemDef *def;
};

struct Player {
    char pad[0x644];
    u8 flags[9];
    u8 count64D;
    u8 count64E;
};

struct Holder {
    char pad[0x1C];
    struct Player *player;
};

/* Reports whether an item is available to the player: indices 0-2 and 3-5 of type 0x10FE are checked against the player's two counts, type 0x1194 against its flag table. */
s32 func_8043F1B8(struct Item *item, struct Holder *holder) {
    struct ItemDef *def = item->def;
    s32 type = def->type;
    s32 index = def->index;
    struct Player *player = holder->player;
    s32 result = 0;

    switch (type) {
    case 0x10FE:
        if (index >= 0) {
            if (index < 3) {
                goto low;
            }
            if (index < 6) {
                goto high;
            }
            break;
        low:
            result = index < player->count64D;
            break;
        high:
            result = index - 3;
            result = result < player->count64E;
        }
        break;
    case 0x1194:
        result = player->flags[index] != 0;
        break;
    }
    return result;
}
