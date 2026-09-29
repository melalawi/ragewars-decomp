#include "basetypes.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vector3i;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vector4f;

extern char D_80121990;
extern s32 func_80280094(void *, void *, void *, void *, s32, s32,
                         Vector3i, Vector4f, Vector3i, s32, s32, s32);

typedef struct func_802064A0_S1 func_802064A0_S1;
typedef struct func_802064A0_S2 func_802064A0_S2;
struct func_802064A0_S1 {
    char pad0[0x124];
    char unk124;
    char pad124[0x128 - 0x124 - sizeof(char)];
    s32 unk128;
};
struct func_802064A0_S2 {
    char pad0[0x1C];
    Vector3i unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Vector3i)];
    Vector4f unk5C;
};

void func_802064A0(void *arg0, void *arg1, Vector3i arg2,
                   s32 unused5, s32 arg6) {
    s32 result;

    result = func_80280094(&D_80121990, arg0, arg0,
                           &((func_802064A0_S1 *)(arg1))->unk124, 0, arg6,
                           ((func_802064A0_S2 *)(arg0))->unk1C,
                           ((func_802064A0_S2 *)(arg0))->unk5C,
                           arg2, 0, -1, 0);
    ((func_802064A0_S1 *)(arg1))->unk128 -= result;
}
