/* Draws an object's cast shadow: objects without shadow flag 0x10000000 get the blob shadow of
 * func_8024ADC0; otherwise, once per frame the shadow model from func_80279A30 is built for an object above
 * the ground: the light of the current view (direction from its signed bytes, strength from its colour)
 * is sampled at the object through func_80268A40, the shadow alpha is 128 plus 56 per unit of light (faded
 * by D_800D15F0 during a fade), the light direction is kept at least 0.15 from horizontal, and the shadow
 * is projected along it onto a plane just below the object (0.9 of its height up to 512), grown by 0.003
 * per unit of height, turned by the object's orientation and placed on the ground; the shadow is then
 * submitted through func_8024BA6C. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern char D_8011FFB0;
extern char D_8013B1A8;
extern s32 D_800D297C;
extern s32 D_800D15E0;
extern f32 D_800D15F0;
extern s32 func_8024E148(void);
extern f32 func_8024E640(char *, s32);
extern void *func_80279A30(void *, s32);
extern f32 func_802BC380(f32);
extern void func_80268A40(void *, Vec3, Vec3 *, f32 *);
extern void func_802720EC(Vec3 *);
extern void func_8027317C(f32 *, Vec3 *, f32);
extern void func_802734B8(void *, f32, f32, f32);
extern void func_80273618(f32 *, f32, f32, f32);
extern void func_802742B4(void *, f32 *);
extern void func_8026F690(void *, f32 *, f32 *);
extern void func_8024BA6C(char *, char *, void *, u8);
extern void func_8024ADC0(char *, s32, s32);

#define ABS(x) ((x) < 0.0f ? -(x) : (x))

void func_8024AA08(char *obj, s32 unused, char *info) {
    Vec3 dir;
    f32 projection[16];
    f32 turn[16];
    f32 strength;
    f32 ground;
    f32 height;
    f32 plane;
    f32 scale;
    f32 diff;
    char *light;
    s32 alpha;

    if (*(s32 *)(obj + 0x14) == 0 || func_8024E148() == 0 || (*(s32 *)(obj + 0x100) & 0x200000)) {
        return;
    }
    if (*(s32 *)(obj + 0x100) & 0x10000000) {
        if (*(void **)(obj + 0xBC) == 0) {
            ground = func_8024E640(obj, 0);
            if (*(f32 *)(obj + 0xC) < ground) {
                return;
            }
            diff = *(f32 *)(obj + 0xC) - ground;
            height = (512.0f < diff) ? 512.0f : diff;
            if ((*(void **)(obj + 0xBC) = func_80279A30(&D_8011FFB0, 1)) == 0) {
                return;
            }
            light = obj + (D_800D297C * 0x18 + 0x140);
            dir.x = *(s8 *)(light + 0x10) * 0.007874016f;
            dir.y = *(s8 *)(light + 0x11) * 0.007874016f;
            dir.z = *(s8 *)(light + 0x12) * 0.007874016f;
            strength = func_802BC380((f32)*(u8 *)(light + 0x8) * (f32)*(u8 *)(light + 0x8) +
                                         (f32)*(u8 *)(light + 0x9) * (f32)*(u8 *)(light + 0x9) +
                                         (f32)*(u8 *)(light + 0x9) * (f32)*(u8 *)(light + 0x9)) *
                       -0.00090497744f;
            func_80268A40(&D_8013B1A8, *(Vec3 *)(obj + 0x8), &dir, &strength);
            if (strength < -1.0f) {
                strength = -1.0f;
            }
            alpha = strength * 56.0f + 128.0f;
            if (D_800D15E0 == 1) {
                alpha = alpha * D_800D15F0 * 0.003921569f;
            }
            *(u8 *)(obj + 0x13A) = alpha;
            dir.y = 1.0f;
            func_802720EC(&dir);
            if (ABS(dir.y) < 0.15f) {
                if (dir.y >= 0.0f) {
                    dir.y = 0.15f;
                } else {
                    dir.y = -0.15f;
                }
                func_802720EC(&dir);
            }
            plane = ground + height * 0.9f;
            func_8027317C(projection, &dir, plane);
            func_802734B8(projection, -*(f32 *)(obj + 0x8), -plane, -*(f32 *)(obj + 0x10));
            scale = height * 0.003f + 1.0f;
            func_80273618(projection, scale, scale, scale);
            func_802742B4(obj + 0x5C, turn);
            func_8026F690(*(void **)(obj + 0xBC), projection, turn);
            func_802734B8(*(void **)(obj + 0xBC), *(f32 *)(obj + 0x8), ground, *(f32 *)(obj + 0x10));
            if (*(void **)(obj + 0xBC) == 0) {
                return;
            }
        }
        func_8024BA6C(obj, info, *(void **)(obj + 0xBC), *(u8 *)(obj + 0x13A));
    } else {
        func_8024ADC0(obj, *(s32 *)(info + 0x14), 0);
    }
}
