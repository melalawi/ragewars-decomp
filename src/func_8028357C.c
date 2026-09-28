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

void func_8028357C(void *arg0, s32 arg1) {
    Vector4f rotation;
    Vector3f position;

    if ((**(s32 **)((char *)arg0 + 0x118) & 0x10) != 0) {
        position = D_801042C8;
    } else {
        position = *(Vector3f *)((char *)arg0 + 0x1C);
    }
    func_80271888(&rotation, &position);
    func_80280094(&D_80121990, arg0,
                  *(void **)((char *)arg0 + 0x12C),
                  *(void **)((char *)arg0 + 0x130),
                  *(s32 *)((char *)arg0 + 0x134), arg1,
                  position, rotation, D_801042A8, 0, -3,
                  (*(s32 *)((char *)arg0 + 0x5C) & 0x200006) | 1);
}
