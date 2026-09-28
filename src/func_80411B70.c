/* Releases UI resource slot i once its retain count reaches zero, closing its open entry and clearing the slot id. */
#include "basetypes.h"

struct Entry { s32 handle; s32 flags; char rest[0x14]; };
struct Resource { s32 id; s16 retained; s16 unused; };

extern struct Entry *D_80153C10;
extern struct Resource *D_80153C18;
extern void func_804196A4(s32);

void func_80411B70(s32 i) {
    struct Resource *resource;

    resource = (struct Resource *)(i * 8 + (s32)D_80153C18);
    if (resource->id != -1) {
        if (resource->retained > 0) {
            resource->retained--;
        } else {
            if (D_80153C10[i].flags & 1) {
                func_804196A4(D_80153C10[i].handle);
                D_80153C10[i].flags &= ~1;
            }
            D_80153C18[i].id = 0;
        }
    }
}
