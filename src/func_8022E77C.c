/* Places a marker in front of an actor: takes the node in *slot or allocates one from pool
   D_8013B1A8, turns the offset (0, 0, distance) into world space by the actor's facing through
   func_8024BC84, adds the actor's position and stores it as short coordinates, the height raised by
   the actor's size scaled by D_800C7F08[1], with scale D_800C7F10 and the node marked active. */
#include "basetypes.h"

typedef struct {
    f32 x, y, z;
} Vec3;

typedef struct {
    char pad0[0xC];
    f32 scale;
    s16 x;
    s16 y;
    s16 z;
    s16 active;
} Marker;

extern char D_8013B1A8;
extern f32 D_800C7F08[];
extern f32 D_800C7F10;
extern Marker *func_80268C1C(char *, s32);
extern void func_8024BC84(Vec3 *, void *, Vec3);
extern void func_80271FA4(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_8024D274(void *);

void func_8022E77C(void *actor, Marker **slot, s32 kind, f32 distance) {
    Marker *marker;
    Vec3 offset;
    Vec3 pos;

    marker = *slot;
    if (marker == 0) {
        marker = func_80268C1C(&D_8013B1A8, kind);
        if (marker == 0) {
            return;
        }
    }
    *slot = marker;
    offset.x = 0.0f;
    offset.y = 0.0f;
    offset.z = distance;
    func_8024BC84(&pos, actor, offset);
    func_80271FA4(&pos, &pos, (Vec3 *) ((char *) actor + 8));
    marker->active = 1;
    marker->x = pos.x;
    marker->y = pos.y + func_8024D274(actor) * D_800C7F08[1];
    marker->z = pos.z;
    marker->scale = D_800C7F10;
}
