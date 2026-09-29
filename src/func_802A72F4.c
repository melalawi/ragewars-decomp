#include "basetypes.h"

extern void func_802A453C(void *arg0);
extern void func_802A438C(void *, void *);
extern void func_802A4708(s32, void *, s32);
extern void func_802A4DC4(s32, void *, s32);

typedef struct func_802A72F4_S1 func_802A72F4_S1;
struct func_802A72F4_S1 {
    char pad0[0x34];
    s32 unk34;
    char pad34[0x3C - 0x34 - sizeof(s32)];
    s32 unk3C;
    char pad3C[0x48 - 0x3C - sizeof(s32)];
    s32 unk48;
};

void func_802A72F4(s32 arg0, void *arg1, s32 arg2) {
    if (((func_802A72F4_S1 *)(arg1))->unk3C & 8) {
        func_802A453C(arg1);
    }
    if (((func_802A72F4_S1 *)(arg1))->unk3C & 4) {
        func_802A438C(arg1, arg2);
    }
    if (((func_802A72F4_S1 *)(arg1))->unk48 >= 2) {
        if (((func_802A72F4_S1 *)(arg1))->unk34 >= 0) {
            func_802A4708(arg0, arg1, arg2);
            return;
        }
        func_802A4DC4(arg0, arg1, arg2);
    }
}
