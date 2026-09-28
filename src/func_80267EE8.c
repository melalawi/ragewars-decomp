#include "basetypes.h"

/* Effect callback that plays a sound and runs its hook: the sound of entry arg6.value in D_800D7F84 is started through func_80237E70 on the emitter of a mirrored player's parent (skipped when it has none) or on the default emitter at D_80145088 + 0x40, and the entry's hook is then run through func_8025E13C when present. */

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

typedef struct Params {
    s32 value;
    s16 angle;
    u8 scale;
    u8 pad;
} Params;

typedef struct Inner {
    char pad[0x5DC];
    char *parent;
} Inner;

typedef struct Context {
    u8 type;
    char pad1[0xFF];
    s32 flags;
    char pad104[0x1D8 - 0x104];
    Inner *inner;
} Context;

typedef struct SoundEntry {
    s32 *sound;
    s32 hook;
} SoundEntry;

extern SoundEntry D_800D7F84[];
extern char D_80145088[];
extern void func_80237E70(char *system, char *emitter, s32 sound);
extern void func_8025E13C(s32 hook);

void func_80267EE8(s32 arg0, Context *arg1, s32 arg2, Triple arg3, Params arg6)
{
    if (arg1->type == 1 && (arg1->flags & 0x300000)) {
        char *parent = arg1->inner->parent;

        if (parent != 0) {
            func_80237E70(D_80145088, parent, *D_800D7F84[arg6.value].sound);
        }
    } else {
        func_80237E70(D_80145088, D_80145088 + 0x40, *D_800D7F84[arg6.value].sound);
    }
    if (D_800D7F84[arg6.value].hook != 0) {
        func_8025E13C(D_800D7F84[arg6.value].hook);
    }
}
