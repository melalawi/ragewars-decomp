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
