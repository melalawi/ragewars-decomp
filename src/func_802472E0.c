#include "basetypes.h"

typedef struct { f32 x, y, z; } Vec3;
typedef struct { f32 m[4][4]; } Matrix;

extern void **func_802518DC(s32, s32, s32, s32, s32, s32, void *, void *, s32);
extern void func_80261690(void *, s32, s32, s32, s32 *, void *);
extern s32 func_802624F8(void *);
extern void func_8026195C(void *, Vec3 *, f32 *, void *);
extern void *func_80262584(void *);
extern void func_80272038(Vec3 *, f32, Vec3 *, Vec3 *);
extern f32 func_80273F54(f32, f32, f32);
extern void func_802624C8(void *);
extern void func_80274090(f32 *);
extern void func_80273744(Matrix *, f32);
extern void func_80272908(Matrix *, Vec3 *, Vec3 *);
extern void func_802536F4(s32, s32);

extern s32 D_8011FE88;
extern f32 D_800D2988;
extern f32 D_800C8A38;
extern char D_800C8A20;

#define AT(t,p,o) (*(t *)((char *)(p) + (o)))

void func_802472E0(void *arg0) {
    Vec3 first;
    Vec3 second;
    Vec3 saved;
    Vec3 moved;
    Matrix matrix;
    s32 active;
    f32 first_value;
    f32 second_value;
    void **resource;
    void *track0;
    void *track1;
    f32 value;

    if (D_8011FE88 == 4) {
        if (AT(s8, arg0, 0x10F) == 0)
            AT(s8, arg0, 0x10E) = 1;
        if (AT(s8, arg0, 0x123) == 0)
            AT(s8, arg0, 0x122) = 1;
        if (AT(s8, arg0, 0x10F) == 0 && !(AT(s32, arg0, 0x100) & 0x400))
            return;
        if (!(AT(s32, arg0, 0x100) & 0x2000))
            return;
    }

    resource = func_802518DC(0, AT(s32, arg0, 0xC8), AT(s32, arg0, 0xC8),
        ((AT(s8, arg0, 0xE6) * 4) + 0xF) & ~7, 4, 0, 0,
        &D_800C8A20 + 4, 0);
    if (resource == 0)
        return;

    track0 = (char *)arg0 + 0x104;
    track1 = (char *)arg0 + 0x118;
    func_80261690(track0, (s32)*resource, AT(s32, arg0, 0xC8), 1, &active, track1);
    if (func_802624F8(track0) != 0) {
        void *entry;
        func_8026195C(track0, &first, &first_value, arg0);
        value = first_value;
        saved = first;
        if (active != 0 && AT(s16, track1, 4) != -1) {
            u16 count;
            entry = func_80262584(track0);
            if (AT(u16, entry, 0) != 0) {
                AT(s32, arg0, 0x100) |= 0x400;
                count = AT(u16, entry, 0);
                AT(f32, arg0, 0x134) = 0.0f;
                AT(u16, arg0, 0x12C) = count;
                AT(u8, arg0, 0x138) = AT(u8, entry, 5);
                AT(u8, arg0, 0x139) = AT(u8, entry, 7);
            } else {
                AT(s32, arg0, 0x100) &= ~0x400;
            }
        }
        if (AT(s32, arg0, 0x100) & 0x400) {
            func_80261690(track1, (s32)*resource, AT(s32, arg0, 0xC8), 0, 0, 0);
            if (func_802624F8(track1) != 0) {
                f32 time;
                f32 end;
                time = AT(f32, arg0, 0x134) + D_800D2988;
                end = (f32)AT(s16, arg0, 0x12C);
                AT(f32, arg0, 0x134) = time;
                if (end < time) {
                    AT(s32, arg0, 0x100) &= ~0x400;
                } else {
                    f32 a = (f32)AT(u8, arg0, 0x139);
                    f32 b = (f32)AT(u8, arg0, 0x138);
                    f32 t = time / (end + D_800D2988);
                    AT(f32, arg0, 0x130) = (((a + D_800C8A38 + b) * t * t * t) +
                        (((*(&D_800C8A38 + 1) - a) - (2.0f * b)) * t * t) + (b * t));
                    func_8026195C((char *)arg0 + 0x118, &second, &second_value, arg0);
                    func_80272038(&saved, AT(f32, arg0, 0x130), &second, &first);
                    value = func_80273F54(AT(f32, arg0, 0x130), second_value, first_value);
                }
                func_802624C8(track1);
            } else {
                AT(s32, arg0, 0x100) &= ~0x400;
            }
        }
        func_802624C8(track0);
        if (AT(s32, arg0, 0x100) & 0x20000) {
            AT(f32, arg0, 0x6C) -= value;
            func_80274090((f32 *)((char *)arg0 + 0x6C));
            saved.z = saved.y;
            saved.y = 0.0f;
            func_80273744(&matrix, AT(f32, arg0, 0x6C));
            func_80272908(&matrix, &saved, &moved);
            AT(f32, arg0, 8) += moved.x * AT(f32, arg0, 0x50);
            AT(f32, arg0, 0x10) += moved.z * AT(f32, arg0, 0x58);
        } else if (!(AT(s32, arg0, 0x100) & 0x300000) && AT(u16, arg0, 0xE4) == 0x137) {
            AT(f32, arg0, 0x6C) -= value;
            func_80274090((f32 *)((char *)arg0 + 0x6C));
        }
    }
    func_802536F4(0, (s32)resource);
}
