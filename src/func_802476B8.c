/* Fires the effect events of an object's animation that fall within a frame window: only for the object's
 * own animation at 0x104 or an object flagged 0x4000000; each event whose frame lies in [from, to) is
 * placed from its local point through the object's matrix when it names no bone, otherwise through its
 * bone matrix (or at the object's position when it has none), and for models 0x44E, 0x451 and 0x453 an
 * effect flagged 4 fires only if its bone's hit box shares the object's mask; each fired event spawns its
 * effect through func_80265E30 and is counted in D_800D06BC. */
#include "basetypes.h"

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

typedef struct {
    s32 flags;
    s32 pad4;
} EffectInfo;

typedef struct {
    s32 size;
    s32 count;
} BoxTable;

extern EffectInfo D_800D1384[];
extern s32 D_800D06BC;
extern Event *func_802625B8(void *);
extern s32 func_802625E4(void *);
extern s32 *func_8024BFC4(char *, s8);
extern BoxTable *func_8028FD94(s32, s32);
extern void func_802536F4(s32, s32 *);
extern void func_80270980(f32 *, char *);
extern void func_80272908(void *, Vec3 *, Vec3 *);
extern void func_80265E30(char *, char *, u16, s32, Vec3, Params);

void func_802476B8(char *obj, void *anim, f32 from, f32 to) {
    Vec3 pos;
    Vec3 local;
    f32 matrix[16];
    Event *events;
    s32 count;
    s32 i;
    s32 checkMask;
    s32 fire;
    s32 *resource;
    BoxTable *table;

    if (!(*(s32 *)(obj + 0x100) & 0x4000000) && anim != obj + 0x104) {
        return;
    }
    switch (*(u16 *)(obj + 0xE4)) {
    case 0x44E:
    case 0x451:
    case 0x453:
        checkMask = 1;
        break;
    default:
        checkMask = 0;
        break;
    }
    table = 0;
    events = func_802625B8(anim);
    count = func_802625E4(anim);
    resource = 0;
    for (i = 0; i < count; i++) {
        if (from <= (f32)events[i].frame && (f32)events[i].frame < to) {
            fire = 1;
            if (events[i].bone == -1) {
                local.x = events[i].local.x;
                local.y = events[i].local.z;
                local.z = events[i].local.y;
                func_80272908(obj + 0x74, &local, &pos);
            } else {
                if (checkMask && (D_800D1384[events[i].effect].flags & 4)) {
                    if (resource == 0) {
                        resource = func_8024BFC4(obj, *(s8 *)(obj + 1));
                        if (resource == 0) {
                            goto masked;
                        }
                        table = func_8028FD94(*resource, 5);
                    }
                    fire = *(s32 *)((char *)table + (events[i].bone * table->size + 0x74)) & *(s32 *)(obj + 0x17C);
                }
            masked:
                if (fire == 0) {
                    continue;
                }
                if (*(char **)(obj + 0xB8) != 0) {
                    func_80270980(matrix, *(char **)(obj + 0xB8) + (events[i].bone << 6));
                    func_80272908(matrix, &events[i].local, &pos);
                } else {
                    pos = *(Vec3 *)(obj + 0x8);
                }
            }
            if (fire != 0) {
                func_80265E30(obj, obj, events[i].effect, -1, pos, events[i].params);
                D_800D06BC++;
            }
        }
    }
    if (resource != 0) {
        func_802536F4(0, resource);
    }
}
