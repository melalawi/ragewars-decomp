#include "common/types.h"
#include "span_16E000/code_8043EEC0.h"
#include "types.h"

/* Reports whether an item is available to the player: for item type 0x10FE its index 0-2 must be below the player's count at 0x64D and 3-5 (less three) below the count at 0x64E, and for type 0x1194 the player's flag byte at 0x644 for the index must be set; any other type or index gives zero. */








/* Reports whether an item is available to the player: indices 0-2 and 3-5 of type 0x10FE are checked against the player's two counts, type 0x1194 against its flag table. */
s32 func_8043F048_de(struct Item_func_8043F048_de *item, struct Holder_func_8043F048_de *holder) {
    struct ItemDef *def = item->def;
    s32 type = def->type;
    s32 index = def->index;
    struct Player_func_8043F048_de *player = holder->player;
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
