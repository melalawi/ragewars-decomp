#include "basetypes.h"

typedef struct { f32 x, y, z; } Vec3f;
typedef struct { f32 x, y, z, w; } Quat;
typedef struct { s32 x, y, z; } Triple;

extern Vec3f D_801042C8;
extern Triple D_801042A8;
extern char D_80121990;

extern void func_80271888(Quat *, Vec3f *);
extern void func_80280094(void *, void *, void *, s32, s32, s32,
                          Vec3f, Quat, Triple, s32, s32, s32);

void func_802836A4(void *arg0, s32 arg1) {
    Quat rotation;
    Vec3f position;

    if ((**(s32 **)((char *)arg0 + 0x118) & 0x10) != 0) {
        position = D_801042C8;
    } else {
        position = *(Vec3f *)((char *)arg0 + 0x1C);
    }
    func_80271888(&rotation, &position);
    func_80280094(&D_80121990, arg0,
                  *(void **)((char *)arg0 + 0x12C),
                  *(s32 *)((char *)arg0 + 0x130),
                  *(s32 *)((char *)arg0 + 0x134), arg1,
                  position, rotation, D_801042A8, 0, -2,
                  (*(s32 *)((char *)arg0 + 0x5C) & 0x200006) | 1);
}
