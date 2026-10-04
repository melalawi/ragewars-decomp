#include "common/types.h"
#include "span_1000/code_80259014.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Fades emitter 0x8AC with the listener's distance: optionally resets its level, stores the squared
 * distance to the listener, lowers the level by a step while the distance grows and raises it while it
 * shrinks (clamped to the D_800C9048 range, remembering the distance), and otherwise eases the level one
 * step toward the rest level D_800C9044. */














void func_8025AA2C_de(Emitter *emitter) {
    char *listener;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 distance;
    f32 level;
    f32 current;

    if (emitter->id != 0x8AC) {
        return;
    }
    if (emitter->reset != 0) {
        emitter->level = D_800C3F50_de;
    }
    listener = ((func_8025AA4C_S1 *)(emitter->scene))->unk2B98;
    dx = emitter->x - ((func_8025AA4C_S2 *)(listener))->unk128;
    dy = emitter->y - ((func_8025AA4C_S2 *)(listener))->unk12C;
    dz = emitter->z - ((func_8025AA4C_S2 *)(listener))->unk130;
    distance = dx * dx + dy * dy + dz * dz;
    emitter->distance = distance;
    if (emitter->lastDistance < distance) {
        emitter->level -= (0.0035000001080334187f);
    } else if (distance < emitter->lastDistance) {
        emitter->level += (0.0035000001080334187f);
    } else {
        current = emitter->level;
        if (D_800C3F54_de < current) {
            level = current - (0.0035000001080334187f);
            if (level < D_800C3F54_de) {
                level = D_800C3F54_de;
            }
            emitter->level = level;
        } else if (current < D_800C3F54_de) {
            level = current + (0.0035000001080334187f);
            if (D_800C3F54_de < level) {
                level = D_800C3F54_de;
            }
            emitter->level = level;
        }
        return;
    }
    level = emitter->level;
    if (D_800C3F58_de < level) {
        emitter->level = D_800C3F58_de;
    } else if (level < ((func_802077F4_S2 *)(&D_800C3F58_de))->unk4) {
        emitter->level = ((func_802077F4_S2 *)(&D_800C3F58_de))->unk4;
    }
    emitter->lastDistance = emitter->distance;
}
