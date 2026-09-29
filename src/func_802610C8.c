#include "basetypes.h"

typedef struct func_802610C8_S1 func_802610C8_S1;
typedef struct func_802610C8_S2 func_802610C8_S2;
struct func_802610C8_S1 {
    char pad0[0x4];
    char unk4;
};
struct func_802610C8_S2 {
    char pad0[0x4];
    s32 unk4;
};

void func_802610C8(void *arg0, s32 arg1) {
    s32 count;
    s8 *ptr;
    s32 magic;

    count = 1;
    (*(s32 *)arg0) = arg1;
    ((func_802610C8_S2 *)arg0)->unk4 = ((arg1 * 4) + 0xF) & ~7;
    if (arg1 > 0) {
        magic = 0xDEADBEEF;
        ptr = &((func_802610C8_S1 *)((arg0)))->unk4;
        do {
            (((func_802610C8_S2 *)(ptr))->unk4) = magic;
            count += 1;
            ptr += 4;
        } while (arg1 >= count);
    }
}
