/* Points arg0's unk14 field at D_800D7688 or D_800D768C when the mode byte at 0x7B of the owner's record is 0 or 1, and returns 0. */
#include "basetypes.h"

typedef struct {
    char pad[0x7B];
    s8 mode;
} Record;

typedef struct {
    char pad[0x5D8];
    Record *record;
} Owner;

typedef struct {
    char pad[0x1C];
    Owner *owner;
} Menu;

typedef struct {
    char pad[0x14];
    void *unk14;
} Obj;

extern char D_800D7688;
extern char D_800D768C;

s32 func_8043E520(Obj *arg0, Menu *menu) {
    switch (menu->owner->record->mode) {
    case 0:
        arg0->unk14 = &D_800D7688;
        break;
    case 1:
        arg0->unk14 = &D_800D768C;
        break;
    }
    return 0;
}
