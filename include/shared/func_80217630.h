#ifndef UNBAKE_FUNC_80217630_H
#define UNBAKE_FUNC_80217630_H
#include "basetypes.h"
#include "shared/player_types.h"

struct Item;
typedef struct Item Item;
typedef struct Menu Menu;
typedef struct Player Player;
typedef struct View View;

struct Menu;

struct Player;

struct View;









struct Item {
    s32 slot;
    s32 weapon;
    Vec3f position;
    s32 icon;
    f32 width;
    f32 height;
};
struct Menu {
    s32 active;
    s32 pad4;
    f32 open;
    char padC[0x14 - 0xC];
    f32 phase;
    char pad18[0x37C - 0x18];
    s32 cursor;
};
struct Player {
    char pad[0x5DC];
    View *view;
};
struct View {
    char pad[0x29C];
    f32 viewport[4];
};
#endif
