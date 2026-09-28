#include "basetypes.h"

typedef struct { f32 x, y, z; } Vec3f;
typedef struct { s32 x, y, z; } Vec3i;
typedef struct { s32 x, y, z, w; } Quat;

extern Vec3f D_801042C8;
extern Vec3i D_801042B8;
extern char D_80121990;

extern void func_80271888(Quat *, Vec3f *);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32,
                         Vec3f, Quat, Vec3i, s32, s32, s32);

void func_802837CC(void *arg0, s32 arg1) {
    Quat rotation;
    Vec3f position;

    if (**(s32 **)((char *)arg0 + 0x118) & 0x10) {
        position = D_801042C8;
    } else {
        position = *(Vec3f *)((char *)arg0 + 0x1C);
    }
    func_80271888(&rotation, &position);
    func_80280094(&D_80121990, arg0,
                  *(void **)((char *)arg0 + 0x12C),
                  *(s32 *)((char *)arg0 + 0x130),
                  *(s32 *)((char *)arg0 + 0x134), arg1,
                  position, rotation, D_801042B8, 0, -5,
                  (*(s32 *)((char *)arg0 + 0x5C) & 0x200006) | 1);
}
