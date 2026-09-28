#include "basetypes.h"

/* Spawns the standing effects of an animation for an object: every event whose effect id is 6 or 7 is placed by transforming its local point through the object's matrix at 0x74 and spawned through func_80265E30 with its parameters. */

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    s32 arg0;
    s32 arg1;
} Params;

typedef struct {
    u16 frame;
    u16 effect;
    s16 bone;
    s16 pad6;
    Vec3 local;
    Params params;
} Event;

extern Event *func_802625B8(void *);
extern s32 func_802625E4(void *);
extern void func_80272908(void *matrix, Vec3 *in, Vec3 *out);
extern void func_80265E30(char *, char *, u16, s32, Vec3, Params);

void func_8024C1B4(char *obj, void *anim)
{
    Event *e;
    s32 count;
    s32 i;
    Vec3 pos;

    e = func_802625B8(anim);
    count = func_802625E4(anim);
    for (i = 0; i < count; i++) {
        switch (e[i].effect) {
        case 6:
        case 7:
            func_80272908(obj + 0x74, &e[i].local, &pos);
            func_80265E30(obj, obj, e[i].effect, -1, pos, e[i].params);
        }
    }
}
