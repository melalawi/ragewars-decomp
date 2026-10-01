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

typedef struct func_8025AA4C_S1 func_8025AA4C_S1;
typedef struct func_8025AA4C_S2 func_8025AA4C_S2;
typedef struct func_8025AA4C_S3 func_8025AA4C_S3;
struct func_8025AA4C_S1 {
    char pad0[0x2B98];
    char* unk2B98;
};
struct func_8025AA4C_S2 {
    char pad0[0x128];
    f32 unk128;
    char pad128[0x12C - 0x128 - sizeof(f32)];
    f32 unk12C;
    char pad12C[0x130 - 0x12C - sizeof(f32)];
    f32 unk130;
};
struct func_8025AA4C_S3 {
    char pad0[0x4];
    f32 unk4;
};

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
    listener = ((func_8025AA4C_S1 *)(emitter->scene))->unk2B98;
    dx = emitter->x - ((func_8025AA4C_S2 *)(listener))->unk128;
    dy = emitter->y - ((func_8025AA4C_S2 *)(listener))->unk12C;
    dz = emitter->z - ((func_8025AA4C_S2 *)(listener))->unk130;
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
    } else if (level < ((func_8025AA4C_S3 *)(&D_800C9048))->unk4) {
        emitter->level = ((func_8025AA4C_S3 *)(&D_800C9048))->unk4;
    }
    emitter->lastDistance = emitter->distance;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3E80_4 = 1.0f;
const float unbake_rodata_800C3E84_4 = 1.0f;
const float unbake_rodata_800C3E88_4 = 1.39999998f;
const float unbake_rodata_800C3E8C_4 = 0.600000024f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9040_4 = 1.0f;
const float unbake_rodata_800C9044_4 = 1.0f;
const float unbake_rodata_800C9048_4 = 1.39999998f;
const float unbake_rodata_800C904C_4 = 0.600000024f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4200_4 = 1.0f;
const float unbake_rodata_800C4204_4 = 1.0f;
const float unbake_rodata_800C4208_4 = 1.39999998f;
const float unbake_rodata_800C420C_4 = 0.600000024f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4240_4 = 1.0f;
const float unbake_rodata_800C4244_4 = 1.0f;
const float unbake_rodata_800C4248_4 = 1.39999998f;
const float unbake_rodata_800C424C_4 = 0.600000024f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F50_4 = 1.0f;
const float unbake_rodata_800C3F54_4 = 1.0f;
const float unbake_rodata_800C3F58_4 = 1.39999998f;
const float unbake_rodata_800C3F5C_4 = 0.600000024f;
#endif
