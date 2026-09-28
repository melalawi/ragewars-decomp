/* Releases every UI resource slot whose entry is open, whose id is valid and whose retain count is zero, through func_80411B70. */
#include "basetypes.h"

struct Entry { s32 unused, flags; char rest[0x14]; };
struct Resource { s32 id; s16 retained; s16 unused; };

extern s16 D_80153C0C;
extern struct Entry *D_80153C10;
extern struct Resource *D_80153C18;
extern void func_80411B70(s32);

void func_804120B8(void) {
    s32 i;
    s32 invalid;
    s32 offset;
    struct Resource *resource;

    i = 0;
    if (D_80153C0C > 0) {
        invalid = -1;
        offset = 0;
        do {
            if (((struct Entry *)(offset + (s32)D_80153C10))->flags & 1) {
                resource = D_80153C18 + i;
                if (resource->id != invalid && resource->retained == 0) {
                    func_80411B70(i);
                }
            }
            offset += 0x1C;
        } while (++i < D_80153C0C);
    }
}
