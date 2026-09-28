/* Hides every model named by the sixty-four 12-byte entries of D_800E4A84: for each entry it looks
   up the first and second identifier in the current screen's context at 0x970 through func_8040ECB0
   and disables the object with func_8040E958, and does the same for the third identifier unless it
   is -1. The identifiers are passed as their low halfword, and the loop walks a manual byte offset
   so the table address is not hoisted. */
#include "basetypes.h"

struct Pair {
    s32 a;
    s32 b;
    union {
        s32 id;
        struct {
            u16 high;
            u16 low;
        } half;
    } c;
};

struct Screen {
    char pad0[0x970];
    s32 context;
};

extern struct Pair D_800E4A84[];
extern struct Screen *D_800E4690;
extern void *func_8040ECB0(s32, s32);
extern void func_8040E958(void *, s32);

#define ENTRY(off) ((struct Pair *)((u8 *)D_800E4A84 + (off)))

void func_804275B4(void) {
    s32 missing;
    s32 offset;
    s32 i;

    i = 0;
    missing = -1;
    offset = i;
loop:
    func_8040E958(func_8040ECB0(D_800E4690->context, ENTRY(offset)->a & 0xFFFF), 0);
    func_8040E958(func_8040ECB0(D_800E4690->context, ENTRY(offset)->b & 0xFFFF), 0);
    if (ENTRY(offset)->c.id != missing) {
        func_8040E958(func_8040ECB0(D_800E4690->context, ENTRY(offset)->c.half.low), 0);
    }
    i += 1;
    offset += 0xC;
    if (i < 0x40) {
        goto loop;
    }
}
