#include "basetypes.h"

/* Rebuilds the item list for the player D_800E4690 selects: clears it through func_804288E0, looks
   up that player's model in D_8011FE88, and for each of the model's eight slot ids at 0x4C that is
   at least 0x4C3 adds the nonzero id less 0x4C3 as the next row through func_8042872C when
   func_8022F4CC accepts it for the player's 400-byte record in D_80102B00. */

struct Screen {
    char pad[0xA5C];
    s32 player;
};

struct Model {
    char pad[0x4C];
    s32 slots[8];
};

extern struct Screen *D_800E4690;
extern s8 D_80146418[];
extern char D_80102B00[];
extern s32 D_8011FE88;
extern void func_804288E0(void);
extern struct Model *func_8028CF7C(void *, s32, s32);
extern s32 func_8022F4CC(char *, s32);
extern void func_8042872C(s32, s32, s32);

void func_804284E0(void) {
    struct Model *model;
    s32 player;
    s32 id;
    s32 row;
    s32 i;

    func_804288E0();
    player = D_800E4690->player;
    model = func_8028CF7C(&D_8011FE88, 0xB, D_80146418[player * 150]);
    row = 0;
    for (i = 0; i < 8; i++) {
        id = model->slots[i];
        if (id >= 0x4C3) {
            id -= 0x4C3;
            if (func_8022F4CC(&D_80102B00[player * 400], id) == 1 && id != 0) {
                func_8042872C(row, id, 0);
                row++;
            }
        }
    }
}
