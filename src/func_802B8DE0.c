#include "basetypes.h"

extern char D_800CC7C0;
extern char D_800CC7C4;
extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);

typedef struct func_802B8DE0_S1 func_802B8DE0_S1;
typedef struct func_802B8DE0_S2 func_802B8DE0_S2;
typedef struct func_802B8DE0_S3 func_802B8DE0_S3;
struct func_802B8DE0_S1 {
    char pad0[0x10];
    s32 unk10;
};
struct func_802B8DE0_S2 {
    char pad0[0x20];
    s32 unk20;
};
struct func_802B8DE0_S3 {
    char pad0[0x10];
    s32 unk10;
};

s32 func_802B8DE0(void *arg0, void **arg1) {
    s32 var_s0;
    void *var_a0;

    var_s0 = 0x7FFFFFFF;
    if (*(void **)arg0 == 0) {
        func_802BFD40(&D_800CC7C0, &D_800CC7C4, 0x133);
    }
    *arg1 = 0;
    var_a0 = *(void **)arg0;
    if (var_a0 != 0) {
        do {
            if ((((func_802B8DE0_S1 *)(var_a0))->unk10 - ((func_802B8DE0_S2 *)(arg0))->unk20) < var_s0) {
                *arg1 = var_a0;
                var_s0 = ((func_802B8DE0_S1 *)(var_a0))->unk10 - ((func_802B8DE0_S2 *)(arg0))->unk20;
            }
            var_a0 = *(void **)var_a0;
        } while (var_a0 != 0);
    }
    return ((func_802B8DE0_S3 *)(*arg1))->unk10;
}
