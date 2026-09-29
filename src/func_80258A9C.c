#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C8FD0[];
extern s32 func_80257DF4(void *, s32, Vec3, s32, s32);

typedef struct func_80258A9C_S1 func_80258A9C_S1;
struct func_80258A9C_S1 {
    char pad0[0x2BBC];
    f32 unk2BBC;
};

void func_80258A9C(void *arg0, s32 arg1, Vec3 arg2, s32 arg3, s32 arg4, f32 arg5) {
    ((func_80258A9C_S1 *)(arg0))->unk2BBC = arg5;
    func_80257DF4(arg0, arg1, arg2, arg3, arg4);
    ((func_80258A9C_S1 *)(arg0))->unk2BBC = D_800C8FD0[1];
}
