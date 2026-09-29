#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);
extern void func_8022CE68(s32 arg0, s32 arg1);
extern f32 D_800C7E7C;
extern f32 D_800C7E80;

typedef struct func_8022CDAC_S1 func_8022CDAC_S1;
typedef struct func_8022CDAC_S2 func_8022CDAC_S2;
struct func_8022CDAC_S1 {
    char pad0[0x658];
    f32 unk658;
    char pad658[0x6A4 - 0x658 - sizeof(f32)];
    f32 unk6A4;
    char pad6A4[0x6C4 - 0x6A4 - sizeof(f32)];
    f32 unk6C4;
};
struct func_8022CDAC_S2 {
    char pad0[0x20];
    f32 unk20;
};

void func_8022CDAC(void *arg0, void *arg1) {
    f32 temp_f2;

    temp_f2 = ((func_8022CDAC_S1 *)(arg0))->unk6C4;
    if ((temp_f2 < 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 >= 0.0f) ||
        (temp_f2 > 0.0f && ((func_8022CDAC_S1 *)(arg0))->unk6A4 <= 0.0f) ||
        (((func_8022CDAC_S1 *)(arg0))->unk658 >= D_800C7E7C)) {
        func_802227D0(arg0, arg1, 8);
    } else {
        ((func_8022CDAC_S2 *)(arg1))->unk20 = D_800C7E80;
    }
    func_8022CE68((s32)arg0, (s32)arg1);
}
