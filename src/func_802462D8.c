/* Returns the collisions an object would meet moving to a position, without committing the move: picks the collision set for the object
 * (D_801040D0 for flagged players; otherwise by func_8024DF4C and then func_8024DF90 or func_8024DED0 among
 * D_80103FF0, D_80104070, D_80104050 and D_801040D0), reports it through the optional out pointer, runs
 * the collision mover func_80243A80 and restores the object's 0x50-byte header. Adapted from
 * func_8024642C. */
#include "basetypes.h"

typedef struct {
    s32 w[20];
} InstanceHdr;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern char D_80103FF0;
extern char D_80104050;
extern char D_80104070;
extern char D_801040D0;
extern s32 func_8024DED0(InstanceHdr *);
extern s32 func_8024DF4C(InstanceHdr *);
extern s32 func_8024DF90(InstanceHdr *);
extern s32 func_80243A80(InstanceHdr *, Vec3, char *);

s32 func_802462D8(InstanceHdr *arg0, Vec3 position, char **out) {
    InstanceHdr saved;
    char *set;
    s32 grounded;
    s32 collisions;

    if (*(u8 *)arg0 == 1 && (*(s32 *)((char *)arg0 + 0x100) & 0x300000) != 0) {
        set = &D_801040D0;
    } else {
        grounded = func_8024DED0(arg0);
        if (func_8024DF4C(arg0) == 0) {
            set = &D_801040D0;
            if (grounded != 0) {
                set = &D_80104050;
            }
        } else if (func_8024DF90(arg0) == 0) {
            set = &D_80104070;
        } else {
            set = &D_80103FF0;
        }
    }
    if (out != 0) {
        *out = set;
    }
    saved = *arg0;
    collisions = func_80243A80(arg0, position, set);
    *arg0 = saved;
    return collisions;
}
