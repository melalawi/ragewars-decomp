/* Produces a random shake offset for an object: looks up the object's model entry in D_8011FE88 and
 * zeroes the offset when there is none; otherwise eases the horizontal and vertical shake amplitudes
 * at 0xF4 and 0xF8 toward the pair D_800C8668 when the entry is flagged 0x10000 (toward zero when not)
 * and draws each offset component at random within the scaled amplitudes. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern char D_8011FE88;
extern f32 D_800C8668;
extern f32 D_800C8670;
extern f32 D_800C8674;
extern f32 D_800C8678;
extern f32 D_800C867C;
extern void *func_8028B2D4(char *, s32);
extern f32 func_80274B00(f32, f32);

void func_80239E94(void *arg0, Vec3 *out) {
    char *o = (char *)arg0;
    f32 value;
    void *entry;
    f32 targetX;
    f32 targetY;
    f32 scale;

    targetY = 0.0f;
    targetX = targetY;
    entry = func_8028B2D4(&D_8011FE88, *(s32 *)(o + 0x58));
    if (entry == 0) {
        out->x = targetY;
        out->y = targetY;
        out->z = targetY;
        return;
    }
    if (*(s32 *)((char *)entry + 0x44) & 0x10000) {
        targetX = D_800C8668;
        targetY = *(f32 *)((char *)&D_800C8668 + 4);
    }
    value = *(f32 *)(o + 0xF4) + (targetX - *(f32 *)(o + 0xF4)) * D_800C8670;
    scale = D_800C8674;
    *(f32 *)(o + 0xF4) = value;
    *(f32 *)(o + 0xF8) += (targetY - *(f32 *)(o + 0xF8)) * D_800C8678;
    out->x = func_80274B00(-*(f32 *)(o + 0xF4) * scale, *(f32 *)(o + 0xF4) * scale);
    out->y = func_80274B00(0.0f, *(f32 *)(o + 0xF8) * D_800C867C);
    value = -*(f32 *)(o + 0xF4) * scale;
    out->z = func_80274B00(value, *(f32 *)(o + 0xF4) * scale);
}
