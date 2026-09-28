/* Reports every set entry of each ready slot to the handler, stopping after two slots. */
#include "basetypes.h"

typedef struct {
    u8 flags[0x16];
    u8 unk16[0x16];
    u8 ready;
    u8 pad2D[0x96 - 0x2D];
} Slot;

typedef struct {
    u8 pad0[0x11C];
    Slot slots[4];
} State;

extern State D_801462C8;
extern void func_8042872C(s32, s32, s32);

void func_804283F4(void) {
    State *st;
    s32 n;
    s32 k;
    s32 i;
    State *base;
    s32 j;

    k = 0;
    st = &D_801462C8;
    for (n = 0; n < 4; n++) {
        if (st->slots[n].ready == 1) {
            j = 0;
            for (i = 0; i < 0x16; i++) {
                if (((base = &D_801462C8)->slots[n].flags[i] == 1) && (i != 0)) {
                    func_8042872C(j, i, k);
                    j++;
                }
            }
            k++;
            if (k >= 2) {
                return;
            }
        }
    }
}
