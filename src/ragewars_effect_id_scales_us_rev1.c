#include "types.h"

/* 80259F68 scans 31 pairs, compares the first float as an integer ID,
 * then loads the matching scale from the second float. ROM D1630..D1728. */
struct ResidentEffectIdScale {
    f32 effectId;
    f32 scale;
};
struct ResidentEffectIdScale D_800CB7F0[31] = {
    {1.0f, 0.850000024f},
    {1.0f, 0.850000024f},
    {1.0f, 0.850000024f},
    {1.0f, 0.899999976f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 0.899999976f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
    {1.0f, 1.0f},
};
