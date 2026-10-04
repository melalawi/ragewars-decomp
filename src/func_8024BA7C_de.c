#include "span_1000/code_8024B644.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"


/* Draws an actor's attached model: when the actor has one, allocates a matrix from the pool D_8011FFB0,
 * fills it with the given transform multiplied by the camera matrix (func_8026F898_de, func_80272828_de,
 * func_8026FC9C_de), loads it into the display list, draws the model through func_8026C6D8_de with the
 * actor's per-frame state for the current frame, then reloads the camera's per-frame matrix. */






extern Gfx *D_8010C574;
extern s32 D_800CD72C;
extern char D_8011BEF0;
extern s32 func_802799C0_de(void *, s32);
extern void func_8026F898_de(f32 *, f32 *, f32 *);
extern void func_80272828_de(f32 *);
extern void func_8026FC9C_de(f32 *, s32);
extern void func_8026C6D8_de(s32, s32, s32, s32, void *, s32, s32);




void func_8024BA7C_de(void *actor, Camera *camera, f32 *transform, u8 layer) {
    f32 mf[16];
    s32 mtx;
    s32 matrices;
    Gfx *restore;
    Gfx *load;
    s32 offset;

    if (((func_8024BA6C_S1 *)(actor))->unkB4 != 0) {
        mtx = func_802799C0_de(&D_8011BEF0, 1);
        if (mtx != 0) {
            matrices = camera->matrices;
            func_8026F898_de(mf, transform, (f32 *)(matrices + 0x1E0));
            func_80272828_de(mf);
            func_8026FC9C_de(mf, mtx);
            gSPMatrix(D_8010C574++, mtx, G_MTX_LOAD | G_MTX_PROJECTION);
            func_8026C6D8_de(layer, camera->style, ((func_8024BA6C_S1 *)(actor))->unkB4, 1,
                          &(&((func_8024BA6C_S1 *)(actor))->unk140)[D_800CD72C], 0, ((func_8024BA6C_S1 *)(actor))->unk3);
            restore = D_8010C574++;
            offset = (D_800CD72C << 6) + 0x380;
            gSPMatrix(restore, matrices + offset, G_MTX_LOAD | G_MTX_PROJECTION);
        }
    }
}
