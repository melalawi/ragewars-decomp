#include "basetypes.h"

typedef f32 Matrix[16];

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct WorldState {
    void *current;
    u8 pad04[0x10];
    s32 matrix_index;
} WorldState;

typedef struct SceneState {
    u8 pad00[0xF];
    u8 actor_byte;
    u8 pad10[0xC0];
    Vec3 direction;
} SceneState;

extern WorldState D_801041F0;
extern SceneState D_801041F8;

extern void func_80270980(f32 *out, void *in);
extern void func_8026EFC8(f32 *out, f32 *m);
extern void func_80272908(void *, void *, void *);
extern void func_802720EC(f32 *);
extern void func_80272BA8(void *matrix, void *input, void *output);

#define FIELD(type, base, offset) (*(type *)((u8 *)(base) + (offset)))

void func_80283BF0(void *arg0, f32 *arg1, s32 arg2) {
    Matrix source;
    Matrix matrix;
    Vec3 direction;
    void *actor;
    s32 mode;
    void *current;
    f32 *matrix_ptr;
    SceneState *scene;
    Vec3 *direction_ptr;

    actor = arg0;
    mode = arg2;
    current = D_801041F0.current;
    if (arg1 != 0) {
        func_8026EFC8(matrix, arg1);
    } else {
        func_80270980(source,
            (u8 *)FIELD(void *, current, 0xB4) + D_801041F0.matrix_index * 0x40);
        func_8026EFC8(matrix, source);
    }
    matrix_ptr = matrix;
    scene = &D_801041F8;
    func_80272908(matrix_ptr, scene, (u8 *)actor + 0x50);
    direction_ptr = &direction;
    direction = scene->direction;
    func_802720EC((f32 *)direction_ptr);
    func_80272BA8(matrix_ptr, direction_ptr, (u8 *)actor + 0x1C);
    FIELD(void *, actor, 0x134) = current;
    FIELD(u32, actor, 0x5C) |= 0x10000;
    FIELD(u8, actor, 0x1D1) = scene->actor_byte;
    if (FIELD(u16, actor, 4) == 0x56 && mode == 2) {
        FIELD(u32, actor, 0x5C) |= 0x04000000;
    }
}
