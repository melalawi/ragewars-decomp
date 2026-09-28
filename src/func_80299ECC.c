#include "basetypes.h"

typedef struct Entry {
    void *object;
    s32 field4;
    s32 field8;
    s32 fieldC;
    s32 field10;
    s32 field14;
    s32 field18;
} Entry;

typedef struct Manager {
    s32 field0;
    s32 index;
    s32 lowIndex;
    Entry *entries;
} Manager;

extern Manager *D_8014D080;
extern void func_80298EA4(s32 arg0);
extern void func_8029AC80(void *arg0);
extern void func_80411E98(s16 arg0);

void func_80299ECC(void) {
    s32 index;

    if (D_8014D080->entries[D_8014D080->index].object != 0) {
        func_80298EA4(D_8014D080->entries[D_8014D080->index - 1].field4);
        func_8029AC80(&D_8014D080->entries[D_8014D080->index].fieldC);
        func_80411E98(*(s16 *)((char *)D_8014D080->entries[D_8014D080->index].object + 0xC));
    }
    D_8014D080->entries[D_8014D080->index].object = 0;
    D_8014D080->entries[D_8014D080->index].field4 = 0;
    D_8014D080->entries[D_8014D080->index].field8 = 0;
    index = D_8014D080->index - 1;
    D_8014D080->index = index;
    if (index < D_8014D080->lowIndex) {
        D_8014D080->lowIndex = index;
    }
}
