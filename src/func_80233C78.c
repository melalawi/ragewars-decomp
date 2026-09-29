/* Finishes an entity for the frame: when a player in the D_80145060 list owns it, draws its rectangle
 * through func_80293100 if that player shows outlines (flag 0x1000), using the entity's colour (or the
 * override colour D_80102AD8 when D_800CF228 is set, darkened when option 0x4000 is set); it then
 * notifies the player list through func_8022A37C when func_80245788 is clear and func_802934DC is set,
 * and finishes the entity through func_80245884. */
#include "basetypes.h"

#include "../splat/types/shared/player.h"
typedef SharedPlayer Player;

typedef struct {
    char pad0[0x29C];
    f32 width;
    f32 height;
    f32 x;
    f32 y;
    char pad2AC[0x520 - 0x2AC];
    u8 color[4];
} Entity;

extern Player *D_80145060;
extern s32 D_800CF228;
extern u8 D_80102AD8[4];
extern s32 D_801462C8;
extern char D_8011FAC0;
extern char D_80145040;
extern void func_80293100(void *, u8 *, s32, s32, s32, s32);
extern s32 func_80245788(void);
extern s32 func_802934DC(void);
extern void func_8022A37C(void *, Entity *);
extern void func_80245884(Entity *);

static inline Player *find_owner(Entity *entity) {
    Player *player;

    for (player = D_80145060; player != 0; player = player->views16E0.view16E0_1.next) {
        if (player->views5DC.view5DC_4.entity == entity) {
            return player;
        }
    }
    return 0;
}

void func_80233C78(Entity *entity) {
    Player *owner;
    u8 color[4];
    s32 i;

    owner = find_owner(entity);
    if (owner == 0) {
        return;
    }
    if (owner->views1C.view38_3.flags & 0x1000) {
        color[0] = entity->color[0];
        color[1] = entity->color[1];
        color[2] = entity->color[2];
        color[3] = entity->color[3];
        if (D_800CF228 != 0) {
            for (i = 0; i < 4; i++) {
                color[i] = D_80102AD8[i];
            }
        }
        if (D_801462C8 & 0x4000) {
            color[0] >>= 3;
            color[1] >>= 3;
            color[2] >>= 3;
        }
        func_80293100(&D_8011FAC0, color, entity->x, entity->y, entity->x + entity->width,
                      entity->y + entity->height);
    }
    if (func_80245788() == 0 && func_802934DC() != 0) {
        func_8022A37C(&D_80145040, entity);
    }
    func_80245884(entity);
}
