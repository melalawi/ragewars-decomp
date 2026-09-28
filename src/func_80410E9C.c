/* Advances the deferred-release timers: for each of the D_80153C0C slots (all reset first when mode
   is 1) whose owner is not -1, counts the delay down, and once it has run out releases the slot's
   loaded resource data through func_804196A4, clearing its loaded flag, and clears the owner. */
#include "basetypes.h"

typedef struct {
    s32 owner;
    s16 delay;
} Timer;

typedef struct {
    void *data;
    s32 flags;
    char pad8[0x14];
} Resource;

typedef struct {
    s16 count;
    Resource *resources;
    s32 unk8;
    Timer *timers;
} Pool;

extern Pool D_80153C0C;

extern void func_804196A4(void *data);

void func_80410E9C(s32 mode) {
    s32 i;

    for (i = 0; i < D_80153C0C.count; i++) {
        if (mode == 1) {
            D_80153C0C.timers[i].delay = 0;
            D_80153C0C.timers[i].owner = 0;
        }
        if (D_80153C0C.timers[i].owner != -1) {
            if (D_80153C0C.timers[i].delay > 0) {
                D_80153C0C.timers[i].delay--;
            } else {
                if (D_80153C0C.resources[i].flags & 1) {
                    func_804196A4(D_80153C0C.resources[i].data);
                    D_80153C0C.resources[i].flags &= ~1;
                }
                D_80153C0C.timers[i].owner = 0;
            }
        }
    }
}
