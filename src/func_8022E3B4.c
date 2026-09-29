#include "basetypes.h"

extern void *D_800D052C[];
extern s32 D_801450B8;

typedef struct func_8022E3B4_S1 func_8022E3B4_S1;
typedef struct func_8022E3B4_S2 func_8022E3B4_S2;
typedef struct func_8022E3B4_S3 func_8022E3B4_S3;
struct func_8022E3B4_S1 {
    char pad0[0x1450];
    s32 unk1450;
};
struct func_8022E3B4_S2 {
    char pad0[0x20];
    void* unk20;
    char pad20[0x2C - 0x20 - sizeof(void*)];
    void* unk2C;
};
struct func_8022E3B4_S3 {
    char pad0[0x4];
    s16 unk4;
};

s32 func_8022E3B4(void *arg0, s32 arg1, s32 arg2) {
    void **entry;
    void **scan;
    void *resource;
    void *item;
    s32 i;

    resource = D_800D052C[arg1];
    if (((func_8022E3B4_S1 *)(arg0))->unk1450 != 0) {
        entry = &((func_8022E3B4_S2 *)(resource))->unk2C;
        goto scan_setup;
    }
    if (D_801450B8 != 1) {
        entry = &((func_8022E3B4_S2 *)(resource))->unk2C;
        goto scan_setup;
    }
    entry = &((func_8022E3B4_S2 *)(resource))->unk20;

scan_setup:
    i = 0;
    scan = entry;
loop:
    item = *scan;
    if (item == 0) {
        goto null_item;
    }
    if (((func_8022E3B4_S3 *)(item))->unk4 != arg2) {
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
