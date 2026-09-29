/* Picks an actor's target (the tracked enemy when the aim point is chosen, else the nearest permitted target from func_802149C0), classifies it into one of eight kinds, and fills the target record with the kind, target, height difference, position, direction and distance, both in full and flattened to the horizontal plane. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {float x,y,z;} Vec;
typedef struct { s32 value; } Field_s32_0;
typedef struct { Vec value; } Field_Vec_0;
typedef struct { char pad[0x4]; void * value; } Field_void_4;
typedef struct { char pad[0x4]; s32 value; } Field_s32_4;
typedef struct { char pad[0x8]; f32 value; } Field_f32_8;
typedef struct { char pad[0x8]; Vec value; } Field_Vec_8;
typedef struct { char pad[0xC]; Vec value; } Field_Vec_C;
typedef struct { char pad[0x10]; f32 value; } Field_f32_10;
typedef struct { char pad[0x14]; u16 value; } Field_u16_14;
typedef struct { char pad[0x18]; Vec value; } Field_Vec_18;
typedef struct { char pad[0x18]; void * value; } Field_void_18;
typedef struct { char pad[0x24]; f32 value; } Field_f32_24;
typedef struct { char pad[0x28]; Vec value; } Field_Vec_28;
typedef struct { char pad[0x34]; Vec value; } Field_Vec_34;
typedef struct { char pad[0x34]; s8 value; } Field_s8_34;
typedef struct { char pad[0x40]; f32 value; } Field_f32_40;
typedef struct { char pad[0x68]; void * value; } Field_void_68;
typedef struct { char pad[0x6C]; f32 value; } Field_f32_6C;
typedef struct { char pad[0x78]; s32 value; } Field_s32_78;
typedef struct { char pad[0x80]; void * value; } Field_void_80;
typedef struct { char pad[0x88]; void * value; } Field_void_88;
typedef struct { char pad[0x94]; s8 value; } Field_s8_94;
typedef struct { char pad[0x9C]; f32 value; } Field_f32_9C;
typedef struct { char pad[0xB0]; Vec value; } Field_Vec_B0;
typedef struct { char pad[0xCE]; s8 value; } Field_s8_CE;
typedef struct { char pad[0xE4]; u16 value; } Field_u16_E4;
typedef struct { char pad[0x100]; s32 value; } Field_s32_100;
typedef struct { char pad[0x1D8]; void * value; } Field_void_1D8;
typedef struct { char pad[0x2E0]; s32 value; } Field_s32_2E0;
typedef struct { char pad[0x788]; s32 value; } Field_s32_788;
typedef struct { char pad[0x794]; void * value; } Field_void_794;

extern s32 D_80120DE0,D_8013B290;
extern void *func_802149C0(void *,void *,s32,s32), *func_80219408(void *);
extern f32 func_80216F44(void *,f32,f32,f32),func_802BC380(f32);
extern void func_80271FD8(Vec *,Vec *,Vec *),func_80274090(f32 *);
static inline s32 func_80215410_kind(void *self, void *ctx, void *target) {
    if (((Field_s32_4 *)(ctx))->value == 0) {
        return 6;
    }
    if (target == NULL) {
        if (((Field_s8_94 *)(ctx))->value != 0) {
            return 4;
        }
        return 3;
    }
    if (target == ((Field_void_68 *)(ctx))->value) {
        return 2;
    }
    if (((Field_s32_0 *)(((Field_void_18 *)(target))->value))->value == 5) {
        return 5;
    }
    if (((Field_u16_E4 *)(target))->value == 0x64F) {
        return 7;
    }
    if (D_8013B290 == 0) {
        if ((((Field_s32_100 *)(target))->value & 0x300000) && ((Field_void_794 *)(((Field_void_1D8 *)(target))->value))->value == self
            && ((Field_s32_788 *)(((Field_void_1D8 *)(target))->value))->value == 2) {
            return 1;
        }
        if ((((Field_s32_2E0 *)(self))->value & 2) && ((Field_u16_E4 *)(self))->value != 0xCA) {
            return 1;
        }
    }
    return 0;
}

typedef struct func_80215410_S1 func_80215410_S1;
struct func_80215410_S1 {
    char pad0[0x8];
    Vec unk8;
};

void func_80215410(void *arg0, void *arg1, s32 unused, void *arg3) {
    Vec pos;
    Vec delta;
    f32 height;
    s32 kind;
    void *target;
    void *point;

    if ((((Field_s8_CE *)(arg1))->value == D_80120DE0) && !(((Field_s32_4 *)(((Field_void_18 *)(arg0))->value))->value & 0x400) && (!(((Field_s32_0 *)(arg1))->value & 0x80000) || (((Field_s32_78 *)(arg1))->value != 0))) {
        ((Field_void_80 *)(arg1))->value = func_802149C0(arg0, arg1, 1, 0);
    }
    if ((((Field_s32_0 *)(((Field_void_18 *)(arg0))->value))->value == 1) && (((Field_s8_34 *)(arg1))->value == 0xB)
        && func_80215410_kind(arg0, arg1, ((Field_void_88 *)(arg1))->value) == 4) {
        target = ((Field_void_88 *)(arg1))->value;
        kind = 4;
    } else {
        target = ((Field_void_80 *)(arg1))->value;
        kind = func_80215410_kind(arg0, arg1, target);
    }
    if (target != NULL) {
        pos = ((Field_Vec_8 *)(target))->value;
        height = func_80216F44(arg0, pos.x, pos.y, pos.z);
    } else {
        switch (kind) {
            case 4:
                point = func_80219408((char *)arg1 + 0x94);
                pos = ((Field_Vec_0 *)(point))->value;
                if (((Field_u16_14 *)(point))->value & 1) {
                    height = ((Field_f32_10 *)(point))->value * 0.0174532942f - ((Field_f32_6C *)(arg0))->value;
                } else {
                    height = func_80216F44(arg0, pos.x, pos.y, pos.z);
                }
                break;
            case 3:
                pos = ((Field_Vec_B0 *)(arg1))->value;
                height = ((Field_f32_9C *)(arg1))->value - ((Field_f32_6C *)(arg0))->value;
                break;
            case 6:
                pos = ((Field_Vec_8 *)(arg0))->value;
                height = 0.0f;
                break;
        }
    }
    func_80274090(&height);
    func_80271FD8(&delta, &pos, &((func_80215410_S1 *)(arg0))->unk8);
    ((Field_f32_8 *)(arg3))->value = height;
    ((Field_s32_0 *)(arg3))->value = kind;
    ((Field_void_4 *)(arg3))->value = target;
    ((Field_Vec_C *)(arg3))->value = pos;
    ((Field_Vec_18 *)(arg3))->value = delta;
    ((Field_f32_24 *)(arg3))->value = func_802BC380((delta.x * delta.x) + (delta.y * delta.y) + (delta.z * delta.z));
    delta.y = 0.0f;
    pos.y = 0;
    ((Field_Vec_28 *)(arg3))->value = pos;
    ((Field_Vec_34 *)(arg3))->value = delta;
    ((Field_f32_40 *)(arg3))->value = func_802BC380((delta.x * delta.x) + (delta.y * delta.y) + (delta.z * delta.z));
}
