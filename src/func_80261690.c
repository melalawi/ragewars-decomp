/* Switches an animation track to its pending clip when asked and the clip differs: keeps a copy of the track, loads the pending clip's resource and, when it is ready, reads its frame count and length, hands the old state to the previous track slot, restarts the track on the new clip and reports the switch; otherwise, or when not switching, it reloads the current clip and reports no switch. */
#include "basetypes.h"

typedef struct Anim {
    s32 time;
    s16 current;
    s16 next;
    u16 frames;
    u8 blending;
    u8 active;
    s32 length;
    void *resource;
} Anim;

extern char D_25F58C;
extern char D_800C92A0;

extern s32 func_8028FE1C(s32, s32, s32, s32 *);
extern void *func_802518DC(s32, s32, s32, s32, s32, Anim *, void *, void *, s32);
extern s32 func_802624F8(Anim *);
extern void *func_802604BC(Anim *);
extern void *func_8028FD94(void *, s32);

static inline s32 load(Anim *anim, s32 table, s32 key, s32 id) {
    s32 size;
    s32 clip;
    void *header;

    if (id == -1) {
        anim->resource = 0;
        return 0;
    }
    clip = func_8028FE1C(table, key, id, &size);
    anim->resource = func_802518DC(0, clip, clip, size, 4, anim, &D_25F58C, &D_800C92A0, 0);
    if (func_802624F8(anim) == 0) {
        return 0;
    }
    header = func_802604BC(anim);
    anim->frames = ((u16 *)func_8028FD94(header, 0))[3];
    anim->current = id;
    anim->length = ((u16 *)func_8028FD94(func_8028FD94(header, 3), 0))[1];
    return 1;
}

void func_80261690(Anim *anim, s32 table, s32 key, s32 blend, s32 *switched, Anim *previous) {
    s32 current;
    s32 next;
    Anim saved;

    current = anim->current;
    next = anim->next;
    if (next != current && blend != 0) {
        anim->active = 1;
        saved = *anim;
        if (load(anim, table, key, next)) {
            if (previous != 0) {
                *previous = saved;
                previous->current = current;
                previous->next = current;
                previous->active = 1;
            }
            anim->current = next;
            anim->next = next;
            anim->time = 0;
            anim->blending = 0;
            anim->active = 1;
            if (switched != 0) {
                *switched = 1;
            }
            return;
        }
        if (switched != 0) {
            *switched = 0;
        }
        load(anim, table, key, current);
        return;
    }
    if (switched != 0) {
        *switched = 0;
    }
    load(anim, table, key, current);
}
