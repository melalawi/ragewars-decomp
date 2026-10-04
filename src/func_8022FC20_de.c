#include "span_1000/code_8022B500.h"
#include "span_1000/code_8022F054.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 func_80214178_de(void *, void *, s32);




extern WeaponActionRecord D_800C9698[];
extern void *D_800CB2EC[];
extern f32 D_800CD738;








void func_8022FC20_de(void *arg0, void *arg1) {
    void *actor;
    s16 index;
    s32 value;
    f32 old_delta;
    f32 scaled_delta;
    f32 zero;
    f32 timer;
    void *callback_owner;
    void (*callback)(void *, void *);

    actor = ((ObjectLinks1DC_2 *)(arg0))->unk_1D8;
    index = ((ObjectState1230 *)(actor))->unk_650;
    value = D_800C9698[index].action;

    if (0.0f < ((ObjectState1230 *)(actor))->unk_11D8) {
        return;
    }

    old_delta = D_800CD738;
    scaled_delta = old_delta * D_800C2E90_de;
    if (actor != 0 && (((ObjectState1230 *)(actor))->unk_122C & 0x2000)) {
        D_800CD738 = scaled_delta;
    } else {
        D_800CD738 = old_delta;
    }

    timer = ((ObjectLinks14C *)(arg1))->unk_148;
    zero = 0.0f;
    if (zero < timer) {
        ((ObjectLinks14C *)(arg1))->unk_148 = timer - D_800CD738;
        ((ObjectLinks1DC_2 *)(arg0))->unk_1 = 0;
    } else {
        ((ObjectLinks1DC_2 *)(arg0))->unk_1 = 0;
    }

    if (zero < ((ObjectLinks14C *)(arg1))->unk_130) {
        ((ObjectLinks14C *)(arg1))->unk_130 -= D_800CD738;
    }

    if (value == 1) {
        func_80214178_de(arg0, arg1, 1);
    }
    if (((ObjectState1230 *)(actor))->unk_770 != ((ObjectState1230 *)(actor))->unk_62E) {
        ((ObjectState1230 *)(actor))->unk_7E8 = 0;
        func_80214178_de(arg0, arg1, 1);
    }

    callback_owner = ((ObjectLinks14C *)(arg1))->callback_owner;
    if (callback_owner != 0) {
        callback = ((struct Hook *) ((char *) callback_owner))->fn;
        if (callback != 0) {
            callback(arg0, arg1);
        }
    }

    callback = ((struct CallbackState60 *) ((char *) D_800CB2EC[((ObjectState1230 *) actor)->unk_62E]))->callback;
    if (callback != 0) {
        callback(arg0, arg1);
    }
    func_8022BC14_de(actor);
    D_800CD738 = old_delta;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2DC0_4 = 0.25f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7F80_4 = 0.25f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3140_4 = 0.25f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3180_4 = 0.25f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2E90_4 = 0.25f;
#endif
