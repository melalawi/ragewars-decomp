#include "basetypes.h"

/* Switches a view to a new current and next scene: stamps the time of a pending next scene, starts the current scene (resetting its timer for mode 2, and stamping its start and, unless flagged 0x10, its first-start time for flag 0x20), clears its flags 0x30, runs its start and update hooks and records it, then when the next scene differs starts its music at its time and records it. */

typedef struct Scene {
    s32 pad0;
    s32 flags;
    s32 options;
    s32 padC;
    s32 mode;
    char pad14[0x38 - 0x14];
    s32 music;
    s64 *time;
} Scene;

typedef struct View {
    char pad0[0x2F4];
    Scene *current;
    Scene *next;
} View;

extern s64 D_8011F290;
extern s32 D_8011F298;
extern s64 D_8011F2A0;
extern s64 D_8011F2A8;
extern s64 D_8011F2B0;
extern s32 D_800D2960;
extern s32 D_800D2964;
extern s64 func_802BFEB0(void);
extern void func_802C23E0(void);
extern void func_802BEF68(s32 *mode);
extern void func_802BF06C(s32 *mode);
extern void func_802BCC60(s32 music, s64 time);

void func_8028FA40(View *view, Scene *current, Scene *next) {
    s64 now;

    if (next != 0 && (next->options & 0x20) && !(next->flags & 0x10)) {
        D_8011F2A8 = func_802BFEB0();
    }
    if (current != 0) {
        if (current->mode == 2) {
            func_802C23E0();
            D_8011F290 = func_802BFEB0();
        } else if (current->options & 0x20) {
            now = func_802BFEB0();
            D_8011F2A0 = now;
            if (!(current->flags & 0x10)) {
                D_8011F2B0 = now;
                D_8011F298 = 0;
            }
        }
        current->flags &= ~0x30;
        func_802BEF68(&current->mode);
        func_802BF06C(&current->mode);
        view->current = current;
        if (current == next) {
            view->next = next;
        }
    }
    if (next != 0 && next != current) {
        func_802BCC60(next->music, *next->time);
        D_800D2960 = 1;
        D_800D2964 = 0;
        view->next = next;
    }
}
