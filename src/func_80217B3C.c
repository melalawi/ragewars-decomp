/* Returns which of eight menu directions a player's stick points in: -1 inside a dead zone of radius
   60, a diagonal (1, 3, 5 or 7) when both axes are non-zero and their magnitudes differ by less than 46,
   otherwise 2 or 6 when the horizontal axis dominates and 0 or 4 when the vertical one does, reading
   the stick bytes at 0xC6 and 0xC7 of the controller at 0x698. */
#include "basetypes.h"

#define ABS(v) ((v) < 0.0f ? -(v) : (v))

typedef struct {
    char pad0[0xC6];
    s8 x;
    s8 y;
} Controller;

typedef struct {
    char pad0[0x698];
    Controller *controller;
} Player;

s32 func_80217B3C(Player *player) {
    Controller *controller;
    s8 x;
    s8 y;

    controller = player->controller;
    x = controller->x;
    y = controller->y;
    if (x * x + y * y < 3600) {
        return -1;
    }
    if (ABS(ABS(x) - ABS(y)) < 46 && x != 0 && y != 0) {
        if (x * y > 0) {
            if (x > 0) {
                return 1;
            }
            if (controller->x != 0) {
                return 5;
            }
            return 5;
        }
        return y > 0 ? 7 : 3;
    }
    if (ABS(x) > ABS(y)) {
        return x <= 0 ? 6 : 2;
    }
    if (y > 0) {
        return 0;
    }
    return 4;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4A7C_4 = 7.0f;
const float unbake_rodata_800C4A80_4 = 102.399994f;
const float unbake_rodata_800C4A84_4 = 1.0f;
const float unbake_rodata_800C4A88_4 = 153.599991f;
const float unbake_rodata_800C4A8C_4 = 1024.0f;
const float unbake_rodata_800C4A90_4 = 204.799988f;
const float unbake_rodata_800C4A94_4 = 0.00122070312f;
const float unbake_rodata_800C4A98_4 = 0.859999955f;
const float unbake_rodata_800C4A9C_4 = 1.0f;
const float unbake_rodata_800C4AA0_4 = 0.0399999991f;
const float unbake_rodata_800C4AA4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9C3C_4 = 7.0f;
const float unbake_rodata_800C9C40_4 = 102.399994f;
const float unbake_rodata_800C9C44_4 = 1.0f;
const float unbake_rodata_800C9C48_4 = 153.599991f;
const float unbake_rodata_800C9C4C_4 = 1024.0f;
const float unbake_rodata_800C9C50_4 = 204.799988f;
const float unbake_rodata_800C9C54_4 = 0.00122070312f;
const float unbake_rodata_800C9C58_4 = 0.859999955f;
const float unbake_rodata_800C9C5C_4 = 1.0f;
const float unbake_rodata_800C9C60_4 = 0.0399999991f;
const float unbake_rodata_800C9C64_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4980_4 = 0.00100000005f;
const float unbake_rodata_800C4984_4 = (-1.0f);
const float unbake_rodata_800C4988_4 = 1.0f;
const float unbake_rodata_800C498C_4 = 0.00100000005f;
const float unbake_rodata_800C4990_4 = 1.0f;
const float unbake_rodata_800C4994_4 = 1.0f;
const float unbake_rodata_800C4998_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4990_4 = 80.0f;
const float unbake_rodata_800C4994_4 = 160.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4AEC_4 = 56.0000038f;
const float unbake_rodata_800C4AF0_4 = 0.21960786f;
const float unbake_rodata_800C4AF4_4 = 255.0f;
#endif
