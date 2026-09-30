#ifndef RAGEWARS_SHARED_PLAYER_TYPES_H
#define RAGEWARS_SHARED_PLAYER_TYPES_H

#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct Matrix {
    f32 m[16];
} Matrix;

#endif
