#include "common/types_8a8189af7b05.h"
#include "span_1000/code_80233920.h"
#include "span_1000/code_80265370.h"
#include "types.h"
#include "common/types_8fd754e1e915.h"

extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_802B72B0_de(f32);

extern f32 func_802B7130_de(f32);
extern f32 func_80274A90_de(f32, f32);

void func_80233930_de(Effect33920 *arg0, u32 x, u32 y, u32 z, Vec3 *out) {
    f32 distance;
    f32 value;
    AxisWave *wave;

    func_80271F68_de((Vec3 *)&x, (Vec3 *)&x, &arg0->origin);
    distance = func_802B72B0_de((*(f32 *)&x * *(f32 *)&x) +
                             (*(f32 *)&y * *(f32 *)&y) +
                             (*(f32 *)&z * *(f32 *)&z));
    if (distance < arg0->radius) {
        distance = func_80265714_de(D_800C3090_de - (distance / arg0->radius));

        wave = &arg0->x;
        if (wave->kind == 0) goto x_sine;
        if (wave->kind != 1) goto x_zero;
        value = func_802B7130_de(wave->rate * D_800C3094_de) * wave->scale;
        goto x_done;
x_sine:
        value = func_80274A90_de(-wave->scale, wave->scale);
        goto x_done;
x_zero:
        value = 0.0f;
x_done:
        out->x += value * distance;

        wave = &arg0->y;
        if (wave->kind == 0) goto y_sine;
        if (wave->kind != 1) goto y_zero;
        value = func_802B7130_de(wave->rate * D_800C3098_de) * wave->scale;
        goto y_done;
y_sine:
        value = func_80274A90_de(-wave->scale, wave->scale);
        goto y_done;
y_zero:
        value = 0.0f;
y_done:
        out->y += value * distance;

        wave = &arg0->z;
        if (wave->kind == 0) goto z_sine;
        if (wave->kind != 1) goto z_zero;
        value = func_802B7130_de(wave->rate * D_800C309C_de) * wave->scale;
        goto z_done;
z_sine:
        value = func_80274A90_de(-wave->scale, wave->scale);
        goto z_done;
z_zero:
        value = 0.0f;
z_done:
        out->z += value * distance;
    }
}

/* Advances an overlay's fade: state 1 fades the alpha at 0x551 in over the 0x54B-frame duration up to the
 * maximum at 0x54A, state 2 holds the maximum for 0x54C frames, state 3 fades out over 0x54D frames and
 * returns to state 0; each state change restarts the timer at 0x538, which then advances by the frame
 * time D_800D2988. */



extern f32 D_800CD738;

void func_80233B14_de(Overlay *overlay) {
    switch (overlay->state) {
    case 1:
        if (overlay->fadeIn <= overlay->timer) {
            overlay->state = 2;
            overlay->timer = 0.0f;
            goto hold;
        }
        overlay->alpha = (u32)(overlay->timer / (overlay->fadeIn + 1) * overlay->alphaMax);
        break;
    case 0:
        break;
    case 2:
    hold:
        if (!(overlay->hold <= overlay->timer)) {
            overlay->alpha = overlay->alphaMax;
            break;
        }
        overlay->state = 3;
        overlay->timer = 0.0f;
        /* fallthrough */
    case 3:
        if (overlay->fadeOut <= overlay->timer) {
            overlay->state = 0;
            overlay->timer = 0.0f;
            break;
        }
        overlay->alpha = (u32)(overlay->alphaMax - overlay->timer / (overlay->fadeOut + 1) * overlay->alphaMax);
        break;
    }
    overlay->timer += D_800CD738;
}

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
