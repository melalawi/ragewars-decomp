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
typedef struct { f32 first; f32 second; } D_800C8668_Pair;
typedef struct { f32 unk0; } func_80239E94_G2;
extern func_80239E94_G2 D_800C8670;
typedef struct { f32 unk0; } func_80239E94_G3;
extern func_80239E94_G3 D_800C8674;
typedef struct { f32 unk0; } func_80239E94_G4;
extern func_80239E94_G4 D_800C8678;
typedef struct { f32 unk0; } func_80239E94_G5;
extern func_80239E94_G5 D_800C867C;
extern void *func_8028B2D4(char *, s32);
extern f32 func_80274B00(f32, f32);

typedef struct func_80239E94_S1 func_80239E94_S1;
typedef struct func_80239E94_S2 func_80239E94_S2;
typedef struct func_80239E94_S3 func_80239E94_S3;
struct func_80239E94_S1 {
    char pad0[0x58];
    s32 unk58;
    char pad58[0xF4 - 0x58 - sizeof(s32)];
    f32 unkF4;
    char padF4[0xF8 - 0xF4 - sizeof(f32)];
    f32 unkF8;
};
struct func_80239E94_S2 {
    char pad0[0x44];
    s32 unk44;
};
struct func_80239E94_S3 {
    char pad0[0x4];
    f32 unk4;
};

void func_80239E94(void *arg0, Vec3 *out) {
    char *o = (char *)arg0;
    f32 value;
    void *entry;
    f32 targetX;
    f32 targetY;
    f32 scale;

    targetY = 0.0f;
    targetX = targetY;
    entry = func_8028B2D4(&D_8011FE88, ((func_80239E94_S1 *)(o))->unk58);
    if (entry == 0) {
        out->x = targetY;
        out->y = targetY;
        out->z = targetY;
        return;
    }
    if (((func_80239E94_S2 *)(entry))->unk44 & 0x10000) {
        targetX = D_800C8668;
        targetY = ((D_800C8668_Pair *)&D_800C8668)->second;
    }
    value = ((func_80239E94_S1 *)(o))->unkF4 + (targetX - ((func_80239E94_S1 *)(o))->unkF4) * D_800C8670.unk0;
    scale = D_800C8674.unk0;
    ((func_80239E94_S1 *)(o))->unkF4 = value;
    ((func_80239E94_S1 *)(o))->unkF8 += (targetY - ((func_80239E94_S1 *)(o))->unkF8) * D_800C8678.unk0;
    out->x = func_80274B00(-((func_80239E94_S1 *)(o))->unkF4 * scale, ((func_80239E94_S1 *)(o))->unkF4 * scale);
    out->y = func_80274B00(0.0f, ((func_80239E94_S1 *)(o))->unkF8 * D_800C867C.unk0);
    value = -((func_80239E94_S1 *)(o))->unkF4 * scale;
    out->z = func_80274B00(value, ((func_80239E94_S1 *)(o))->unkF4 * scale);
}
