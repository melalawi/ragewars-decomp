#include "common/types.h"
#include "span_1000/code_802688AC.h"
#include "types.h"
/* Damages the owner of a live actor (kind 1 with either blast bit of 0x300000 set) that is inside
   the blast: the radius is arg6 scaled by D_800C9570[1], and when the squared radius still covers
   the squared distance from the owner's position at 8 to arg1's position at 8, the remaining
   fraction of the squared radius times arg7 is applied through func_8022B11C_de. */











extern f32 D_800C4480_de[];
extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern void func_8022B11C_de(Owner_func_802688E4_de *, s32);

void func_802688E4_de(Actor_func_802688E4_de *arg0, Player *arg1, s32 arg2, Blast blast) {
    Vec3 delta;
    Owner_func_802688E4_de *owner;
    f32 range;
    f32 dist;

    if (arg0->kind == 1 && (arg0->flags & 0x300000) != 0) {
        owner = arg0->owner;
        if (owner->alive != 0) {
            range = (f32)blast.radius * D_800C4480_de[1];
            func_80271F68_de(&delta, &owner->pos, &arg1->pos);
            dist = delta.x * delta.x + delta.y * delta.y + delta.z * delta.z;
            range = range * range;
            if (range < dist) {
                return;
            }
            func_8022B11C_de(owner, (s32)(((range - dist) / range) * (f32)blast.damage) & 0xFFFF);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C43B4_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9574_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4734_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4774_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4484_4 = 10.2399998f;
#endif
