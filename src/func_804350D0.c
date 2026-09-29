#include "basetypes.h"

typedef struct {
    u8 ch;
    u8 unk1;
} Glyph;

typedef struct {
    u8 pad0[0xB4C];
    Glyph name[8];
    s32 cursor;
    u8 padB60[0x8];
} Entry;

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[0x24];
    s32 flags[5];
    Entry entries[1];
} Menu;

extern Menu *D_800E54A4;
extern void *func_8041B87C(s32, s32);

/* Steps the selected name character of an entry back by one, wrapping below the printable range to 'Z'. */
void func_804350D0(s32 arg0) {
    u8 value;

    D_800E54A4->flags[arg0] = 0;
    func_8041B87C(D_800E54A4->unk4, arg0);
    if (D_800E54A4->entries[arg0].name[D_800E54A4->entries[arg0].cursor].ch == 0) {
        D_800E54A4->entries[arg0].name[D_800E54A4->entries[arg0].cursor].ch = 0x41;
    }
    value = D_800E54A4->entries[arg0].name[D_800E54A4->entries[arg0].cursor].ch;
    value--;
    if (value < 0x20) {
        value = 0x5A;
    }
    D_800E54A4->entries[arg0].name[D_800E54A4->entries[arg0].cursor].ch = value;
}
