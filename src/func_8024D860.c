/* Returns a player's body lean on the ground: a controlled player on an accepted floor (func_80275854) that
 * is not held (flag 1) nor in states 1 or 2 computes a tilt toward the floor normal from func_80275D04 by
 * three eighths of its slope (at most 25 degrees), which the body tilt from func_8024D718 then replaces,
 * and leans along its heading by three quarters of the ground slope ahead from func_80240A88 (at most 25),
 * blending lean and tilt halfway through func_80270D40; other players take func_8024D718's tilt, and
 * objects without a floor or held players get the identity. The sine is kept in D_80115DEC. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Quat;

typedef struct {
    char pad0[0x18];
    Vec3 start;
    char pad24[0x24];
    Vec3 dir;
    char pad54[0x8C];
} Probe;

extern f32 D_80115DEC;
extern s32 func_80275854(s32);
extern void func_80275D04(Vec3 *, s32);
extern void func_80272088(Vec3 *, Vec3 *, Vec3 *);
extern void func_802720EC(Vec3 *);
extern f32 func_80274640(f32);
extern f32 func_802BC200(f32);
extern f32 func_802BB630(f32);
extern Quat func_8024D718(char *);
extern f32 func_80240A88(Probe *, f32, f32, f32, f32);
extern void func_80270D40(Quat *, f32, Quat *, Quat *);

typedef struct func_8024D860_S1 func_8024D860_S1;
typedef struct func_8024D860_S2 func_8024D860_S2;
struct func_8024D860_S1 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    s32 unk14;
    char pad14[0x38 - 0x14 - sizeof(s32)];
    s32 unk38;
    char pad38[0x100 - 0x38 - sizeof(s32)];
    s32 unk100;
};
struct func_8024D860_S2 {
    char pad0[0x8];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x40 - 0x10 - sizeof(f32)];
    f32 unk40;
    char pad40[0x44 - 0x40 - sizeof(f32)];
    Vec3 unk44;
    char pad44[0x6C - 0x44 - sizeof(Vec3)];
    f32 unk6C;
};

#define MIN(a, b) ((a) > (b) ? (b) : (a))

static inline s32 is_held(char *obj) {
    return (*(u8 *)obj != 1) ? 0 : (((func_8024D860_S1 *)(obj))->unk100 & 1);
}

Quat func_8024D860(char *obj) {
    Vec3 normal;
    Vec3 up;
    Vec3 axis;
    Quat tilt;
    Quat lean;
    Quat result;
    Probe probe;
    f32 slope;
    f32 sine;
    f32 cosine;
    f32 angle;
    f32 half;
    char *self;

    if (((func_8024D860_S1 *)(obj))->unk14 != 0 && is_held(obj) == 0) {
        if (*(u8 *)obj == 1) {
            self = obj;
            if (((func_8024D860_S1 *)(obj))->unk38 & 3) {
                goto identity;
            }
            if (((func_8024D860_S1 *)(obj))->unk100 & 0x300000) {
                if (func_80275854(((func_8024D860_S1 *)(obj))->unk14) != 0) {
                    goto identity;
                }
                func_80275D04(&normal, ((func_8024D860_S1 *)(obj))->unk14);
                up.x = 0.0f;
                up.y = 1.0f;
                up.z = 0.0f;
                func_80272088(&axis, &up, &normal);
                func_802720EC(&axis);
                slope = func_80274640(up.x * normal.x + up.y * normal.y + up.z * normal.z);
                D_80115DEC = func_802BC200(MIN(slope, 0.43633235f) * 0.375f);
                tilt.x = axis.x * D_80115DEC;
                tilt.y = axis.y * D_80115DEC;
                tilt.z = axis.z * D_80115DEC;
                tilt.w = func_802BB630(MIN(slope, 0.43633235f) * 0.375f);
                tilt = func_8024D718(obj);
                sine = func_802BC200(((func_8024D860_S2 *)(self))->unk6C);
                cosine = func_802BB630(((func_8024D860_S2 *)(self))->unk6C);
                probe.dir = ((func_8024D860_S2 *)(self))->unk44;
                probe.start.x = ((func_8024D860_S2 *)(self))->unk8;
                probe.start.y = ((func_8024D860_S2 *)(self))->unk40;
                probe.start.z = ((func_8024D860_S2 *)(self))->unk10;
                slope = func_80240A88(&probe, ((func_8024D860_S1 *)(obj))->unk8, ((func_8024D860_S1 *)(obj))->unk10, ((func_8024D860_S1 *)(obj))->unk8 - sine,
                                      ((func_8024D860_S1 *)(obj))->unk10 - cosine);
                slope = MIN(slope, 25.0f) * 0.75f;
                half = 0.5f;
                angle = slope * half;
                D_80115DEC = func_802BC200(angle);
                lean.y = 0.0f;
                lean.x = cosine * D_80115DEC;
                lean.z = -sine * D_80115DEC;
                lean.w = func_802BB630(angle);
                func_80270D40(&result, half, &lean, &tilt);
                return result;
            }
        }
        return func_8024D718(obj);
    }
identity:
    tilt.x = tilt.y = tilt.z = 0.0f;
    tilt.w = 1.0f;
    return tilt;
}
