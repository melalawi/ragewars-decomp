#include "basetypes.h"

#ifdef VERSION_EU_X
#define VV_03AB 0x3AF
#elif defined(VERSION_DE)
#define VV_03AB 0x3A5
#else
#define VV_03AB 0x3AB
#endif

/* Calls func_8040E958 with zero on the object at offset 0x20 of the structure D_800E4400 points
   to, and with one on the entry 0x3AB that func_8040ECB0 finds in the list at offset 8, then sets
   the word at offset 0x34. */
struct State {
    char pad0[8];
    void *list;
    char padC[0x20 - 0xC];
    void *object;
    char pad24[0x34 - 0x24];
    s32 ready;
};

extern struct State *D_800E4400;
extern void func_8040E958(void *, s32);
extern void *func_8040ECB0(void *, s32);

void func_804217EC(void) {
    func_8040E958(D_800E4400->object, 0);
    func_8040E958(func_8040ECB0(D_800E4400->list, VV_03AB), 1);
    D_800E4400->ready = 1;
}
