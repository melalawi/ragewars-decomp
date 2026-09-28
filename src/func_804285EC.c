/* Rebuilds the weapon menu for the player D_800E4690 selects: clears it through func_804288E0, then
   for each of the 0x16 weapon ids (excluding id 0) whose owned flag in D_801462C8 (offset 0x11C,
   player stride 0x96) is set, appends a row through func_8042872C. */
#include "basetypes.h"

typedef struct {
    char pad0[0xA5C];
    s32 player;
} Screen;

typedef struct {
    char pad0[0x11C];
    u8 owned;
} Entry;

extern Screen *D_800E4690;
extern char D_801462C8[];
extern void func_804288E0(void);
extern void func_8042872C(s32 arg0, s32 arg1, s32 arg2);

void func_804285EC(void) {
    s32 count;
    s32 weapon;
    s32 base;

    func_804288E0();
    count = 0;
    base = D_800E4690->player * 0x96;
    for (weapon = 0; weapon < 0x16; weapon++) {
        if (((Entry *) (weapon + base + D_801462C8))->owned == 1) {
            if (weapon != 0) {
                func_8042872C(count, weapon, 0);
                count += 1;
            }
        }
    }
}
