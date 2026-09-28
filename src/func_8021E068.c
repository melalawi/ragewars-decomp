/* Draws an icon sprite for a view: icons 0x2DA, 0x2E4, 0x2BC and 0x2EF to 0x2F2 sit at the centre of
   the view's viewport, any other icon is placed at a world point projected through func_80239234 when
   the point lies in front of the view's plane and within 64 pixels of the screen D_800E28D0, remapped
   into the viewport when D_801462E5 is set; the sprite is drawn back by its scaled size less one. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    char pad0[0x29C];
    f32 viewport[4];
    char pad2AC[0x340 - 0x2AC];
    Vec3f normal;
    f32 distance;
} View;

extern s32 D_800E28D0;
extern u8 D_801462E5;
extern void func_80239234(View *, Vec3f *, f32 *, f32 *);
extern void func_802ABC18(s32, s32, s16, s16, f32, f32, s32);

void func_8021E068(View *view, Vec3f *point, s32 icon, f32 frame, f32 scale, f32 size) {
    f32 x;
    f32 y;
    f32 offset;

    if (icon == 0x2DA || icon == 0x2E4 || icon == 0x2BC || icon == 0x2EF || icon == 0x2F0
        || icon == 0x2F1 || icon == 0x2F2) {
        x = view->viewport[2] + view->viewport[0] * 0.5f;
        y = view->viewport[3] + view->viewport[1] * 0.5f;
    } else {
        if (!(view->normal.x * point->x + view->normal.y * point->y + view->normal.z * point->z
              <= view->distance)) {
            return;
        }
        func_80239234(view, point, &x, &y);
        if (x < -64.0f || (f32) (D_800E28D0 + 0x40) < x || y < -64.0f
            || (f32) (*(&D_800E28D0 + 1) + 0x40) < y) {
            return;
        }
        if (D_801462E5 != 0) {
            x = view->viewport[2] + x / D_800E28D0 * view->viewport[0];
            y = view->viewport[3] + y / *(&D_800E28D0 + 1) * view->viewport[1];
        }
    }
    offset = scale * size - 1.0f;
    func_802ABC18(icon, frame, x - offset, y - offset, size, size, 1);
}
