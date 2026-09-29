#include "basetypes.h"

extern char D_800C8920;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void *func_8028FD94(void *arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);

typedef struct func_8024C284_S1 func_8024C284_S1;
typedef struct func_8024C284_S2 func_8024C284_S2;
struct func_8024C284_S1 {
    char pad0[0xC4];
    s32 unkC4;
    char padC4[0xD0 - 0xC4 - sizeof(s32)];
    s32 unkD0;
    char padD0[0x100 - 0xD0 - sizeof(s32)];
    s32 unk100;
};
struct func_8024C284_S2 {
    char pad0[0x8];
    s32 unk8;
};

s32 func_8024C284(void *arg0, s32 arg1) {
    void *temp_v0;
    char *temp_v1;
    s32 temp_s0;

    if (((func_8024C284_S1 *)(arg0))->unk100 & 0x40000) {
        temp_v0 = func_802518DC(0, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkC4, ((func_8024C284_S1 *)(arg0))->unkD0, 4, 0, 0, &D_800C8920, 1);
        if (temp_v0 != 0) {
            temp_v1 = (char *) func_8028FD94(*(void **) temp_v0, 1);
            temp_v1 += arg1 * 4;
            temp_s0 = ((func_8024C284_S2 *)(temp_v1))->unk8;
            func_802536F4(0, (s32) temp_v0);
            return temp_s0;
        }
    }
    return -1;
}
