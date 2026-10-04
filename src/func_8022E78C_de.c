#include "common/types.h"
#include "span_1000/code_8022E120.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Places a marker in front of an actor: takes the node in *slot or allocates one from pool
   D_8013B1A8, turns the offset (0, 0, distance) into world space by the actor's facing through
   func_8024BC94_de, adds the actor's position and stores it as short coordinates, the height raised by
   the actor's size scaled by D_800C7F08[1], with scale D_800C7F10 and the node marked active. */





extern char D_801370E8;
extern f32 D_800C2E18_de[];

extern Marker *func_80268C1C_de(char *, s32);
extern void func_8024BC94_de(Vec3 *, void *, Vec3);
extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_8024D284_de(void *);




void func_8022E78C_de(void *actor, Marker **slot, s32 kind, f32 distance) {
    Marker *marker;
    Vec3 offset;
    Vec3 pos;

    marker = *slot;
    if (marker == 0) {
        marker = func_80268C1C_de(&D_801370E8, kind);
        if (marker == 0) {
            return;
        }
    }
    *slot = marker;
    offset.x = 0.0f;
    offset.y = 0.0f;
    offset.z = distance;
    func_8024BC94_de(&pos, actor, offset);
    func_80271F34_de(&pos, &pos, &((Player *)(actor))->pos);
    marker->active = 1;
    marker->x = pos.x;
    marker->y = pos.y + func_8024D284_de(actor) * D_800C2E18_de[1];
    marker->z = pos.z;
    marker->scale = D_800C2E20_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D4C_4 = 0.5f;
const float unbake_rodata_800C2D50_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F0C_4 = 0.5f;
const float unbake_rodata_800C7F10_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C30C0_4 = 0.5f;
const float unbake_rodata_800C30C4_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3100_4 = 0.5f;
const float unbake_rodata_800C3104_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E1C_4 = 0.5f;
const float unbake_rodata_800C2E20_4 = 1.0f;
#endif
