#include "basetypes.h"

/* Produces an object's placement: when one of its tracks has an active second node and D_800D2850 is set, it samples the track through func_80289790 and resolves the placement with func_8028994C, and otherwise copies the default placement D_800D0EE0. */

typedef struct Placement {
    s32 w[6];
} Placement;

typedef struct Node {
    s32 pad0;
    s32 active;
} Node;

typedef struct Track {
    void **nodes;
    s32 pad4[2];
} Track;

typedef struct Owner {
    char pad0[0x1504];
    s32 count;
    Track tracks[1];
} Owner;

typedef struct Sample {
    char pad0[0x28];
} Sample;

extern Placement D_800D0EE0;
extern s32 D_800D2850;
extern Node *func_8028FD94(void *table, s32 index);
extern void func_80289790(Owner *owner, s32 time, Sample *sample, s32 *segment);
extern void func_8028994C(Sample *sample, s32 segment, s32 time, Placement *out);

static inline s32 has_active(Owner *owner) {
    s32 i;

    for (i = 0; i < owner->count; i++) {
        if (func_8028FD94(*owner->tracks[i].nodes, 2)->active != 0) {
            return 1;
        }
    }
    return 0;
}

void func_8028C6B0(Owner *owner, s32 time, Placement *out) {
    Sample sample;
    s32 segment;

    if (!has_active(owner) || D_800D2850 == 0) {
        *out = D_800D0EE0;
    } else {
        func_80289790(owner, time, &sample, &segment);
        func_8028994C(&sample, segment, time, out);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CBBB4_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D0EF4_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CC884_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CD254_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CBCA4_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
