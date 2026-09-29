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
