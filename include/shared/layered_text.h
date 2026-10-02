#ifndef RAGEWARS_SHARED_LAYERED_TEXT_H
#define RAGEWARS_SHARED_LAYERED_TEXT_H
#include "basetypes.h"
typedef struct {
    int value;
    short mode, reserved;
    int flags, fieldC, field10;
    int *text;
    int field18, spacing, field20, field24;
} LayeredText;
typedef struct { int field0, width, height, rest[7]; } TextLayerMetrics;
typedef struct { char pad[0x14]; int x, right, y; } TextLayerRect;
#endif
