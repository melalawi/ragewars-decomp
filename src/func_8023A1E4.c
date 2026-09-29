#include "basetypes.h"

extern void func_8025E410(s32 arg0);
extern void func_802538A8(s32 a);
extern void func_802537D8(void *, void *);

typedef struct func_8023A1E4_S1 func_8023A1E4_S1;
struct func_8023A1E4_S1 {
    s32 unk0;
    char pad0[0x4 - 0x0 - sizeof(s32)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0x1200 - 0x8 - sizeof(s32)];
    s32 unk1200;
};

void func_8023A1E4(void *arg0) {
    s32 temp_a1;

    ((func_8023A1E4_S1 *)(arg0))->unk1200 = 1;
    func_8025E410((s32)((char *)arg0 + 0x40));
    func_802538A8(0);
    temp_a1 = ((func_8023A1E4_S1 *)(arg0))->unk0;
    if (temp_a1 != 0) {
        func_802537D8(0, temp_a1);
        ((func_8023A1E4_S1 *)(arg0))->unk0 = 0;
        ((func_8023A1E4_S1 *)(arg0))->unk4 = 0;
        ((func_8023A1E4_S1 *)(arg0))->unk8 = 0;
    }
}
