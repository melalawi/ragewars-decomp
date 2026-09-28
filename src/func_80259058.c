/* Picks a weighted random entry from the range func_80265570 finds for an id in a scene's table: -1 when
 * the scene has no table or no range, the single entry when the range has one; otherwise each entry weighs
 * ten times its table value, a random draw selects one, and when avoidance is requested and it equals the
 * scene's last pick at 0x130 it steps to the next entry (or back from the last). Adapted from
 * func_8025D258 with the table weights and the stored last pick. */
#include "basetypes.h"

typedef struct {
    char pad0[0x130];
    s32 lastPick;
    char pad134[0x2B54 - 0x134];
    s32 count;
    s32 ids;
    s32 *weights;
} Scene;

extern s32 func_80265570(s32, s32, s32, s32 *, s32 *);
extern s32 func_80274544(void);

s32 func_80259058(Scene *scene, s16 id, s16 avoid) {
    s32 first;
    s32 last;
    s32 total;
    s32 entry;
    s32 draw;
    s32 i;

    total = 0;
    if (scene->count != 0) {
        if (func_80265570(scene->ids, scene->count, id, &first, &last) == 0) {
            return -1;
        }
        entry = first;
        if (entry != last) {
            for (i = first; i <= last; i++) {
                total += scene->weights[i] * 10;
            }
            draw = func_80274544() % total;
            total = 0;
            for (entry = first; entry < last; entry++) {
                total += scene->weights[entry] * 10;
                if (total >= draw) {
                        break;
                }
            }
            if (avoid != 0 && entry == scene->lastPick) {
                if (entry == last) {
                        entry--;
                } else {
                        entry++;
                }
            }
        }
        return entry;
    }
    return -1;
}
