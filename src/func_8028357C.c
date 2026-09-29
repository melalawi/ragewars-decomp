#include "basetypes.h"
typedef struct { float x, y, z; } Vector3f;
typedef struct { float x, y, z, w; } Vector4f;
typedef struct { s32 x, y, z; } Vector3i;

extern Vector3f D_801042A8;
extern Vector3f D_801042C8;
extern char D_80121990;

extern void func_80271888(Vector4f *, Vector3f *);
extern void func_80280094(void *, void *, void *, void *, s32, s32,
                          Vector3f, Vector4f, Vector3f, s32, s32, s32);

typedef struct func_8028357C_S1 func_8028357C_S1;
struct func_8028357C_S1 {
    char pad0[0x1C];
    Vector3f unk1C;
    char pad1C[0x5C - 0x1C - sizeof(Vector3f)];
    s32 unk5C;
    char pad5C[0x118 - 0x5C - sizeof(s32)];
    s32* unk118;
    char pad118[0x12C - 0x118 - sizeof(s32*)];
    void* unk12C;
    char pad12C[0x130 - 0x12C - sizeof(void*)];
    void* unk130;
    char pad130[0x134 - 0x130 - sizeof(void*)];
    s32 unk134;
};

void func_8028357C(void *arg0, s32 arg1) {
    Vector4f rotation;
    Vector3f position;

    if ((*((func_8028357C_S1 *)(arg0))->unk118 & 0x10) != 0) {
        position = D_801042C8;
    } else {
        position = ((func_8028357C_S1 *)(arg0))->unk1C;
    }
    func_80271888(&rotation, &position);
    func_80280094(&D_80121990, arg0,
                  ((func_8028357C_S1 *)(arg0))->unk12C,
                  ((func_8028357C_S1 *)(arg0))->unk130,
                  ((func_8028357C_S1 *)(arg0))->unk134, arg1,
                  position, rotation, D_801042A8, 0, -3,
                  (((func_8028357C_S1 *)(arg0))->unk5C & 0x200006) | 1);
}
