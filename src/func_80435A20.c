#include "basetypes.h"

/* When slot i of the 12-byte records at offset 0x2DF8 of the table D_800E54A4 points to is set,
   passes the 400-byte record i of D_80102B00 to func_8022EF20, marks the slot done with 2 and calls
   func_80433DA8 with -1. */
struct Slot {
    s32 first;
    s32 second;
    s32 set;
};

struct Table {
    char pad[0x2DF8];
    struct Slot slots[1];
};

struct Record {
    char data[400];
};

extern struct Table *D_800E54A4;
extern struct Record D_80102B00[];
extern void func_8022EF20(struct Record *);
extern void func_80433DA8(s32);

void func_80435A20(s32 index) {
    if (D_800E54A4->slots[index].set == 1) {
        func_8022EF20(&D_80102B00[index]);
        D_800E54A4->slots[index].set = 2;
        func_80433DA8(-1);
    }
}
