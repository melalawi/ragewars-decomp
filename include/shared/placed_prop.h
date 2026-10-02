#ifndef RAGEWARS_SHARED_PLACED_PROP_H
#define RAGEWARS_SHARED_PLACED_PROP_H
#include "shared/player_types.h"
typedef struct PropGeometry {
    char pad0[8];
    f32 radius;
    char padC[0x24 - 0xC];
    u32 radiusSquared;
} PropGeometry;
typedef struct PlacedPropRecord {
    s32 value;
    Vec3f position;
    Vec3f scale;
    char pad1C[0];
    u16 extents[6];
    u16 id;
    u16 segment;
    u16 model;
    u8 flags;
    s8 rotation[4];
} PlacedPropRecord;
typedef struct PlacedProp {
    u8 state;
    char pad1[3];
    u16 id;
    char pad6[2];
    Vec3f position;
    void *segment;
    PropGeometry *model;
    s32 owner;
    char pad20[8];
    char transform[0x40];
    char matrix[0x40];
    s32 fieldA8;
    s32 fieldAC;
    s32 fieldB0;
    s32 fieldB4;
    Vec3f min;
    Vec3f max;
    s32 key;
    s32 fieldD4;
    u16 flags;
    u8 colorFrame;
    char padDB;
    s32 fieldDC;
    u8 fade;
} PlacedProp;
#endif
