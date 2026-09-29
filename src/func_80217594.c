#include "basetypes.h"

extern f32 D_800C72DC;
extern f32 D_800C72E0;
extern f32 func_80274B00(f32, f32);
extern void func_8024DBB0(void *, s32, s32, s32, s32, f32);

typedef struct func_80217594_S1 func_80217594_S1;
struct func_80217594_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
};

void func_80217594(void *arg0, s32 unused1, s32 arg2, s32 *entry) {
    if (entry[0] != 0) {
        do {
            if ((arg2 & entry[0]) != 0) {
                func_8024DBB0(arg0,
                              ((func_80217594_S1 *)(arg0))->unk8,
                              ((func_80217594_S1 *)(arg0))->unkC,
                              ((func_80217594_S1 *)(arg0))->unk10,
                              entry[1],
                              func_80274B00(D_800C72DC, D_800C72E0));
            }
            entry += 2;
        } while (entry[0] != 0);
    }
}
