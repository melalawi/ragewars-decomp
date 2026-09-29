#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_800D0960;
extern char D_80145088;

extern s32 func_802934DC(void);
extern void *func_80239594(s32 *arg0, Vec3 *arg1);
extern s32 func_80257DF4(void *, s32, Vec3, s32, s32);

typedef struct func_80258B00_S1 func_80258B00_S1;
typedef struct func_80258B00_S2 func_80258B00_S2;
struct func_80258B00_S1 {
    char pad0[0x104];
    s32 unk104;
    char pad104[0x134 - 0x104 - sizeof(s32)];
    s32 unk134;
    char pad134[0x2BB4 - 0x134 - sizeof(s32)];
    s32 unk2BB4;
};
struct func_80258B00_S2 {
    char pad0[0x128];
    Vec3 unk128;
};

void func_80258B00(void *arg0) {
    Vec3 zero;
    void *result;
    Vec3 *vec;

    if (D_800D0960 != 0 &&
        ((func_80258B00_S1 *)(arg0))->unk2BB4 != 0 &&
        func_802934DC() != 0 &&
        ((func_80258B00_S1 *)(arg0))->unk134 > 0) {
        {
            register f32 value = 0.0f;

            zero.z = value;
            zero.y = value;
            zero.x = value;
        }
        result = func_80239594(&D_80145088, &zero);
        vec = &((func_80258B00_S2 *)(result))->unk128;
        if ((((func_80258B00_S1 *)(arg0))->unk104 & 3) == 0) {
            func_80257DF4(arg0, ((func_80258B00_S1 *)(arg0))->unk134, *vec, 0, -1);
        }
    }
}
