#include "basetypes.h"

/* Starts the effect at offset 0x740 of an object through func_802748E0 at half intensity, with a
   level taken from the owner at offset 0x18 scaled by D_800C7A38[0], or D_800C7A38[1] without an
   owner. */
struct Owner {
    char pad[0xF4];
    f32 level;
};

struct Object {
    char pad[0x18];
    struct Owner *owner;
};

extern f32 D_800C7A38[];
extern void func_802748E0(void *, f32, f32);

typedef struct func_80224028_S1 func_80224028_S1;
struct func_80224028_S1 {
    char pad0[0x740];
    char unk740;
};

void func_80224028(struct Object *object) {
    f32 level;

    if (object->owner != 0) {
        level = object->owner->level * D_800C7A38[0];
    } else {
        level = D_800C7A38[1];
    }
    func_802748E0(&((func_80224028_S1 *)(object))->unk740, level, 0.5f);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2878_4 = 0.899999976f;
const float unbake_rodata_800C287C_4 = 82.9439926f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7A38_4 = 0.899999976f;
const float unbake_rodata_800C7A3C_4 = 82.9439926f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2BE8_4 = 0.899999976f;
const float unbake_rodata_800C2BEC_4 = 82.9439926f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2C28_4 = 0.899999976f;
const float unbake_rodata_800C2C2C_4 = 82.9439926f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2948_4 = 0.899999976f;
const float unbake_rodata_800C294C_4 = 82.9439926f;
#endif
