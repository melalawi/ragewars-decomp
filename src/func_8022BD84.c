#include "basetypes.h"

extern void func_8022BE10(void *arg0, void *arg1);
extern void func_8022BEEC(void *arg0, void *arg1);
extern void func_8022C050(void *arg0, void *arg1);

typedef struct func_8022BD84_S1 func_8022BD84_S1;
typedef struct func_8022BD84_S2 func_8022BD84_S2;
struct func_8022BD84_S1 {
    char pad0[0x38];
    s32 unk38;
};
struct func_8022BD84_S2 {
    char pad0[0x840];
    s32 unk840;
};

void func_8022BD84(void *arg0, void *arg1, s32 arg2) {
    s32 flags;
    s32 flag_1000;
    s32 flag_8000;
    s32 flag_10000;

    if (arg2 != 0) {
        flags = ((func_8022BD84_S1 *)(arg1))->unk38;
        flag_1000 = flags & 0x1000;
        flag_8000 = flags & 0x8000;
        flag_10000 = flags & 0x10000;
        if (flag_1000 == 0) {
            ((func_8022BD84_S2 *)(arg0))->unk840 = 0;
        } else {
            func_8022BE10(arg0, arg1);
        }
        if (flag_8000) {
            func_8022BEEC(arg0, arg1);
        }
        if (flag_10000) {
            func_8022C050(arg0, arg1);
        }
    }
}
