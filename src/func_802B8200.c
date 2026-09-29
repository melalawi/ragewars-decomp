#include "basetypes.h"

typedef struct { char pad[0x16]; s16 limit; } Limit;
typedef struct Node { struct Node *next; char pad4[4]; Limit *limit; char padC[0xCC]; s32 flags; } Node;

extern void func_802B7520(void *arg0);
extern void func_802B7550(void *arg0, void **arg1);

typedef struct func_802B8200_S1 func_802B8200_S1;
struct func_802B8200_S1 {
    char pad0[4];
    void *unk4;
    char pad4[4];
    void *unkC;
    char padC[4];
    void *unk14;
};

s32 func_802B8200(void *arg0, void **arg1, s16 arg2) {
    s16 var_a2;
    s32 var_s2;
    s32 var_v0;
    void *var_s0;

    var_a2 = arg2;
    var_s0 = ((func_802B8200_S1 *)arg0)->unk14;
    var_s2 = 0;
    if ((var_s0 != 0) || (var_s0 = ((func_802B8200_S1 *)arg0)->unk4, (var_s0 != 0))) {
        *arg1 = var_s0;
        func_802B7520(var_s0);
        func_802B7550(var_s0, &((func_802B8200_S1 *)(arg0))->unkC);
    } else {
        var_s0 = ((func_802B8200_S1 *)arg0)->unkC;
        var_v0 = var_s2;
        if (var_s0 != 0) {
            do {
                if ((var_a2 >= ((Node *)var_s0)->limit->limit) &&
                    (((Node *)var_s0)->flags == 0)) {
                    *arg1 = var_s0;
                    var_s2 = 1;
                    var_a2 = (s16)(u16)((Node *)var_s0)->limit->limit;
                }
                var_s0 = ((Node *)var_s0)->next;
                var_v0 = var_s2;
            } while (var_s0 != 0);
        }
    }
    return var_s2;
}
