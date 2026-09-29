#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C9520;
extern void func_80272038(void *arg0, f32 t, void *a, void *b);
extern f32 func_8024D274(void *arg0);

typedef struct func_8026745C_S1 func_8026745C_S1;
typedef struct func_8026745C_S2 func_8026745C_S2;
struct func_8026745C_S1 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x1D8 - 0x100 - sizeof(s32)];
    char* unk1D8;
};
struct func_8026745C_S2 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x62E - 0x8 - sizeof(Vec3)];
    s16 unk62E;
};

s32 func_8026745C(void *arg0, Vec3 *arg1) {
    Vec3 first;
    Vec3 second;
    char *actor;
    s16 state;
    s32 result;

    result = 0;
    if ((*(u8 *)arg0 == 1) &&
        ((((func_8026745C_S1 *)(arg0))->unk100 & 0x300000) != 0)) {
        actor = ((func_8026745C_S1 *)(arg0))->unk1D8;
        if (arg0 == (char *)actor + 0x2E8) {
            state = ((func_8026745C_S2 *)(actor))->unk62E;
            if ((state == 0) || (state == 0x11) || (state == 0x10)) {
                first = *arg1;
                second = ((func_8026745C_S2 *)(actor))->unk8;
                func_80272038(arg1, 0.75f, &first, &second);
                arg1->y += func_8024D274(actor) * D_800C9520;
                result = 1;
            }
        }
    }
    return result;
}
