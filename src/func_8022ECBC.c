#include "basetypes.h"

extern s32 D_800CF228;
extern s32 D_800D2930;
typedef struct func_8022ECBC_S1 func_8022ECBC_S1;
struct func_8022ECBC_S1 {
    char pad0[0x5EA];
    s16 unk5EA;
};

extern func_8022ECBC_S1 *D_801029F0;

extern void func_8044A4C0(void *);
extern void func_802227D0(void *, void *, s32);

void func_8022ECBC(void) {
    if (D_801029F0->unk5EA == 1) {
        func_8044A4C0((s32)D_801029F0);
    } else {
        func_802227D0(D_801029F0, D_801029F0, 0x22);
    }
    D_800D2930 = 1;
    D_800CF228 = 0;
}
