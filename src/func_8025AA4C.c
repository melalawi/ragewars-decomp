/* Fades emitter 0x8AC with the listener's distance: optionally resets its level, stores the squared
 * distance to the listener, lowers the level by a step while the distance grows and raises it while it
 * shrinks (clamped to the D_800C9048 range, remembering the distance), and otherwise eases the level one
 * step toward the rest level D_800C9044. */
#include "basetypes.h"

typedef struct {
    char pad0[0x34];
    f32 level;
    char pad38[0xC];
    f32 x;
    f32 y;
    f32 z;
    char pad50[8];
    f32 distance;
    f32 lastDistance;
    char pad60[0x48];
    s32 id;
    char padAC[4];
    void *scene;
    char padB4[0xC];
    s32 reset;
} Emitter;

extern f32 D_800C9040;
extern f32 D_800C9044;
extern f32 D_800C9048;
extern f32 D_800D0B28;

void func_8025AA4C(Emitter *emitter) {
    char *listener;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 distance;
    f32 level;
    f32 current;

    if (emitter->id != 0x8AC) {
        return;
    }
    if (emitter->reset != 0) {
        emitter->level = D_800C9040;
    }
    listener = *(char **)((char *)emitter->scene + 0x2B98);
    dx = emitter->x - *(f32 *)(listener + 0x128);
    dy = emitter->y - *(f32 *)(listener + 0x12C);
    dz = emitter->z - *(f32 *)(listener + 0x130);
    distance = dx * dx + dy * dy + dz * dz;
    emitter->distance = distance;
    if (emitter->lastDistance < distance) {
        emitter->level -= D_800D0B28;
    } else if (distance < emitter->lastDistance) {
        emitter->level += D_800D0B28;
    } else {
        current = emitter->level;
        if (D_800C9044 < current) {
            level = current - D_800D0B28;
            if (level < D_800C9044) {
                level = D_800C9044;
            }
            emitter->level = level;
        } else if (current < D_800C9044) {
            level = current + D_800D0B28;
            if (D_800C9044 < level) {
                level = D_800C9044;
            }
            emitter->level = level;
        }
        return;
    }
    level = emitter->level;
    if (D_800C9048 < level) {
        emitter->level = D_800C9048;
    } else if (level < *(f32 *)((char *)&D_800C9048 + 4)) {
        emitter->level = *(f32 *)((char *)&D_800C9048 + 4);
    }
    emitter->lastDistance = emitter->distance;
}
