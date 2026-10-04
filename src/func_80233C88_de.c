#include "common/types.h"
#include "span_1000/code_80233C78.h"
#include "types.h"




























/* Finishes an entity for the frame: when a player in the D_80140FA0 list owns it, draws its rectangle
 * through func_8029311C_de if that player shows outlines (flag 0x1000), using the entity's colour (or the
 * override colour D_800FEAD8 when D_800C9FE4 is set, darkened when option 0x4000 is set); it then
 * notifies the player list through func_8022A398_de when func_80245798_de is clear and func_802934F8_de is set,
 * and finishes the entity through func_80245894_de. */





extern SharedPlayer_func_80209CD8_de *D_80140FA0;
extern s32 D_800C9FE4;
extern u8 D_800FEAD8[4];
extern s32 D_80142208_de;
extern char D_8011BA00;
extern char D_80140F80;
extern void func_8029311C_de(void *, u8 *, s32, s32, s32, s32);
extern s32 func_80245798_de(void);
extern s32 func_802934F8_de(void);
extern void func_8022A398_de(void *, Entity_func_80233C88_de *);
extern void func_80245894_de(Entity_func_80233C88_de *);

static inline SharedPlayer_func_80209CD8_de *find_owner(Entity_func_80233C88_de *entity) {
    SharedPlayer_func_80209CD8_de *player;

    for (player = D_80140FA0; player != 0; player = player->views16E0.view16E0_1.next) {
        if (player->views5DC.view5DC_4.entity == entity) {
            return player;
        }
    }
    return 0;
}

void func_80233C88_de(Entity_func_80233C88_de *entity) {
    SharedPlayer_func_80209CD8_de *owner;
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
        if (D_800C9FE4 != 0) {
            for (i = 0; i < 4; i++) {
                color[i] = D_800FEAD8[i];
            }
        }
        if (D_80142208_de & 0x4000) {
            color[0] >>= 3;
            color[1] >>= 3;
            color[2] >>= 3;
        }
        func_8029311C_de(&D_8011BA00, color, entity->x, entity->y, entity->x + entity->width,
                      entity->y + entity->height);
    }
    if (func_80245798_de() == 0 && func_802934F8_de() != 0) {
        func_8022A398_de(&D_80140F80, entity);
    }
    func_80245894_de(entity);
}
