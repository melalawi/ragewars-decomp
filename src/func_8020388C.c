/* Installs a weapon record's handler table and routine pointers and, when its owner's id is 0x40C,
   clears its counters and sets its rate to 200 and its range and speed from D_800C6B2C and D_800C6B30. */
#include "basetypes.h"

struct Owner {
    char pad[0xE4];
    u16 id;
};

struct Record {
    char pad0[0x2C];
    void *table;
    char pad30[0x108 - 0x30];
    void *first;
    s32 pad10C;
    void *second;
    char pad114[0x11C - 0x114];
    void *third;
    void *fourth;
    f32 speed;
    s32 pad128;
    s32 rate;
    s32 a;
    f32 range;
    s32 b;
    s32 c;
};

extern char D_800CD3C0[];
extern void D_2039F8();
extern void D_203E78();
extern void D_202E4C();
extern void D_203DF0();
extern f32 D_800C6B2C;
extern f32 D_800C6B30;

void func_8020388C(struct Owner *owner, struct Record *record)
{
    record->table = D_800CD3C0;
    record->first = D_2039F8;
    record->second = D_203E78;
    record->third = D_202E4C;
    record->fourth = D_203DF0;
    if (owner->id == 0x40C) {
        record->a = 0;
        record->b = 0;
        record->fourth = D_203DF0;
        record->rate = 0xC8;
        record->c = 0;
        record->range = D_800C6B2C;
        record->speed = D_800C6B30;
    }
}
