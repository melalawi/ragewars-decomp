/* Picks an actor's target (the tracked enemy when the aim point is chosen, else the nearest permitted target from func_802149C0), classifies it into one of eight kinds, and fills the target record with the kind, target, height difference, position, direction and distance, both in full and flattened to the horizontal plane. */
#include "basetypes.h"
#define NULL ((void *)0)
#define F(p,t,o) (*(t *)((char *)(p)+(o)))
typedef struct {float x,y,z;} Vec;
extern s32 D_80120DE0,D_8013B290;
extern void *func_802149C0(void *,void *,s32,s32), *func_80219408(void *);
extern f32 func_80216F44(void *,f32,f32,f32),func_802BC380(f32);
extern void func_80271FD8(Vec *,Vec *,Vec *),func_80274090(f32 *);
static inline s32 func_80215410_kind(void *self, void *ctx, void *target) {
    if (F(ctx,s32,0x4) == 0) {
        return 6;
    }
    if (target == NULL) {
        if (F(ctx,s8,0x94) != 0) {
            return 4;
        }
        return 3;
    }
    if (target == F(ctx,void *,0x68)) {
        return 2;
    }
    if (F(F(target,void *,0x18),s32,0) == 5) {
        return 5;
    }
    if (F(target,u16,0xE4) == 0x64F) {
        return 7;
    }
    if (D_8013B290 == 0) {
        if ((F(target,s32,0x100) & 0x300000) && F(F(target,void *,0x1D8),void *,0x794) == self
            && F(F(target,void *,0x1D8),s32,0x788) == 2) {
            return 1;
        }
        if ((F(self,s32,0x2E0) & 2) && F(self,u16,0xE4) != 0xCA) {
            return 1;
        }
    }
    return 0;
}

void func_80215410(void *arg0, void *arg1, s32 unused, void *arg3) {
    Vec pos;
    Vec delta;
    f32 height;
    s32 kind;
    void *target;
    void *point;

    if ((F(arg1,s8,0xCE) == D_80120DE0) && !(F(F(arg0,void *,0x18),s32,4) & 0x400) && (!(F(arg1,s32,0x0) & 0x80000) || (F(arg1,s32,0x78) != 0))) {
        F(arg1,void *,0x80) = func_802149C0(arg0, arg1, 1, 0);
    }
    if ((F(F(arg0,void *,0x18),s32,0) == 1) && (F(arg1,s8,0x34) == 0xB)
        && func_80215410_kind(arg0, arg1, F(arg1,void *,0x88)) == 4) {
        target = F(arg1,void *,0x88);
        kind = 4;
    } else {
        target = F(arg1,void *,0x80);
        kind = func_80215410_kind(arg0, arg1, target);
    }
    if (target != NULL) {
        pos = F(target,Vec,0x8);
        height = func_80216F44(arg0, pos.x, pos.y, pos.z);
    } else {
        switch (kind) {
            case 4:
                point = func_80219408((char *)arg1 + 0x94);
                pos = F(point,Vec,0x0);
                if (F(point,u16,0x14) & 1) {
                    height = F(point,f32,0x10) * 0.0174532942f - F(arg0,f32,0x6C);
                } else {
                    height = func_80216F44(arg0, pos.x, pos.y, pos.z);
                }
                break;
            case 3:
                pos = F(arg1,Vec,0xB0);
                height = F(arg1,f32,0x9C) - F(arg0,f32,0x6C);
                break;
            case 6:
                pos = F(arg0,Vec,0x8);
                height = 0.0f;
                break;
        }
    }
    func_80274090(&height);
    func_80271FD8(&delta, &pos, (Vec *)((char *)arg0 + 8));
    F(arg3,f32,0x8) = height;
    F(arg3,s32,0x0) = kind;
    F(arg3,void *,0x4) = target;
    F(arg3,Vec,0xC) = pos;
    F(arg3,Vec,0x18) = delta;
    F(arg3,f32,0x24) = func_802BC380((delta.x * delta.x) + (delta.y * delta.y) + (delta.z * delta.z));
    delta.y = 0.0f;
    pos.y = 0;
    F(arg3,Vec,0x28) = pos;
    F(arg3,Vec,0x34) = delta;
    F(arg3,f32,0x40) = func_802BC380((delta.x * delta.x) + (delta.y * delta.y) + (delta.z * delta.z));
}
