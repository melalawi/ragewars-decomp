#include "basetypes.h"

extern void func_802BF9B0(s32 arg0);

typedef struct func_8028F9EC_S1 func_8028F9EC_S1;
struct func_8028F9EC_S1 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

s32 func_8028F9EC(void *arg0, void *arg1) {
    if ((((func_8028F9EC_S1 *)(arg1))->unk4) & 3) {
        return 0;
    }
    if ((((func_8028F9EC_S1 *)(arg1))->unk10) != 1) {
        return 1;
    }
    if (((((func_8028F9EC_S1 *)(arg1))->unk8) & 0x60) != 0x60) {
        return 1;
    }
    func_802BF9B0(((func_8028F9EC_S1 *)(arg1))->unkC);
    return 1;
}
