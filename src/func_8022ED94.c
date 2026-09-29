#include "basetypes.h"

extern void func_80264874(s32 a);
extern void func_802538A8(s32 a);
extern void func_802537D8(void *, void *);

typedef struct func_8022ED94_S1 func_8022ED94_S1;
struct func_8022ED94_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
};

void func_8022ED94(void *arg0) {
    s32 temp_a1;

    func_80264874(0);
    func_802538A8(0);
    temp_a1 = ((func_8022ED94_S1 *)(arg0))->unk0;
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
        ((func_8022ED94_S1 *)(arg0))->unk0 = 0;
        ((func_8022ED94_S1 *)(arg0))->unk4 = 0;
        ((func_8022ED94_S1 *)(arg0))->unk8 = 0;
    }
}
