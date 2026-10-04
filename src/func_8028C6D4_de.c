#include "common/types.h"
#include "span_1000/code_8028B64C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

/* Produces an object's placement: when one of its tracks has an active second node and D_800D2850 is set, it samples the track through func_802897B4_de and resolves the placement with func_80289970_de, and otherwise copies the default placement D_800D0EE0. */











extern Block24 D_800CBC90;

extern struct Shape_func_802764D4_de_2 *func_8028FDB4_de(void *table, s32 index);
extern void func_802897B4_de(Owner_func_8028C6D4_de *owner, s32 time, Sample *sample, s32 *segment);
extern void func_80289970_de(Sample *sample, s32 segment, s32 time, Block24 *out);

static inline s32 has_active(Owner_func_8028C6D4_de *owner) {
    s32 i;

    for (i = 0; i < owner->count; i++) {
        if (func_8028FDB4_de(*owner->tracks[i].nodes, 2)->field_4 != 0) {
            return 1;
        }
    }
    return 0;
}

void func_8028C6D4_de(Owner_func_8028C6D4_de *owner, s32 time, Block24 *out) {
    Sample sample;
    s32 segment;

    if (!has_active(owner) || D_800CD600 == 0) {
        *out = D_800CBC90;
    } else {
        func_802897B4_de(owner, time, &sample, &segment);
        func_80289970_de(&sample, segment, time, out);
    }
}
