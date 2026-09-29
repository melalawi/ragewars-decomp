#include "basetypes.h"

extern s32 D_800D2AE0;
extern s32 D_800D2B04;
extern s32 D_295B90;
extern s32 D_800CA680;

extern void * *func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);

typedef struct func_80296EC4_S1 func_80296EC4_S1;
struct func_80296EC4_S1 {
    char pad0[0x4];
    s32 unk4;
};

void **func_80296EC4(void *arg0, s32 arg1) {
    if (D_800D2AE0 == 0) {
        func_802518DC(0, *(s32 *) arg0 + arg1 + (D_800D2B04 << 7),
                      *(s32 *) arg0, ((func_80296EC4_S1 *)(arg0))->unk4,
                      0, arg1, &D_295B90, &D_800CA680, 0);
    } else {
        func_802518DC(0, *(s32 *) arg0 - 1,
                      *(s32 *) arg0, ((func_80296EC4_S1 *)(arg0))->unk4,
                      0, -1, &D_295B90, &D_800CA680, 0);
    }
}
