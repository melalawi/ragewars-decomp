/* Draws an actor's attached model: when the actor has one, allocates a matrix from the pool D_8011FFB0,
 * fills it with the given transform multiplied by the camera matrix (func_8026F908, func_80272898,
 * func_8026FD0C), loads it into the display list, draws the model through func_8026C6D8 with the
 * actor's per-frame state for the current frame, then reloads the camera's per-frame matrix. */
typedef struct {
    struct {
        unsigned int w0;
        unsigned int w1;
    } words;
} Gfx;

#include "basetypes.h"

typedef struct {
    char data[0x18];
} Frame;

typedef struct {
    char pad0[8];
    s32 matrices;
    char pad1[4];
    s32 style;
} Camera;

extern Gfx *D_80110634;
extern s32 D_800D297C;
extern char D_8011FFB0;
extern s32 func_80279A30(void *, s32);
extern void func_8026F908(f32 *, f32 *, f32 *);
extern void func_80272898(f32 *);
extern void func_8026FD0C(f32 *, s32);
extern void func_8026C6D8(s32, s32, s32, s32, void *, s32, s32);

void func_8024BA6C(void *actor, Camera *camera, f32 *transform, u8 layer) {
    f32 mf[16];
    s32 mtx;
    s32 matrices;
    Gfx *restore;
    Gfx *load;
    s32 offset;

    if (*(s32 *)((char *)actor + 0xB4) != 0) {
        mtx = func_80279A30(&D_8011FFB0, 1);
        if (mtx != 0) {
            matrices = camera->matrices;
            func_8026F908(mf, transform, (f32 *)(matrices + 0x1E0));
            func_80272898(mf);
            func_8026FD0C(mf, mtx);
            load = D_80110634++;
            load->words.w0 = 0xDA380007;
            load->words.w1 = mtx;
            func_8026C6D8(layer, camera->style, *(s32 *)((char *)actor + 0xB4), 1,
                          &((Frame *)((char *)actor + 0x140))[D_800D297C], 0, *(s8 *)((char *)actor + 3));
            restore = D_80110634++;
            offset = (D_800D297C << 6) + 0x380;
            restore->words.w0 = 0xDA380007;
            restore->words.w1 = matrices + offset;
        }
    }
}
