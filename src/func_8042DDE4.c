/* Activates the requested player slots and creates any missing players when entering the screen. */
#include "basetypes.h"

typedef struct Screen {
    int window;
    char pad4[12];
    int state;
    char pad14[12];
    int count;
} Screen;

typedef struct Slot {
    char pad0[0x78];
    u8 active;
    char pad79[6];
    u8 index;
    char pad80[0x16];
} Slot;

extern Screen *D_800E5430;
extern Slot D_80146398[];
extern s8 D_80102B0D[];
extern void func_8029A73C(void);
extern void func_8041A4B0(int, int);
extern void func_8022F1F4(int);

int func_8042DDE4(void) {
    int i;
    Slot *slot;

    func_8029A73C();
    D_800E5430->state = 7;
    func_8041A4B0(D_800E5430->window, 2);
    for (i = 0; i < D_800E5430->count; i++) {
        slot = &D_80146398[i];
        slot->active = 1;
        slot->index = i;
        if (D_80102B0D[i * 400] < 0) {
            func_8022F1F4(i);
        }
    }
    return 0;
}
