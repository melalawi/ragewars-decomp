#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_801450B8[];
extern s32 D_800D297C;

extern void func_80272908(void *, void *, Vec3 *);
extern void func_8027DD1C(void *, s32, s32, f32);

typedef struct func_8028414C_S1 func_8028414C_S1;
typedef struct func_8028414C_S2 func_8028414C_S2;
struct func_8028414C_S1 {
    char pad0[0x220];
    char unk220;
};
struct func_8028414C_S2 {
    char pad0[0x8];
    char unk8;
    char pad8[0x5C - 0x8 - sizeof(char)];
    s32 unk5C;
};

void func_8028414C(void *arg0) {
    Vec3 delta;
    void *arg1;
    f32 amount;
    s32 *state;

    state = D_801450B8;
    if (state[0] == 1) {
        arg1 = (void *)state[-4];
        func_80272908(&((func_8028414C_S1 *)(arg1))->unk220, &((func_8028414C_S2 *)(arg0))->unk8, &delta);
        amount = delta.z;
        if (amount < 0.0f) {
            amount = -amount;
        }
        func_8027DD1C(arg0,
                      (s32)((char *)arg0 + ((D_800D297C << 6) + 0x60)),
                      (s32)arg1, amount);
    } else {
        func_8027DD1C(arg0,
                      (s32)((char *)arg0 + ((D_800D297C << 6) + 0x60)),
                      0, 0.0f);
    }
    ((func_8028414C_S2 *)(arg0))->unk5C |= 0x100000;
}
