#include "basetypes.h"

extern void *D_800D052C[];
extern s32 D_801450B8;

s32 func_8022E3B4(void *arg0, s32 arg1, s32 arg2) {
    void **entry;
    void **scan;
    void *resource;
    void *item;
    s32 i;

    resource = D_800D052C[arg1];
    if (*(s32 *)((char *)arg0 + 0x1450) != 0) {
        entry = (void **)((char *)resource + 0x2C);
        goto scan_setup;
    }
    if (D_801450B8 != 1) {
        entry = (void **)((char *)resource + 0x2C);
        goto scan_setup;
    }
    entry = (void **)((char *)resource + 0x20);

scan_setup:
    i = 0;
    scan = entry;
loop:
    item = *scan;
    if (item == 0) {
        goto null_item;
    }
    if (*(s16 *)((char *)item + 4) != arg2) {
        goto mismatch;
    }
    return 1;
null_item:
    return 0;
mismatch:
    i += 1;
    if (i < 3) {
        scan += 1;
        goto loop;
    }
    return 0;
}
