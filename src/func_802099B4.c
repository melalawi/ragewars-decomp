#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C6D7C;
extern char D_80103FD0;
extern void **D_80103FCC;

extern s32 func_80244494(void *arg0, Vec3 arg1, Vec3 arg2, void *arg3);

typedef struct func_802099B4_S1 func_802099B4_S1;
typedef struct func_802099B4_S2 func_802099B4_S2;
struct func_802099B4_S1 {
    char pad0[0x8];
    Vec3 unk8;
};
struct func_802099B4_S2 {
    char pad0[0x8];
    Vec3 unk8;
};

s32 func_802099B4(void **arg0, void *arg1) {
    Vec3 first;
    Vec3 second;

    if (arg0 == 0 || arg1 == 0) {
        return 0;
    }

    first = ((func_802099B4_S1 *)(*arg0))->unk8;
    second = ((func_802099B4_S2 *)(arg1))->unk8;
    first.y += D_800C6D7C;
    second.y += D_800C6D7C;
    if (func_80244494(*arg0, first, second, &D_80103FD0) != 0) {
        return *D_80103FCC == arg1;
    }
    return 1;
}
