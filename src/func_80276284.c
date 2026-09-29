#include "basetypes.h"

typedef struct func_80276284_S1 func_80276284_S1;
struct func_80276284_S1 {
    u16 unk0;
    char pad0[0x2 - 0x0 - sizeof(u16)];
    u16 unk2;
    char pad2[0x10 - 0x2 - sizeof(u16)];
    void* unk10;
    char pad10[0x14 - 0x10 - sizeof(void*)];
    void* unk14;
    char pad14[0x18 - 0x14 - sizeof(void*)];
    void* unk18;
};

void func_80276284(void *arg0, u16 arg1) {
    u16 temp_s0;
    u16 temp_v1;
    void *temp_a0;

    temp_s0 = ((func_80276284_S1 *)(arg0))->unk0;
    if (temp_s0 == arg1) {
        temp_v1 = ((func_80276284_S1 *)(arg0))->unk2;
        if (!(temp_v1 & 4)) {
            temp_a0 = ((func_80276284_S1 *)(arg0))->unk10;
            ((func_80276284_S1 *)(arg0))->unk2 = temp_v1 | 4;
            if (temp_a0 != 0) {
                func_80276284(temp_a0, temp_s0);
            }
            temp_a0 = ((func_80276284_S1 *)(arg0))->unk14;
            if (temp_a0 != 0) {
                func_80276284(temp_a0, temp_s0);
            }
            temp_a0 = ((func_80276284_S1 *)(arg0))->unk18;
            if (temp_a0 != 0) {
                func_80276284(temp_a0, temp_s0);
            }
        }
    }
}
