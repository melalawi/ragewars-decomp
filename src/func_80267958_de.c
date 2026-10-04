#include "common/types.h"
#include "span_1000/code_802675E0.h"
#include "span_C76B0/data.h"
#include "types.h"




























/* Spawns a hit effect when the target has a rider: turns the negated hit direction into the victim's frame through func_8022B09C_de, makes it relative to the victim rider's centre and converts it to a rotation, resolves the hit position on the attacker through func_8024E79C_de, spawns effect 0xE9 there raised by D_800C9538 (size 3 for kind 5, otherwise 1), and starts effect 3 on the victim's emitter. */












extern f32 D_800C4450_de;
extern char D_8011D8D0;
extern char D_8011BDC8;

extern void func_8022B09C_de(SharedPlayer_func_80267958_de *, Vec3 *);
extern void func_80271818_de(struct Shape_typemap_165 *, Vec3 *);
extern void func_8024E79C_de(void *, Triple, void *, s32 *, s32, s32);
extern void func_802800C0_de(void *, void *, void *, s32, s32, s32, Triple, struct Shape_typemap_165, Triple, s32, s32, s32);
extern void func_8028CE94_de(void *, void *, s32, Triple, f32, f32);

void func_80267958_de(SharedPlayer_func_80267958_de *target, Actor_func_80267958_de *actor, Triple position, Vec3 direction, s32 kind) {
    SharedPlayer_func_80267958_de *player;
    Vec3 v;
    Triple point;
    Triple zero;
    struct Shape_typemap_165 rotation;
    s32 unused;

    if (target->views5DC.view5DC_5.rider == 0) {
        return;
    }
    player = actor->player;
    v.x = -direction.x;
    v.y = direction.y;
    v.z = direction.z;
    func_8022B09C_de(player, &v);
    v.x -= player->views5DC.view5DC_5.rider->unk128.x;
    v.y -= player->views5DC.view5DC_5.rider->unk128.y;
    v.z -= player->views5DC.view5DC_5.rider->unk128.z;
    func_80271818_de(&rotation, &v);
    func_8024E79C_de(actor, position, &point, &unused, 0, 1);
    point = position;
    ((Vec3 *)&point)->y += D_800C4448_de;
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    func_802800C0_de(&D_8011D8D0, actor, actor, 0, 0, 0xE9, zero, rotation, point, 0, -1, kind == 5 ? 3 : 1);
    point.x = 0;
    point.y = 0;
    point.z = 0;
    func_8028CE94_de(&D_8011BDC8, player->views5E8.view698_37.emitter + 0x140, 3, point, *(&D_800C4448_de + 1), D_800C4450_de);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4378_4 = 12.0f;
const float unbake_rodata_800C437C_4 = 10.2399998f;
const float unbake_rodata_800C4380_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9538_4 = 12.0f;
const float unbake_rodata_800C953C_4 = 10.2399998f;
const float unbake_rodata_800C9540_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C46F8_4 = 12.0f;
const float unbake_rodata_800C46FC_4 = 10.2399998f;
const float unbake_rodata_800C4700_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4738_4 = 12.0f;
const float unbake_rodata_800C473C_4 = 10.2399998f;
const float unbake_rodata_800C4740_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4448_4 = 12.0f;
const float unbake_rodata_800C444C_4 = 10.2399998f;
const float unbake_rodata_800C4450_4 = 1.0f;
#endif
