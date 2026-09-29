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

typedef struct { s32 unk0; } func_802472E0_G1;
extern func_802472E0_G1 D_8011FE88;
typedef struct { f32 unk0; } func_802472E0_G2;
extern f32 D_800D2988;
typedef struct { f32 unk0; } func_802472E0_G3;
extern f32 D_800C8A38;
extern char D_800C8A20;



typedef struct func_802472E0_S1 func_802472E0_S1;
struct func_802472E0_S1 {
    char pad0[8];
    f32 unk8;
    char padC[4];
    f32 unk10;
    char pad14[60];
    f32 unk50;
    char pad54[4];
    f32 unk58;
    char pad5C[16];
    f32 unk6C;
    char pad70[88];
    s32 unkC8;
    char padCC[24];
    u16 unkE4;
    s8 unkE6;
    char padE7[25];
    s32 unk100;
    char unk104;
    char pad105[9];
    s8 unk10E;
    s8 unk10F;
    char pad110[8];
    char unk118;
    char pad119[9];
    s8 unk122;
    s8 unk123;
    char pad124[8];
    union { s16 signedValue; u16 unsignedValue; } unk12C;
    char pad12E[2];
    f32 unk130;
    f32 unk134;
    u8 unk138;
    u8 unk139;
};

typedef struct { char pad0[4]; s16 unk4; } func_802472E0_Track;
typedef struct { u16 unk0; char pad2[3]; u8 unk5; char pad6; u8 unk7; } func_802472E0_Entry;

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

    if (D_8011FE88.unk0 == 4) {
        if (((func_802472E0_S1 *)arg0)->unk10F == 0)
            ((func_802472E0_S1 *)arg0)->unk10E = 1;
        if (((func_802472E0_S1 *)arg0)->unk123 == 0)
            ((func_802472E0_S1 *)arg0)->unk122 = 1;
        if (((func_802472E0_S1 *)arg0)->unk10F == 0 && !(((func_802472E0_S1 *)arg0)->unk100 & 0x400))
            return;
        if (!(((func_802472E0_S1 *)arg0)->unk100 & 0x2000))
            return;
    }

    resource = func_802518DC(0, ((func_802472E0_S1 *)arg0)->unkC8, ((func_802472E0_S1 *)arg0)->unkC8,
        ((((func_802472E0_S1 *)arg0)->unkE6 * 4) + 0xF) & ~7, 4, 0, 0,
        &D_800C8A20 + 4, 0);
    if (resource == 0)
        return;

    track0 = &((func_802472E0_S1 *)(arg0))->unk104;
    track1 = &((func_802472E0_S1 *)(arg0))->unk118;
    func_80261690(track0, (s32)*resource, ((func_802472E0_S1 *)arg0)->unkC8, 1, &active, track1);
    if (func_802624F8(track0) != 0) {
        void *entry;
        func_8026195C(track0, &first, &first_value, arg0);
        value = first_value;
        saved = first;
        if (active != 0 && ((func_802472E0_Track *)track1)->unk4 != -1) {
            u16 count;
            entry = func_80262584(track0);
            if (((func_802472E0_Entry *)entry)->unk0 != 0) {
                ((func_802472E0_S1 *)arg0)->unk100 |= 0x400;
                count = ((func_802472E0_Entry *)entry)->unk0;
                ((func_802472E0_S1 *)arg0)->unk134 = 0.0f;
                ((func_802472E0_S1 *)arg0)->unk12C.unsignedValue = count;
                ((func_802472E0_S1 *)arg0)->unk138 = ((func_802472E0_Entry *)entry)->unk5;
                ((func_802472E0_S1 *)arg0)->unk139 = ((func_802472E0_Entry *)entry)->unk7;
            } else {
                ((func_802472E0_S1 *)arg0)->unk100 &= ~0x400;
            }
        }
        if (((func_802472E0_S1 *)arg0)->unk100 & 0x400) {
            func_80261690(track1, (s32)*resource, ((func_802472E0_S1 *)arg0)->unkC8, 0, 0, 0);
            if (func_802624F8(track1) != 0) {
                f32 time;
                f32 end;
                time = ((func_802472E0_S1 *)arg0)->unk134 + D_800D2988;
                end = (f32)((func_802472E0_S1 *)arg0)->unk12C.signedValue;
                ((func_802472E0_S1 *)arg0)->unk134 = time;
                if (end < time) {
                    ((func_802472E0_S1 *)arg0)->unk100 &= ~0x400;
                } else {
                    f32 a = (f32)((func_802472E0_S1 *)arg0)->unk139;
                    f32 b = (f32)((func_802472E0_S1 *)arg0)->unk138;
                    f32 t = time / (end + D_800D2988);
                    ((func_802472E0_S1 *)arg0)->unk130 = (((a + D_800C8A38 + b) * t * t * t) +
                        ((((&D_800C8A38)[1] - a) - (2.0f * b)) * t * t) + (b * t));
                    func_8026195C(&((func_802472E0_S1 *)(arg0))->unk118, &second, &second_value, arg0);
                    func_80272038(&saved, ((func_802472E0_S1 *)arg0)->unk130, &second, &first);
                    value = func_80273F54(((func_802472E0_S1 *)arg0)->unk130, second_value, first_value);
                }
                func_802624C8(track1);
            } else {
                ((func_802472E0_S1 *)arg0)->unk100 &= ~0x400;
            }
        }
        func_802624C8(track0);
        if (((func_802472E0_S1 *)arg0)->unk100 & 0x20000) {
            ((func_802472E0_S1 *)arg0)->unk6C -= value;
            func_80274090(&((func_802472E0_S1 *)(arg0))->unk6C);
            saved.z = saved.y;
            saved.y = 0.0f;
            func_80273744(&matrix, ((func_802472E0_S1 *)arg0)->unk6C);
            func_80272908(&matrix, &saved, &moved);
            ((func_802472E0_S1 *)arg0)->unk8 += moved.x * ((func_802472E0_S1 *)arg0)->unk50;
            ((func_802472E0_S1 *)arg0)->unk10 += moved.z * ((func_802472E0_S1 *)arg0)->unk58;
        } else if (!(((func_802472E0_S1 *)arg0)->unk100 & 0x300000) && ((func_802472E0_S1 *)arg0)->unkE4 == 0x137) {
            ((func_802472E0_S1 *)arg0)->unk6C -= value;
            func_80274090(&((func_802472E0_S1 *)(arg0))->unk6C);
        }
    }
    func_802536F4(0, (s32)resource);
}
