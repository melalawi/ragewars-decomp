#include "basetypes.h"

extern void *func_80258D60(void *arg0);
extern void func_802B7FD0(void *arg0, s16 arg1);
extern void func_802B8030(void *arg0);

typedef struct func_8025D404_S1 func_8025D404_S1;
struct func_8025D404_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0x1E - 0x8 - sizeof(s32)];
    s16 unk1E;
};

void func_8025D404(void *arg0) {
    void *temp_v0_2;
    s32 temp_v0;

    temp_v0 = ((func_8025D404_S1 *)(arg0))->unk8;
    if (temp_v0 != 2 && temp_v0 != 0) {
        ((func_8025D404_S1 *)(arg0))->unk8 = 2;
        temp_v0_2 = func_80258D60(*(void **)arg0);
        func_802B7FD0(temp_v0_2, ((func_8025D404_S1 *)(arg0))->unk1E);
        func_802B8030(temp_v0_2);
    }
}
