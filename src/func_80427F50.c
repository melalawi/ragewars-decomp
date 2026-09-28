#include "basetypes.h"

/* Grants unowned unlocks for the completed game using its mode and player kind; an unsigned local carries the globals address before the category value to preserve register scheduling, and the default kind calls the table selector directly. */

struct Status {
    char pad0[0x80];
    s8 kind;
    char pad81[150 - 0x81];
};

struct Globals {
    char pad0[0xD];
    u8 mode;
    char padE[0xD0 - 0xE];
    struct Status status[8];
};

struct Screen {
    char pad0[0xA5C];
    s32 player;
    char padA60[0xA74 - 0xA60];
    u8 owned[0xA79 - 0xA74];
    u8 unlocked[1];
};

struct Table {
    u8 pad0;
    u8 first;
    u8 items[3];
};

extern struct Globals D_801462C8;
extern struct Screen *D_800E4690;
extern s8 D_80146418[];
extern struct Table *func_80425E50(void *, s32, s32);
extern s32 func_80265670(u8 *, s32);
extern void func_802656A8(u8 *, s32, s32);

void func_80427F50(void *arg0) {
    struct Globals *globals;
    struct Table *table;
    unsigned int category;
    s32 kind;
    s32 value;
    s32 i;

    category=(unsigned int)&D_801462C8;
    globals=(struct Globals *)category;
    switch (globals->mode) {
    case 1:
        kind = globals->status[D_800E4690->player].kind;
        category = 0;
        break;
    case 2:
        category = 1;
        kind = 0;
        break;
    case 3:
        category = 3;
        kind = 0;
        break;
    case 4:
        category = 2;
        kind = 0;
        break;
    default:
        kind = D_80146418[D_800E4690->player * 150];
        table = func_80425E50(arg0,0,kind);
        goto selected;
        break;
    }
    table = func_80425E50(arg0, category, kind);
selected:
    if ((value = table->first) > 0) {
        
        if (func_80265670(D_800E4690->owned, value-1) == 0) {
            func_802656A8(D_800E4690->unlocked, value-1, 1);
        }
    }
    for (i = 0; i < 3; i++) {
        if ((value = table->items[i]) > 0) {
            
            if (func_80265670(D_800E4690->owned, value-1) == 0) {
                func_802656A8(D_800E4690->unlocked, value-1, 1);
            }
        }
    }
}
