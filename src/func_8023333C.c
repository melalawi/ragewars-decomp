#include "basetypes.h"
#include "../splat/types/shared/player.h"

extern s32 func_80222A80(void *arg0, s16 arg1);
extern s16 func_8022F95C(void *arg0);
extern s32 func_8022B174(void *arg0);
extern void func_8022B974(void *arg0);
extern s32 func_80214178(void *, void *, s32);
extern void func_8022B9B4(void *arg0);
extern s32 func_802301E4(void *, void *);

extern f32 D_800C8144;

typedef struct func_8023333C_S1 func_8023333C_S1;
typedef struct func_8023333C_S2 func_8023333C_S2;
typedef SharedPlayer func_8023333C_S3;
struct func_8023333C_S1 {
    char pad0[0x104];
    f32 unk104;
    char pad104[0x1D8 - 0x104 - sizeof(f32)];
    void* unk1D8;
};
struct func_8023333C_S2 {
    char pad0[0x13C];
    s32 unk13C;
};


void func_8023333C(void *arg0, void *arg1) {
    void *actor;

    actor = ((func_8023333C_S1 *)(arg0))->unk1D8;
    ((func_8023333C_S2 *)(arg1))->unk13C = 2;
    if (func_80222A80(actor, ((func_8023333C_S3 *)(actor))->unk62E) == 0) {
        ((func_8023333C_S3 *)(actor))->unk770 = func_8022F95C(actor);
        return;
    }

    if (((func_8023333C_S1 *)(arg0))->unk104 >= D_800C8144) {
        if (func_8022B174(actor) == 0) {
            func_8022B974(actor);
        }
    }

    if (!((((func_8023333C_S3 *)(actor))->unk6AC & 0x4000) &&
          (((func_8023333C_S3 *)(actor))->unk5E4 != 0))) {
        func_80214178(arg0, arg1, 2);
        func_8022B9B4(actor);
        ((func_8023333C_S2 *)(arg1))->unk13C = 1;
    }

    if (func_802301E4(arg0, arg1) != 0) {
        func_8022B9B4(actor);
    }
}
